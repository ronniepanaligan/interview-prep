/*****************************************
Single Number

Given an array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
*****************************************/

/*
Original Solution
Completed: 2/28
Duration: ~5 minutes
Runtime: O(N)
*/

int singleNumber(vector<int>& nums) {
  unordered_map<int> mp;
  for(int num : nums){
    if(mp[num] > 0)
      mp[num]--;
    else
      mp[num]++;
  }
  for(int n : nums){
    if(mp[n] > 0)
      return n;
  }
  return -1;
}
