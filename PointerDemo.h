#pragma once
#include <iostream>
class PointerDemo
{
	public:
		void DoDemo();
private:
		void PassByValueDemo(); //nothing
		void PassByRefDemo(); //&
		void UsePointersDemo(); //* pointer
		void MemLeakDemo();
		
};

