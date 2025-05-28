#include <iostream>
using namespace std;
int main (){
	int a,b;
	cin>>a;
	cin>>b;
	while(a>0 && b>0){
	if(a>b) a%=b;
	else 	b%=a;
	}
	cout<<a+b;
	return 0;
}
