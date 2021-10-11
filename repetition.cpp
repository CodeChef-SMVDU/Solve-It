#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    int repetition=0, count = 1,i;
    cout<<"Enter the string: ";
    cin>>s;
    
    for(i=1; i<=s.length(); i++){
        if(s[i] == s[i-1])
            count = count + 1;
        if(repetition<count)
            repetition = count;
        else 
            count = 1;
    }
    cout<<repetition<<"\n";
}
