#ifndef ROOM_H
#define ROOM_H
using namespace std;
class hero;
class room
{
private:
	bool monster = false;
	bool princess = false;
protected:
	map<string, pair<int, int> > path;
public:
	virtual void Print() = 0;
	virtual void Event() {};
	virtual void situation(vector<vector<room*> > &GameMap, hero& Hero);
	void enPrincess() { princess = true; }
	void dePrincess() { princess = false; }
	bool havePrincess() { return princess; }
	void enMonster() { monster = true; }
	void deMonster() { monster = false; }
	bool haveMonster() { return monster; }
	void insertPath(string s, int i, int j) { path[s] = pair<int, int>(i, j); }
	bool haveRoom(string s) { return path.find(s) != path.end(); }
	bool meetPrincess();
	bool meetMonster();

};

#endif // !ROOM_H

