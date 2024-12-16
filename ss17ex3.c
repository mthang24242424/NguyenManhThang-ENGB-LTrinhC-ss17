#include<stdio.h>
#include<string.h>
#include<ctype.h> 
void enter(); 
void daoNguoc(); 
void count(); 
void up(); 
int main(){
	int choose;
	char word[1000];
	int flag=-1; 
	do{
		printf("\t MENU\n1.Nhap chuoi\n2.In ra chuoi dao nguoc\n3.Dem so luong tu trong chuoi\n4.Nhap chuoi khac roi so sanh in ra cai ngan hon\n5.In hoa tat ca cac chu\n6.Nhap vao chuoi khac va them vao chuoi ban dau\nLua chon cua ban: ");
		scanf("%d",&choose); 
		getchar(); 
		switch(choose){
			case 1:
				enter(word);
				flag=1; 
				break; 
			case 2:
				if(flag==-1){
					printf("chuoi chua duoc nhap\n"); 
				} else{
					daoNguoc(word); 
				} 
				break; 
			case 3:
				if(flag==-1){
					printf("chuoi chua duoc nhap\n"); 
				} else{
					printf("so luong tu co trong chuoi:");				
					count(word); 
				} 
				break;
			case 4:
				if(flag==-1){
					printf("chuoi chua duoc nhap\n"); 
				} else{
					
				} 
				break; 
			case 5:
				if(flag==-1){
					printf("chuoi chua duoc nhap\n"); 
				} else{
					printf("chuoi in hoa:");
					up(word); 
				} 
				break;
			case 6:
				if(flag==-1){
					printf("chuoi chua duoc nhap\n"); 
				} else{
					
				} 
				break; 
			case 7:
				printf("thoat chuong trinh");
				break;
			default:
				printf("ko hop le\n"); 
		} 
	} while(choose!=7); 
	return 0; 
} 
// nhap chuoi 
void enter(char *word){
	printf("nhap chuoi bat ki:");
	fgets(word,1000,stdin);
}
// chuoi dao nguoc
void daoNguoc(char *word){
	printf("chuoi dao nguoc:"); 
	for(int i=strlen(word);i>0;i--){
		printf("%c",word[i]); 
	} 
	printf("\n"); 
} 
// dem so tu
void count(char *word){
	int count=0;
	for(int i=0;i<strlen(word);i++){
		if(word[i]==' '){
			count++; 
		} 
	} 
	printf("%d\n",count+1); 
} 
// in hoa
void up(char *word){
	for(int i=0;i<strlen(word);i++){
		word[i]=toupper(word[i]); 
	} 
	printf("%s\n",word); 
} 
