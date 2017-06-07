#include <bits/stdc++.h>
using  namespace std;

struct book{
	int key;
	string title;
	string auth;
	double price;
	string abstract;
};		

struct student{
	int id;
	string name;
	double notes[2];
	string state;
};

void printStudent(student);
void printBook(book);

int main()
{
	student anyStudent;
	book anyBook;

	int option=0;
	cout<<"Seleccione la estructura a probar: \n1.-Libro 2.-Estudiante\n";
	cin>>option;

	switch(option)
	{
		case 1:
			cout<<"Ingrese el nombre del libro: ";
			cin.get();
			getline(cin,anyBook.title);
			cout<<"Ahora ingrese el autor: ";
			getline(cin,anyBook.auth);
			// Y asi
	}

}