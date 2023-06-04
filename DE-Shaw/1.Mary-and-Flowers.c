/*
Problem Statement
One day Mary wanted to give a present to her friend, and she decided to give her a beautiful bouquet of flowers, she started collecting the flowers for the bouquet, she exactly needed 2 types of flowers. The total number of flowers should be ‘t’. Now she starts collecting it from her garden. In her garden, there are ‘N’ types of flowers, and each type of flower are arranged in a queue in non-decreasing order, e.g. 1, 3, 6, 15 and so on. Now she wants your help to find which indexes of flowers she should collect.

Input Format
Each test case consists of two lines. The first one contains integers N and t — N is the total types of flowers and t is the total number of flowers needed.
The second line contains n integers a1,a2,…,an — elements of the a array.

Output Format
Print a single line containing the indexes of flowers.

Constraints
2 <= N <= 10^4
1 <= a[i] <= 1000
2 <= t <= 2000
here is exactly one solution exist.

Sample Testcase 0
Testcase Input
5 2
1 1 2 3 4
Testcase Output
0 1
Explanation
Flowers at 0th and 1st indexes sum up to the target only i.e. 1 + 1 = 2.

Sample Testcase 1
Testcase Input
7 5
1 2 2 4 5 7 10
Testcase Output
0 3
Explanation
Flowers at 0th and 3rd indexes sum up to the target only i.e. 1 + 4 = 5 .
*/
#include <stdio.h>
int main() {

    int N,t;
    scanf("%d %d",&N,&t);
    int a[N],i=0;
    while(i<N){
      scanf("%d",&a[i]);
      i++;
    }
    for(i = 0; i < N;i++){
      for(int j = i+1; j!=i && j<N;j++){
        if(a[i] + a[j] == t){
          printf("%d %d\n",i,j);
        }
      }
    }
    return 0;
}