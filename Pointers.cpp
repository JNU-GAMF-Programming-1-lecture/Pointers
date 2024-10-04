/*
 * Pointers.cpp
 * 
 * Creation and usage of pointers.
*/
#include <iostream>

using namespace std;

int main()
{
	int* p;
	int* q = NULL;
	int a = 3;
	p = &a;
	int* r = &a;
	cout << "a= " << a << endl;
	cout << "p= " << p << "\t" << "*p=" << *p << endl;
	cout << "q= " << q <<  endl;
	cout << "r= " << r << "\t" << "*r=" << *r << endl;

	*p = 5;
	cout << "a= " << a << endl;
	cout << "*p=" << *p << endl;
	cout << "*r=" << *r << endl;

	cout << "size of p: " << sizeof(p) << " bytes" << endl;
	cout << "size of a: " << sizeof(a) << " bytes" << endl;
	double* t;
	bool* b=nullptr;
	cout << "size of t: " << sizeof(t) << " bytes" << endl;
	cout << "size of b: " << sizeof(b) << " bytes" << endl;
	return 0;
}