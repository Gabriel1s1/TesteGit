#include<stdio.h>

int main (){
	
	int A[10],B[10],AB[20],i,j=0,ia=0,ib=0;
	
	printf("informe o vetor A");
	for(i=0;i<10;i++){
		scanf("%d",&A[i]);
	}
	
	printf("informe o vetor B");
	for(i=0;i<10;i++){
		scanf("%d",&B[i]);
	}
		while (j<20){
			if(A[ia]<B[ib] && ia <10 && ib<10)
				AB[j++]=A[ia++];
				
				else {
					if (ia<10 && ib>=10)
						AB[j++]=A[ia++];
					
						if (ib<10 && ia>=10)
							AB[j++]=B[ib++];
						
							if(ib<10 && ia<10&&A[ia]>B[ib])
								AB[j++]=B[ib++];
				}else 
				AB[j++]=B[ib++];
		}
		printf("Valores do vetor AB\n");
		for(i=0;i<20;i++){
			printf("%i, ",AB[i]);
		}
		
		
}
