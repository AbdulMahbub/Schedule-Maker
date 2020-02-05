//==========================================================
//
// Title:      Course Adder
// Course:     CSC 2111
// Lab Number: 09
// Author:     Abdul Mahbub
// Date:       10/04/2019
// Description:
//
// Uses class pointers to add courses to a text file
//
//==========================================================

#include "student.h"   //Put before all the other include statements
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"


int main()
{

  // Declare variables
  //int i; 
  //double r;
  //string s;
  //char c;

  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;

  // Read from console
  Student myStu(4321, "Jimmy", 10);

  myStu.addCourse("Calculus", 0);
  myStu.addCourse("English", 1);
  myStu.addCourse("Discreet Math", 2);
  myStu.addCourse("American Government", 3);
  myStu.addCourse("Sculpting", 4);
  myStu.addCourse("Guitar", 5);			// ADD COURSES
  myStu.addCourse("Chemistry", 6);
  myStu.addCourse("Anthropology", 7);
  myStu.addCourse("Philosophy", 8);
  myStu.addCourse("Physics 3", 9);

  myStu.printCourse();

  // Show application close
  cout << "\nEnd of my Application" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
