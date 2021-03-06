#include <iostream>
#include<fstream>
#include "header_181211.h"
using namespace std;

//Reads data from file to input in users array
void readDataFromFile(gitHubUser*users,string filepath)
{
	ifstream readfile;
	readfile.open(filepath);

	if (!readfile)
		cout << "No file exists";
	else
	{
		int size;
		readfile>>size;
		users = new gitHubUser[size];

		for (int i = 0; i < size; i++)
		{
			readfile >> users[i].firstName;
			readfile >> users[i].userName;
			readfile >> users[i].email;
			readfile >> users[i].folderCount;
			
			users[i].gitHubFolders = new string[users[i].folderCount];
			for (int j = 0; j < users[i].folderCount; j++)
			{
				readfile >> users[i].gitHubFolders[j];
			}
		}

		for (int i = 0; i < size; i++)
			delete users[i].gitHubFolders;
		delete[]users;
	}
	
}

int main()
{
	gitHubUser*users = nullptr;
	string path = "q2_181211_in.txt";
	readDataFromFile(users, path);
	system("pause");
}