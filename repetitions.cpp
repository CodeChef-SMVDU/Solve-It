/*problem statement:You are given a DNA sequence: a string consisting of characters A, C, G, and T. 
The task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	string input;
	cin>>input;//taking string input
	int count=1,length=input.size(),max_length=1;//maxlength is our answer 
	if(length==0){
		cout<<"0"<<endl;//corner case to check if string is provided or not
		return 0;
	}
	else{
		for(int i=1;i<length;i++){
			if(input[i]==input[i-1]){
				count++;
				if(count>max_length) max_length=count;//updates max_length if larger substring of same characters are found.
			}
			else{
				count=1;
			}
		}
		cout<<max_length<<endl;
		return 0;
	}
}
