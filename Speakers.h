#pragma once
#include "Conference.h"

class speakers : public Conference {
public:
	speakers();
	speakers(const speakers& obj);
	~speakers();

	speakers& operator= (const speakers& other);

	friend ostream& operator<<(ostream&, speakers&);
	friend istream& operator>>(istream&, speakers&);
	friend ofstream& operator<<(ofstream&, speakers&);
	friend ifstream& operator>>(ifstream&, speakers&);
	void redact(speakers&);
};