//c program to find sum through pointers
//#include<stdio.h>
//int sum(int*,int*);
//int main(){
//    int a,b;
//    printf("Enter the Numbers:");
//    scanf("%d %d",&a,&b);
//    int *p=&a;
//    int *q=&b;
//    printf("Sum=%d",sum(p,q));
//}
//int sum(int* p, int* q){
//    int s=*p+*q;
//    return (s);
//}
//swapping through pointers
//#include<stdio.h>
//void swap(int*,int*);
//int main(){
//    int a,b;
//    printf("Enter the Numbers:");
//    scanf("%d %d",&a,&b);
//    int *p=&a;
//    int *q=&b;
//    swap(p,q);
//
//    printf("Swapped Numbers:%d %d",a,b);
//}
//void swap(int* p, int* q){
//    int temp=*p;
//    *p=*q;
//    *q=temp;
//}
//pointer to array
//#include<stdio.h>
//int main(){
//    int N;
//    printf("Enter the size of Array:");
//    scanf("%d",&N);
//    int a[N];
//    printf("Enter the Array:");
//    for(int i=0;i<N;i++){
//        scanf("%d",&a[i]);
//    }
//    int* p=a;
//    for(int i=0;i<N;i++){
//        printf("%d ",*p);
//        p++;
//    }
//    return 0;
//}
//#include<stdio.h>
//int main(){
//    int N;
//    printf("Enter the size of Array:");
//    scanf("%d",&N);
//    int a[N],b[N];
//    printf("Enter the array A:");
//    for(int i=0;i<N;i++){
//        scanf("%d",&a[i]);
//    }
//    printf("Enter the array B:");
//    for(int i=0;i<N;i++){
//        scanf("%d",&b[i]);
//    }
//    int *p=a;int *q=b;
//    for(int i=0;i<N;i++){
//        int temp=*p;
//        *p=*q;
//        *q=temp;
//        p++;q++;
//    }
//
//    printf("A:");
//    for(int i=0;i<N;i++){
//        printf("%4d ",a[i]);
//    }
//    printf("\nB:");
//    for(int i=0;i<N;i++){
//        printf("%4d ",b[i]);
//    }
//    return 0;
//reverse array through pointers
//#include<stdio.h>
//void rev(int N,int* p){
//    for(int i=0;i<N/2;i++){
//        int temp=p[i];
//        p[i]=p[N-1-i];
//        p[N-1-i]=temp;
//    }
//}
//int main(){
//    int N;
//    printf("Enter the size of Array:");
//    scanf("%d",&N);
//    int a[N];
//    printf("Array:");
//    for(int i=0;i<N;i++){
//        scanf("%d",&a[i]);
//    }
//    int* p=a;
//    rev(N,p);
//    printf("Reveresed Array:");
//    for(int i=0;i<N;i++){
//        printf("%d ",a[i]);
//    }
//}
//searching through pointers
//#include<stdio.h>
//int main(){
//    int N;
//    printf("Enter the size of Array:");
//    scanf("%d",&N);
//    int a[N];
//    printf("Enter the Array:");
//    for(int i=0;i<N;i++){
//        scanf("%d",&a[i]);
//    }
//    int *p=a;
//    int ele;
//    printf("Search for element:");
//    scanf("%d",&ele);
//    int k=0;
//    for(int i=0;i<N;i++){
//        if(ele==*p){
//            k=i;
//            break;
//        }
//        p++;
//    }
//    printf("Element is on the index:%d",k);
//    return 0;
//}
//printing array through pointers
//#include<stdio.h>
//int main(){
//    int N;
//    printf("Enter the Size of Array:");
//    scanf("%d",&N);
//    int a[N];
//    printf("Enter the Array:");
//    for(int i=0;i<N;i++){
//        scanf("%d",&a[i]);
//    }
//    int* p=a;
//    printf("So Entered Array is:");
//    for(int i=0;i<N;i++){
//        printf("%d ",p[i]);
//    }
//    return 0;
//}
