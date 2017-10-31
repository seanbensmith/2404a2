#ifndef _RECORDING_H
#define _RECORDING_H

#include <ostream>
#include <string>

class Recording {

	public:
	Recording(const string & aTitle, const string & anArtist, const int aYear, const string & aProducer, const int anID = -1);
	~Recording(void);
	int getID();
	//int getYear();
	//string getTitle();
	//string getArtist();
	//string getProducer();
	string toString() const;
	
	private:
	string title;
	string artist;
	string producer;
	int year;
	int id;
};

ostream & operator<<(ostream & out, const Recording & aRecording);

#endif
