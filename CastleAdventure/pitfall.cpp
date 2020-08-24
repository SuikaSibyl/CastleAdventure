#include<iostream>
#include<vector>
#include<map>
#include"hero.h"
#include"room.h"
#include"pitfall.h"

void pitfall::situation(vector<vector<room*> > &GameMap, hero& Hero)
{
	cout << "¡¾PITFALL¡¿" << endl;
	cout << "#System#\n\tYou enter the room, and find things go wrong.\n\t\
A loud sound was made by the opened door, you are pretty sure the monster has noticed it." << endl;
	cout << "#Warning#\n\tNow the monster is heading for the pitfall room!" << endl;
	if (monsr < Hero.getr() && GameMap[monsr + 1][monsc] != NULL)
	{
		monsr++;
		GameMap[monsr][monsc]->enMonster();
		GameMap[monsr - 1][monsc]->deMonster();
	}
	else if (monsr > Hero.getr() && GameMap[monsr - 1][monsc] != NULL)
	{
		monsr--;
		GameMap[monsr][monsc]->enMonster();
		GameMap[monsr + 1][monsc]->deMonster();
	}
	else if (monsc < Hero.getc() && GameMap[monsr][monsc + 1] != NULL)
	{
		monsc++;
		GameMap[monsr][monsc]->enMonster();
		GameMap[monsr][monsc - 1]->deMonster();
	}
	else if (monsr > Hero.getr() && GameMap[monsr][monsc - 1] != NULL)
	{
		monsc--;
		GameMap[monsr][monsc]->enMonster();
		GameMap[monsr][monsc + 1]->deMonster();
	}
	else if (monsr + 1 < 5 && GameMap[monsr + 1][monsc] != NULL)
	{
		monsr++;
		GameMap[monsr][monsc]->enMonster();
		GameMap[monsr - 1][monsc]->deMonster();
	}
	else if (monsr - 1 >= 0 && GameMap[monsr - 1][monsc] != NULL)
	{
		monsr--;
		GameMap[monsr][monsc]->enMonster();
		GameMap[monsr + 1][monsc]->deMonster();
	}
	else if (monsc + 1 < 5 && GameMap[monsr][monsc + 1] != NULL)
	{
		monsc++;
		GameMap[monsr][monsc]->enMonster();
		GameMap[monsr][monsc - 1]->deMonster();
	}
	else if (monsc - 1 >= 0 && GameMap[monsr][monsc - 1] != NULL)
	{
		monsc--;
		GameMap[monsr][monsc]->enMonster();
		GameMap[monsr][monsc + 1]->deMonster();
	}
	room::situation(GameMap, Hero);
}