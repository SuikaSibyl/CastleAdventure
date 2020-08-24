#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<ctime>
#include<cstdlib>
#include"game.h"
#include"hero.h"
#include"room.h"
#include"lobby.h"
#include"cellar.h"
#include"treasary.h"
#include"prison.h"
#include"study.h"
#include"pitfall.h"

using namespace std;
int monsr = 0, monsc = 0; 
int main(void)
{
	while (1)
	{
		PlayGame();
	}
}
