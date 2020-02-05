#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Student
{
public:
	Student();
	Student(int, string, int);	//student id, student name, number of courses taking
	void addCourse(string, int);	//course name, course index
	void printCourse();		//print to a txt file
private:
	int courseSize;
	string name;
	int id;
	string *courses;	//dynamic array
};

Student::Student()
{
	courseSize = 0;
	name = "blank";
	id = 0;
	courses = NULL;
}

Student::Student(int x, string n, int s) {
	id = x; 
	name = n;
	courseSize = s;

	courses = new string[courseSize]; //Symbol only when we declare 
}

void Student::addCourse(string c, int i)
{
	// TODO: assign course name ‘c’ to the ‘i’th location of the array.
	//Add a certain course to the dynamic array courses

	courses[i] = c;

}void Student::printCourse()
{
	// TODO: output to the file
	// output the student’s courses into a txt file, where the file name should be the
	// format as “John_courses.txt”.

	ofstream myFile; 
	myFile.open("John_courses.txt"); //Open the test file we want our info inside of

	for (int o = 0; o < courseSize; o++)
	{
		myFile << courses[o] << endl;		// Loops and stores class names into dynamic array
	}

	myFile.close();

}



