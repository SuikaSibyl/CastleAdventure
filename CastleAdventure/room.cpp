#include<iostream>
#include<vector>
#include<map>
#include<string>
#include"room.h"
#include"game.h"

void room::situation(vector<vector<room*> > &GameMap, hero& Hero)
{
	cout << "#system#" << endl;
	cout << "\tThere are " << path.size() << " exits as : \n\t";
	for (map<string, pair<int, int> >::iterator iter = path.begin(); iter != path.end(); iter++)
		cout << iter->first << "\t";
	cout << endl;
}

bool room::meetPrincess()
{
	if (princess == true)
	{
		draw(1);
		cout << "#Hero#\n\tOh! It's the princess! Now we just need to get out of this place!" << endl;
		return true;
	}
	return false;
}
bool room::meetMonster()
{
	if (monster == true)
	{
		draw(2);
		cout << "#Hero#\n\tHoly s¡­¡­ It must be the monster! I'm gonna be killed!" << endl;
		return true;
	}
	return false;
}