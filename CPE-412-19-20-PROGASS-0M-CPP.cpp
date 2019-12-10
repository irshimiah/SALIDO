#include <iostream>
using namespace std;


int main() 
{
	int j=0, state=0;
	int table[6][2] = {{0,1}, {1,2}, {2,3}, {3,4}, {4,5}, {5,5}};
	int input;
	int flag=0;
	char st[100];
	
	cin>>st;
	while (st[j]!='\0')
		{
			//get column for symbol
		switch (st[j])
			{
			case 'a':
				input = 0;
				break;	//column
			case 'b':
				input = 1;
				break;	//column	
			}
			state = table[state][input];
			if (state==5)
			{
			flag=1;
			break;
			}
			j++;	
		}
	
	if (flag==1)
		{
		cout<<"Accepted";	
		}
	else
		{
		cout<<"Not Accepted";	
		}		
	return 0;
}


