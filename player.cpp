#include"deck.h"
#include"card.h"
#include<vector>
#include"hand.h"
#include"player.h"
#include <string>
#include <iostream>
using namespace std;	


void Player::playp(Deck& fDeck) {
	char choice = 'y';
	int score=0;
	while (score<21) {
		if (choice == 'y') {
			takeOneCard(fDeck);
			printHand();
			score = score + calculateScore();
			cout << "Your summ is " << calculateScore() << endl;
			cout << "Do you want another card?";
			cout << " (enter your choice, y - yes, n - no) ";
			cin >> choice;
		}
		else if (choice == 'n') { cout << "its final sum " << endl;break;  } 
		
	}
}


//void Player::playp(Deck& fDeck) {
//	char choice = 'y';
//	while (choice != 'n') {
//		
//		takeOneCard(fDeck);
//		
//		printHand();
//		
//		cout << "Your summ is " << calculateScore() << endl;
//		cout << "Do you want another card?";
//		cout << " (enter your choice, y - yes, n - no) ";
//		
//		cin >> choice;
//
//	}
//}