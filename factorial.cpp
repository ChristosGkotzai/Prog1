#include <iostream>
using namespace std;
int main(){
	int num,f=1;
	cout<<"Give a number"<<endl;
	cin>>num;	
	for(int i=1;i<=num;i++){
		f*=i;
	}
	cout<<"factorial of"<<num<<"is"<<f<<endl;

	return 0;
}
