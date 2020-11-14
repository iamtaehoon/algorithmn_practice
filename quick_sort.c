#include <stdio.h>

const int number = 8;

void quick_sort(int* array, int start, int end){
    if(start>end){
        return;
    }
    int pivot = start;
    int left = start + 1;
    int right = end;
    int temp;
    
    while(left<=right){
        while((array[pivot]>=array[left]) && (left<=end)){
            left++;
        }
        while((array[pivot]<=array[right]) && (start < right)){
            right--;
        }
        if(left<=right){
            temp = array[left];
            array[left] = array[right];
            array[right] = temp;
        }
        else{
            temp = array[right];
            array[right] = array[pivot];
            array[pivot] = temp;
        }
    }

    quick_sort(array, start, right-1);//right는 pivot이랑 바껴서 pivot은 이미 값이 고정되었고, 그 앞뒤로 다시 돌리면 
    quick_sort(array, right+1, end);

}


int main(void){
    int array[number] = {2,5,4,6,3,9,1,8};
    for(int i = 0; i<number;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    quick_sort(array, 0, number-1);
    for(int i = 0; i<number;i++){
        printf("%d ",array[i]);
    }
    
    return 0;
}
