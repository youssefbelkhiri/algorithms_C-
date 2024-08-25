#include<iostream>
using namespace std;

void SentinelSearch(int arr[] , int length , int key){
	
	int last = arr[length - 1];
	arr[length -1] = key;
	int i = 0;
	while(key != arr[i])
		i++;
	
	arr[length - 1] = last;
	if( (i < length - 1) || (arr[length - 1] == key) )
		cout << "the element is present in the index:" << i;
	else
		cout << "the element not found";
	
}
int main(){ 
	int arr[] = {150 , 180 , 16 , 13 , 53 , 98 , 45};
	int key = 87;
	int length = sizeof(arr) / sizeof(arr[0]);
	SentinelSearch(arr , length ,  key);
	return 0; 
}