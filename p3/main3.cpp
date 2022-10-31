/***************************************************
  Programmer: Dillon Hendrix
  Discription: Kattis problem that takes in an array of numbers then rearranges them into left most largest number and then output the amount of numbers it takes the reach the leftmost largest number and the numbers that it takes reach the leftmost largest number. 
  Date: 10/30/22
***************************************************/

#include <iostream>
#include <iomanip>

using namespace std;
/************** Function Prototype ****************/
void fillArray(int list[], int listSize); 

int main() {
  // initialize varriables 
  int arraysize = 0;
  cout << "Enter array size: "; // comment out for kattis
  cin >> arraysize;
  cout << endl; 
  // Create an array
  int GIS[arraysize];
  
  // cin an array size and fill the array 
  fillArray(GIS, arraysize);

  // Create a function that finds smallest to largest input but only outputs left most largest value increments and reads the amount of indexes taken to get to the left most largest value. This info then needs to be output into a new array the size of the indexes taken and the inputs required to get to the largest value. 
  
}

/************** Functions *******************/

void fillArray(int list[], int listSize) {

  cout << "Enter " << listSize << " integers: "; // comment out for kattis

  int index;

  for (index = 0; index < listSize; index++) {
    cin >> list[index];
  }

  return;
}