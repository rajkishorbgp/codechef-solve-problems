/*                                Problem Code: REPEAT
        Chef has an array consisting of N+K−1 integers. 
        The array contains only the first N positive odd numbers. 
        Each number appears exactly once, except for one number which appears exactly K times.
        The sum of integers in Chef's array is equal to S.

        For example, for N=3, K=2, the possible arrays could be [1,1,3,5], [3,1,3,5], [5,3,5,1]. 
		For N=1, K=3, there is only one possible array: [1,1,1].

        Chef gives you three integers N, K and S and asks you to find the only element which appears K times in his array.

        It is guaranteed that for the given input, 
		there exists a valid array consisting of N+K−1 elements with a sum exactly equal to S.

		________Input Format_______

        The first line of the input contains a single integer T denoting the number of test cases. 
        The description of T test cases follows.
        The first and only line of each test case contains three space-separated integers N,K,S.

	    _______Output Format_______
        For each test case, print a single line containing the integer which appeared K times in Chef's array.

                                                                                                 */
																								
#include <iostream>
using namespace std;

int main() {
	long long T,N,K,S;
	cin>>T;
	while(T--){
	    cin>>N>>K>>S;
	    int x=1;
	    while(N--){
	        S-=x;
	        x+=2;
	    }
	    x=1;
	    while(x*(K-1)!=S){
	        x+=2;
	    }
	    cout<<x<<"\n";
	}
}