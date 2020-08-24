#include<iostream>
#include<vector>
#include<map>
#include"room.h"
#include"lobby.h"

void lobby::situation(vector<vector<room*> > &GameMap, hero& Hero)
{
	cout << "¡¾LOBBY¡¿" << endl;
	cout << "#System#\n\tWelcome to the lobby." << endl;
	room::situation(GameMap, Hero);
}