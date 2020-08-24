#ifndef PRISON_H
#define PRISON_H
extern int monsc;
extern int monsr;
class prison :public room
{
public:
	void Print() { cout << "Prison\t"; }
	void situation(vector<vector<room*> > &GameMap, hero& Hero);
};

#endif // !PRISON_H
