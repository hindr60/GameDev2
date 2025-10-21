#pragma once
#include <iostream>
class PointerDemo
{
	public:
		void DoDemo();
private:
		void PassByValueDemo(); //nothing
		void PassByRefDemo(int &firstNum, int &secondNum); //&
		void UsePointersDemo(); //* pointer
		void MemLeakDemo();
	
		
};

