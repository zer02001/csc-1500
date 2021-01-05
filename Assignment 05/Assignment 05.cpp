// Assignment 05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool Palindrome(string _input, int size , int first_position){

    if (first_position == size) return true;


    if (_input[size] !=_input[first_position]) {
    
    
    
        return false;
    }
    if (size > first_position + 1) {
    
        return Palindrome(_input, size - 1, first_position + 1);
    }

    return true;








    


}




int main()
{
    string input = "ALILA";
    int size_input = input.length() - 1;
    int firstPostion = 0;


    bool answer = Palindrome(input, size_input, firstPostion);


    if (answer == true) {

        cout << "True";


    }
    else cout << "false";






}

