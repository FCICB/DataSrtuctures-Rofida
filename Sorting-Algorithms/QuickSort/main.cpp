#include <iostream>

using namespace std;
int Partition(int arr [], int l, int h){
    int p = arr[l];
    int i = l;
    int j = h;

    while(i< j){
        do {
            i++;
        } while(arr[i] <= p);
        do {
            j--;
        } while(arr[j]> p);

        if ( i < j )
            swap(arr[i],arr[j]);

    }

    swap(arr[l], arr[j]);
    return j;

}

void QuickSort (int arr [], int l, int h){
    if (l < h){
        int piv = Partition(arr, l, h);
        QuickSort(arr, l, piv);
        QuickSort(arr, piv+1, h);

    }


}
int main()
{

    int arr [5] = {1,60,10,80,0};
    QuickSort(arr, 0, 5);
    for(int i =0; i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
