// You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
//
// Input
//
// The only input line contains a string of n characters.
//
// Output
//
// Print one integer: the length of the longest repetition.
//
// Constraints
// 1≤n≤106
// Example
//
// Input:
// ATTCGGGA
//
// Output:
// 3
#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
   int len = str.length();
   int count,max;
     count = max = 0;
for(int i = 0 ; i<len ; i++ ){
           if(str[i] != str[i+1])
             {   count++;
                 if( max < count )
                        max = count;
                        count = 0;  }
        else
             count++;
      }
      cout<<max<<endl;
}
