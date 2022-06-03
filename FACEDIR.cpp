/*
	                   __________Problem Code: FACEDIR________
					   
    Chef is currently facing the north direction. Each second he rotates exactly 90 degrees in clockwise direction. 
	Find the direction in which Chef is facing after exactly X seconds.

    Note: There are only 4 directions: North, East, South, West (in clockwise order).

    ______Input Format______
    First line will contain T, number of testcases. Then the testcases follow.
    Each testcase contains of a single integer X.
    Output Format
    For each testcase, output the direction in which Chef is facing after exactly X seconds.
	                                                                                             */

#include <iostream>
#include <vector>
#define ll unsigned long long
#define pb push_back
using namespace std;

int main() {
    int t{};
    cin >> t;

    while(t--) {
        int s{};
        cin >> s;
        int x = s % 4;
        
        if(x == 0){
            cout << "North" << endl;
        } else if(x == 1){
            cout << "East" << endl;
        } else if(x == 2){
            cout << "South" << endl;
        } else{
            cout << "West" << endl;
        }
        
        
    }
}