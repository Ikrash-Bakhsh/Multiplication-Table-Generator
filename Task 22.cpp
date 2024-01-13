#include<iostream>
using namespace std;
int main()
{
	int i,a;
	cout<<"Enter the number you want table of = ";
	cin>>a;
	for(i=1;i<=10;i++)
	{
		cout<<a<<" x "<<i<<" = "<<a*i;
		cout<<"\n";
	}
	return 0;
}
