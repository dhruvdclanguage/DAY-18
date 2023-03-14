#include<stdio.h>

int main () {
	
	
	int n;
	
	  printf("Enter size of array :");
	  scanf("%d",&n);
	  
	int a[n];
	
	int i;
	
	   for(i=0;i<n;i++){
	   	
	   	  printf("Enter Elements :");
	   	  scanf ("%d",&a[i]);
	   }
	   
	  for (i=0;i<n;i++){
	  	
	  	 printf ("%d\n",a[i]);
	  	 
	}
	return 0;
}
