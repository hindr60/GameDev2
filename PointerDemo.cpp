#include "PointerDemo.h"
#include <windows.h>
#include <iostream>

using namespace std;
//replaces std::

void PointerDemo::DoDemo()
{
	system("Color E4"); //background and text colour
	cout << "Memory Management Practical - Week 2" << "\n" << "Pass by Reference Demo: " << "\n";
	int firstNum = 2020;
	int secondNum = 2025;
	cout << "The incorrect year is: ";
	cout << firstNum << "\n";
	PassByRefDemo(firstNum, secondNum);
	cout << "The correct year is: ";
	cout << firstNum << "\n" << "\n";

	cout << "Pass by Value Demo: " << "\n";
	int apple = 1; //adds another value to work with
	cout << "I have a total apple amount of " << apple << endl;
	PassByValueDemo(secondNum, apple);
	

	cout << "Using Pointers Demo: " << "\n";
	int day = 12;
	int day2 = 21;
	UsePointersDemo(day, day2);
	
	cout << "Memory Leak Demo " << "\n";
	//int* pointer = new int; //allocates memory constantly without storing the pointer
	cout << "I haven't been given a delete statement, help!" << endl;

	MemLeakDemo();

}
void PointerDemo::PassByValueDemo(int &secondNum, int &apple)
{
	//introduces the original value
	cout << "I have picked another apple of " << apple << " from the tree." << endl;
	secondNum = 2; //changes the original value
	cout << "I now have a total apple amount of " << secondNum << endl << endl; 
	//implements it into the sentence

}
void PointerDemo::PassByRefDemo(int &firstNum, int &secondNum) //telling the passbyrefdemo to refer to the do demo to grab the numbers.
{
	int temp = firstNum;
	//this introduces a temporary number to be used as the third number, without this we cannot swap the integers.
	firstNum = secondNum;
	secondNum = temp;
	//these two swap the numbers

}
void PointerDemo::UsePointersDemo(int day, int day2)
{
	int* pointer = &day; //this points to the first day value
	cout << "Azra's birthday falls on April " << *pointer << endl;
	//prints the first day value on the console

	pointer = &day2; //this changes the pointer value to the second day value.
	cout << "Tom's birthday falls on December " << *pointer << endl << endl;
	//prints the second day value on the console


}
void PointerDemo::MemLeakDemo()
{
	while (true) {
		new int;


		int s;
		cout << "Enter 1 to stop the memory leak.";
		cin >> s;
		if (cin >> s) {
			break;
			cout << "My unused memory has been deleted! Yay!" << endl;
	}
	
	}
	
}
