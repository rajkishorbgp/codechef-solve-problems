/*                                    Problem Code: MAX_DIFF

    Chef prepared two dishes yesterday. Chef had assigned the tastiness T1 and T2 to the first and to the second dish respectively. 
	The tastiness of the dishes can be any integer between 0 and N (both inclusive).

    Unfortunately, Chef has forgotten the values of T1 and T2 that he had assigned to the dishes. However, 
	he remembers the sum of the tastiness of both the dishes - denoted by S.

    Chef wonders, what can be the maximum possible absolute difference between the tastiness of the two dishes. 
	Can you help the Chef in finding the maximum absolute difference?

    It is guaranteed that at least one pair {T1,T2} exist such that T1+T2=S,0≤T1,T2≤N.

    _________Input Format_______
    The first line of input contains a single integer T, denoting the number of testcases. 
	The description of the T testcases follows.
    The first and only line of each test case contains two space-separated integers N, S, denoting the 
	maximum tastiness and the sum of tastiness of the two dishes, respectively.

    ________Output Format_______
    For each testcase, output a single line containing the maximum absolute difference between the tastiness of the two dishes.
	                                                                                                                       */
																														  
#include <iostream>
#include <vector>
#define ll long long int
#define pb push_back
using namespace std;

int main() {
    int t{};
    cin >> t;

    while(t--) {
        int n{}, s{};
        cin >> n >> s;
        
        int ans{};
        if(s <= n) {
            ans = s;
        } else {
            ans = (n-s) + n;
        }
        cout << ans << endl;
    }
}