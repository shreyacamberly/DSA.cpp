#include<iostream>
using namespace std;


int main(){

    int s,e,w;
	cin>>s>>e>>w;

	int i=s,c;
	while(i<=e){
		c=(i-32)*(5.0/9.0);
		cout<<i<<" "<<c<<endl;
		i=i+w;
	}
  
}
