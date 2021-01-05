#include<iostream>

#include<string>
using namespace std;

int main()

{


	string Cipher = "Lo cebo dy nbsxu iyeb Yfkvdsxo";
	string output;
	for (int shift = 1; shift <= 26; shift++)
	{





		output = "";

		std::cout << shift << ":  ";

		for (int f = 0; f < Cipher.size(); f++)

		{







			if (isupper(Cipher[f]))
			{

				output += char(int(Cipher[f] + shift - 65) % 26 + 65);



			}

			else if (islower(Cipher[f]))

			{

				output += char(int(Cipher[f] + shift - 97) % 26 + 97);

			}

			else
			{
				output += Cipher[f];

			}

		}
		cout << output << endl;
	}

	cout << "-------------------------------------------------------------------------------------------" << endl << endl;


	int number = 0;
	int decimal_number;
	int base;
	int result[70];
	char Letter[500];
	cout << "Please enter a decimal number to covert: ";
	cin >> decimal_number;

	cout << "Enter the base that you want to convert it too: ";
	cin >> base;
	int f = 0;

	if (base <= 16) {
		while (decimal_number > 0) {
			int answer = (decimal_number % base);


			result[f] = answer;

			decimal_number = decimal_number / base;



			f++;



		}

		for (int i = f - 1; i >= 0; i--) {



			cout << result[i];

		}
		cout << endl << endl;

	}


	else {

		while (decimal_number > 0) {






			int answer = (decimal_number % base);



			switch (answer) {

			case 10:
				cout << 'A';

			case 11:
				cout << 'b';

			case 12:
				cout << 'c';
			case 13:
				cout << 'd';

			case 14:
				cout << 'e';
			case 15:
				cout << 'f';


			default:
				cout << answer;

			}











			decimal_number = decimal_number / base;







		}


















	}

	int input;
	int i = 0;
	int copy_Input;
	int binary_version[4] = { 0 ,0 ,0 ,0 };



	cout << "Please enter a number to turn into  a hamming code: ";
	cin >> input;
	copy_Input = input;


	while (input > 0) {


		binary_version[i] = (input % 2);
		input = input / 2;


		i += 1;




	}


	int hamming_code[7];

	hamming_code[2] = binary_version[3];
	hamming_code[4] = binary_version[2];
	hamming_code[5] = binary_version[1];
	hamming_code[6] = binary_version[0];



	hamming_code[0] = ((hamming_code[2] + hamming_code[4] + hamming_code[6]) % 2);
	hamming_code[1] = ((hamming_code[2] + hamming_code[5] + hamming_code[6]) % 2);
	hamming_code[3] = ((hamming_code[4] + hamming_code[5] + hamming_code[6]) % 2);

	cout << endl << "input that was truned into a hamming code was: " << copy_Input << endl;
	cout << endl << "the result hamming code for the input is: ";
	for (int i = 0; i < 7; i++) {

		cout << hamming_code[i] << " ";





	}

	if (hamming_code[6] == 1) hamming_code[6] = 0;
	else if (hamming_code[6] = 0) hamming_code[6] = 1;


	cout << endl << endl << endl;




	

	cout << "The hamming code that is going to be tested is: ";
	for (int i = 0; i < 7; i++) {

		cout << hamming_code[i];




	}
	cout << endl << endl;

	int p1, p2, p4;
	int spot_code;
	int error_positions[3];
	

	p1 = hamming_code[0] + hamming_code[2] + hamming_code[4] + hamming_code[6];
	p2 = hamming_code[1] + hamming_code[2] + hamming_code[5] + hamming_code[6];
	p4 = hamming_code[3] + hamming_code[4] + hamming_code[5] + hamming_code[6];




	error_positions[0] = (p1 % 2);
	error_positions[1] = (p2 % 2);
	error_positions[2] = (p4 % 2);




	cout << "The error postion is: " << error_positions[2];
	cout << error_positions[1];
	cout << error_positions[0];
	cout << endl;

	if (error_positions[2] == 1 || error_positions[0] == 1 || error_positions[1] == 1) {

		int actual_position = 0;

		if (error_positions[2] == 1) {

			actual_position += 4;


		}

		if (error_positions[1] == 1) {
			actual_position += 2;


		}

		if (error_positions[0] == 1) {
			actual_position += 1;



		}

		if (hamming_code[actual_position - 1] == 0) hamming_code[actual_position - 1] = 1;
		else hamming_code[actual_position - 1] = 0;

		cout << "the corrected hamming code is: ";
		for (int i = 0; i < 7; i++) {

			cout << hamming_code[i];

		}
		cout << endl;

		cout << "the corrected message from the hamming code is: " << hamming_code[2] << hamming_code[4] << hamming_code[5] << hamming_code[6];


	}
;
	cout << endl << endl << endl << endl;


	int size = 0;
	int result2[15];
	int result3[15];

	int A[6] = { 1, 2, 3, 5, 8, 13 };
	int B[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int C[9] = { 1, 2, 3, 5, 7, 11, 13, 17, 19 };










	
	cout << "Problem 2.) ( B ∪ C ) ∩ A" << endl;
	int _size = 0;
	for (int i = 0; i < 5; i++)
	{
		result2[i] = B[i];
		_size++;
	}



	for (int i = 0; i < 5; i++)
	{
		int place = 0;
		for (int k = 0; k < 5; k++)
		{
			if (C[i] == B[k])
			{
				place = 1;
				break;
			}
		}
		if (place == 0)
		{
			result2[_size] = C[i];
			_size++;
		}
	}


	int size_p2 = 0;
	for (int i = 0; i < _size; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (result2[i] == A[j])
			{

				result3[size_p2] = A[j];
				size_p2++;
			}
		}
	}

	cout <<endl <<"Answer: ";
	for (int i = 0; i < size_p2; i++) {
	
		cout << result3[i] << " ";

	}

	cout << endl << endl << endl;
	


	int amount = 0;
	while (amount != -1) {
		int a, b, c;



		cout << "Enter (1)true or (0)false for A ";
		cin >> a;
		cout << endl;
		cout << "Enter (1)true or (0)false for B ";
		cin >> b;
		cout << endl;
		cout << "Enter (1)true or (0)false for c ";
		cin >> c;
		cout << endl << endl;


		if ((!(!(a ^ c)) && (b || a)))
		
			cout << "Function: !(A XOR C) NAND (B OR A) is true" << endl;
		else cout << "Function: !(A XOR C) NAND (B OR A) is False" << endl;
		
		
		


		cout << "enter -1 if you donot want to test different numbers: ";
			cin >> amount;
			cout << endl << endl;





	}


}
