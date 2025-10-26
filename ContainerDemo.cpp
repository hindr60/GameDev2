#include "ContainerDemo.h"

using namespace std;

void ContainerDemo::DoDemo() {
	cout << "\n" << "Containers Demo - Week 3" << endl;
	cout << "Arrays:" << endl;
	ArrayDemo();
	cout << "\n" << "Lists:" << endl;
	ListDemo();
	cout << "\n" << "Maps:" << endl;
	MapDemo();
}

void ContainerDemo::ArrayDemo()
{
	vector<string> dogs = { "Poodle", "Rottweiler", "Cavoodle" };
	/*for (string dog : dogs) {
		cout << dog << endl;
	}*/

	cout << dogs[0] << "s are my favourite breed of dogs!" << endl;
	cout << dogs[1] << "s are a scary breed of dogs." << endl;
	cout << dogs[2] << "s are a mix of a " << dogs[0];
	dogs[2] = "Caviel King Charles Spanial";
	cout << " and a " << dogs[2] << "!" << endl;
}

void ContainerDemo::ListDemo()
{
	list<int> years = { 2020, 2021, 2022, 2023 };
	for (int year : years) {
		cout << year << endl;
	}
	years.front() = 2024;
	years.back() = 2026;
	cout << "I have changed the list value from 2020 to " << years.front() << " and 2023 to " << years.back() << "." << endl;
	cout << "I have a total of " << years.size() << " numbers in my list." << endl;
	
}

void ContainerDemo::MapDemo()
{
	map<string, int> cars = { {"Toyota", 2025}, {"Mercedes", 2020}, {"Porsche", 2026} };
	cout << "I have a total of " << cars.size() << " cars in my garage." << endl;
	cars.insert({ "Mclaren", 2019 });
	cout << "I have also parked my " << cars["Mclaren"] << " Mclaren car into my garage." << endl;
	cout << "I now have a total of " << cars.size() << " cars parked in my garage." << endl;

}
