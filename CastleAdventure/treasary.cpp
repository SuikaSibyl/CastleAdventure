#include<iostream>
#include<vector>
#include<map>
#include<ctime>
#include<cstdlib>
#include"hero.h"
#include"room.h"
#include"treasary.h"

void treasary::situation(vector<vector<room*> > &GameMap, hero& Hero)
{
	cout << "¡¾TREASARY¡¿" << endl;
	cout << "#System#\n\tIt looks like a treasary room. Gold coins and jewelry are everywhere.\n\t\
But one thing particularly attracts your attention. It's a ";
	switch (int i = rand() % 3)
	{
	case 0:
		Hero.itemadd("Philosophy's_Stone");
		cout << "\"Philosophy's_Stone\"" << endl;
		cout << "#System#\n\tYou get a Philosophy's_Stone" << endl;
		break;
	case 1:
		Hero.itemadd("Random_Amulet");
		cout << "\"Random_Amulet\"" << endl;
		cout << "#System#\n\tYou get a Random_Amulet" << endl;
		break;
	case 2:
		Hero.itemadd("The_Prophecy");
		cout << "\"The_Prophecy\"" << endl;
		cout << "#System#\n\tYou get a The_Prophecy" << endl;
		break;
	}
	room::situation(GameMap, Hero);
}