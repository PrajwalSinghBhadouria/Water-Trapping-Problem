#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter size: ";
	cin>>n;
	int a[n];
	int i,j;
	cout<<"Enter element "<<endl;
	for(i=0; i<n ; i++){
		cin>>a[i];
	}
	int left[n];
	left[0]=0;
	for(i=0; i<n ; i++){
		left[i]=std::max(left[i],a[i]);
		left[i+1]=left[i];
	}
//	for(i=0; i<n; i++){
//		cout<<left[i]<<" ";
//	}
//	cout<<"\n";
	int right[n];
	right[n]=0;
	for(i=n-1; i>=0; i--){
		right[i]=std::max(right[i],a[i]);
		right[i-1]=right[i];
	}
	
	cout<<"\n";
	int sum=0;
	int result[n];
	cout<<"Maximum water stored : ";
	for(i=0; i<n; i++){
		sum=sum+std::min(left[i],right[i])-a[i];
	}
	cout<<sum;
}
