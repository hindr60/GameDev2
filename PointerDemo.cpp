#include "PointerDemo.h"
#include <windows.h>
#include <iostream>
#include <Psapi.h> //gives access to the process status api functions

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
void PointerDemo::GetMemoryUsage() { //allows for the memory amount to be printed to the console
	PROCESS_MEMORY_COUNTERS_EX pmc; //this is a structure that stores memory for statistical purposes
	GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(pmc));
	/*get process memory info is a windows function declared in psapi.h. 
	get current process returns a HANDLE which is an identifier for my current program.
	then process memory counters brings in the address of the pmc variable to the type the function expects.
	size of pmc tells the function how large the memory is in bytes*/
	cout << "Current memory usage: " << pmc.WorkingSetSize / 1024 << "KB/n" << endl;
	//for easy reading, this converts the bytes to kilobytes and prints out the memory used when this function is casted.
}

void PointerDemo::MemLeakDemo()
{
	GetMemoryUsage(); //casts the memory reading function and displays it on the console.

	int* pointer = new int;
	*pointer = 2025;
	cout << *pointer << " is the number that I have allocated!" << endl;
	GetMemoryUsage();

	delete[] pointer; //simple cleanup method and internally frees memory to be used again
	cout << "The integer is no longer allocated!" << endl;
	GetMemoryUsage(); 
	//the memory value does not drop since the system "stores" the memory to be reused.
	cout << endl;
}
