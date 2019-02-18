//Bailie Allemand 
// RunLengthEncode.cpp : Defines the entry point for the console application.
//Lab01 part 2
//Help Statement- Lane Snively

//#include "stdafx.h"
// CPP program to implement run length encoding

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string line;
	string whitespace(" \t\f\v\n\r");
	vector<string> pix_list;
	int i, count, n;
	ifstream pixf_full;
	pixf_full.open("PixLinesFrank.txt");
	ofstream pixf_cmpr;
	pixf_cmpr.open("PixCmprsFrank.txt");
	if (pixf_full.is_open()) cout << "Input pixf_full is open.";
	// Read into pix_list.
	i = 0;
	while (getline(pixf_full, line)) //1. parameters for the loop
	{
		cout << line<< endl;
		// 2.  (Explain statement below.)
		pix_list.push_back(line);//2.the string, "line", is inserted as the next element in the vector "pix_list"
		i = i + 1; //or i++, ++i as incrementation of the index
	}
	n = pix_list.size();
	cout << "Length of pix_list is " << n << " ; i = " << i << "\n";
	// Go through list, testing whether next pixel is the same.

	for (i = 0; i < n; i++)//3.complete parameters for the for loop
	{
		if (pix_list[i + 1] != pix_list[i])//4.complete conditions for the if statement 
			pixf_cmpr << pix_list[i] << '\n';
		else
		{
			// Pixels same.
			// 1. Write flag character and repeated pixel.  Strip pesky newline at end.
			pixf_cmpr << "00000000 " << pix_list[i].substr(0, pix_list[i].find_last_not_of(whitespace));
			// 5. (Explain loop below.)-the loop increments i and count w/o inserting a value into pixf_cmpr and counts repeated values i 
			count = 1;
			while (i < n - 1 && pix_list[i] == pix_list[i + 1])//6.complete the while loop parameters 
			{
				count++;
				i++;
			}
			// Different pixel or end of file encountered.
			// Write output to file.
			pixf_cmpr << " " << count << "\n";
		}
	}
	pixf_full.close();
	pixf_cmpr.close();
	system("pause");
	return 0;
}