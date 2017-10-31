#include <iostream>
#include <string>
using namespace std;

#include "user.h"
	
User::User(const int aUserID , const string & aName){
	cout << "User(int, string&) " << this << endl;
	userID = aUserID;
	name = aName;
}
User::~User(){
	cout << "~User(void) "  << this << endl;
}
int User::getID(){return userID;}
//string User::getName(){return name;}
//vector<Playlists*>		how to make playlists a collection of user

string User::toString()const {
	std::string IDstr = std::to_string(userID);
	return IDstr + name + ".";
}

ostream & operator<<(ostream & out, const User & aUser){
	out << aUser.toString() << endl;
	return out;
}
