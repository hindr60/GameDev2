#pragma once
#include <iostream>
class PointerDemo
{
	public:
		void DoDemo();
private:
		void PassByValueDemo(int &secondNum, int &apple); //nothing
		void PassByRefDemo(int &firstNum, int &secondNum); //&
		void UsePointersDemo(int day, int day2); //* pointer
		void MemLeakDemo();
		void GetMemoryUsage();
	
		
};

