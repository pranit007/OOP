#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstring>
#define FILE "/home/rohit/Desktop/OOP/temp.txt"

using namespace std;

class FileAccess
{
	char name[10];
	long number;
	ofstream fileout;
	ifstream filein;
public:
	void getData();
	void Display();
	//void search();
	//void update();
};

void FileAccess::getData()
{
	fileout.open("temp.dat",ios::app);
	//accept the data and store it in the file
	cout<<"Enter your name: ";
	cin>>name;
	fileout<<name<<'\t';
	cout<<"Enter your number: ";
	cin>>number;
	fileout<<number<<" \n";
	fileout.close();
};
void FileAccess::Display()
{
	ifstream filein; 
    filein.open("temp.dat"); 
	cout << "Reading from the file" << endl; 
	string s;
	cout<<"Name \t Number\n\n";
    while(getline(filein, s))
	        cout << s << endl;

    filein.close();
}
int main()
{
	FileAccess obj;
	int ch;
	char status;
	do{
		cout<<"*******MENU*********"<<endl;
		cout<<"1.To Enter A record to the phonebook: "<<endl;
		cout<<"2.To Display the Whole record in the phonebook"<<endl;
		cout<<"3.To find if a record exist"<<endl;
		cout<<"4.To update a record"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<"********************"<<endl;
		cout<<"Enter your choice: "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				obj.getData();
			break;

			case 2:
				obj.Display();
			break;

			case 3:
				//obj.search();
			break;

			case 4:
				//obj.update();
			break;

			case 5:
				exit(EXIT_SUCCESS);
			break;

			default:
				cout<<"Invalid choice is entered"<<endl;
		}
		cout<<"Do you want to continue ? [Y/N]"<<endl;
		cin>>status;
	}while(status == 'y' || status == 'Y');
	return 0;
}