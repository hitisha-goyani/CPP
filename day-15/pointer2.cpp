 
 #include<iostream>

using namespace std;

int main(){

    int* pa;
    int arr[5] = {1, 2, 3, 4, 5};
    pa = arr;
    cout << arr;
    
    printf("%d \n", &arr[1]);
    printf("%d \n", &arr[2]);
    printf("%d \n", arr);
    cout << arr[1] << endl;


    return 0;
}
 
 
 