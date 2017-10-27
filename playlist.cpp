#include <iostream>
#include <string>
using namespace std;

#include "playlist.h"
	
Playlist::Playlist(const string & aName, const int anID){
	cout << "Playlist(string&, int) " << this << endl;
	name = aName;
	id = anID;
}
Playlist::~Playlist(){
	cout << "~Song(void) "  << this << endl;
}
int Playlist::getID(){return id;}

string Playlist::toString()const {
	return to_string(id) + " " + name + ".";
}

ostream & operator<<(ostream & out, const Playlist & aPlaylist){
	out << aPlaylist.toString() << endl;
	return out;
}
