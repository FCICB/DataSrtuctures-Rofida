#include <iostream>

using namespace std;

void selection(int arr [], int s){

    for(int i = 0;i<s-1;i++){
            int minIndex =i;
        for (int j = i+1; j<s-1;j++){
            if (arr[minIndex] > arr[j]){
                minIndex = j;
            }

        }
        swap(arr[i],arr[minIndex]);
    }

}
int main()
{
   int arr[10] = {1   ,13,2,5,6,4,7,7,9,15};
   selection(arr,10);
   for(int i =0;i<10;i++)
    cout<<arr[i]<<" "<<endl;
    return 0;
}
