#include<iostream>
using namespace std;

void find_unique_2_number(int *a,int n){

	int first=0,second=0;
	int res=0,temp=0,i=0,j=0;
	for(i=0;i<n;i++){
		res^=a[i];
	}

	temp = res;

	while(temp){
		if(temp & 1){
			break;
		}
		j++;
	}

	for(i=0;i<n;i++){
		int k=a[i];
		k = k>>j;
		if(k & 1){
			first^= a[i];
		}
	}

	second = first^res;
	cout<<second<<" "<<first;
}

int main(){

	int arr[1000000];
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	find_unique_2_number(arr,n);
	cout<<endl;

	return 0;
}
