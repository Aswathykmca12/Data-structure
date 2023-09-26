#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],b[20],c[30],m,n,i,j,k=0;
	clrscr();
	printf("\n Enter the size of first array");
	scanf("%d",&m);
	printf("\n Enter the sorted elements of first array");
	for(i=0;i<m;i++)
		{
		scanf("%d",&a[i]);
		}
	printf("\n Enter the size of the second array");
	scanf("%d",&n);
	printf("\n Enter the sorted elements of the second array");
	for(i=0;i<n;i++)
		{
		scanf("%d",&b[i]);
		}
		i=j=k=0;
	while(i<m&&j<n)
	{
	if(a[i]<b[j])
		{
		c[k]=a[i];
		i++;
		}

	else
		{
		c[k]=b[j];
		j++;
		}
		k++;
		}
	if(i>=m)
		{
	while(j<n)
		{
		c[k]=b[j];
		j++;
		k++;
		}
		}
	if(j>=n)
		{
	while(i<m)
		{
		c[k]=a[i];
		i++;
		k++;
		}
		}
	printf("\n After merging the array is");
	for(i=0;i<m+n;i++)
		{
	printf("%d",c[i]);
		}
getch();
}
