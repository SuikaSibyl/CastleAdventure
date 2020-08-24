#ifndef  HERO_H
#define HERO_H
using namespace std;
class room;
class hero
{
private:
	int r = 4;
	int c = 2;
	bool getprincess = false;
public:
	map<string, int> item;
	bool sin = true;
	bool themap = false;
	bool pro = false;
	bool visit[5][5] = { {false} };
	void visitroom(int x, int y) { visit[x][y] = true; }
	void move(string s);
	void randmove(vector<vector<room*> > GameMap);
	int getr() { return r; }
	int getc() { return c; }
	void getpri() { getprincess = true; }
	bool havepri() { return getprincess; }
	void itemadd(string s);
	void showitem();
};

#endif // ! HERO_H