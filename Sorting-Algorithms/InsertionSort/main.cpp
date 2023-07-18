#include <iostream>

using namespace std;

void Insertion (int arr[], int s){
    int key, j;

    for(int i =1; i<s; i++){
        key = arr[i];
         j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j]; //shiftting
            j = j-1;
        }
        arr[j+1] = key;
    }

}
int main()
{
    int arr[10] = {1   ,13,2,5,6,4,7,7,9,15};
   Insertion(arr,10);
   for(int i =0;i<10;i++)
    cout<<arr[i]<<" "<<endl;
    return 0;
}
