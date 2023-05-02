#include<iostream>
#include<cstdlib>
using namespace std;
class Rand{
	public:
		void getarray(int A[], int n);
		void BubbleSort(int A[],int n);
		void display(int A[],int n);
		~Rand();
};
void Rand::getarray(int A[],int n){
	int i;
	cout<<"Array Elements: ";
	for(i=0;i<n;i++){
		A[i]=rand();
		cout<<A[i]<<" ";
	}
	cout<<"\n";
}
void Rand::BubbleSort(int A[],int n){
	int i,j,temp;
	cout<<"Sorting..."<<endl;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
}
void Rand::display(int A[],int n){
	int i;
	cout<<"Sorted Array elements: ";
	for(i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	cout<<'\n';
}
Rand::~Rand(){
	cout<<"Exit"<<endl;
}
int main(){
	int size;
	cout<<"\n Enter array size: ";
	cin>>size;
	int ar[size];
	if(size>0){
		Rand ob;
		ob.getarray(ar,size);
		ob.BubbleSort(ar,size);
		ob.display(ar,size);
	}
	else
		cout<<"Size must be more than 0"<<endl;
	return 0;
}
