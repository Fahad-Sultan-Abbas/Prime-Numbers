#include<iostream>
using namespace std;
int main()
{
	for(int i=3 ; i < 101 ; i++)
	{
		bool prime = true;
		int x = i-1;
		for(x ; x>1 ; x--)
		{
			int rem;
			rem = i%x;
			if(rem == 0)
			{
				prime = false;
				break;
			}
		}
		if(prime == true)
		{
			cout<<i<<endl;
		}
	}
}
