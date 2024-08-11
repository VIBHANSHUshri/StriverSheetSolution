// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         if (!head || !head->next || k == 0) {
//             return head;
//         }
        
//         // Count the number of nodes in the list
//         int cnt = 1;
//         ListNode* temp = head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//             cnt++;
//         }

//         // Connect the last node to the head to form a circular list
//         temp->next = head;

//         // Find the new head after the rotation
//         k = k % cnt;
//         int n = cnt - k;

//         // Move `temp` to the new tail (node before the new head)
//         for (int i = 0; i < n; i++) {
//             temp = temp->next;
//         }

//         // Break the circular list to form the final rotated list
//         head = temp->next;
//         temp->next = NULL;

//         return head;
//     }
// };
