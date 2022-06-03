/*
                        _______Problem Code: BIGARRAY_______
    Chef is given two integers N,S.

    Consider an array A of size N such that A[i]=i for every 1≤i≤N.

    You are required to find any position x(1≤x≤N) such that :

    (A[1]+A[2]+...A[x−1])+(A[x+1]+A[x+2]+...A[N])=S
    If there are multiple such positions x, print any such position. If there is no such position, print −1.

    _______Input Format______
    First line will contain T, number of testcases. Then the testcases follow.
    Each testcase contains of a single line of input, two integers N,S.

    ______Output Format______
    For each testcase, output the required position or −1 in case there is no such position.
                                                                                                 */

#include <iostream>
using namespace std;
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
{
long long n,s;
cin>>n>>s;
long long x=(n*(n+1))/2-s;
if(x>=1 and x<=n)
cout<<x<<endl;
else
cout<<"-1"<<endl;
}
return 0;
}
