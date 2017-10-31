#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "user.h"
#include "users.h"
	
Users::Users(){
}
Users::~Users(void){
	for(vector<User*>::size_type i=0; i<collection.size(); i++)
		delete collection[i]; //delete playlists in this container
}
vector<User*>::iterator Users::findPosition(User & aUser){
	for (vector <User*>::iterator it = collection.begin() ; it != collection.end(); ++it)
		if(*it == &aUser) return it;
	return collection.end();
}
User * Users::findByID(int aUserID){
	for (vector<User*>::iterator it = collection.begin() ; it != collection.end(); ++it)
		if((*it)->getID() == aUserID) return *it;
	return NULL;
}
void Users::add(User & aUser){
	collection.push_back(&aUser);
}
void Users::remove(User & aUser){
	vector<User*>::iterator index = findPosition(aUser);
	if(index != collection.end()) {
		User * theUser = *index;
		collection.erase(index);
		delete theUser; //free the memory of theUser
	}
}

void Users::printOn(ostream & out) const {
  cout << "USERS:" << endl;
  for(vector<User*>::size_type i=0; i<collection.size(); i++)
       cout << (*collection[i]).toString() << endl;	  
}

ostream & operator<<(ostream & out, const Users & users){
  users.printOn(out);
  return out;
}
