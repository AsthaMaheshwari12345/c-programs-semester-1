//c program to check even number 
//#include <stdio.h>
//
//int main()
//{  
//    int n,a,i,b=0;
//    scanf("%d",&n);
//    for (i=1;i<=n;i++)
//   { a=n%i;
//    if(a==0)
//    b++;
//   }
//if (b==2)
//printf("prime");
//else 
//printf("no prime ");
//
//    
//    
//
//    return 0;
//}
//c program to chech strong number
//#include <stdio.h>
//
//int main()
//{
//   int n,r,i,sum=0;
//   scanf("%d",&n);
//   int temp=n;
//   while(n) {
//   r=n%10;
//   int fact=1;
//   for(  i=1; i<=r;i++)
//   {
//       fact=fact*i;
//   }
//   sum = sum +fact;
//   n=n/10;
//   }
//   if (temp==sum)
//   printf("strong");
//   else
//   printf("not strong");
//   
//   
//    return 0;
//c program to print natural number in reerse order
//#include <stdio.h>
//
//int main()
//{
//   int i,n;
//   scanf("%d",&n);
//   for (i=n;i>=1;--i)
//   printf("%d ",i);
//
//    return 0;
//}
//c program to print factorial of number
//#include <stdio.h>
//
//int main()
//{
//   int n,r,i,fact=1;
//   scanf("%d",&n);
//   r=n%10;
//   for(i=1; i<=n;i++)
//   {
//       fact=fact*i;
//   }
//   printf("%d",fact);
//    return 0;
//}
//c program to check armstrong number
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    int n,r,s=0;
//    
//    scanf("%d",&n);
//   int temp=n,l=(log10(n)+1);
//    while (n)
//    {
//        r=n%10;
//        s=s+pow(r,l);
//        n=n/10;
//    }
//    
//       if (temp==s)
//       printf("armstrong");
//       else
//       printf("not a armstrong");
//    
//
//    return 0;
//}
//
//c program to find sum of digits of a number 
//#include <stdio.h>
//
//int main()
//{
//    int n,r,s=0;
//    scanf("%d",&n);
//    while (n)
//    {
//        r=n%10;
//        s=s+r;
//        n=n/10;
//    }
//        printf("%d",s);
//    
//    
//
//    return 0;
//}
//c program to check a number is even or odd
//#include <stdio.h>
//
//int main()
//{
//    int a;
//
//
//    
//    scanf("%d", &a);
//
//    if(a & 1)
//    {
//        printf("%d is odd.", a);
//    }
//    else
//    {
//        printf("%d is even.", a);
//    }
//
//    return 0;
//}
//c program to print the table of a number
//#include <stdio.h>
//int main()
//{
//
//int n,i;
//    scanf("%d",&n);
//    for (i=1; i<=10;i++)
//    {
//        printf("%dx%d=%d\n",n,i,(n*i));
//        
//        
//    }
//    return 0 ;
//}
//c program to print star pattern
//#include <stdio.h>
//void main()
//{
//   int i,j,rows;
//
//   printf("Input number of rows : ");
//   scanf("%d",&rows);
//   for(i=1;i<=rows;i++)
//   {
//	for(j=1;j<=i;j++)
//	   printf("%d",i);
//	printf("\n");
//   }
//}
//c program to check whether given number is positive, negative or zero
//#include <stdio.h>
//
//int main()
//{
//  int a;
//  scanf("%d",&a);
//  if(a>=0)
//  {
//      if(a>0)
//      printf("%d is  positive",a);
//      else
//      printf("%d is zero",a);
//  }
//  else 
//  printf("%d is negative",a);
//
//    return 0;
//}
//c print maximum of three numbers
//#include <stdio.h>
//
//int main()
//{
//    int a,b,c;
//   scanf("%d%d%d",&a,&b,&c);
//   if(a>b)
//   {
//   if(a>c)
//   printf("%d is maximum",a);
//   else
//   printf("%d is maximum",c);
//   }
//   else// (b>a)
//    {
//   if(b>c)
//   printf("%d is maximum",b);
//   else
//   printf("%d is maximum",c);
//   }
//    return 0;
//}
//c program to chech given number is divisible by 3 or 11
//#include <stdio.h>
//
//int main()
//{
//    int a;
//    scanf("%d",&a);
//    if(a%5==0 && a%11==0)
//    printf("%d is  divisible by 5 and 11",a);
//    else 
//    printf("%d is not divisible by 5 and 11",a);
//
//    return 0;
//}
//c program to print stars
//#include <stdio.h>
//
//int main(){
//int i,j;
//
//    for (i=1;i<=3;i++)
//    {
//        for (j=1;j<=3;j++)
//        printf("* ");
//
//    printf("\n");
//}
//
//    return 0;
//}
//
//comparison between two numbers
//#include <stdio.h>
//
//int main()
//{
//  int a,b;
//  printf("which number is greater=\n");
//
//  
//  scanf("%d%d",&a,&b);
//    printf("a=%d\n",a);
//  printf("b=%d\n",b);
//
// 
//  if (a>b)
//  printf("a is greater");
//  else 
//  printf("b is greater");
//  
//
//    return 0;
//}
//change into farenheit
//#include <stdio.h>
//
//int main() {
//    float F,C;
//    printf("celcius=\n");
//    scanf("%f",&C);
//    F=(((C*9)/5)+32) ;
//    printf("farhenite=%f",F);
//    return 0;
//}
//
