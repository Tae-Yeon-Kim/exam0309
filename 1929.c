#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	int a,b,c,i,j;
	
	scanf("%d %d",&a,&b);
	
	for(i=a;i<=b;i++){
		
		if(i==1){
			continue;
		}
		else {
		if(i==2 || i==3){
			printf("%d\n",i);
		}
		else{
		
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
			
				break;
			}
			else if(j==(int)sqrt(i)){
				printf("%d\n",i);
			}
		}
		} 
		
		}
	}
	
}
