/***************************************************
 Programmer: Dillon Hendrix
 Discription: Kattis problem that takes in an array of numbers then rearranges
them into left most largest number and then output the amount of numbers it
takes the reach the leftmost largest number and the numbers that it takes reach
the leftmost largest number. Date: 10/30/22
***************************************************/

#include <iomanip>
#include <iostream>

using namespace std;
/************** Function Prototype ****************/
void fillArray(int list[], int listSize);
int indexSort(const int generic[], int listSize);

int main() {
  // initialize varriables
  int arraysize = 0;
  // int number = 0;
  cout << "Enter array size: "; // comment out for kattis
  cin >> arraysize;
  cout << endl;
  // Create an array
  int GIS[arraysize];
  // int finalMax[number];

  // cin an array size and fill the array
  fillArray(GIS, arraysize);
  indexSort(GIS, arraysize);
}

/************** Functions *******************/

void fillArray(int list[], int listSize) {

  cout << "Enter " << listSize << " integers: "; // comment out for kattis

  for (int index = 0; index < listSize; index++) {
    cin >> list[index];
  }
  return;
}

int indexSort(const int generic[], int listSize) {
  int maxIndex = 0;
  int number = 0;
  int finalMax[number];
  int column = 0;
  int newArraySize;
  int newArray;
  // cout << maxIndex << endl;
  for (int index = 0; index < listSize; index++) {

    if (maxIndex < generic[index]) {
      number++;
      maxIndex = generic[index];
      //cout << finalMax[index] << endl;
      finalMax[number] = maxIndex;
      newArraySize = number;
      newArray = finalMax[index];
      //cout << "Array size is " << newArraySize << " maxIndex is " << maxIndex << endl;
      cout << maxIndex << " "; 
    }
  }
  
  cout << endl << newArraySize << endl;
  return maxIndex;
}