// name_and_age.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../std_lib_facilities.h"


int main()
{
	cout << "Please enter your first name and in years age\n";
	string first_name = "???";
	double age = -1.0;
	int months = 0;
	cin >> first_name >> age;
	months = age * 12;
	cout << "Hello, " << first_name << " (you are " << months << " months old)\n";
	keep_window_open();

	return 0;
}

