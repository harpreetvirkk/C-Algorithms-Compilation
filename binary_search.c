#include<stdio.h>
void bin_search(int array[], int n, int search){
    int first, last, mid;
    int flag=-1;
    first=0;
    last=n;
    mid=(first+last)/2;
    while(first<=last){
        if(search==array[mid]){
            flag=1;
            break;
        }
        else if(search<array[mid]){
            last=mid-1;
            mid=(first+last)/2;
        }
        else{
            first=mid+1;
            mid=(first+last)/2;
        }
    }
    if(flag==1){
        printf("Element found at location %d!\n", mid);
    }
    else{
        printf("Element not found!\n");
    }
}
int main(void){
    int n;
    printf("Enter number of elements in the list!\n");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d elements in ascending order!\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    printf("Enter element to be searched!\n");
    int search;
    scanf("%d", &search);
    bin_search(array, n, search);
    return 0;
}