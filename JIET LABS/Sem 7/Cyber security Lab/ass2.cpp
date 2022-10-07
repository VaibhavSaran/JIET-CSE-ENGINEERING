/*Implementing Rail Fence Encryption Technique*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string plaintext,ciphertext;
	int key;
	
	cout<<"Enter the plain text: ";
	getline(cin,plaintext);
	cout<<"Enter the key: ";
	cin>>key;
	
	int len = plaintext.length();
	char rail[key][len];
	bool dir_down=false;
	int row=0,column=0;
	
	for(int i=0;i<key;i++)
		for(int j=0;j<len;j++)
			rail[i][j]='\n';
	
	for(int i=0;i<len;i++)
	{
		if(row==0 || row==key-1)
			dir_down = !dir_down;
		rail[row][column++] = plaintext[i];
		dir_down ? row++ : row--;
	}

	for(int i=0;i<key;i++)
		for(int j=0;j<len;j++)
			if(rail[i][j]!='\n')
				ciphertext.push_back(rail[i][j]);
	cout<<"The Cipher text for the given plain text is: "<<ciphertext;
	return 0;
} 