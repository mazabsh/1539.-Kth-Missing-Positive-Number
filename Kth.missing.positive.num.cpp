#include<iostream>
#include<vector> 

using namespace std; 

class Solution{
public: 
      int findKPositive(vector<int>& arr, int k){
        int n = arr.size(); 
        int l =0; 
        int r = n-1; 
        while(l<=r){
          int mid = l-(r-l)/2; 
          if(arr[mid]-mid-1<k) l = mid+1; 
          else r = mid-1; 
        }
        return l+k; 
      }
};
int main(){
  vector<int> nums = {2,3,4,7,11}; 
  int k = 9; 
  Solution sol; 
  cout << sol.findKPositive(nums, k) <<endl; 
  return 0; 
}
