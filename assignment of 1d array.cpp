// wap a program to input an array of n number of elements and display it
//#include<stdio.h>
//int main(){
//	int n;printf("enter number of elements in an array:");scanf("%d",&n);int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n;i++)
//	printf("elements of an array are:%d\n",a[i]);
//}
// wap to input an array of n number of elements and print it in reverse order
//# include<stdio.h>
//int main(){
//	int n;printf("enter the number of elements in an array:");scanf("%d",&n);int a[n];
//	for(int i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	printf("original array:");
//	for(int i=0;i<n;i++)
//	printf("%d\n",a[i]);
//	printf("reversed array");
//	for(int i=n-1;i>=0;i--)
//	printf("%d\n",a[i]);
//}
// wap to input an array of n number of elements and find the sum and average of elements of array
//# include<stdio.h>
//int main(){
//	int n;printf("enter the elements in an array:");scanf("%d",&n);int a[n];int sum=0;float avg=0;
//	for(int i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	for(int i=0;i<n;i++){
//	sum=sum+a[i];
//	avg=sum/n;}
//	printf("sum=%d\navg=%.2f",sum,avg);
//
//}
// wap to input an array of n number of elements and count total number of positives and negatives and zeroes in an array
//#include<stdio.h>
//int main(){
//	int t,p=0,n=0,zero=0;printf("enter number of elements in an array:");scanf("%d",&t);int a[t];
//	for(int i=0;i<t;i++)
//	scanf("%d",&a[i]);
//	for(int i=0;i<t;i++){
//		if(a[i]>0)
//		p=p+1;
//		else if(a[i]<0)
//		n=n+1;
//		else
//		zero=zero+1;}
//		
//	
//	printf("positive=%d,negative=%d,zero=%d",p,n,zero);
//}
// wap to input an array and print two different arrays one of even numbers and other of odd numbers
//# include<stdio.h>
//int main(){
//	int n,c1=0,c2=0;printf("enter the elements in an array:");scanf("%d",&n);int a[n],a1[n],a2[n];
//	for(int i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	for(int i=0;i<n;i++){
//		if(a[i]%2==0)
//		a1[c1++]=a[i];
//		else
//		a2[c2++]=a[i];
//	}
//	printf("original array:");
//	for(int i=0;i<n;i++)
//	printf("%d ",a[i]);printf("\narray of even number:");
//	for(int i=0;i<c1;i++)
//	printf("%d ",a1[i]);printf("\narray of odd numbers:");
//	for(int i=0;i<c2;i++)
//	printf("%d ",a2[i]);
//	}
//wap to input an array of n number of elements and find their standard deviation
//# include<stdio.h>
//# include<math.h>
//int main(){
//	int n,sum =0,sum1=0,mean;int var,sd;printf("enter the elements in an array:");scanf("%d",&n);int a[n];
//	for(int i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	for(int i=0;i<n;i++)
//	sum =sum+a[i];
//	mean=sum/n;
//	for(int i=0;i<n;i++){
//		sum1=sum1+pow((a[i]-mean),2);
//		}
//		var=sum1/n;
//		sd=sqrt(var);
//		printf("%d",sd);
//	}
// WAP to read the marks of 500 students of a course in computer programming and print
//the frequency of each score above 60.Do it using most efficient method you could
//taking minimum memory and minimum time
/*# include<stdio.h>
int main(){
	int n,c,k=0;printf("enter the number of students:");scanf("%d",&n);int a[n];int f[n];
	for(int i=0;i<n;i++){
	scanf("%d",&a[i]);f[i]=0;}
	for(int i=0;i<n;i++){
		c=a[i];
		if(f[i]==0){
			if(c>60){
		for(int j=i;j<n;j++){
				if(a[j]==c){
				k++;f[j]=-1;
			}}}
		printf("%d-%d\n",c,k);}k=0;
	}}*/
//wap to input an array and find the largest in that array
//#include<stdio.h>
//int main(){
//	int n;printf("enter the elements in an array:");scanf("%d",&n);int a[n];
//	for(int i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	for(int i=0;i<n-1;i++){
//		for(int j=0;j<n-1-i;j++){
//			if(a[j]>a[j+1]){
//				int temp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//			}
//		}
//	}printf("%d",a[n-1]);
//}
// wap to enter an array and find the smallest in that array
//# include<stdio.h>
//int main(){
//	int n;printf("enter the elements in an array");scanf("%d",&n);int a[n];
//	for(int i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	for(int i=0;i<n-1;i++){
//		for(int j=0;j<n-1-i;j++){
//			if(a[j]>a[j+1]){
//				int temp=a[j];
//				a[j]=a[j+1];a[j+1]=a[j];
//			}
//		}
//	}printf("smalest number is %d",a[0]);
//}
//wap to input an array and swap the largest and smallest in that array print that updated array
//#include<stdio.h>
//int main(){
//	int n,max,min,maxpos,minpos,temp;printf("enter the elemets in an array");scanf("%d",&n);int a[n];
//	for(int i=0;i<n;i++){
//	scanf("%d",&a[i]);}
//	max=a[0];
//	min=a[0];
//	maxpos=0;minpos=0;
//	for(int i=0;i<n;i++){
//		if(a[i]>max){
//			max=a[i];
//			maxpos=i;
//		}
//		if(a[i]<min){
//			min=a[i];
//			minpos=i;
//		}
//	}
//	temp=a[maxpos];
//	a[maxpos]=a[minpos];
//	a[minpos]=temp;
//	printf("after interchanging array:");
//	for(int i=0;i<n;i++)
//	printf("%d\n",a[i]);}
//wap to input an array and find the second largest and second smallest element in that array
/*# include<stdio.h>
int main(){
	int n,temp,count=0;printf("enter the number of elements in an array:");scanf("%d",&n);int a[n];for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
			for(int k=j;k<n-1;k++)
				a[k]=a[k+1];
				n--;j--;
			}
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]);temp=a[j];
			a[j]=a[j+1];
			a[j+1]=a[j];
		}
	}
	
	printf("second smallest element is %d\n",a[0]);
	printf("second largest element is %d",a[n-2]);
	}*/
// wap to input an array of n number of elements. input an element you want to search and find it. if found then print 
// the position of that element otherwise print not found
/*# include<stdio.h>
int main(){
	int n;printf("enter the size of array");scanf("%d",&n);int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int e;printf("enter element you want to search");scanf("%d",&e);
	for(int i=0;i<n;i++){
		if(a[i]==e){
		printf("element is found at %d",i+1);}
		}
	
	return 0;
}*/
// wacp to input an array of n number of elements and sort it in ascending order using bubble sort
/*# include<stdio.h>
int main(){
	int n;printf("enter size of an array:");scanf("%d",&n);int a[n],temp;
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}	}
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
		}
}*/
// wacp to input an array of n number of elements and sort it in descending order using bubble sort
/*# include<stdio.h>
int main(){
	int n,temp;printf("enter size of an array:");scanf("%d",&n);int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("original array:\n");
	for(int i=0;i<n;i++)
	printf("%d\n",a[i]);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
			temp=a[j];a[j]=a[j+1];a[j+1]=a[j];
		}}
	}
	printf("sorted array is:\n");
	for(int i=n-1;i>=0;i--)
	printf("%d",a[i]);
}*/
//wacp to input an array of n number of elements input an element you want to insert in that array
// along with the position and insert it. print final array after insertion.
/*# include<stdio.h>
int main(){
	int n,pos,e;printf("enter size of an array:");scanf("%d",&n);int a[n+1];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("enter the position of element: ");scanf("%d",&pos);printf("enter the element to be inserted:");
	scanf("%d",&e);
	for(int i=n;i>=pos;i--)
		a[i+1]=a[i];
		a[pos]=e;
	printf("updated array");
	for(int i=0;i<n+1;i++)
	printf("%d",a[i]);
	}*/
// write a c program to left rotate a given array by r number of rotations.right rotation
/*# include<stdio.h>
int main(){
	int n,k,r;printf("enter the number of elements in an array");scanf("%d",&n);int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);scanf("%d",&r);r=r%n;for(int p=1;p<=r;p++){k=a[n-1];
	for(int i=n-1;i>=0;i--)
	a[i]=a[i-1];
	a[0]=k;}
	for(int i=0;i<n;i++)
	printf("%d\n",a[i]);}*/	
//// left rotation	
//# include<stdio.h>
//int main(){
//	int n,k,r;printf("enter the number of elements in an array");scanf("%d",&n);int a[n];
//	for(int i=0;i<n;i++)
//	scanf("%d",&a[i]);scanf("%d",&r);r=r%n;for(int p=1;p<=r;p++){k=a[0];
//	for(int i=0;i<n;i++)
//	a[i]=a[i+1];
//	a[n-1]=k;}
//	for(int i=0;i<n;i++)
//	printf("%d\n",a[i]);}	
// wap to delete the duplicate elements
//# include<stdio.h>
//int main(){
//	int n ;printf("enter the number of elements in an array:");scanf("%d",&n);int a[n];for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			if(a[i]==a[j]){
//			for(int k=j;k<n-1;k++)
//				a[k]=a[k+1];
//				n--;j--;
//			}
//		}
//	}
//	for(int i=0;i<n;i++)
//	printf("%d ",a[i]);}
// wap to delete the first occurence
//# include<stdio.h>
//int main(){
//	int n;scanf("%d",&n);int a[n],e;
//	for(int i=0;i<n;i++)
//scanf("%d",&a[i]);
//scanf("%d",&e);
//for(int i=0;i<n;i++){
//	if(a[i]==e){
//		for(int j=i;j<n-1;j++)
//		a[j]=a[j+1];break;
//	}for(int i=0;i<n;i++)
//	printf("%d ",a[i]);
//}}
// wap to delete all occurences
//# include<stdio.h>
//int main(){
//	int n;scanf("%d",&n);
//	int a[n],e;scanf("%d",&e);
//	for(int i=0;i<n;i++){
//		if(a[i]==e){
//			for(int j=i;j<n-1;j++)
//			a[j]=a[j+1];
//			n--;i--;
//		}
//	}for(int i=0;i<n;i++)
//	printf("%d ",a[i]);
//}

