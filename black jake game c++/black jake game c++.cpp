#include <iostream>
#include <time.h>
using namespace std;



int main() {

	int amount_drawn = 0;
	srand(time(NULL));
	int first_card = rand() % 13 + 1;
	int second_card = rand() % 13 + 1;
	int cardSum = 0;
	int second_sum = 0;
	int good_winningOdds;
	int badWinninodds;

	int sumOneposiblity = 0;
	int sumtwopossiblity = 0;
	int badpossiblityF = 0;
	int badpossiblityS = 0;

	int cards_possible[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };

	for (int i = 0; i < 13; i++) {

		if (cards_possible[i] == first_card)
			cards_possible[i] = 0;

		if (cards_possible[i] == second_card)
			cards_possible[i] = 0;


	}
	cout << "welcome to Blackjack game" << endl;
	if (first_card == 11) {

		cout << "the first card drawn is: " << "J" << endl;

	}
	else if (first_card == 12) {

		cout << "the first card drawn is: " << "Q" << endl;


	}
	else if (first_card == 13) {

		cout << "the first card drawn is: " << "K" << endl;

	}
	else if (first_card == 1) {

		cout << "The first card drawn is A" << endl;
	}
	else cout << "the first card drawn is: " << first_card << endl;







	if (second_card == 11) {

		cout << "the second card drawn is: " << "J" << endl;

	}
	else if (second_card == 12) {

		cout << "the second card drawn is: " << "Q" << endl;


	}
	else if (second_card == 13) {

		cout << "the second card drawn is: " << "K" << endl;

	}
	else if (second_card == 1) {

		cout << "The second card drawn is A" << endl;
	}
	else cout << "the second card drawn is: " << second_card << endl;










	if (first_card == 1 || second_card == 1) {
		if (first_card == 1) {


			second_sum += 11;
			cardSum += 1;




			if (second_card == 11 || second_card == 12 || second_card == 13) {
				second_sum += 10;
				cardSum += 10;
			}
			else {
				second_sum += second_card;
				cardSum += second_card;
			}




		}




		if (second_card == 1) {
			second_sum += 11;

			cardSum += 1;




			if (first_card == 11 || first_card == 12 || first_card == 13) {
				second_sum += 10;
				cardSum += 10;
			}
			else {
				cardSum += first_card;
				second_sum += first_card;
			}
		}

		cout << "the first sum if A = 11 is " << second_sum;
	}
	else {





		if (second_card == 11 || second_card == 12 || second_card == 13) {

			cardSum += 10;
		}
		else cardSum += second_card;

		if (first_card == 11 || first_card == 12 || first_card == 13) {

			cardSum += 10;
		}

		else cardSum += first_card;

	}

	cout << endl << "The sum of the cards is: " << cardSum << endl;


	 cards_possible[12] = 10;
	 cards_possible[11] = 10;
	 cards_possible[10] = 10;



	if (first_card == 1 || second_card == 1) {


		for (int i = 0; i < 13; i++) {

			if (cards_possible[i] != 0) {

				if (cards_possible[i] + second_sum <= 21) sumOneposiblity += 1;
				else badpossiblityF += 1;

			}



		}

		for (int i = 0; i < 13; i++) {

			if (cards_possible[i] != 0) {

				if (cards_possible[i] + cardSum <= 21) sumtwopossiblity += 1;
				else badpossiblityS += 1;

			}



		}

		cout << "The possibitiy of getting a good card for A being 11 and the sum being" << second_sum << " is " << sumOneposiblity << "/ 11" << endl;
		cout << "The possibitiy of getting a bad card for A being 11 and the sum being" << second_sum << " is " << badpossiblityF << "/ 11" << endl;

		if (sumOneposiblity < badpossiblityF) cout << "DONOT draw a card" << endl ;
		else cout << "Draw another card!!!!" << endl << endl;

		cout << "The possibitiy of getting a good card for A being 1 and the sum being" << cardSum << " is " << sumtwopossiblity << "/ 11" << endl;
		cout << "The possibitiy of getting a bad card for A being 1 and the sum being" << cardSum << " is " << badpossiblityS << "/ 11" << endl;

		if (sumtwopossiblity < badpossiblityS) cout << "DONOT draw a card" << endl;
		else cout << "Draw another card!!!!" << endl << endl;







	}

	else {

		for (int i = 0; i < 13; i++) {

			if (cards_possible[i] != 0) {

				if (cards_possible[i] + cardSum <= 21) sumOneposiblity += 1;
				else badpossiblityF += 1;

			}



		}

		cout << "The possibitiy of getting a good card for " << cardSum << " is " << sumOneposiblity << "/ 11" << endl;
		cout << "The possibitiy of getting a bad card for " << cardSum << " is " << badpossiblityF << "/ 11" << endl;
		if (sumOneposiblity < badpossiblityF) cout << "DONOT draw a card" << endl;
		else cout << "Draw another card!!!!" << endl << endl;

	}
}
