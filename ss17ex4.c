#include<stdio.h>
void enter(); 
void chan();
void prime(); 
void daoNguoc(); 
void find(); 
void sort(); 
int main(){
	int choose; 
	int arr[100];
	int size=0; 
	do{
		printf("\t MENU\n1.Nhap vao so phan tu va tung phan tu\n2.In ra cac phan tu  la so chan\n3.In ra cac phan tu la so nguyen to\n4.Dao nguoc mang\n5.sap xep mang\n6.Tim kiem\n7.Thoat\nLua chon cua ban: ");
		scanf("%d",&choose); 
		switch(choose){
			case 1:
				enter(arr,&size); 
				break;
			case 2: 
				if(size==0){
					printf("mang chua duoc nhap\n"); 
				} else{
					chan(arr,size);  
				}
				break; 
			case 3: 
				if(size==0){
					printf("mang chua duoc nhap\n"); 
				} else{
					prime(arr,size); 
				}
				break; 
			case 4: 
				if(size==0){
					printf("mang chua duoc nhap\n"); 
				} else{
					daoNguoc(arr,size); 
				}
				break; 
			case 5: 
				if(size==0){
					printf("mang chua duoc nhap\n"); 
				} else{
					sort(arr,size); 
				}
				break; 
			case 6: 
				if(size==0){
					printf("mang chua duoc nhap\n"); 
				} else{
					find(arr,size); 
				}
				break; 
			case 7:
				printf("thoat chuong trinh");
				break;
			default:
				printf("ko hop le\n");
				break; 
		} 	 
	} while(choose!=7); 
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
//in so chan
void chan(int *arr,int size){
	int number[100]; 
	int count=0; 
	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			number[count]=arr[i];
			count++ ;
		}		
	} 
	printf("cac so chan la:"); 
	for(int i=0;i<count;i++){
		printf("%d ",number[i]); 
	}
	printf("\n") ;
} 
// in so nguyen to
void prime(int *arr,int size){
	int number[100];
	int index=0;
	for(int i=0;i<size;i++){
		int count=0;
		for(int j=2;j<arr[i];j++){ // ktra tu 2 den chinh no -1 neu chia het thi ko phai so nguyen to 
			if(arr[i]%j==0){
				count++; 
				break; 
			} 
		}
		if(count==0){
			number[index]=arr[i];
			index++; 
		}  
	} 
	if(index==0){
		printf("ko co so nguyen to\n"); 
	} else{
	printf("cac so nguyen to la:");
	for(int i=0;i<index;i++){
		printf("%d ",number[i]); 
	} 
	printf("\n"); 
}
}
// dao nguoc mang
void daoNguoc(int *arr,int size){
	printf("mang sau khi dao nguoc:") ;
	for(int i=size-1;i>=0;i--){
		printf("%d ",arr[i]); 
	}
	printf("\n");	
} 
// tim kiem phan tu 
void find(int *arr,int size){
	int number;
	printf("nhap so can tim: ");
	scanf("%d",&number);
	int flag=-1; 
	for(int i=0;i<size;i++){
		if(arr[i]==number){
			printf("gia tri o vi tri arr[%d]\n",i);
			flag=1; 
			break; 
		} 
	} 
	if(flag==-1){
		printf("ko tim thay phan tu nay\n");
	} 
} 
// sap xep mang
void sort(int *arr,int size){
	int a; 
	printf("1.giam dan\n2.tang dan\n"); 
	printf("chon cach sap xep: ");
	scanf("%d",&a);
	if(a==1){
		int temp; 
		for(int i=0;i<size;i++){
			for(int j=i+1;j<size;j++){
				if(arr[i]<arr[j]){
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp; 
				} 
			} 
		}
		printf("mang sau khi sap xep giam dan:"); 
		for(int i=0;i<size;i++){
			printf("%d ",arr[i]); 
		} 
		printf("\n"); 
	}else{
		int temp; 
		for(int i=0;i<size;i++){
			for(int j=i+1;j<size;j++){
				if(arr[i]>arr[j]){
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp; 
				} 
			} 
		}
		printf("mang sau khi sap xep tang dan:"); 
		for(int i=0;i<size;i++){
			printf("%d ",arr[i]); 
		} 
		printf("\n");	
	} 
} 
