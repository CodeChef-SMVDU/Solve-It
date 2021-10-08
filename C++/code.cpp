/*code by Dhatrish AVS for weird Algorithm*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;//taking input
	while(n>1){ 
		cout<<n<<" ";//printing values
		if(n&1){
			n=(3*n)+1;//for odd case
		}
		else{
			n=n/2;//for even case
		}
	}
	cout<<endl;
	return 0;
}
