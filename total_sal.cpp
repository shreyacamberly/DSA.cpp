#include<iostream>
#include<cmath>
using namespace std;

int main() {
	
	int basic,allow;
	char grade;
	float total;
	cin>>basic>>grade;

	float hra=basic*(0.2);
	float da=basic*(0.5);
	float pf=basic*(0.11);

	if(grade=='A'){
		allow=1700;
	}
	else if(grade=='B'){
		allow=1500;
        }
	else {
            allow = 1300;
        }

    total=basic+hra+da+allow-pf;
	int ans=round(total);
	cout<<ans;

}
