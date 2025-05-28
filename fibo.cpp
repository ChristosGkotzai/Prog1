#include <iostream>
using namespace std;
int main(){
	int prev=0,current=1,next,n;
	cin>>n;
	do{
	next=prev+current;
	prev=current;
	current=next;
	}while(current<=n);
	cout<<prev;
	return 0;
}
