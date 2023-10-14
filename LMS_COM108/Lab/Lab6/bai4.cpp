#include <stdio.h>
#include <math.h>

int main (){
	int n,m;
	printf("Moi ban nhap so cot cua mang: ");
	scanf("%d",&n);
	printf("Moi ban nhap so hang cua mang: ");
	scanf("%d",&m);
	int mang2chieu[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Moi nhap phan tu o vi tri cot %d, hang %d :",n,m);
			scanf("%d",&mang2chieu[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%5d",mang2chieu[i][j]*mang2chieu[i][j]);	
		}
		printf("\n");
	}
	return 0;
}

