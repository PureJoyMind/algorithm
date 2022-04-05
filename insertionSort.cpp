// The c++ version of the inserion sort
// Nondecreasing order
// Using C-style array

#include <iostream>

using namespace std;

size_t const arrSize{10};// Global variable for the size of the array

// Function prototypes
void sort(int[arrSize]);
void printArr(int[arrSize]);

int main(){
    int arr[arrSize]{5, 8, 6, 3, 7, 0, 4, 1, 9, 2};
    
    cout << "The un-sorted array: \n";
    printArr(arr);

    sort(arr);
    cout << "The sorted array: \n";
    printArr(arr);
}

void printArr(int arr[arrSize])// Function to print a array
{
    for(int i{0}; i < arrSize; i++){
        cout << arr[i] << ' ' ;
    }
    cout << endl;
}

void sort(int arr[arrSize])// Sorts an element array by insertion sort
{
    int key;
    int i;
    for(int j{1}; j < arrSize; j++){
        key = arr[j];
        i = j - 1;
        while(i >= 0 && arr[i] > key){
            arr[i + 1] = arr [i];
            i--;
        }
        arr[i + 1] = key;
    }
}