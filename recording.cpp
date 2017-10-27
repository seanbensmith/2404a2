#include <iostream>
#include <string>
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

string Recording::toString()const{
	return to_string(id) + " " + title + " " artist + " " + to_string(year) + " " + producer;
}

ostream & operator<<(ostream & out, const Recording & aRecording){
	out << aRecording.toString() << endl;
	return out;
}
