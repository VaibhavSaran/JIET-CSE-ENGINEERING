/*Implementation of Diffie Hellman Algorithm*/
#include<bits/stdc++.h>
using namespace std;
long long int power(long long int a, long long int b,long long int p)
{
	if(b==1)
		return a;
	return (((long long int)pow(a,b))%p);
}
int main()
{
	long long int p,g,x,a,y,b,ka,kb;
	cout<<"Enter a prime value for p: ";
	cin>>p;
	cout<<"Enter the primitive root of p which is g: ";
	cin>>g;
	cout<<"Choose private key for A: ";
	cin>>a;
	cout<<"Choose private key for B: ";
	cin>>b;
	x = power(g,a,p);
	y = power(g,b,p);
	ka = power(y,a,p);
	kb = power(x,b,p);
	cout<<"Secret key for A is: "<<ka<<endl<<"Secret key for B is: "<<kb;
	return 0;
}