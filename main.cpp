#include "st.h"
#include "qu.h"
#include "ar.h"
#include "lin.h"
#include "tre.h"
#include "gra.h"
using namespace std;
int main()
{
	int x;
	x = 1;
	while(x)
	{
		cout<<"Menu:- \n";
		cout<<"1. Array\n2. Stack\n3. Queue\n4. LinkList\n5. Tree\n6. Graph\n0. Exit\nEnter your chioce...\n";
		int a;
		cin>>a;
		switch(a)
		{
			case 1 :
				{
					ar();
					break;	
				}
		
			case 2 :
				{
					st();
					break;
				}
		
			case 3 :
				{
					qu();
					break;
				}
			case 4 :
				{
					lin();
					break;	
				}
			case 5 :
				{
					tre();
					break;	
				}
			case 6 :
				{
					gra();
					break;	
				}
			case 0:
				{
					x=0;
					break;
				}
			default :
				cout<<"wrong Input";
		}
	}
}
