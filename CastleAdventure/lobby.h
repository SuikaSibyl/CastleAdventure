#ifndef LOBBY_H
#define LOBBY_H

class lobby :public room
{
public:
	void Print() { cout << "Lobby\t"; }
	void situation(vector<vector<room*> > &GameMap, hero& Hero);
};

#endif // !LOBBY_H
