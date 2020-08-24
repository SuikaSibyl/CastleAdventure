#include<iostream>
#include<vector>
#include<map>
#include<ctime>
#include<cstdlib>
#include"hero.h"
#include"room.h"
#include"study.h"

void study::situation(vector<vector<room*> > &GameMap, hero& Hero)
{
	cout << "¡¾STUDY¡¿" << endl;
	cout << "#System#\n\tIt must be a study. You look through all of the books, and find a special one." << endl;
	room::situation(GameMap, Hero);
	switch (int i = rand() % 2)
	{
	case 0:
		cout << "#System#\n\t¡¶ The Map of the Castle ¡·" << endl;
		if (Hero.themap == true)
		{
			cout << "#Hero#\n\tGreat thing! But I already have one." << endl;
		}
		else {
			cout << "#Hero#\n\tGreat! With this I can know the whole map!" << endl;
			Hero.themap = true;
		}
		break;
	case 1:
		cout << "#System#\n\t¡¶ The King in Yellow ¡·" << endl;
		if (Hero.sin == true)
		{
			cout << "#Hero#\n\tWhat...What's that?..." << endl;
			cout << "\tOh, my mind is...What is the chaos..." << endl;
			Hero.sin = false;
			cout << "#Warning#\n\tNow, no need to save the princess anymore.\n\tKill, kill the monster!" << endl;
		}
		else
		{
			cout << "#Hero#\n\tThe book about my great king... Let's read it again..." << endl;
		}
		break;
	}
}