#include <stdio.h>

int main(){
	//¦���ϰ�쿡�� ���� �������� ���� ū�� ��
	//Ȧ���ΰ�� �߰��� 
	int i,j,k,t,a,input,big,small;
	int *grade;
	scanf("%d",&input);
	
	grade=(int*)malloc(sizeof(int)*input);
	
	for(i=0;i<input;i++){
		scanf("%d",&grade[i]);
		if(i==0){
			big=grade[i];
			small =grade[i];
		}
		else{
			if(grade[i]>=big){
				big=grade[i];
			}
			if(grade[i]<=small){
				small=grade[i];
			}
		}
	
	
	
	}
	
	printf("%d",big*small);
	
	

}
