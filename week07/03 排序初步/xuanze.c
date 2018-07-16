#include <stdio.h>
int max(int a[], int length){
	int maxid = 0;
	int i;
	for(i=1; i<length; i++){
		if( a[i]>a[maxid] )
		{
			maxid = i;
		}
	}
	return maxid;
}
int main()
{
	int i;
	int a[] = {50,60,12,52,33,41,21,25,13,15,2,666,445,775};
	int length = sizeof(a)/sizeof(a[0]);
	
	for( i=length-1; i>0; i--){
		int maxid = max(a,i+1);
		int t = a[maxid];
		a[maxid] = a[i];
		a[i] = t;
	}
	
	for(i=0; i<length; i++){
		printf("%d ",a[i]);
	}
	return 0;
 } 