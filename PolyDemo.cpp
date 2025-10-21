#include "PolyDemo.h"
#include "Dog.h"
#include "Poodle.h"
#include "Rottweiler.h"

void PolyDemo::DoDemo()
{
	Dog myDog;
	Poodle myPoodle;
	Rottweiler myRottweiler;

	cout << "Polymorphism and Inheritance Practical - Week 4" << "\n";
	//myDog.Bark();
	myPoodle.Bark();
	myRottweiler.Bark();

};
