#include<iostream>
using namespace std;

int main() {
	char ip;
	cin>>ip;

	if(ip>='A'&&ip<='Z'){
		cout<<"1";
	}
	else if (ip>='a'&&ip<='z'){
		cout<<"0";
	}
	else{
		cout<<"-1";
	}
}
