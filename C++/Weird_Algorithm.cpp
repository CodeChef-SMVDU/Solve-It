// You are given a matrix a of size n×m consisting of integers.
//
// You can choose no more than ⌊m2⌋ elements in each row. Your task is to choose these elements in such a way that their sum is divisible by k and this sum is the maximum.
//
// In other words, you can choose no more than a half (rounded down) of elements in each row, you have to find the maximum sum of these elements divisible by k.
//
// Note that you can choose zero elements (and the sum of such set is 0).
//
// Input
// The first line of the input contains three integers n, m and k (1≤n,m,k≤70) — the number of rows in the matrix, the number of columns in the matrix and the value of k. The next n lines contain m elements each, where the j-th element of the i-th row is ai,j (1≤ai,j≤70).
//
// Output
// Print one integer — the maximum sum divisible by k you can obtain.
//
// Examples
// input
// 3 4 3
// 1 2 3 4
// 5 2 2 2
// 7 1 1 4
// output
// 24
// input
// 5 5 4
// 1 2 4 2 1
// 3 5 1 2 4
// 1 5 7 1 2
// 3 8 7 1 2
// 8 4 7 1 6
// output
// 56
//
// Note
// In the first example, the optimal answer is 2 and 4 in the first row, 5 and 2 in the second row and 7 and 4 in the third row. The total sum is 2+4+5+2+7+4=24.

#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
   while( num!= 1 && num > 1)
      {  if( num % 2  != 0)
                 { cout<<num<<" ";
                    num = num * 3 + 1 ;}
            else {
                  cout<<num<<" ";
                    num/=2;
            }
      }
      cout<<"1"<<endl;

}
