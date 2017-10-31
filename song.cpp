#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "song.h"
	
Song::Song(const string & aTitle, const string & aComposer, const int anID){
	cout << "Song(string&, string&, int) " << this << endl;
	title = aTitle;
	composer = aComposer;
	id = anID;
}
Song::~Song(){
	cout << "~Song(void) "  << this << endl;
}
int Song::getID(){return id;}

//int Song::getTitle(){return title;}

//int Song::getComposer(){return composer;}


string Song::toString()const {
  std::string IDstr = std::to_string(id); 
  return IDstr + " " + title + " " + composer;
}


ostream & operator<<(ostream & out, const Song & aSong){
	out << aSong.toString() << endl;
	return out;

}
