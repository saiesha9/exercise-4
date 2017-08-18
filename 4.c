#include<stdio.h>

void asc(int a[], int n);
void desc(int a[], int n);

int main()
{
int a[10], n, i;
printf("enter the size of an array\n");
scanf("%d", &n);

printf("enter the array elements\n");
for(i=0; i<n; i++)
scanf("%d", &a[i]);

asc(a,n);
desc(a,n);

return 0;
//printf("the array in descending order is: \n",d);

}

void asc(int a[], int n)
{
int i,j,temp;
for(i=0; i<n; i++)
//{
//	for(j=i+1; j<n; j++)
{
	if(a[i]>a[i+1])
{
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
}
}

printf("Numbers in ascending order:\n");
for(i=0; i<n; i++)
printf("%d\n", a[i]);
}

void desc(int a[], int n)
{
int i,j,temp;
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
printf("Numbers in descending order:\n");
for(i=0; i<n; i++)
printf("%d\n",a[i]);
}






















