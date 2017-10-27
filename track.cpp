#include <iostream>
#include <string>
using namespace std;

#include "track.h"

Track::Track(const string & anMP3_file, const int anID){
	cout << "Track(string&)" << this << endl;
	mp3_file = anMP3_file;
	id = anID;
}
Track::~Track(){
	cout << "~Track(void)" << this << endl;
}
int Track::getID(){return id;}

string Track::toString()const{
	return to_string(id) + " " + mp3_file;
}

ostream & operator<<(ostream & out, const Track & aTrack){
	out << aRecording.toString() << endl;
	return out;
}
