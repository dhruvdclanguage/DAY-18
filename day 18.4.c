#include<stdio.h>

int main (){
	
	int n , i , a[n] , sum=0 ;
	
	
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	for(i=0 ; i<n ; i++){
		
		printf("Enter Elements : ");
		scanf("%d",&a[i]);
		
		sum += a[i] ;
		
	}
	 
	printf("Addition of your 1D Array is : %d", sum );
	
	return 0 ;
}
