#pragma once
#include "Conference.h"

class Management : public Conference {
public:
	Management();
	Management(const Management& obj);
	~Management();

	Management& operator= (const Management& other);

	friend ostream& operator<<(ostream&, Management&);
	friend istream& operator>>(istream&, Management&);
	friend ofstream& operator<<(ofstream&, Management&);
	friend ifstream& operator>>(ifstream&, Management&);
	void redact(Management&);
};