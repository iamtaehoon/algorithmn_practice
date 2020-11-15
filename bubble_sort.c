#include <stdio.h>
const int number = 8;

void bubble_sort(int* array, int number){
    int temp;
    for(int i = 0; i<number;i++){
        for (int j = 1; j<number-i;j++){
            if (array[j-1]>array[j]){
                //더 작은 값을 내려보낼거임!
                temp = array[j-1];
                array[j-1] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int array[number] = {2,7,5,6,4,1,8,3};
    for(int i = 0; i<number;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    bubble_sort(array,number);
    for(int i = 0; i<number;i++){
        printf("%d ",array[i]);
    }
}
