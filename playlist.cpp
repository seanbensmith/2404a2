#include <iostream>
#include <string>
#include <sstream>
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
//string Playlist::getName(){return name;}

string Playlist::toString()const {
	std::string IDstr = std::to_string(id);
	return IDstr + " " + name + ".";
}

//vector<Songs*>	how to include vector of songs into playlist?

ostream & operator<<(ostream & out, const Playlist & aPlaylist){
	out << aPlaylist.toString() << endl;
	return out;
}
