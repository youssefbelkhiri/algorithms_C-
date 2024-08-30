#include<iostream>
using namespace std;

int ternary_search(int left , int right , int arr[] , int key){
	if(left > right)return -1;
	int mid1 = left - (left - right)/2;
	int mid2 = right + (left - right)/2;
	if(key == arr[mid1])return mid1;
	if(key == arr[mid2])return mid2;
	if(key < arr[mid1])return ternary_search(left , mid1 - 1 , arr , key);
	if(key > arr[mid2])return ternary_search(mid2 + 1 , right , arr , key);
	else return ternary_search(mid1 + 1 , mid2 - 1 , arr , key);
	return -1;
}

int main()
{
    int l, r, p, key;
    int ar[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    l = 0;
    r = 9;
    key = 5;
    p = ternary_search(l, r,ar , key);
    if(p == -1) cout << "the index was not found";
    else cout << "Index of " << key << " is " << p << endl;
    key = 50;
    p = ternary_search(l, r, ar , key);
    if(p == -1) cout << "the index was not found";
    else cout << "Index of " << key << " is " << p << endl;
}