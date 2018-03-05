/*****************************************
Fizz Buzz

Write a program that outputs the string representation of numbers from 1 to n.

But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.
*****************************************/

/*
Original Solution
Completed: 3/4
Duration: ~5 minutes
Runtime: O(N)
*/

vector<string> fizzBuzz(int n) {
  vector<string> ret(n);
  for (int i = 1; i<=n; ++i) {
    if(i%3 == 0) {
      ret[i-1] += "Fizz";
    }
    if(i%5 == 0) {
      ret[i-1] += "Buzz";
    }
    if(ret[i-1].empth()) {
      ret[i-1] += to_string(i);
    }
  }
  return ret;
}
