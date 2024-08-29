#include<iostream>
using namespace std;

int IterativeBinarySearch(int arr[] , int low , int high , int key){
	while(high >= low ){
		int mid = low + (high - low) / 2;
		if(arr[mid] == key)return mid;
		if(arr[mid] < key)low = mid + 1;
		else high = mid - 1;
	}
	return -1;
}
int RecursiveBinarySearch(int arr[] , int low , int high , int key){
	if(high < low)return -1;
	int mid = low + (high -low)/2;
	if(arr[mid] == key)return mid;
	if(arr[mid] > key)return RecursiveBinarySearch(arr , low , mid - 1 , key);
	else return RecursiveBinarySearch(arr , mid + 1 , high , key);
}
int main(){
	int arr[] ={15 , 16 , 17 , 18 , 56 , 91};
	int key = 15;
	int high = sizeof(arr) / sizeof(arr[0]);
	int index = IterativeBinarySearch(arr , 0 , high - 1 , key);
	if(index == -1) cout<<"the element was not found";
	else cout << "the element is found at the index:" << index << endl; 
	int indexR = RecursiveBinarySearch(arr , 0 , high - 1 , key);
	if(index == -1) cout<<"the element was not found";
	else cout << "the element is found at the index:" << index; 
}