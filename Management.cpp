#include "Management.h"

Management::Management() {
	cout << "Вызвался конструктор по умолчанию класса Management" << endl;
	Surname_Name_Patronymic = "no data";
	responsibility = "no data";
	post = "no data";
}

Management::Management(const Management& obj) {
	*this = obj;
}

Management::~Management() {
	cout << "Вызвался деструктор класса Management" << endl;
}

Management& Management::operator=(const Management& other) {
	this->Surname_Name_Patronymic = other.Surname_Name_Patronymic;
	this->responsibility = other.responsibility;
	this->post = other.post;
	return *this;
}

istream& operator>>(istream& in, Management& obj) {
	
	cout << "enter full name: ";
	in >> obj.Surname_Name_Patronymic;

	cout << "enter area of responsibility: ";
	in >> obj.responsibility;

	cout << "enter position: ";
	in >> obj.post;

	

	return in;
}

ostream& operator<<(ostream& out, Management& obj) {
	
	out << "Full name: " << obj.Surname_Name_Patronymic << endl;
	out << "area of responsibility: " << obj.responsibility << endl;
	out << "position: " << obj.post << endl;
	return out;
}

ofstream& operator<<(ofstream& fout, Management& obj)
{
	fout << obj.Surname_Name_Patronymic << endl;
	fout << obj.responsibility << endl;
	fout << obj.post << endl;
	return fout;
}

ifstream& operator>>(ifstream& fin, Management& obj)
{
	fin >> obj.Surname_Name_Patronymic;
	fin >> obj.responsibility;
	fin >> obj.post;
	return fin;
}

void Management::redact(Management& obj)
{
	int index;
	cout << "What you want to redact (1-3) 4-exit: " << endl;
	cin >> index;
	switch (index)
	{
	case 1:
		cout << "Input new information about FIO: ";
		getchar();
		getline(cin, obj.Surname_Name_Patronymic); break;
	case 2:
		cout << "Input new information about responsibility: ";
		cin >> obj.responsibility; break;
	case 3:
		cout << "Input new information about post: ";
		cin >> obj.post; break;
	
	case 4:
		cout << "succesesfuil redact" << endl;
	default:
		break;
	}
}