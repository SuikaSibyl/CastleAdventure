#include<iostream>
#include<vector>
#include<map>
#include"room.h"
#include"cellar.h"

void cellar::situation(vector<vector<room*> > &GameMap, hero& Hero)
{
	cout << "¡¾CELLAR¡¿" << endl;
	cout << "#System#\n\tIt's really dark right here. Nothings special" << endl;
	room::situation(GameMap, Hero);
}