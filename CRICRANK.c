/*     
                               Problem Code: CRICRANK
   In a season, each player has three statistics: 
   runs, wickets, and catches. Given the season stats of two players A and B,
   denoted by R, W, and C respectively, the person who is better than the other in the most 
   statistics is regarded as the better overall player. Tell who is better amongst A and B.
   It is known that in each statistic, the players have different values.

   *Input Format____________
    
	The first line contains an integer T, the number of test cases. 
	Then the test cases follow.
    Each test case contains two lines of input.
    The first line contains three integers R1, W1, C1, the stats for player A.
    The second line contains three integers R2, W2, C2, the stats for player B.

	Output Format
        For each test case, output in a single line "A" (without quotes) if player A is better 
        than player B and "B" (without quotes) otherwise.
                                                                                     */

#include<stdio.h>
void main()
{
	int t,r1,w1,c1,r2,w2,c2;
    scanf("%d",&t);
	int i,s[t];
	for ( i = 0; i <t; i++)
	{
		scanf("%d%d%d%d%d%d",&r1,&w1,&c1,&r2,&w2,&c2);
	    if ( r1>r2&&w1>w2 || w1>w2&&c1>c2 || r1>r2&&c1>c2 )
		{
			s[i]=1;
		}
		else
		{
			s[i]=0;
		}
	}
	for ( i = 0; i <t; i++)
	{
		if (s[i]==1)
		{
			printf("A\n");
		}
		else
		{
			printf("B\n");
		}
	}
}