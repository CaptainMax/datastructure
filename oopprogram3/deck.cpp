#include "deck.h"
#include "card.h"
//Deck::Deck_Empty{
//	Card deal();
//	try{
//		if(deck.empty()){
//				throw 99; 
				
	
//		} catch(...){
//			cout << "Empty Card in your hand " << endl;
//		}
//	}
//};

Deck::Deck(int cards){
	
	for(int i = 0; i < cards; i ++){
		deck.back();

	}
}
Card Deck::deal(){
	
		Card temp = deck.back();
		deck.pop_back();


		return temp;
	

	
}
