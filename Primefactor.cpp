#include<bits/stdc++.h>
using namespace std;
void Numberfactors(int s)
{
	while(s%2==0)
	{
		cout<<2<<" ";
		s=s/2;
	}
	for(int i = 3;i <= sqrt(s);i += 2)
	{
		while(s % i == 0)
		{
			cout<<i<<" ";
			s=s/i;
		}
	}
	if(s>2)
	{
		cout<<s<<" ";
	}
}
int main()
{
  int s;
  cout<<"Enter the number: ";
  cin>>s;
Numberfactors(s);
  //cout<<result;
  	return 0;
}
