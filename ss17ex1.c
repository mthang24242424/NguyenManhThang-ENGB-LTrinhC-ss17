#include<stdio.h>
void enter();
void showArr();
int sum();
int max();
int main(){
	int arr[100];
	int choose; 
	int size=0;
	
	do{
		printf("\t MENU\n 1.Nhap vao so phan tu va tung phan tu\n 2.Hien thi cac phan tu trong mang\n 3.Tinh do dai mang\n 4.Tinh tong cac phan tu trong mang\n 5.Hien thi phan tu lon nhat\n 6.Thoat\n Lua chon cua ban: ");
		scanf("%d",&choose); 
		switch(choose){
			case 1:
				enter(arr,&size);
				break;
			case 2:
				if(size==0){
					printf("chua nhap mang\n");
				}else{
					showArr(arr,size);
				}
				break;
			case 3:
				if(size==0){
					printf("mang chua duoc nhap\n");
				}else{
					printf("do dai cua mang la: %d\n",size);
				}
				break;
			case 4:
				if(size==0){
					printf("mang chua duoc nhap\n");
				}else{
					sum(arr,size);
				}
				break;
			case 5:
				if(size==0){
					printf("mang chua duoc nhap\n");
				}else{
					max(arr,size);
				}
				break;
			case 6:
				printf("thoat chuong trinh!");
				break;
			default:
				printf("ko hop le\n");
		} 
	} while(choose!=6); 
	return 0;
}
// nhap so phan tu va tung gia tri cua mang
void enter(int *arr,int *size){
	printf("nhap so phan tu cua mang: ");
	scanf("%d",size);
	while(*size<=0||*size>100){
			printf("ko hop le, vui long nhap lai(1-100): ");
			scanf("%d",size);
	}
	for(int i=0;i<*size;i++){
		printf("nhap gia tri arr[%d]=: ",i);
		scanf("%d",(arr+i));
	}	
}
// in cac phan tu trong mang
void showArr(int *arr,int size){
	for(int i=0;i<size;i++){
		printf("arr[%d]=%d\n",i,*(arr+i)); 
	}
}
// tinh tong cac phan tu trong mang
int sum(int *arr,int size){
	int result=0;
	for(int i=0;i<size;i++){
		result+=*(arr+i);
	}
	printf("tong cac gia tri cua  mang la: %d\n",result);
	return result;
}
// tim max
int max(int *arr,int size){
	int max=0;
	for(int i=0;i<size;i++){
		if(max<*(arr+i)){
			max=*(arr+i);
		}
	}
	printf("gia tri lon nhat cua mang la %d\n",max);
	return max;
}
