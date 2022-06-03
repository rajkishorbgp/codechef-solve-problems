/* 
                       ____________Problem Code: HARDBET_____________
      There are 3 problems in a contest namely A,B,C respectively. 
      Alice bets Bob that problem C is the hardest while Bob says that problem B will be the hardest.

      You are given three integers SA,SB,SC which denotes the number of successful submissions of the problems A,B,C respectively.
	  It is guaranteed that each problem has a different number of submissions. Determine who wins the bet.

        (1) If Alice wins the bet (i.e. problem C is the hardest), then output Alice.

        (2) If Bob wins the bet (i.e. problem B is the hardest), then output Bob.

        (3) If no one wins the bet (i.e. problem A is the hardest), then output Draw.

    Note: The hardest problem is the problem with the least number of successful submissions.

    _________Input Format________
    The first line of input contains a single integer T denoting the number of test cases. 
	The description of T test cases follows.
    The first and only line of each test case contains three space-separated integers SA,SB,SC, 
	denoting the number of successful submissions of problems A,B,C respectively.
    ________Output Format________
    For each test case, output the winner of the bet or print Draw in case no one wins the bet.
                                                                                                 */

#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int a,b,c;
cin>>a>>b>>c;
if(a < b && a < c){
cout<<"Draw"<<endl;
}else if(b < c){
cout<<"Bob"<<endl;
}else{
cout<<"Alice"<<endl;
}
}
return 0;
}