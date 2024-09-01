#include<iostream>
#include<cmath>
using namespace std;

int JumpSearch(int arr[] , int n , int key){
	int jumpSize = sqrt(n);
	int prev = 0;
	while(arr[min(jumpSize , n) - 1] <= key){
		prev = jumpSize;
		jumpSize += sqrt(n);
		if(prev >= n)return -1;
	}
	
	while(arr[prev] < key){
		prev++;
		if(prev == min(jumpSize , n))return -1;
	}
	if(arr[prev] == key)return prev;
	return -1;
} 
int main()
{
    int arr[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21,
                34, 55, 89, 144, 233, 377, 610 };
    int key = 55;
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = JumpSearch(arr, n, key);
    cout << "\nNumber " << key << " is at index " << index;
    return 0;
}