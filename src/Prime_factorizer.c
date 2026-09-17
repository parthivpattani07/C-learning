#include<stdio.h>
int prime(int k){
	for (int i=3;i*i<=k ;i++){
		if (k==2){
			return 1;
		}
		else if (k%i==0){
			return 0;
		}
		else{
			continue;
		}
		}
		
	
	return 1;
}

int main()
{
int n;

scanf("%d",&n);
int s=1;
for (int k=2;k<=n;k++){
	int i=0;
	
	if(prime(k)==1){
		while(n%k==0){
			i++;
			n=n/k;
			}
		if(i!=0){
		 	if (s==0){
			printf("*");
					 }
         printf("%d^%d",k,i);
		 s=0;
		 		}
		}
		

	}
	


return 0;

}
