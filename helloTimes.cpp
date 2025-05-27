#include <iostream>
using namespace std;
void hello(){
	cout << "hello" <<endl;
}
int main(){
	int num;
	cout <<"Give a num to print the hello"<<endl;
	cin >>num;
	for(int i=0;i<num;i++){
		hello();		
	}
	return 0;
}
