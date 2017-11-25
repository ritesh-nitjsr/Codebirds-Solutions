/*
Solution of **Lead Count**

Problem Statement:
Given an integer N, followed by N integers of an array.

Let, at index i, count1 be the sum of elements at odd indices from 0 to i. And count2 be the sum of elements at even indices from 0 to i. Find the number of indices i where count1 > count2.
*/
#include <stdio.h>

int main()
{
    int n, i, count1=0, count2=0, count=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        int x;
        scanf("%d", &x);
        if(i%2==0) count2 = count2 + x;
        else count1 = count1 + x;
        
        if(count1>count2) count++;
    }
    printf("%d", count);
    return 0;
}

