#include<iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;

	int i=2;
	bool isprime=true;	
	while(i<n){
		if(n%i==0){
			isprime=false;
			cout<<i<<" ";
			i++;
                }
		else{
                i++;
                }
        }
		if(isprime){
			cout<<"-1"<<endl;
		}
	
}
