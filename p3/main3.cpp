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
int indexLargestElement(const int generic[], int listSize);

int main() {
  // initialize varriables 
  int arraysize = 0;
  //int number = 0;
  cout << "Enter array size: "; // comment out for kattis
  cin >> arraysize;
  cout << endl; 
  // Create an array
  int GIS[arraysize];
  //int finalMax[number];
  
  // cin an array size and fill the array 
  fillArray(GIS, arraysize);
  indexLargestElement(GIS, arraysize);
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


int indexLargestElement(const int generic[], int listSize) {
  int maxIndex = 0; 
  int number = 4;
  int finalMax[number];
  int column = 0;
  //cout << maxIndex << endl;
  for (int index = 0; index < listSize; index++) {
    
    if (maxIndex < generic[index]){
      number ++;
      maxIndex = generic[index];
     // }
    //else if (maxIndex > generic[index])
      for (int i = 0; i < listSize; i++){
      finalMax[i] = maxIndex;
      //column ++;
      cout << finalMax[i] << endl;
      //cout << i << endl;
      }
    //cout << index << endl;
  }
  //cout << finalMax[number] << endl;
}
  return maxIndex;
  }