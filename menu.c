#include <stdio.h>
#include <stdlib.h>
void menu();
void search();
void sort();
void insert();
void delete();
void display();
int choice,j,i=0,a[50],b[10],s;
void main()
{
printf(" Enter the size of array");
scanf("%d",&s);
printf("enter the elements ");
for (i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
menu();
}
void menu()
{
printf("\n1 insert");
printf("\n2 delete");
printf("\n3 sort");
printf("\n4 search");
printf("\n5 display");
printf("\n6 exit");
printf("\n enter ur choice");
scanf("%d",&choice);
switch(choice)
{
case 1: insert();
break;
case 2: delete();
break;
case 3: sort();
break;
case 4: search();
break;
case 5: display();
break;
case 6: exit(1);
}
}
void search()
{
int clc,loc;
printf("enter the element to be searched");
scanf("%d",&clc);
printf("element found at : ");
for(i=0;i<s;i++)
{
if(clc==a[i])
printf("%d",i+1);
}
menu();
}
void sort()
{
printf(" current array");
for(i=0;i<s;i++)
printf("%d \t",a[i]);
for(i=0;i<s;i++)
{
for(j=i+1;j<s;j++)
{
if(a[i]>a[j])
{
a[i]=a[i]+a[j];
a[j]=a[i]-a[j];
a[i]=a[i]-a[j];
}
}
}
printf("sorted array");
for(i=0;i<s;i++)
printf("%d \t",a[i]);
menu();
}
void insert()
{
int ele,loc;
printf("enter the location");
scanf("%d",&loc);
printf(" enter the element to be inserted :");
scanf("%d",&ele);
for(i=s;i>loc-1;i--)
a[i]=a[i-1];
a[loc-1]=ele;
printf("element inserted ");
printf("\n new array");
s++;
for(i=0;i<s;i++)
printf("\t%d",a[i]);
menu();
}
void delete()
{
int loc;
printf(" neter the locarion ");
scanf("%d",&loc);
for(i=loc-1;i<s-1;i++)
a[i]=a[i+1];
printf("\n element deleted");
printf("\n new array after deletion");
s--;
for(i=0;i<s;i++)
printf("%d\t",a[i]);
menu();
}
void display()
{
int i;
if(s==0)
{
printf(" no elemnt ");
return;
}
printf(" elements in array are");
for(i=0;i<s;i++)
printf("%d\t",a[i]);
menu();
}
