#include <iostream>
using namespace std;
int main() {

	int input[7] = { 0,1,1,0,0,1,1 };

	cout << "The hamming code that is going to be tested is: ";
		for (int i = 0; i < 7; i++) {
		
			cout << input[i];
		
		
		
			
		}
		cout << endl << endl;

	int p1, p2, p4;
	int spot_code;
	int error_positions[3];
	int result[3];

	p1 = input[0] + input[2] + input[4] + input[6];
	p2 = input[1] + input[2] + input[5] + input[6];
	p4 = input[3] + input[4] + input[5] + input[6];




	error_positions[0] = (p1 % 2);
	error_positions[1] = (p2 % 2);
	error_positions[2] = (p4 % 2);




	cout << "The error postion is: " << error_positions[2];
	cout << error_positions[1];
	cout << error_positions[0];
	cout << endl;

	if (error_positions[2] == 1 || error_positions[0] == 1 || error_positions[1] == 1) {

		int actual_position  = 0;

		if (error_positions[2] == 1) {
			
			actual_position += 4;


		}

		if (error_positions[1] == 1) {
			actual_position += 2;


		}

		if (error_positions[0] == 1) {
			actual_position += 1;



		}

		if (input[actual_position - 1] == 0) input[actual_position - 1] = 1;
		else input[actual_position - 1] = 0;

		cout << "the corrected hamming code is: ";
		for (int i = 0; i < 7; i++) {

			cout << input[i];

		}
		cout << endl;

		cout << "the corrected message from the hamming code is: " << input[2] << input[4] << input[5] << input[6];


	}

}