/*
                            Problem Code: LAZYCHF
Chef is a very lazy person. Whatever work is supposed to be finished in x units of time, 
he finishes it in m∗x units of time. But there is always a limit to laziness, 
so he delays the work by at max d units of time. 
Given x,m,d, find the maximum time taken by Chef to complete the work.

________Input:_________
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains a single line of input, three integers x,m,d.

________Output:________
For each testcase, output in a single line answer to the problem.

*/

#include<stdio.h>
int main()
{
	int t,x,i,m,d;
	scanf("%d",&t);
	int min[t];
	for (i =0; i <t; i++)
	{
		scanf("%d%d%d",&x,&m,&d);
	    if ((m*x)>(x+d))
	     {
		    min[i]=x+d;
	     }
	    else
	     {
	     	min[i]=m*x;
	     }
	}
	for ( i = 0; i <t; i++)
	{
		printf("%d\n",min[i]);
	}
	return 0;
}