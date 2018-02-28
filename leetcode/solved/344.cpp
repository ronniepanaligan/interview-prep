/*****************************************
Reverse string

Write a function that takes a string as input and returns the string reversed.

Example:
Given s = "hello", return "olleh".

*****************************************/

/*
Original Solution
Completed: 2/27
Duration: ~5 minutes
Runtime: O(N)
*/

string reverseString(string s) {
  int i = 0,j = s.size() - 1;
  while(i < j){
    swap(s[i], s[j]);
    i++;
    j--;
  }
  return s;
}
