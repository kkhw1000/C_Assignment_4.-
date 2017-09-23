#include<stdio.h>


int main()
{
int a[10][10], T[10][10], r,c,i,j;

printf("Enter columns and rows of matrix:");
scanf("%d %d",&c,&r);

for(i=0; i<c;++i)
{
	for(j=0;j<r;++j)
	{
	 printf("Enter element a%d%d= ", i+1,j+1);
	 scanf("%d", &a[i][j]);
	}
}

printf("\n");




for(i=0; i<c;++i)
{
	for(j=0;j<r;++j)
	{
	 printf("a%d%d= %d\t", i+1,j+1,a[i][j]);
	
	}
printf("\n");
}



//=============================================================Trans

for(i=0; i<c;++i)
{
	for(j=0;j<r;++j)   T[j][i]=a[i][j];
	
}



printf("\nTranspose of matrix\n");


for(i=0; i<r;++i)
{
	for(j=0;j<c;++j)
	{
	 printf("a%d%d= %d\t", i+1,j+1,T[i][j]);
	
	}
printf("\n");
}











return 0;
}