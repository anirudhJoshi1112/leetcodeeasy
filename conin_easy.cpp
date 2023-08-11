#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	int min=arr[0];
	int max=arr[0];
	for(int i=1;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		else if(min>arr[i]){
			min=arr[i];
		}
	}
	return min+max;
}
