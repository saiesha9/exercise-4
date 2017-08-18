#include<stdio.h>

void three_max(int a[], int n);

void main()
{
int a[10],i,n;
printf("enter the size of array\n");
scanf("%d", &n);

printf("enter the elements\n");
for(i=0; i<n; i++)
scanf("%d", &a[i]);

three_max(a,n);

}

void three_max(int a[], int n)
{
int i,temp,j;
for(i=0; i<n; i++)
{
	for(j=i+1; j<n; j++)
{
	if(a[i]<a[j])
{
	temp=a[j];
	a[j]=a[i];
 	a[i]=temp;
}
}
}
for(i=0; i<=2; i++)
printf("First three max elements are %d\n", a[i]);
}
