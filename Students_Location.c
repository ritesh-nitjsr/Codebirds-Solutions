/*
Solution of  **Student's Location**

Problem Statement:
In a class, students are sitting in a number of rows. However, there is a pattern in which the students are seated. In the first row, only one student is allowed to sit, in the second row, two students are allowed, in the third row three students are allowed, in the fourth row five students are allowed, and it goes on....

In general, 
No. of students in row i = No. of students in row (i-1) + No. of students in row (i-2) ; where i>2

The students enter the class roll number wise, and start sitting from the first row.
Eg:
1
2     3
4     5       6
7     8       9    10     11
12    13     14    15     16    17    18    19 

For 19 students sitting in above pattern, we define the location of a student as its row and column number. 
For student number 5, its row number is 3 and column number is 2.  
For student number 11, its row number is 4 and column number is 5.

Now given N roll numbers, print the row no. and column no.(separated by space),
for each roll number in a different line.
*/




//On careful obseervation, you'll see that number of students in each row correspond
//to the following series : 1, 2, 3, 5, 8, 13, 21 ..... Yeah you guessed it right.
//It's the fibonacci series. 


#include<stdio.h>

int main()
{
	int n,t;
	scanf("%d", &n);
	for(t=0; t<n; t++)
	{
		long long num, count, row, col, prev_row_count, row_count, temp;
		scanf("%lld", &num);

		if(num==1)
		{
			printf("%d %d\n", 1, 1);
			continue;
		}
		prev_row_count=1;
		row_count=2;
		count = 1;
		row = 2;

		while(1)
		{
			if(count + row_count >= num)
			{
				col = num - count;
				break;
			}

			row++;
			count = count + row_count;
			temp = row_count;
			row_count = row_count + prev_row_count;
			prev_row_count = temp;

		}

		printf("%lld %lld\n", row, col);


	}
}