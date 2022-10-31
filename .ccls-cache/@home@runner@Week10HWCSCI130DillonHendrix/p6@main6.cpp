/***************************************************
  Programmer: Dillon Hendrix
  Discription:
  Date: 10/30/22
***************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int numRecs = 5; // max number of records

struct CarRec         // Global declaration 
{    
int CN;
int MD;
int GU;
double MPG;
};

/*************** Function Prototype *******************/
double milesperGallon(CarRec car[numRecs], int numRecs);

int main() {
  int i;
  
  cout << "Car Number   Miles Driven   Gallons Used " << endl <<
          "----------   ------------   ------------ ";
  
  CarRec car[numRecs] = {{25, 1450, 62}, {36, 3240, 136}, {44, 1792, 76}, {52, 2360, 105}, {68, 2114, 67}};

  cout << endl;

  milesperGallon(car, numRecs);
  
  cout << setiosflags(ios::left); // left-justify the output
  for (i = 0; i < numRecs; i++)
    cout << setw(13)  << car[i].CN
         << setw(15)  << car[i].MD
         << setw(15)  << car[i].GU 
         << setw(15)  << car[i].MPG << endl;

  return 0;
}

/******************* Function **********************/
double milesperGallon(CarRec generic[numRecs], int numRecs) {
  for (int i = 0; i < numRecs; i++)
  generic[i].MPG = generic[i].MD / generic[i].GU;

  return 0;
  }