#ifndef _PLAYLISTS_H
#define _PLAYLISTS_H

#include <ostream>
#include <vector>
#include <string>
using namespace std;
//#include "UI.h"
#include "playlist.h"

class Playlists {
  
	public:
	Playlists(); 
	~Playlists(void);
	//Playlists * findByID(int anID);
	void add(Playlist & aPlaylist);
	void remove(Playlist & aPlaylist);
	//void showOn(UI & aView) const;
	void printOn(ostream & out) const;
	
	private:
	vector<Playlist*> collection;
	vector<Playlist*>::iterator findPosition(Playlist & aPlaylist);
};

ostream & operator<<(ostream & out, const Playlists & playlists);
#endif
