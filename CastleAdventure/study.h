#ifndef STUDY_H
#define STUDY_H

class study :public room
{
public:
	void Print() { cout << "Study\t"; }
	void situation(vector<vector<room*> > &GameMap, hero& Hero);
};

#endif // !STUDY_H
