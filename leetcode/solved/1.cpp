/*****************************************
Two Sum

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*****************************************/

/*
Original Solution
Completed: 2/20
Duration: ~5 minutes
Runtime: O(N^2)
*/


vector<int> twoSum(vector<int>& nums, int target) {
  vector<int> res;
  for(int i = 0; i < nums.size(); i++){
    for(int j = i + 1; j < nums.size(); j++){
      if(nums[i] + nums[j] == target){
        res.push_back(i);
        res.push_back(j);
        return res;
      }
    }
  }
  return res;
}

/*
Optimized Solution:
Runtime: O(N)
found on leetcode
*/

int numJewelsInStones(string J, string S) {
  unordered_map<int, int> hash;
	vector<int> result;
	for (int i = 0; i < numbers.size(); i++) {
		int numberToFind = target - numbers[i];

    //if numberToFind is found in map, return them
		if (hash.find(numberToFind) != hash.end()) {
                    //+1 because indices are NOT zero based
			result.push_back(hash[numberToFind] + 1);
			result.push_back(i + 1);
			return result;
		}

    //number was not found. Put it in the map.
		hash[numbers[i]] = i;
	}
	return result;
}
