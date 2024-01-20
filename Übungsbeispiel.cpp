#include <iostream>
#include <vector>

using namespace std;

struct person
{
	string name;
	int alter;
};

vector<person> readVector();

int main()
{
	vector<person> personvec = readVector();

	for (int i = 0; i < personvec.size(); i++)
	{
		cout << "Name: " << personvec.at(i).name << endl;
		cout << "Alter: " << personvec.at(i).alter << endl;
		cout << endl;
	}

	personvec.at(0).name = "Geändert";

	for (int i = 0; i < personvec.size(); i++)
	{
		cout << "Name: " << personvec.at(i).name << endl;
		cout << "Alter: " << personvec.at(i).alter << endl;
		cout << endl;
	}

	return 0;
}

vector<person> readVector()
{
	person personVar;
	vector<person> personVec;

	for (int i = 0; i < 3; i++)
	{
		cout << "Name: ";
		cin >> personVar.name;

		cout << "Alter: ";
		cin >> personVar.alter;

		personVec.push_back(personVar);
	}

	return personVec;
}