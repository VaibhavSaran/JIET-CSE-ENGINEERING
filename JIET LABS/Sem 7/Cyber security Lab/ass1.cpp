/*Implementing Caesar Cipher*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,val;
	string plaintext,ciphertext;
	cout<<"Enter the string: ";
	getline(cin,plaintext);
	cout<<"Enter the key value(integer): ";
	cin>>k;
	for(int i=0;i<plaintext.length();i++)
	{
		val = k+int(plaintext[i]);
		ciphertext+=char(val);
	}
	for(int i=0;i<ciphertext.length();i++)
	{
		cout<<ciphertext[i];
	}
	return 0;
}