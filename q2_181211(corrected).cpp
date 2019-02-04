#include <iostream>
#include <fstream>
#include "header_181211.h"
using namespace std;

//Reads data from file to input in users array
void readDataFromFile(gitHubUser*users, string filepath, int &size;)
{
	ifstream readfile;
	readfile.open(filepath);
	string empty;
	if (!readfile)
		cout << "No file exists";
	else
	{
		readfile >> size;
		users = new gitHubUser[size];

		for (int i = 0; i < size; i++)
		{
			readfile >> users[i].firstName;
			readfile >> users[i].userName;
			readfile >> users[i].email;
			readfile >> users[i].folderCount;

			users[i].gitHubFolders = new string[users[i].folderCount];
			getline(readfile, empty);
			for (int j = 0; j < users[i].folderCount; j++)
			{
				getline(readfile, users[i].gitHubFolders[j]);
			}
		}
	}
}

int main()
{
	//size intialized in main program for deletion of pointers
	int size;
	
	gitHubUser*users = nullptr;
	string path = "q2_181211_in.txt";
	readDataFromFile(users, path,size);

	//size used to delete pointers
	for (int i = 0; i < size; i++)
		delete user[i].gitHubFolders;
	delete[]users;
	system("pause");
}