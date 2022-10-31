/***************************************************
  Programmer: Dillon Hendrix
  Discription: Exercises 10.3 exercise 1. Replace the while loop with a for loop in 10.9 code example.  
  Date: 10/30/22
***************************************************/

#include <iostream>

using namespace std;

int main(){
  const int NUMS = 5;

  int nums[NUMS] = {16, 54, 7, 43, -5};
  int total = 0, *nPt;

  nPt = nums;  // Store address of nums[0] in nPt
  while (nPt < nums + NUMS)
    total += *nPt++;

  //for (nPt = nums; nPt < nums + NUMS + 1; total += *nPt++)

  cout << "The total of the array elements is " << total << endl;

  return 0;
}