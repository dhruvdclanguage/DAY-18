#include<stdio.h>

int main (){
	
	int n ;
	
	printf("Enter size of 1st Array : ");
	scanf("%d",&n);
	

	int a[n] ,  b[n] , c[n] ;

	int i ;
	
	for(i=0 ; i<n ; i++){
		
		printf("Enter Elements of 1st Array : ");
		scanf("%d",&a[i]);
		
	}
	
	printf("Enter size of 2nd Array : ");
	scanf("%d",&n);
	
	for(i=0 ; i<n ; i++){
		
		printf("Enter Elements of 2nd Array : ");
		scanf("%d",&b[i]);
		
	}
	
	for (i = 0; i < n; i++) { 
	
    	c[i] = a[i] + b[i]; 
    	
    } 
    
    printf("The sum of two Arrays is: \n"); 
	
	for (i=0 ; i<n ; i++) { 
	
    	printf("%d ", c[i]);
		 
	} 
 
	return 0 ;
}
