//
// Created by Administrator on 2018/6/28.
//

#ifndef UNTITLED_EASYSORT_H
#define UNTITLED_EASYSORT_H

#include <iostream>
using namespace std;

namespace EasySort{

    template <typename T>
    void BubbleSort(T arr[],int n)
    {
        for(int i = n-1;i>0;i--)
        {
            for(int j=0;j<i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }

    template <typename T>
    void InsertSort(T arr[],int n)
    {
        for(int i=1;i<n;i++)
        {
            T e = arr[i];
            int j;
            for(j=i;j>0&&e<arr[j-1];j--)
            {
                arr[j] = arr[j-1];
            }
            swap(arr[j],e);
        }
    }

    template <typename T>
    void SelectionSort(T arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
           int minIndex = i;
           for(int j=i;j<n;j++)
           {
               if(arr[j]<arr[minIndex])
               {
                   minIndex = j;
               }
           }
           swap(arr[i],arr[minIndex]);
        }
    }



}







#endif //UNTITLED_EASYSORT_H
