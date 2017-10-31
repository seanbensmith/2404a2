#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "recording.h"
#include "recordings.h"

Recordings::Recordings(){
}
Recordings::~Recordings(void){
	for(vector<Recording*>::size_type i=0; i<collection.size(); i++)
		delete collection[i];
}
vector<Recording*>::iterator Recordings::findPosition(Recording & aRecording){
	for(vector<Recording*>::iterator it = collection.begin() ; it != collection.end(); ++it)
		if(*it == &aRecording) return it;
	return collection.end();
}
Recording * Recordings::findByID(int anID){
	for (vector<Recording*>::iterator it = collection.begin() ; it != collection.end(); ++it)
		if((*it)->getID() == anID) return *it;
	return NULL;
}
void Recordings::add(Recording & aRecording){
	collection.push_back(&aRecording);
}
void Recordings::remove(Recording & aRecording){
	vector<Recording*>::iterator index = findPosition(aRecording);
	if(index != collection.end()){
		Recording * theRecording = *index;
		collection.erase(index);
		delete theRecording;
	}
}

void Recordings::printOn(ostream & out) const {
	cout << "Recordings:" << endl;
	for(vector<Recording*>::size_type i=0; i<collection.size(); i++)
		cout << (*collection[i]).toString() << endl;
}

ostream & operator<<(ostream & out, const Recordings & recordings){
	recordings.printOn(out);
	return out;
}
