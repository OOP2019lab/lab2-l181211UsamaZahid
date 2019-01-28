//#include <iostream>
//#include "header_181211.h"
//using namespace std;
//
////Question1 B
////Compares information of both users
//bool Comparison(gitHubUser user1, gitHubUser user2)
//{
//	if (user1.firstName == user2.firstName && user1.userName == user2.userName && user1.password == user2.password && user1.email == user2.email && user1.folderCount == user2.folderCount)
//		return true;
//	else 
//		return false;
//}
//
////Checks whether userName already exists in the array
//bool exists(gitHubUser*arr, int size, string userName)
//{
//	bool exist = 0;
//	for (int j = 0; j < size; j++)
//		if (arr[j].userName == userName)
//			exist = 1;
//	return exist;
//}
//
////Takes input from user along with validation check for userName
//void inputFromUser(gitHubUser* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		bool compare = 1;
//
//		cout << "Enter userName for User" << i + 1 << ": ";
//		while (compare == 1)
//		{
//			cin >> arr[i].userName;
//			compare = exists(arr, i, arr[i].userName);
//			if (compare == 1)
//				cout << "This userName already exists, enter another userName:\n";
//		}
//
//		cout << "Enter first name for User" << i + 1 << ": ";
//		cin >> arr[i].firstName;
//		
//		cout << "Enter password for User" << i + 1 << ": ";
//		cin >> arr[i].password;
//		
//		cout << "Enter email for User" << i + 1 << ": ";
//		cin >> arr[i].email;
//
//		cout << "Enter folderCount for User" << i + 1 << ": ";
//		cin >> arr[i].folderCount;
//	}
//	cout << endl << endl;
//}
//
////Question1 B
////Searches array for given userName
//gitHubUser* searchUser(gitHubUser*users, int size, string userName)
//{
//	int point;
//	bool found = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (users[i].userName == userName)
//		{
//			point = i;
//			found = 1;
//		}
//	}
//
//	if (found == 1)
//	{
//		cout << "Match has been found\n";
//		return &users[point];
//	}
//	else
//		cout << "No Match Found\n";
//	return nullptr;
//}
//
////Working instance of above functions
//int main()
//{
//	int size;
//	gitHubUser*users;
//	cout << "Input size: ";
//	cin >> size;
//	users = new gitHubUser[size];
//	
//	inputFromUser(users, size);
//
//	bool comp;
//	comp = Comparison(users[0], users[1]);
//
//	if (comp == 1)
//		cout << "Both are same\n";
//	else cout << "Both are different\n";
//
//	string search;
//	gitHubUser*searchAccount;
//	cout << "\nInput userName to search: ";
//	cin >> search;
//	searchAccount = searchUser(users, size, search);
//
//	delete[]users;
//	system("pause");
//}