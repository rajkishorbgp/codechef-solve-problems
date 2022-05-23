/*
                                    Problem Code: CCISLAND

Suppose Chef is stuck on an island and currently he has x units of 
food supply and y units of water supply in total that he could collect from the island. 
He needs xr units of food supply and yr units of water supply per day at the minimal to have 
sufficient energy to build a boat from the woods and also to live for another day. 
Assuming it takes exactly D days to build the boat and reach the shore, 
tell whether Chef has the sufficient amount of supplies to be able to reach the shore by building the boat?

_______Input:_______
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, five integers x,y,xr,yr,D.

_______Output:_______
For each testcase, output in a single line answer "YES" if Chef can reach 
the shore by building the boat and "NO" if not (without quotes).                             
                                                                                        */

#include<stdio.h>
int main()
{
   int T,x,y,xr,yr;
   scanf("%d",&T);
   int i,f,w,m[T],D[T];
   for ( i =0; i<T; i++)
   {
	  scanf("%d %d %d %d %d",&x,&y,&xr,&yr,&D[i]);
      f=x/xr;
	   w=y/yr;
      if (f<w)
      {
         m[i]=f;
      }
      else
      {
         m[i]=w;
      }  
   }
   for ( i = 0; i <T; i++)
   {
      if (m[i]>=D[i])
      {
	   printf("YES\n");
      }
      else
      {
	   printf("NO\n");
      }  
   }
	return 0;
}