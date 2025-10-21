#include "PointerDemo.h"

using namespace std;
//replaces std::



void PointerDemo::DoDemo()
{
	int firstNum = 2020;
	int secondNum = 2025;
	cout << "The incorrect year is: " << "\n";
	cout << firstNum << "\n";
	PassByRefDemo(firstNum, secondNum);
	cout << "The correct year is: " << "\n";
	cout << firstNum << "\n";

	PassByValueDemo();



	UsePointersDemo();
	MemLeakDemo();


}
void PointerDemo::PassByValueDemo()
{

}
void PointerDemo::PassByRefDemo(int &firstNum, int &secondNum)
{
	int temp = firstNum;
	firstNum = secondNum;
	secondNum = temp;
		

}
void PointerDemo::UsePointersDemo()
{

}
void PointerDemo::MemLeakDemo()
{

}
