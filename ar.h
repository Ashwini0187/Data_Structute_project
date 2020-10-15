#include<iostream>
using namespace std;
void insert(int*,int,int);
void del(int*,int);
void show(int*);
void rev(int*);
void sort(int*);
void search(int*,int);
int size;
int ar()
{
int arr[20],ch,pos,ele,i;

cout<<"Enter the size of array: ";
cin>>size;

cout<<"\nEnter elements: ";
for(i=1;i<=size;i++)
{
cout<<"Arr["<<i<<"]: ";
cin>>arr[i];
}

do
{
cout<<"\n\n\nMaster Array program";
cout<<"\n1)Insert an element ";
cout<<"\n2)Delete an element ";
cout<<"\n3)Reverse the array ";
cout<<"\n4)Sort the array ";
cout<<"\n5)Search an element ";
cout<<"\n6)Show array ";
cout<<"\n0)Exit ";
cout<<"\n\nEnter choice: ";
cin>>ch;

switch(ch)
{
case 1:
{
cout<<"\nEnter the position : ";
cin>>pos;
cout<<"\nEnter the element to enter: ";
cin>>ele;

insert(arr,pos,ele);
}
break;
case 2:
{
show(arr);

cout<<"\n\nEnter the position to delete: ";
cin>>pos;

del(arr,pos);
show(arr);

}
break;
case 3:
{
rev(arr);
show(arr);
}
break;
case 4:
{
sort(arr);
show(arr);
}
break;
case 5:
{
cout<<"\n\nEnter the element to search for : ";
cin>>ele;

search(arr,ele);
}
break;
case 6: {
show(arr);
}
break;

case 0 : break;
default : cout<<"\n\nWrong choice...!!!!! ";
}
}while(ch!=0);
return 0;
}

void insert(int *arr,int pos,int ele)
{
int i;
for(i=size;i>=pos;i--)
{
arr[i+1]=arr[i];
}
arr[pos]=ele;
size=size+1;
}

void del(int *arr,int pos)
{ int i;
for(i=pos;i<=size;i++)
{
arr[i]=arr[i+1];
}
size=size-1;
}

void sort(int * arr)
{
int i,j,big=0;

for(i=1;i<=size;i++)
{
for(j=1;j<=size-i;j++)
{
if (arr[j]>arr[j+1])
{
big=arr[j];
arr[j]=arr[j+1];
arr[j+1]=big;
}
}
}
}

void search(int *arr,int ele)
{
int i,flag=0;
for(i=1;i<=size;i++)
{
if (arr[i]==ele)

{cout<<"\n\nElement found !!!!! at position number : "<<i;
flag=1;
}
}


if(flag==0)
{
cout<<"\n\nElement not found!!!! ";
}
}

void rev(int *arr)
{
int i,j,rev[25];

for(i=size,j=1;i>=1;i--,j++)
{
rev[j]=arr[i];
}

for(j=1;j<=size;j++)
{
arr[j]=rev[j];

}

cout<<"\n\nThe reversed array is : ";

for(j=1;j<=size;j++)
{
cout<<arr[j]<<" , ";
}

}

void show(int *arr)
{
int j;

cout<<"\n\nThe updated array is : ";
for(j=1;j<=size;j++)
{
cout<<arr[j]<<" , ";
}
}
