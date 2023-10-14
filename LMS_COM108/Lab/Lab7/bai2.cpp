#include <stdio.h>
#include <string.h>

int main (){
	char username[]="admin";
	char password[]="12345";
	char user[10];
	char pass[10];
	printf("Nhap user: ");
	gets(user);
	printf("Nhap pass: ");
	gets(pass);
	if(strcmp(user,username)==0 && strcmp(pass,password)==0){
		printf("Dang nhap thanh cong.");
	} else{
		printf("Dang nhap that bai.");
	}
	return 0;
}

