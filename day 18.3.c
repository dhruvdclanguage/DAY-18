#include<stdio.h>

int main (){
	
	int n , i , a[n] , sum=0 ;
	double average ;
	
	
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	for(i=0 ; i<n ; i++){
		
		printf("Enter Elements : ");
		scanf("%d",&a[i]);
		
		sum += a[i] ;
		
	}
	
	average = (double)sum / n ;
	 
	printf("Average of your 1D Array is : %.1f", average );
	
	return 0 ;
}
