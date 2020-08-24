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
void draw(int i)
{
	if (i == 0)
	{
		cout << "\
																									\n\
                                                                       *]]`                                   \n\
                                 =@@@@@@                       @@^    =@@^                                   \n\
                                =@@`  [    ,@@@@@`   ,@@@@@`  @@@@@^  =@@^    =@@@@^                         \n\
                               *@@^         ,,]/@@   =@@]``    @@^    =@@^   /@@]/@@^                        \n\
                                \\@@   **   =@@[=@@     [@@@^   @@^    =@@^   @@@[[[[`                        \n\
                                 \\@@@@@/   ,@@@@@@  */@@@@@`   \\@@@^  ,@@@   *\\@@@@@`                        \n\
																									\n\
  																							\n\
																								\n\
                              ,]`                                                                           \n\
                ,@@@*         =@O                                   @@^                                       \n\
               ,@@@@\\    */@@@@@O   @@@ *@@`   /@@@@@    =@@@@@^   @@@@@^  *@@^*@@^    @@@@@   =@@@@@`         \n\
               @@\\]@@^   =@@  =@O   ,@@^/@^   =@@@@@@^   =@^ =@@*   @@^    *@@^*@@^    @@^    ,@@@@@@@       \n\
              =@@@@@@@`  =@@` /@O    =@@@@    =@@/[[[*   =@^ =@@*   @@^    *@@^*@@^    @@^    ,@@/[[[`         \n\
              @@/   @@\\  *\\@@@@@O     \\@@^     \\@@@@@^   =@^ =@@*   =@@@^   \\@@@@@^   *@@^     ,@@@@@^   \n\n\n\n\n\
" << endl;
		cout << "                                             Press Any Key to stat" << endl;
	}
	else if (i == 1) {
		cout << "\
        ........,]]`......    \n\
        .......@@@@@@^....    \n\
        ....,@@@/,[\\@/....    \n\
        ..../@@@\\\\O@@@`...    \n\
      .....,@@/=^*.*\\@.... .  \n\
      .....,@^,/@@@@/..... .  \n\
        ....@,^/@@@@O.......  \n\
        .....,`\\@OOO/`........\n\
    .  ........\\`*OO\\..,.....\n\
     ........=^`,[O@\\OO^``....\n\
   .........,[]O^O=@@^O,,\\....\n\
 ........,*/=OO/,\\O@@@O/\\/\\...\n\
....*]/\\OO`//O.oO/@@@@@@/,`...\n\
....,...]OO`]oOO\\@@@@@@@\\[`...\n\
....\\]OO[`.,O@@@@@@@@@@@@O@`..\n\
..\\^=O/^`=OO\\O@@@@@@OO@@@@\\@.\n\
..O/\\O@@@@@@@@O@@@@@@@O@@@@...\n\
...........,[O@@@O@@\\@@@@/....\n\
....................\\]`.......\n\
" << endl;
	}
	else if (i == 2)
	{
		cout << "\
                                     \n\
                OOOOOO`              \n\
             OO@@@@@@@@OO^           \n\
         .]]OO@O@OOOO@@@OO\\]`        \n\
       .]OOOOO@OO@OOOOO@OOOOO\\`      \n\
     ,]OOOOOOO@OO@[O[\\O@OOOOOOO^     \n\
    =@OOOOOOOO@O]@@@@/\\@OOOOOOOO^    \n\
   =OOOOO@@OOO@OO]@]OOO@OO@@OOOOO^   \n\
  ,/OOOO@@OOOOO@@@@@@@@OOOOO@@OOO\\`  \n\
  =OOOOO@OOOOOOOOOOOOOOOOOOO@@OOOO^  \n\
  =OOOOO@OOOOOO@OOOOO@OOOOOO@@OOOO^  \n\
  =OOOOO/.@OOOOOOOOOOOOOOOO^=OOOOO^  \n\
   =OOOO..@OOOOOOOOOOOOOOOO^.=OOO^   \n\
   =OOOOOO.OOOOOOOOOOOOOOO^=OOOOO^   \n\
   =/=O@     @OOO.  OOOO^    =@^=^   \n\
         .@OOOOOO.  OOOOOOO^         \n\
      =@@OOOOOOOOO.OOOOOOOOO@@^      \n\
       ........... ............   \n\
" << endl;
	}
	if (i == 3)
	{
		cout << "\
....,O/...................\n\
...,@@@@^.................\n\
...=@^=@^../OO]...........\n\
...=@,`/^.,\\^,O^..........\n\
..`\\@@@@\\`=[\\`,\\..........\n\
,,\\,,,=@/\\OO@,@@O`........\n\
=O@@@@\\OO\\\\]..,/O`........\n\
=@`=OOOO\\O=O`^./\\`........\n\
\\@^=@/OOO,O@\\,=.\\\\,.......\n\
=@.O/@[/,O=O[==\\`..,/`....\n\
,[/@=@@\\@@\\o^O/Oo`,]/^....\n\
=^=@@@\\//O=/=O^\\OO\\/Oo\\...\n\
..,@@@`\\/=O^oO^,O/\\OOOo/`.\n\
..=@@^\\/,O/=OO^,oOOOOooO^,\n\
..@@/,/.oO`=Oo^.=OOOO`^^/^\n\
.=@/=/.=o/.OOO..,OOoO*Oo.=\n\
.=/,O.=oO`=oOo...=OOO/o\\/`\n\
..@O`.OO/.\\OOo...*OO@^....\n\
.=@^,=oO^.oOO^....,@/.....\n\
.=@^..,[,,O@O.....``......\n\
			" << endl;
	}
}
bool InMap(int x, int y)
{
	return (x >= 0 && x < 5 && y >= 0 && y < 5);
}
room* CreateNewRoom()
{
	int num = rand() % 5;
	if (num == 0)
		return new cellar;
	else if (num == 1)
		return new treasary;
	else if (num == 2)
		return new prison;
	else if (num == 3)
		return new study;
	else if (num == 4)
		return new pitfall;
	else
		return NULL;
}
int InitializeMap(vector<vector<room*> > &GameMap, int x, int y)
{
	static int Totalroom = 0;
	int dx[4] = { 0,0,-1,1 };
	int dy[4] = { 1,-1,0,0 };
	for (int k = 0; k < 5; k++)
	{
		if (InMap(x + dx[k], y + dy[k]) && (!GameMap[x + dx[k]][y + dy[k]]) && (rand() % 2))
		{
			GameMap[x + dx[k]][y + dy[k]] = CreateNewRoom();
			InitializeMap(GameMap, x + dx[k], y + dy[k]);
			Totalroom++;
		}
		if (Totalroom > 22)
			break;
	}
	int temp = Totalroom;
	if (x == 4 && y == 2)
	{
		Totalroom = 0;
	}
	return temp;
}
void InitializeGame(vector<vector<room*> > &GameMap)
{
	system("cls");
	draw(0);
	int num = 0;
	int dx[4] = { 0,0,-1,1 };
	int dy[4] = { 1,-1,0,0 };
	int mosx, mosy, prix, priy;
	while (num < 7)
	{
		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 5; j++)
			{
				GameMap[i][j] = NULL;
			}
		room* Temp = new lobby;
		GameMap[4][2] = Temp;
		num = InitializeMap(GameMap, 4, 2);
	}
	do
	{
		mosx = rand() % 5;
		mosy = rand() % 5;
	} while (!(GameMap[mosx][mosy]));
	do
	{
		prix = rand() % 5;
		priy = rand() % 5;
	} while (!(GameMap[prix][priy] && (prix != mosx || priy != mosy)));
	GameMap[mosx][mosy]->enMonster();
	GameMap[prix][priy]->enPrincess();
	monsr = mosx; monsc = mosy;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (GameMap[i][j])
			{
				for (int k = 0; k < 5; k++)
				{
					if (InMap(i + dx[k], j + dy[k]) && (GameMap[i + dx[k]][j + dy[k]]))
					{
						if (k == 0) GameMap[i][j]->insertPath("East", dx[k], dy[k]);
						else if (k == 1) GameMap[i][j]->insertPath("West", dx[k], dy[k]);
						else if (k == 2) GameMap[i][j]->insertPath("North", dx[k], dy[k]);
						else if (k == 3) GameMap[i][j]->insertPath("South", dx[k], dy[k]);
					}
				}
			}
		}
	}
}
void ShowAdminMap(vector<vector<room*> > &GameMap, hero &Hero)
{
	cout << "#AdminMap#" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "\t";
		for (int j = 0; j < 5; j++)
		{
			if (GameMap[i][j] == NULL)
				cout << "none\t \t";
			else
			{
				GameMap[i][j]->Print();
				if (GameMap[i][j]->haveMonster()) cout << "<-!";
				else if (GameMap[i][j]->havePrincess()) cout << "<-O";
				else if (i == Hero.getr() && j == Hero.getc()) cout << "<-";
				cout << "\t";
			}
		}
		cout << endl;
	}
	cout << endl;
}
void ShowMap(vector<vector<room*> > &GameMap, hero &Hero)
{
	cout << "#Map#" << endl;
	int dx[4] = { 0,0,-1,1 };
	int dy[4] = { 1,-1,0,0 };
	if (Hero.themap == false)
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "\t";
			for (int j = 0; j < 5; j++)
			{
				if (Hero.visit[i][j] == true)
				{
					GameMap[i][j]->Print();
					if (Hero.pro == true && GameMap[i][j]->havePrincess()) cout << "<-O";
					else if (i == Hero.getr() && j == Hero.getc())
					{
						cout << "<-";
					}
					cout << "\t";
				}
				else if (GameMap[i][j] == NULL)
				{
					cout << " \t \t";
				}
				else
				{
					cout << " \t";
					if (Hero.pro == true && GameMap[i][j]->havePrincess()) cout << "<-O";
					cout << "\t";
				}
			}
			cout << endl;
		}
		cout << endl;
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "\t";
			for (int j = 0; j < 5; j++)
			{
				if (GameMap[i][j] == NULL)
					cout << "none\t \t";
				else
				{
					GameMap[i][j]->Print();
					if (i == Hero.getr() && j == Hero.getc()) cout << "<-";
					cout << "\t";
				}
			}
			cout << endl;
		}
		cout << endl;
	}
}
bool Checkevent(vector<vector<room*> > &GameMap, hero &Hero)
{
	if (GameMap[Hero.getr()][Hero.getc()]->meetPrincess()) {
		Hero.getpri();
		GameMap[Hero.getr()][Hero.getc()]->dePrincess();
	}
	if (GameMap[Hero.getr()][Hero.getc()]->meetMonster()) {
		if (Hero.sin == false)
		{
			cout << "#Hero#\n\tOhhhhhhh... It's the monster adn I have killed him. What a great feel.\n\t\
I fulfilled the mission, my lord!" << endl;
			cout << "#System#\n\tThe hero see himself in the mirror, and find out his face is just like the monster.\
\n\tAfter that, he left in the castle and killed many heros until himself was killed. \n\tPress any key to have a new game.\n" << endl;
			getchar();
			return false;
		}
		else
		{
			if (Hero.item.find("Philosophy's_Stone") != Hero.item.end())
			{
				if (Hero.item["Philosophy's_Stone"] == 1)
				{
					Hero.item.erase("Philosophy's_Stone");
				}
				else
					Hero.item["Philosophy's_Stone"]--;
				cout << "#System#\n\tYou wake up and find yourself still alive. The philosopher_stone was broken.\n\tIt seems like that saves your life." << endl;
			}
			else
			{
				cout << "#System#\n\tOoops! What a pity...\n\tPress any key to try again.\n" << endl;
				getchar();
				return false;
			}
		}
	}
	return true;
}
bool LobbyCheck(vector<vector<room*> > &GameMap, hero &Hero)
{
	if (Hero.getr() == 4 && Hero.getc() == 2)
	{
		if (Hero.havepri())
		{
			if (Hero.sin == true)
			{
				draw(3);
				cout << "#Hero#\n\t\"Finally... I finally reach the happy end... Haven't I?\"" << endl;
				cout << "#System#\n\tCongratulations! You win the game! \n\tPress any key to play a new game\n" << endl;
				getchar();
				return false;
			}
			else
			{
				cout << "#Hero#\n\t\"Finally... I finally reach the happy end... BUT...\n\tI do not want to leave with you, leave by yourself now.\"" << endl;
				cout << "#Warning#\n\tNow you need to find the monster to win the game\n" << endl;
				getchar();
				return false;
			}
		}
		else
		{
			if (Hero.sin == true)
			{
				cout << "#Hero#\n\t\"The only way to get out this hell. If I have saved the princess, I can leave...\n\
\tWell, but acutually I haven't. Let's go back here later.\"\n";
			}
			else
			{
				cout << "#Hero#\n\t\"The only way to get out this hell.\n\tNo need to leave here anymore, I will stay here forever with my dear loard.\"\n";
			}
		}
	}
	return true;
}
void Care(string& command)
{
	if (command[0] >= 'a'&&command[0] <= 'z')
	{
		if (command.compare("the_prophecy") == 0 || command.compare("theprophecy") == 0)
		{
			command = "The_Prophecy";
		}
		else if (command.compare("random_amulet") == 0 || command.compare("randomamulet") == 0)
		{
			command = "Random_Amulet";
		}
		else if (command.compare("adminmap") == 0 )
		{
			command = "AdminMap";
		}
		else
			command[0] = command[0] + 'A' - 'a';
	}
}

bool ARound(vector<vector<room*> > &GameMap, hero &Hero)
{
	string command;
	cout << "#system#\n\tPlease enter your command:" << endl;
	cout << "#Command#\n\t";
	getline(cin, command);
	Care(command);
	if (command.compare("Map") == 0)
	{
		ShowMap(GameMap, Hero);
	}
	else if (command.compare("The_Prophecy") == 0)
	{
		if (Hero.item.find("The_Prophecy") != Hero.item.end())
		{
			Hero.pro = true;
			if (Hero.item["The_Prophecy"] == 1)
			{
				Hero.item.erase("The_Prophecy");
			}
			else
			{
				Hero.item["The_Prophecy"]--;
			}
			return false;
		}
	}
	else if (command.compare("AdminMap") == 0)
	{
		ShowAdminMap(GameMap, Hero);
	}
	else if (command.compare("Item") == 0)
	{
		Hero.showitem();
	}
	else if (command.compare("Random_Amulet") == 0)
	{
		if (Hero.item.find("Random_Amulet") != Hero.item.end())
		{
			Hero.randmove(GameMap);
			Hero.visitroom(Hero.getr(), Hero.getc());
			if (Hero.item["Random_Amulet"] == 1)
			{
				Hero.item.erase("Random_Amulet");
			}
			else
			{
				Hero.item["Random_Amulet"]--;
			}
			return false;
		}
	}
	else if (GameMap[Hero.getr()][Hero.getc()]->haveRoom(command))
	{
		Hero.move(command);
		Hero.visitroom(Hero.getr(), Hero.getc());
		return false;
	}
	else cout << "#System#\n\tUmmmm¡­¡­ Nice try, but you just can't do that." << endl;
	return true;
}

void PlayGame()
{
	vector<vector<room*> > GameMap(5, vector<room*>(5));
	hero Hero;
	Hero.visitroom(4, 2);
	srand((unsigned int)time(0));
	InitializeGame(GameMap);
	getchar();
	while (1)
	{
		system("cls");
		cout << endl;
		if (!Checkevent(GameMap, Hero)) break;
		GameMap[Hero.getr()][Hero.getc()]->situation(GameMap, Hero);
		if (!LobbyCheck(GameMap, Hero)) break;
		while (1)
		{
			if (!ARound(GameMap, Hero)) break;
		}
	}
}