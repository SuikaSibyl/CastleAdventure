#ifndef PITFALL_H
#define PITFALL_H
extern int monsc;
extern int monsr;
class pitfall :public room
{
public:
	void Print() { cout << "Pitfall\t"; }
	void situation(vector<vector<room*> > &GameMap, hero& Hero);
};
#endif // !PITFALL_H
