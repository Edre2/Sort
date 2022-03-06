#ifndef SORT_H
#define SORT_H

#include <cstdlib>
#include <iostream>
#include <vector>
#include "tree/tree.h"

template <typename T>

void swap(T array[], int i, int j)
{
    T temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

template <typename T>

void swap(std::vector<T> & array, int i, int j)
{
    T temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

template<typename T>

void bubble_sort(T array[], int arraySize)
{
    for(int i = 0; i < arraySize; i++)
        for(int j = 0; j < arraySize - i - 1; j++)
            if(array[j] > array[j+1])
                swap(array, j, j+1);
}

template<typename T>

void bubble_sort(std::vector<T> & array)
{
    int arraySize = array.size();
    for(int i = 0; i < arraySize; i++)
        for(int j = 0; j < arraySize - i - 1; j++)
            if(array[j] > array[j+1])
                swap(array, j, j+1);
}

template<typename T>

int partition(T array[], int start, int stop)
{ 
    int pivotIndex = start;
    T pivotValue = array[stop];
    for(int i = start; i < stop; i++)
    {
        if(array[i] < pivotValue)
        {
            swap(array, i, pivotIndex);
            pivotIndex++;
        }
    }
    swap(array, pivotIndex, stop);

    return pivotIndex;
}

template<typename T>

void quick_sort(T array[], int start, int stop)
{
    if(start < stop)
    {
        int index = partition(array, start, stop);
        quick_sort(array, start, index - 1);
        quick_sort(array, index + 1, stop);
    }
}

template<typename T>

int partition(std::vector<T> & array, int start, int stop)
{ 
    int pivotIndex = start;
    T pivotValue = array[stop];
    for(int i = start; i < stop; i++)
    {
        if(array[i] < pivotValue)
        {
            swap(array, i, pivotIndex);
            pivotIndex++;
        }
    }
    swap(array, pivotIndex, stop);

    return pivotIndex;
}

template<typename T>

void quick_sort(std::vector<T>  & array, int start, int stop)
{
    if(start < stop)
    {
        int index = partition(array, start, stop);
        quick_sort(array, start, index - 1);
        quick_sort(array, index + 1, stop);
    }
}

template<typename T>

void tree_sort(std::vector<T> & array)
{
    Tree<T> tree(array);
    while (!array.empty())
        array.pop_back();
    tree.traverse(array);
}

#endif