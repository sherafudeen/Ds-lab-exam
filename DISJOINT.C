#include<stdio.h>
#include<stdlib.h>
void main()
{
 int arr[30],i,n,a,b,temp,arr1[30];
 char ch;
 clrscr();
printf("\n 1.CREATE");
printf("\n 2.UNION");
printf("\n 3.FIND");
printf("\n 4.EXIT");
while(1)
{
printf("\nEnter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1://CREATE SET
printf("Enter no. of elements in Set: ");
scanf("%d",&n);
printf("Enter elements in Set: ");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
{
arr[i]=i;
}
break;
case 2: //UNION-change all entries from arr[ a ] to arr[b].
printf("\nEnter the index of elements (2 indices) which are to be connected Union): \n");
scanf("%d %d", &a,&b);
temp=arr[a];
for(i=0;i<n;i++)
{
if(arr[i]==temp)
arr[i]=arr[b];
}
printf("\n element status after union \n");
for(i=0;i<n;i++)
{
printf("%d\t\t%d\n",arr1[i],arr[i]);
}
printf("\nElements have been successfully connected(Union Operation)\n");
break;
case 3://FIND- retums true if A and B are connected, else returns false
printf("\nEnter the index of elements (2 indices) whose connection is to be checked(Find Operation):\n");
scanf("%d %d",&a,&b);
if(arr[a]==arr[b])
{
printf("\nElements at indices %d & %d are connected\n",a,b);
}
else
{
printf("\nElements at indices %d & %d are not connected\n",a,b);
}
break;
case 4: //EXIT
exit(0);
break;
default:
printf("\n Wrong choice, please select a valid choice");
break;
}
}
}