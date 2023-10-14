#include <stdio.h>
#include <string.h>
int main (){
	char chuoi[5][50];
	for(int i=0;i<5;i++){
		printf("Nhap chuoi thu %d: ",i+1);
		gets(chuoi[i]);
	}
	char steb[20];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(strcmp(chuoi[i],chuoi[j])>0){
				strcpy(steb,chuoi[i]);
				strcpy(chuoi[i],chuoi[j]);
				strcpy(chuoi[j],steb);
			}
		}
	}
	for(int i=0;i<5;i++){
		puts(chuoi[i]);
	}
	return 0;
}

