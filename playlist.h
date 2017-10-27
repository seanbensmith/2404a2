#ifndef _PLAYLIST_H
#define _PLAYLIST_H

#include <ostream>
#include <string>

class Playlist {
	/*
	Playlist represents a grouping of songs
	*/
	public:
	Playlist(const string & aName, const int anId = -1);
	~Playlist(void);
    	int getID();
    	string toString() const;
	
	private:
	string name;
	int id;
};

ostream & operator<<(ostream & out, const Song & aPlaylist);

#endif
