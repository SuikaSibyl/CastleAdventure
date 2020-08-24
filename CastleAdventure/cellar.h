#ifndef CELLAR_H
#define CELLAR_H
class cellar :public room
{
public:
	void Print() { cout << "Cellar\t"; }
	void situation(vector<vector<room*> > &GameMap, hero& Hero);
};
#endif // !CELLAR_H
