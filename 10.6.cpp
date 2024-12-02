#include<stdio.h>
int main(){
	int n,i,x,m;
	int start=0;
	printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    int end=sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
	printf("Cac phan tu trong mang: \n");
    for (int i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }
    for(i=1;i<5;i++){
    	int k=arr[i];
    	int j;
    	for(j=i-1;j>=0&&arr[j]>k;j--){
    	    arr[j+1]=arr[j];
			}
			arr[j+1]=k;
		}
	printf("\nCac phan tu trong mang sau khi sap xep la:\n");
			for(int i=0; i<n;i++){
		     printf("%d  ", arr[i]);
        } 
    printf("\n");
    printf("Vui long nhap 1 so bat ki de tim vi tri : ");
    scanf("%d",&x);
    while(start<=end){
    	m=(start+end)/2;
    	if(arr[m]==x){
    		printf("Vi tri phan tu can tim o vi tri thu %d\n",m+1);
    		return 0;
		}else if(arr[m]>x){
			end=m-1;
		}else{
			start=m+1;
		}
	}
	printf("Ko tim thay phan tu\n");
	return 0;
}

