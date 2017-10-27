#ifndef _USER_H
#define _USER_H

#include <ostream>
#include <string>

class User {
	/*
	User represents a user of the application
	*/
	public:
        User(const int aUserID = -1, const string & aName,);
	~User(void);
    	int getID();
    	string toString() const;
	
	private:
	string name;
	int userID;
};

ostream & operator<<(ostream & out, const Song & aUser);

#endif
