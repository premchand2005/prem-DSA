#include<stdio.h>
int linearsearch(int arr[], int size , int element){
	for(int i = 0; i< size ; i++){
		if(arr[i]==element){
		}	
	}
	return -1;
}
int binarysearch(int arr[],int size,int element){
	int low,mid,high;
	low = 0;
	high = size-1;
	while(low<=high){
		mid = (low+high)/2;
		if(arr[mid]==element){
			return mid;
		}
		if(arr[mid]<element){
			low = mid + 1;
		}
		if(arr[mid]<element){
			low = mid +1;
		}
		else{
			high = mid -1;
		}
	}
	return -1;
}
int main(){
	int arr[]={1,3,54,67,87,989};
	int size = sizeof(arr)/sizeof(int);
	int element = 989;
	int searchIndex = binarysearch(arr,size,element);
	printf("The element %d was found at index %d\n", element,searchIndex);
	return 0;
}
