/*
Solution of  **Yo trio**

Problem Statement:
You are given N numbers. For each number Z, find the count of numbers from 1 to Z, whose number of factors is 3.
*/


//Any number whose square root is prime, will have exactly 3 roots.

#include<stdio.h>
#include<math.h>

int a[1000100];//a[i] stores count of prime numbers from 1 to i.
int prime[1000010]; //prime[i] = 1,if i is a prime number; else 0

int main() {
  int i,j,k,n;


  //Seive of Eranthoses. It computes all prime numbers from 1 to 10^6
  for(i=1; i<=1000000; i++)
  {
    prime[i]=1;
  }
  prime[1]=0;
  for(i=2; i<=1000000; i++)
  {
    if(prime[i])
    {
      for(j = i*2; j<=1000000; j=j+i)
      {
        prime[j]=0;
      }
    }
  }



  for(i=2;i<=1000000;i++)
  {
    if(prime[i])
      a[i]=1;
    a[i]+=a[i-1];
  }
  long long x;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%lld",&x);
    printf("%d\n",a[(int)sqrt(x)]);
  }

  return 0;
}
