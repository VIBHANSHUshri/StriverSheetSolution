#include <bits/stdc++.h>
using namespace std;

//simple approach by traversing every number
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int number = 1;
        int i = 0;
        int count = 0;
        while (true) {
            if (i < arr.size() && arr[i] == number) {
                number++;
                i++;
            } else {
                count++;
                if (count == k) {
                    return number;
                }
                number++;
            }
        }
       return number;
    }
};

//binary search approach becoz question saying to reduce its time complexity to lesser than 0(n)
int missingK(vector<int>arr, int k) {
    int n= arr.size();
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int missing = arr[mid] - (mid + 1);
        if (missing < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return k + high + 1;
}

