#include <stdio.h>
#include <string.h>

int main (){
	char chuoi[100];
	printf("Moi nhap chuoi: ");
	gets(chuoi);
	int i=0;
	int demN=0;
	int demP=0;
	while(chuoi[i]!='\0'){
		if(chuoi[i]== 'a' || chuoi[i]== 'A'||
		chuoi[i]== 'i' || chuoi[i]== 'I'||
		chuoi[i]== 'e' || chuoi[i]== 'E'||
		chuoi[i]== 'u' || chuoi[i]== 'U'||
		chuoi[i]== 'o' || chuoi[i]== 'O'){
			demN++;
		} else{
			demP++;
		}
		i++;
	}
	printf("Chuoi co %d nguyen am %d phu am.",demN,demP);
	return 0;
}

