#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* previous;

    // Constructor with parameters
    Node(int data, Node* next, Node* previous) {
        this->data = data;
        this->next = next;
        this->previous = previous;
    }

    // Constructor with only data parameter
    Node(int data) {
        this->data = data;
        this->next = nullptr;
        this->previous = nullptr;
    }
};

// Function to print the list
void print(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int arr[4] = {1, 2, 3, 4};

    // Create the head node
    Node* Head = new Node(arr[0]);
    Node* temp = Head;
    Node * prev = Head;
 

    // Create the rest of the linked list
    for (int i = 1; i < 4; i++) {  // Changed arr.size() to 4
        temp->next = new Node(arr[i]);
        temp -> next -> previous = temp;
        temp = temp->next;
    }

    // Print the linked list
    print(Head);

    return 0;
}
