#ifndef _TRACKS_H
#define _TRACKS_H

#include <vector>
#include <string>
using namespace std;
//#include "UI.h"
#include "track.h"

class Tracks {
	/*
	
	*/
	public:
	Tracks(); 
	~Tracks(void);
	Track * findByID(int anID);
	void add(Track & aTrack);
	void remove(Track & aTrack);
	//void showOn(UI & aView) const;
	void printOn(ostream & out) const;
	
	private:
	vector<Track*> collection;
	vector<Track*>::iterator findPosition(Track & aTrack);
};

ostream & operator<<(ostream & out, const Tracks & tracks);
#endif
