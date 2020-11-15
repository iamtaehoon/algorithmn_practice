//삽입정렬은 아직도 좀 헷갈리네 ㅠㅜㅠ 그림만 머리속에 넣어두고 다시 나중에 해보ㅓ자

#include <stdio.h>
const int number = 8;

void insertion_sort(int* array, int number){
    int key, j;
    for(int i=1;i<number;i++){
        key = array[i];
        for(j = i-1; j>=0 && array[j]>key;j--){ // 작은 값을 만날 경우 for문 종료할거,.
            array[j+1] = array[j];
        }
        array[j+1] = key;// j는 끝까지 갈 경우 -1임.
    }
}
    


int main(int argc, const char * argv[]) {
    int array[number] = {2,7,5,6,4,1,8,3};
    for(int i = 0; i<number;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    insertion_sort(array,number);
    for(int i = 0; i<number;i++){
        printf("%d ",array[i]);
    }
}
