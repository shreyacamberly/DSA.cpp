#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin>>n;

	int i=1,sum;
	do{
          if (n% i == 0) {
            sum = sum + i;
          }
          i++;
        } 
		while (i < n);

		if(sum==n){
			cout<<n<<" is a perfect number";
		}
		else{
			cout<<n<<" is not a perfect number";
		}
}
