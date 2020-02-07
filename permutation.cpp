#include<iostream>
using namespace std;

void permutation(char a[],int start,int end){
	static int i=0;
	if(start == end){
		cout<<++i<<" "<<a<<endl;
	}else{
		for(int i=start;i<=end;i++){
			swap(a[start],a[i]);
			permutation(a,start+1,end);
			swap(a[start],a[i]);
		}
	}
}

int main(){
		int n=0;
		cout<<"Enter The Number Of Characters : ";
		cin>>n;
		char a[n];
		
		for(int i=0;i<n;i++){
			a[i] = 'a'+i;
		}
		permutation(a,0,n-1);
		return 0;
}
