#ifndef TREASARY_H
#define TREASARY_H

class treasary :public room
{
public:
	void Print() { cout << "Treasary"; }
	void situation(vector<vector<room*> > &GameMap, hero& Hero);
};

#endif // !TREASARY
