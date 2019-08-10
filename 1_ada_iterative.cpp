#include<iostream>
using namespace std;

int main()
{
	int n,ans=1;
	cout<<"Enter Number to find it's factorial = ";
	cin>>n;
	
	for(int i=n;i>0;i--)
	{
		ans=ans*i;
	}
	cout<<n<<"!= "<<ans;
	return 0;
}

