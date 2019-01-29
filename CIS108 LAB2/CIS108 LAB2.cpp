

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	int age;
	cout<< "Please enter you age:";
	cin >> age;

	int ten;
	ten = age + 10;
	cout << "In 10 years you will be" << ten << endl;

	int temp;
	cout << "Please Enter The Current Temperature in Fehrenheit:";
	cin >> temp;

	int c_temp;
	c_temp = (temp - 32) * 5 / 9;
	cout << "The Current temperaturein celsius is:" << c_temp;
	return 0;

}
