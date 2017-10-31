#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "recording.h"

Recording::Recording(const string & aTitle, const string & anArtist, const int  aYear, const string & aProducer, const int anID){
	cout << "Recording(string&, string&, int, string&)" << this << endl;
	title = aTitle;
	artist = anArtist;
	year = aYear;
	producer = aProducer;
	id = anID;
}
Recording::~Recording(){
	cout << "~Song(void)" << this << endl;
}
int Recording::getID(){return id;}

//int Recording::getTitle(){return title;}

//int Recording::getArtist(){return artist;}

//int Recording::getProducer(){return producer;}

//int Recording::getYear(){return year;}

string Recording::toString()const{
        std::string IDstr = std::to_string(id);
	std::string YEARstr = std::to_string(year);
	return IDstr + " " + title + " " + artist + " " + YEARstr + " " + producer;
}

ostream & operator<<(ostream & out, const Recording & aRecording){
	out << aRecording.toString() << endl;
	return out;
}

