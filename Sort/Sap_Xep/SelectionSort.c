#include <stdio.h>

typedef int keytype;
typedef float othertype;
typedef struct {
	keytype key;
	othertype otherfields;
} recordtype;

void Swap(recordtype *x, recordtype *y){
	recordtype temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void SelectionSort(recordtype a[], int n){
	int i,j, lowindex;
	keytype lowkey;
	for (i=0; i<n-1; i++){
		lowkey = a[i].key;
		lowindex = i;
		for (j=i+1; j<n; j++){
			if (a[j].key < lowkey){
				lowkey = a[j].key;
				lowindex = j;
			}
		}
		Swap(&a[i], &a[lowindex]);
	}
}

int main(){
	int n,i;
	recordtype a[100];
	
	FILE* file = fopen("dayso.inp", "r");
	fscanf(file, "%d",&n);
	for (i = 0; i <= n-1; i++) {
		fscanf(file, "%d", &a[i]);
	}
		printf("\n");
	printf("Thuat toan Selection_Sort\n\n");
	printf("Day so truoc khi sap xep : ");
	for(i=0; i<=n-1; i++){
		printf("%d ",a[i]);
	}
	printf("\n\n");
	SelectionSort(a,n);
	
	printf("Day so sau khi sap xep : ");
	for(i=0; i<=n-1; i++){
		printf("%d ",a[i]);
	}
}

