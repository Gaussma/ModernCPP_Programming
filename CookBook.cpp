// CookBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "recipe_1_01.h"


using namespace std;

class base {
public:
	virtual void print() {
		cout << "print base class" << endl;
	 }
	void show() {
		cout << "show base class" << endl; 
	}
};

class derived : public base {
public :
	void print() {
		cout << "print derived class" << endl;
	}
	void show() {
		cout << " show derived class" << endl;
	}
};

int main()
{
    std::cout << "Hello World!\n"; 

	base *bptr;
	derived d;
	bptr = &d;
	//virtual function;
	bptr->print();
	//non virtual function. 
	bptr->show();


	recipe_1_01::execute();


	cout << "success" << endl; 
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
