#include<stdio.h>

int cmp_same(int a[50], int b[50],int n);

int main()
{
int a[50],b[50],n,i;
printf("enter size of an array\n");
scanf("%d", &n);

printf("enter 1st array elements: \n");
for(i=0; i<n; i++)
scanf("%d",&a[i]);

printf("enter 2nd array elements: \n");
for(i=0; i<n; i++)
scanf("%d",&b[i]);




if(cmp_same(a, b, n)==1)
printf("arrays are same\n");
else
printf("arrays are not same\n");
return 0;
}


int cmp_same(int a[50],int b[50],int n)
{
int i,c;
for(i=0; i<=n; i++)
{
if(a[i]!=b[i])

return 0;

return 1;
}
}
