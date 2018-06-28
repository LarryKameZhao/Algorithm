//
// Created by Administrator on 2018/6/28.
//

#ifndef UNTITLED_HEAPSORT_H
#define UNTITLED_HEAPSORT_H

#include <iostream>
using namespace std;

namespace  HeapSort{

    template <typename T>
    void shiftDown(T arr[],int n,int k)
    {
        while(2*k+1<n)
        {
            int j = 2*k+1;
            if(j+1<n&&arr[j+1]>arr[j])
            {
                j++;
            }
            if(arr[k]>=arr[j])
                break;
            swap(arr[k],arr[j]);
            k = j;
        }
    }

    template <typename T>
    void heapSort(T arr[],int n)
    {
        for( int i=(n-1)/2;i>=0;i--)
        {
            shiftDown(arr,n,i);
        }

        for(int i = n-1;i>0;i--)
        {
            swap(arr[0],arr[i]);
            shiftDown(arr,i,0);
        }
    }


}



#endif //UNTITLED_HEAPSORT_H
