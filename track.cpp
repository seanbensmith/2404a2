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

//string Track::getFile(){return file;}

string Track::toString()const{
        std::string IDstr = std::to_string(id);
	return IDstr + " " + mp3_file;
}

ostream & operator<<(ostream & out, const Track & aTrack){
	out << aTrack.toString() << endl;
	return out;
}
