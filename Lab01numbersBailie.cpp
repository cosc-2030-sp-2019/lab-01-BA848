//Lab01.cpp
//Bailie Allemand
//COSC II
//reading numbers from a file 
//help from Connor Kasarda
//02.04.2019

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	string file;
	double num;
	double first; 
	double penultimate;
	double last;
	int count = 3;
	
	ifstream fileIn;
	ofstream fileOut;

	cout << "Please enter a file name, e.g. NumFile1.txt: ";
	getline(cin, file);

	fileIn.open(file);

	fileIn >> num;
	first = num;
	fileIn >> num;
	penultimate = num;
	fileIn >> num;
	last = num;

	while(fileIn >> num)
	{ 
		count++;
		penultimate = last;
		last = num;
	}

	cout << "First number is: " << first << endl;
	cout << "The Penultimate is: " << penultimate << endl;
	cout << "Last number is: " << last << endl;
	cout << "Count of numbers is: " << count<< endl;

    return 0;
}

