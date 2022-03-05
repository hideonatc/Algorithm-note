#include<iostream>
#include<set>
using namespace std;
void happy(int n){
	set<int> s;
	while(n!=1){
		int k=0;
		while(n>0){
			k+=(n%10)*(n%10);
			n/=10;
		}
		n=k;
		if(s.find(n)){
			printf("Not Happy\n");
			return;
		}
		s.insert(n);
	}
	printf("Happy\n");
	return;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		happy(n);
	}
}
