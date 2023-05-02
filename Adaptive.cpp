#include<iostream>
using namespace std;
class BubbleSort{
	private:
		int *arr;
		int n;
	public:
		BubbleSort(int len){
			n=len;
			arr= new int(n);
		}
		void get_data();
		void bubbleSort();
		void printArray();
};
void BubbleSort::get_data(){
	cout<<"Enter array elements:";
	for(int i=0;i<n;i++)
		cin>>arr[i];
}
void BubbleSort::bubbleSort(){
	for(int i=0; i<n-1;i++){
		int flag= 0;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=-1;
			}
		}
		if(flag==0 && i==0){
			cout<<"Array is already Sorted..."<<endl;
		}	
	}
}
void BubbleSort::printArray(){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" "<<flush;
	cout<<endl;
}
int main(void){
	int size;
	cout<<"Enter size of the array: ";
	cin>>size;
	BubbleSort obj(size);
	obj.get_data();
	cout<<"Array to be sorted..."<<endl;
	obj.printArray();
	obj.bubbleSort();
	cout<<"sorted Array..."<<endl;
	obj.printArray();
	return 0;
}
