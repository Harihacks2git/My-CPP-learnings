#include<stdio.h>
int determinant(int n,int a[n][n])
{
	if(n == 1)
		return a[0][0];
	else
	{
		int j,sum=0;
		for(j=0;j<n;j++)
		{
			int co=(j%2 == 0)?a[0][j]:-a[0][j];// to specify the sign of the cofactor
			int temp[n-1][n-1];
			int k,l;
			// to copy elements of minor matrix to a new temp matrix which is used to pass to the function recursively
			for(k=1;k<n;k++)
			{
				int x=0;//index value for column of temp array
				for(l=0;l<n;l++)
				{
					if(l!=j)
					temp[k-1][x++] = a[k][l];
				}
			}
			sum += co*determinant(n-1,temp);
		}
		return sum;
	}
}
int main()
{
	int n;
	printf("\n Enter the dimension of the square matrix : ");
	scanf("%d",&n);
	int mat[n][n];
	int i,j;
	printf("\n Enter the values of the matrix :\n");
	for(i=0;i<n;i++)
	{
		printf("\n Enter the values of row %d : \n",i+1);
		for(j=0;j<n;j++)
		scanf("%d",&mat[i][j]);
	}
	printf("\n The matrix is : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d  ",mat[i][j]);
		printf("\n");
	}
	printf("\n Determinant is : %d",determinant(n,mat));
}
