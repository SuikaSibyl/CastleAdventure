#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<ctime>
#include<cstdlib>
#include"hero.h"
void hero::move(string s)
{
	if (s.compare("South") == 0)
		r++;
	else if (s.compare("North") == 0)
		r--;
	else if (s.compare("East") == 0)
		c++;
	else if (s.compare("West") == 0)
		c--;
}
void hero::randmove(vector<vector<room*> > GameMap)
{
	int rr, cc;
	while (1)
	{
		rr = rand() % 5;
		cc = rand() % 5;
		if (GameMap[rr][cc] != NULL)
			break;
	}
	r = rr; c = cc;
}

void hero::itemadd(string s)
{
	if (item.find(s) == item.end())
		item.insert(pair<string, int>(s, 1));
	else item[s]++;
}
void hero::showitem()
{
	map<string, int>::iterator iter;
	cout << "#Item#" << endl;
	for (iter = item.begin(); iter != item.end(); iter++)
	{
		cout << "\t" << iter->first << "\t*" << iter->second << endl;
	}
}