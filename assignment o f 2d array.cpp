// wacp to input a 2d array and print it in tabular form
/*# include<stdio.h>
int main(){
	int r,c;printf("enter the number of rows:");scanf("%d",&r);printf("enter number of columns:");scanf("%d",&c);int a[r][c];
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
}*/
// wacp to input a 2d array from user and find its sum and average
/*# include<stdio.h>
int main(){
	int r,c,sum=0,avg=0;printf("enter the number of rows:");scanf("%d",&r);printf("enter number of columns:");scanf("%d",&c);int a[r][c];
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
		sum = sum+a[i][j];
	}
	printf("sum is %d",sum);
	avg=sum/(r+c);
	printf("avg is %d",avg);
}*/
// wacp to input a 2d array user and find the sum of individual rows and columns
/*# include<stdio.h>
int main(){
	int r,c,sum=0;printf("enter number of rows:");scanf("%d",&r);printf("enter number of columns:");scanf("%d",&c);int a[r][c];
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
		sum=sum+a[i][j];
		printf(" %d\n",sum);sum=0;
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++)
		sum=sum+a[i][j];
		printf(" %d\n",sum);sum=0;
	}
}*/
// wacp to input a 2d array and print the boundary elements
/*# include<stdio.h>
int main(){
	int r,c;printf("enter the number of rows:");scanf("%d",&r);printf("enter number of columns:");scanf("%d",&c);int a[r][c];
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(i==0||j==0||i==r-1||j==c-1)
			printf("%d ",a[i][j]);
			else 
			printf("  ");}
			printf("\n");
		}}*/
//// wacp to input a 2d array and print its transpose
/*/*# include<stdio.h>
inint main(){
	int r,c;printf("enter the number of rows:");scanf("%d",&r);printf("enter number of columns:");scanf("%d",&c);int a[r][c];
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			a[i][j]=a[j][i];
		}}
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++)
			printf("%d",a[i][j]);
			printf("\n");
		}
}
// wacp to input a 2d array and the sum of its diagonal elements
# /*include<stdio.h>
int main(){
	int r,c;printf("enter the number of rows:");scanf("%d",&r);printf("enter number of columns:");scanf("%d",&c);int a[r][c],sum=0;
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(i==j)
			sum = sum+a[i][j];
					}}
					printf("%d",sum);}*/
// wacp to input a 2d array and print the diagonal elements in a tabular for
/*# include<stdio.h>
int main(){
	int r,c;printf("enter the number of rows:");scanf("%d",&r);printf("enter number of columns:");scanf("%d",&c);int a[r][c];
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(i==j)
			printf("%d ",a[i][j]);
			else
			printf("  ");}
			printf("\n");
		}}*/
// wacp to take two 2d matrices from user and add them
/*# include<stdio.h>
int main(){
	int r,r1,c,c1;printf("enter number of rows of first matrix:");scanf("%d",&r);
	printf("enter number of columns of first matrix:");scanf("%d",&c);
	printf("enter number of rows of second matrix:");scanf("%d",&r1);
	printf("enter number of columns of second column:");scanf("%d",&c1);int a[r][c],a1[r1][c1],a2[20][20];
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	for(int i=0;i<r1;i++)
	for(int j=0;j<c1;j++)
	scanf("%d",&a1[i][j]);
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	a2[i][j]=a[i][j]+a1[i][j];
	for(int i=0;i<r;i++){
	
	for(int j=0;j<c;j++)
	printf("%d  ",a2[i][j]); printf("\n");}}*/
//wacp to check given matrix is identity or not
/*# include<stdio.h>
int main(){
	int r,c,p=0;printf("enter the number of rows:");scanf("%d",&r);printf("enter number of columns:");scanf("%d",&c);int a[r][c];
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	scanf("%d",&a[i][j]);
for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
		if((i==j&&a[i][j]==1)||(i!=j&&a[i][j]==0))
		p++;
			}}
if(p==1)
printf("given matrix is a identity matrix");
else
printf("given matrix is not an identity matix");}*/
// wacp to check it is a dense or sparse matrix
/*# include<stdio.h>
int main(){
	int r,c,zero=0,one=0;printf("enter number of rows:");scanf("%d",&r);printf("enter number of columns:");scanf("%d",&c);int a[r][c];
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(a[i][j]==0)
			zero++;
			else if(a[i][j]==1)
			one++;
		}
	}
	if(zero>one)
	printf("sparse matrix");
	else if(one>zero)
	printf("dense matrix");
	else
	printf("neither sparse nor dense");}*/
//wacp to print upper triangular matrix
/*# include<stdio.h>
int main(){
	int r,c;printf("enter the number of rows:");scanf("%d",&r);printf("enter number of columns:");scanf("%d",&c);int a[r][c];
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(i>=j)
			printf("%d ",a[i][j]);
			else
			printf(" ");}
			printf("\n");
		
	}for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(i<j)
			printf("%d ",a[i][j]);
			else
			printf(" ");}
			printf("\n");
	}}*/
// wacp to add two matrix
# include<stdio.h>
int main(){
	int r,c;printf("enter number of rows:");scanf("%d",&r);printf("enter number of columns:");scanf("%d",&c);int a[r][c],a1[r][c],a2[r][c];
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	scanf("%d",&a1[i][j]);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			a2[i][j]==a[i][j]+a1[i][j];
		}
	}
	for(int i=0;i<r;i++){
	for(int j=0;j<c;j++)
	printf("%d",a2[i][j]);
	printf("\n");
}}					

