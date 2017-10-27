#ifndef _TRACK_H
#define _TRACK_H

#include <ostream>
#include <string>

class Track {
	/*
	
	*/
	public:
	Track(const string & anMP3_file, const int anId = -1);
	~Track(void);
    int getID();
    string toString() const;
	
	private:
	string mp3_file;
	int id;
};

ostream & operator<<(ostream & out, const Track & aTrack);

#endif
