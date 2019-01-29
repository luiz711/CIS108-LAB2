
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string title , author;
	int publish_y , p_numbers;
	constexpr int c_year = 2019;

	cout << "Enter Book Title:";
	getline(cin, title);

	cout << "Name Of Author:";
	getline(cin, author);
	
	cout << "Enter publish year:";
	cin >> publish_y;

	cout << "Enter the total number of pages:";
	cin >> p_numbers;
	
	int book_age = c_year - publish_y;
    if (book_age < 10)
	cout << "This Book is younger than 10 years old!";
	else 
    cout<< "This Book is at least 10 years old!";
	if (p_numbers < 100)
		cout << "This book is a short book!";
	else if (p_numbers >= 100 && p_numbers <= 300)
		cout << "This book is average book";
	else
		cout << "This book is a long book";




}

