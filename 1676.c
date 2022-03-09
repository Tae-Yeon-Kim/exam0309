#include <stdio.h>

int main(){
	int i,a,check;
	int two=0,five=0;
	
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		check=i;
		if(check%2==0){
			while(1){
				if(check%2==0){
				//	printf("i-> %d 전2 check : %d\n",i,check);
					two+=1;
					check/=2;
					//printf("i-> %d 후 2 check : %d\ttwo : %d\n",i,two,check);
				}
				else{
					break;
				}
			
			}
		}
		if(check%5==0){
			
			while(1){
				
				if(check%5==0){
				//	printf("i-> %d 전5 check : %d\n",i,check);
					five+=1;
					check/=5;
					//printf("i-> %d 후 5 check : %d\tfive : %d\n",i,five,check);
				}
				else{
					break;
				}
				
			}			
		}
	}
	
	if(two<=five){
		printf("%d",two);
	}
	else{
		printf("%d",five);
	}
		
}
	
	
	

