#include <iostream>
using namespace std;
int main(){
	int t;
	cout<<"2"<<endl;
	for(int i=3;i<100000;i+=2){
		t=3;
		while(i%t!=0) t+=2;
		if(i==t) cout<<i<<endl;
	
	}
	return 0;

}
