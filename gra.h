#include<iostream>
#include<stdio.h>
using namespace std;
struct adjnode
{
char dest;
adjnode *link;
};

struct node1
{
char data;
node1 *next;
adjnode *adj;
};

node1 *first,*last,*start;

void enteradj(node1* ptr)
{ int nadj;
cout<<"no of adjacent node present??\n";
cin>>nadj;

if(nadj>0)
{
adjnode *beg,*end;
beg=new(adjnode);
ptr->adj=beg;
cout<<"enter the first adjacent member/destination: ";
cin>>beg->dest;
beg->link=NULL;
for(int a=1;a<nadj;a++)
{
end=new(adjnode);
cout<<"enter destination: ";
cin>>end->dest;
fflush(stdin);
end->link=NULL;
beg->link=end;
beg=end;
}
}
}
void findnode()
{ int flag=0;
char ch;
node1 *ptr;
ptr=start;
cout<<"enter the node to be found: ";
cin>>ch;
fflush(stdin);
while(ptr!=NULL)
{
if(ch==ptr->data)
{
flag=1;
break;
}
ptr=ptr->next;
}
if(flag==1)
{
cout<<"yes the item is present";
}
else{
cout<<"unsuccessful search";
}
}

void insertnode()
{
node1 *ptr;
ptr=new(node1);
cout<<"enter data: ";
cin>>ptr->data;
ptr->next=NULL;
last->next=ptr;
last=ptr;
enteradj(ptr);
}
void deletenode()
{ node1 *ptr,*save;
char dlt;
int flag=0;
cout<<"enter data to be deleted: ";
cin>>dlt;
ptr=start;
if(dlt==ptr->data)
{
start=start->next;
delete ptr;
}
else
{ptr=start->next;
save=start;
while(ptr!=NULL)
{
if(ptr->data==dlt)
{flag=1;
save->next=ptr->next;
delete ptr;
}
else
{
save=ptr;
ptr=ptr->next;
}
}
}
if(flag==0)
{
cout<<"unsuccessful";
}
}
int gra()
{
int n;
cout<<"enter n: ";
cin>>n;
first=new(node1);
cout<<"enter the first data: ";
cin>>first->data;
first->next=NULL;
start=first;
fflush(stdin);
enteradj(first);

for(int b=1;b<n;b++)
{
last=new(node1);
cout<<"enter the data of node: ";
cin>>last->data;
fflush(stdin);
enteradj(last);
last->next=NULL;
first->next=last;
first=last;
}
int choice;

do
{
cout<<"enter 1 to insert a node";
cout<<"\n 2 to delete a node containing particular data";
cout<<"\n 3 to find a node";
cout<<"\n 0 to exit";
cin>>choice;
switch(choice)
{
case 1: insertnode();
break;
case 2: deletenode();
break;
case 3: findnode();
break;
}
}while(choice!=0);
return 0;
}
