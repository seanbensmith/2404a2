#include <iostream>
#include <string>
using namespace std;

#include "user.h"
	
User::User(const int aUserID, const string & aName){
	cout << "User(int, string&) " << this << endl;
	userID = aUserID;
	name = aName;
}
User::~User(){
	cout << "~User(void) "  << this << endl;
}
int User::getID(){return id;}

string Playlist::toString()const {
	return to_string(id) + " " + userID + " " + name ".";
}

ostream & operator<<(ostream & out, const USer & aUser){
	out << aUser.toString() << endl;
	return out;
}
