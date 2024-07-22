//1011 . Capacity to Ship Package within D days
 //Brute force approach

#include <bits/stdc++.h>
using namespace std;
 class Solution {
public:
    int shipWithinDays(vector<int>& arr, int days) {
         //BASIC APPROACH
         int sum = 0;
         int maxi = INT_MIN;
         for(int i = 0 ; i < arr.size() ; i++)
         {
            sum = sum + arr[i];
            maxi = max(arr[i] , maxi);
         }
         
         for(int i = maxi ;i <= sum ; i++ )
         {   
               int total = 0;
               int count = 1;
        
            for(int j = 0 ; j < arr.size() ; j++)
            {
                 if(total + arr[j] > i)
                 {
                    //capactiy full
                    count++;
                    total = arr[j];
                 } 
                 else{
                       total = total + arr[j];
                 }
            }
            if (count <= days) {
                return i;
            }
          
         }
       return -1;
                   
    }
};


//Binary search approach
class Solution {
public:
    int shipWithinDays(vector<int>& arr, int days) {
         //BASIC APPROACH
         int sum = 0;
         int maxi = INT_MIN;
         for(int i = 0 ; i < arr.size() ; i++)
         {
            sum = sum + arr[i];
            maxi = max(arr[i] , maxi);
         }
         int low = maxi;
         int high = sum;

         while(low <= high)
         {
             int mid = (low + high) / 2;
               int total = 0;
               int count = 1;
        
            for(int j = 0 ; j < arr.size() ; j++)
            {
                 if(total + arr[j] > mid)
                 {
                    //capactiy full
                    count++;
                    total = arr[j];
                 } 
                 else{
                       total = total + arr[j];
                 }
            }
            if (count <= days) {
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
          
         }
       return low;
                   
    }
};