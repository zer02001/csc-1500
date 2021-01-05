// bubble sort lab 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int arr[10];
	int action_count= 0;
	cout << "please enter the 10 numbers to sort in the array" << endl;
	for (int i = 0; i < 10; i++) {
	
	
		cout << "enter the  " << i + 1 <<"st number: ";

			cin >> arr[i];
	
			
	}


	for (int f = 0; f < 10; f++) {
	
		for (int j = 0; j < (10 - f - 1); j++)
		{

			if (arr[j] > arr[j + 1]) {

				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

				action_count += 4;

			}
			else
				action_count += 1;
			
			
		}
	
	
	
	}
	cout << endl;

	cout << "The sorted array is: " << endl;
	for (int i = 0; i < 10; i++) {
	
		cout << arr[i] << " ";
	
	
	
	}
	cout <<endl;


	cout << "The number of actions required to sort the array is "  << action_count << endl;

	
}

