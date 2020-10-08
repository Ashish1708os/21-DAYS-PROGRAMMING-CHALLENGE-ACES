#include <iostream>
using namespace std;

void print_array(int array[], int size){
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size){
    for(int i=0; i<size-1; i++){
        int minimum = i;
        for(int j=i+1; j<size; j++){
            if(array[j]<array[minimum]){
                minimum = j;
            }
        }
        swap(&array[minimum], &array[i]);
    }
}

int main(){
    int array[] = {72,78,36,11,78,69,53};
    int size = sizeof(array)/sizeof(array[0]);
    cout<<"unsorted array : ";
    print_array(array, size);
    cout<<"sorted array   : ";
    selectionSort(array, size);
    print_array(array, size);
    return 0;
}
