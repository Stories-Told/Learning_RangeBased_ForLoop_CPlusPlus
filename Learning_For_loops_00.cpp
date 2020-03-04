#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Range-based For loop
	int scores[] = { 10,20,30,40,50 };
	for (auto score : scores)
	{
		cout << score << endl;
	}
	cout << endl;


	// Using a range-based for loop to find the average temp of a vector
	vector <double> temperature = { 87.2, 77.1, 80.0, 72.5 };
	double temp_aver = 0;
	double temp_sum = 0;
	for (auto temp : temperature)
	{
		temp_sum += temp;
	}
	temp_aver = temp_sum / temperature.size();
	cout << temp_aver << "\n\n";

	
	// Using range-based for loop to iterate over a string
	for (auto name : "Michael")
	{
		cout << name << endl;
	}


	// Using range-based for loop to iterate through a vector and find numbers that are divisible by 2 or 3 or both
	vector<int> vec{ 1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700 };
	for (auto number : vec)
	{
		if (number % 2 == 0)
		{
			if (number % 3 == 0)
			{
				cout << number << " divisible by both 2 and 3" << endl;
			}
			else
				cout << number << " divisible by 2" << endl;
		}
		else if (number % 3 == 0)
		{
			cout << number << " divisible by 3" << endl;
		}
		else
			cout << number << " is not divisible by 2 or 3" << endl;
	}
	


	return 0;
}


