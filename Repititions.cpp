Your task is to find the longest repetition in the sequence.
This is a maximum-length substring containing only one type of character.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string inputString; //Input String
	cin >> inputString;

	//2 pointers are used to mark starting and ending of longest substrings containing only one type of character.

	int ptr1=0;
	int ptr2=0;

	int maxLength=0;
	int currentLength; // This will store maximum length of each substring with only one type of character

	while(ptr1<inputString.length()){
		ptr2=ptr1;
		currentLength=0;
		while(inputString[ptr1]==inputString[ptr2]){
			ptr2++;
			currentLength++;
			if(ptr2>=inputString.length())break;
		}

		maxLength=max(maxLength,currentLength);
		ptr1=ptr2;
	}

	cout << maxLength << endl;

	return 0;
} 