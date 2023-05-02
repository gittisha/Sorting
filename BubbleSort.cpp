#include<iostream>
using namespace std;
class BubbleSort{
	public:
	void display(int a[],int n){
		for(int i=0;i<n;i++)
			cout<<a[i]<<" "<<flush;
		cout<<endl;
	}
	void bubbleSort(int a[],int n){
		int i=0,j,temp;
		int swap=1;
		int swap_cnt;
		while(i<n-1 && swap==1){
			swap=0;
			swap_cnt=0;
			for(j=0;j<n-i-1;j++){
				if(a[j]>a[j+1]){
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					swap_cnt++;
					swap=1;
				}
			}
			cout<<"Number of pass: "<<i<<" Swap count: "<<swap_cnt<<endl;
			display(a,5);
			i++;
		}
	}
};
int main(void){
	int a[]={10,2,17,9,1};
	cout<<"input elements:";
	BubbleSort obj;
	obj.display(a,5);
	obj.bubbleSort(a,5);
	
	return 0;
}
