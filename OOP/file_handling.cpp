//Assignment 4
/*
Write a C++ program that creates an output file, writes information to it, closes the file, open
it again as an input file and read the information from the file.
*/

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void write_file()
{
	string str;
	int n;
	cout<<"Enter number of lines you want to enter:";
	cin>>n;
	ofstream file("file_handling.txt"); //creating file
	cin.ignore();
	for(int l = 1;l<=n;l++)
	{
		cout<<"Enter Line "<<l<<":";
		getline(cin,str);
		file<<str<<endl;
	}
	file.close();
	cout<<"*Data written Sucessfully"<<endl;
}

void read_file()
{
	string str;
	
	ifstream file("file_handling.txt"); //displays output
	if(file)
	{
		cout<<"*Reading From file"<<endl;
	}
	else
	{
		cout<<"*File not Found"<<endl;
		return;
	}
	int line=0;
	while(getline(file,str))
	{
		cout<<str<<endl;
		line++;
	}
	file.close();
	
	if(line==0)
	{
		cout<<"*File is Empty"<<endl;
	}
}

void append_file(){

	string str;
	int n;
	cout<<"Enter Number of Lines you want to Add:";
	cin>>n;
	ofstream file("file_handling.txt",ios::app);
	cin.ignore();
	for(int l = 1;l<=n;l++)
	{
		cout<<"Enter Line "<<l<<":";
		getline(cin,str);
		file<<str<<endl;
	}
	file.close();
	cout<<"*Data Added Sucessfully"<<endl;
	}

int main(){
	int choice;
	bool loop = true;
	while(loop)
	{
		cout<<setw(7)<<" "<<"MENU"<<setw(7)<<" "<<endl;
		cout<<"1. Write to File"<<endl;
		cout<<"2. Read from File"<<endl;
		cout<<"3. Add to File"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"Enter your choice:";
		cin>>choice;
		switch (choice)
		{
			case 1:
				write_file();
				break;
			case 2:
				read_file();
				break;
			case 3:
				append_file();
				break;
			case 4:
				loop = false;
				break;
				
			default:
				cout<<"Enter a valid choice"<<endl;
				break;
		}
	}
	cout<<"Thank you"<<endl;
	return 0;	
}