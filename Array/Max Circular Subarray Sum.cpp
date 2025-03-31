class Solution {
    public:
      // arr: input array
      // Function to find maximum circular subarray sum.
      int circularSubarraySum(vector<int> &arr) {
          // your code here
          int maxSum = INT_MIN;
          int minSum = INT_MAX;
          int s1=0, s2=0, totalSum=0;
          for(int i=0; i<arr.size(); i++) {
              totalSum+=arr[i];
              s1+=arr[i];
              s2+=arr[i];
              if(s1<0) s1=0;
              if(s2>0) s2=0;
              maxSum = max(maxSum,s1);
              minSum = min(minSum,s2);
          }
          return max(maxSum,totalSum-minSum);
      }
  };