/**
 ######## ALPHA GO ########

 Description:

 There are N stones in a bag, numbered from 1 to N. There are two prime numbers
 (including 1) x and y in the bag such that:

 All the stones numbered with a multiple of X are white in color;
 All the stones numbered with a multiple of Y are black in color;
 All the stones numbered with a multiple of (X*Y) are green in color;
 Rest of the stones are yellow in color;

 You play the game ALPHA_GO in which there are two teams such that:

 Team 1 can have only black and yellow stones;
 Team 2 can have only white and yellow stones;

 To play the game team 1 and team 2 must have initially S1 and S2 number of stones respectively;

 Write a program to return the minimum number of stones required to play the game.


 Input:

 input1: S1, the number of stones team1 should initially must have to play the game;
 input2: S2, the number of stones team2 should initially must have to play the game; 
 input3: X, first prime number;
 input4: Y, second prime number;


 Output:

 output should be the minimum number of stones that is required to play the game. i.e N;


 Case1: 
 {

 Input:
 {

 input1: 3;
 input2: 1;
 input3: 2;
 input4: 3;

 }

 Output: 5;

 Explanation:
 { 

 White stones are numbered with a multiple of 2(i.e 1,2,4,6,8,...);
 Black stones are numbered with a multiple of 3(i.e 1,3,6,9,...);
 Green balls are numbered with a multiple of 2*3(=6)(i.e 1,6,12,18,...);
 Yellow stones are numbered with rest of the numbers(i.e 5,7,11,13,..);

 Team1 can have only black and yellow stones(i.e 1,3,5,6,7,9,11,13);
 Team2 can have only white and yellow stones(i.e 1,2,4,5,7,8,...);

 To get minimum distinct number from 1 to N, following combinations are made:
 Team1 has 3(=S1) stones at start(i.e 1,3,5);
 Team2 has 1(=S2) stones at the start(i.e 2 or 4);

 The stone set will be {1,2,3,4,5}
 Hence total stones required are 5(=N).

 }

 }


 Case2:
 {

 Input:
 {

 input1: 1;
 input2: 3;
 input3: 2;
 input4: 3;

 }

 Output: 4;

 Explanation:
 { 

 White stones are numbered with a multiple of 2(i.e 1,2,4,6,8,...);
 Black stones are numbered with a multiple of 3(i.e 1,3,6,9,...);
 Green balls are numbered with a multiple of 2*3(=6)(i.e 1,6,12,18,...);
 Yellow stones are numbered with rest of the numbers(i.e 5,7,11,13,..);

 Team1 can have only black and yellow stones(i.e 1,3,5,6,7,9,11,13);
 Team2 can have only white and yellow stones(i.e 1,2,4,5,7,8,...);

 To get minimum distinct number from 1 to N, following combinations are made:
 Team1 has 1(=S1) stones at start(i.e 3);
 Team2 has 3(=S2) stones at the start(i.e 1,2,4);

 The stone set will be {1,2,3,4};
 Hence total stones required are 4(=N).

 }

 }
 **/

#include <iostream>
#include <algorithm>
#include <set>
#include <vector> 

int alpha_go(int s1, int s2, int x, int y) {
    int n;
    return n;
}
 int cmbnatn() {

 }

/****
int main() {

int n = alpha_go(s1, s2, x, y);
std::cout << n << std::endl;
return 0;
}
****/
