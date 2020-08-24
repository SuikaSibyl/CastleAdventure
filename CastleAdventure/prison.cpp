#include<iostream>
#include<vector>
#include<map>
#include"room.h"
#include"hero.h"
#include"prison.h"

void prison::situation(vector<vector<room*> > &GameMap, hero& Hero)
{
	cout << "¡¾PRISON¡¿" << endl;
	cout << "#System#\n\tIt's a dark prison! Many skeletons are piled up on the ground.\n\t\
There is a heavily wounded man sitting near the door.\n\
#Prisoner#\n\t\"Just forget me, I'm gonna die. Remember, the monster is " << endl;
	if (monsr < Hero.getr())
		cout << "\tNorth ";
	else if(monsr > Hero.getr()) cout << "\tSouth ";
	else cout << "\tjust";
	if (monsc < Hero.getc())
		cout << " West" << endl;
	else if (monsc > Hero.getc())
		cout << " East" << endl;
	else if (monsr == Hero.getr() && monsc == Hero.getc())
		cout << " HERE!" << endl;
	else
		cout << endl;
	room::situation(GameMap, Hero);
}