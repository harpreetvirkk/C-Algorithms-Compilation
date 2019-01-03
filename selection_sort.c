#include<stdio.h>
void selection_sort(int array[], int size){
    int index, temp;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(array[j]<array[i]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("List after selection sort!\n");
    for(int i=0; i<size; i++){
        printf("%d\n", array[i]);
    }
}
int main(void){
    printf("Enter number of elements to be sorted!\n");
    int n;
    scanf("%d", &n);
    printf("Enter %d elements!\n", n);
    int array[n];
    for(int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    selection_sort(array, n);
    return 0;
}