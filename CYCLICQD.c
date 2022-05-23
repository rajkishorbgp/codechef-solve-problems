/*
                                   Problem Code: CYCLICQD
You are given the sizes of angles of a simple quadrilateral (in degrees) A, B, C and D,
 in some order along its perimeter. Determine whether the quadrilateral is cyclic.

Note: A quadrilateral is cyclic if and only if the sum of opposite angles is 180∘.

______Input_________________________
The first line of the input contains a single integer T denoting the number of test cases.
The description of T test cases follows.
The first and only line of each test case contains four space-separated integers A, B, C and D.

______Output_________________________
Print a single line containing the string "YES" if the given quadrilateral is cyclic or "NO" 
if it is not (without quotes).
You may print each character of the string in uppercase or lowercase (for example, 
the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).
  
                                                                                     */

#include<stdio.h>
int main()
{
	int t,a,b,c,d;
    scanf("%d",&t);
	int d1[t],d2[t],i;
	for ( i = 0; i <t; i++)
	{
		scanf("%d%d%d%d",&a,&b,&c,&d);
	    d1[i]=a+c;
		d2[i]=b+d;
	}
    for ( i = 0; i <t; i++)
	{
		if (d1[i]==180 && d2[i]==180)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
	return 0;
}