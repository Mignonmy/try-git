#include <stdio.h>
#include <math.h>
int main()
{
	
	int i,j,cnt=0;
	for(i=1;i<500;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				
				break;
			} 
		}
		if(i==j){ //һֱ������ȵ����������ҵ�������֤������������� 
			cnt++;
			printf("%5d",i);
			if(cnt%10==0){
				printf("\n");
			}
		}
	}
	return 0;
}
