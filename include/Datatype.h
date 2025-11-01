#ifndef DATATYPE
#define DATATYPE

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/////////////////////////////// Vector(Dynamic Array) of type string ///////////////////////////////////////
typedef struct
{
    char** mData;
    int mSize;
    int mCapacity;
    bool mAlreadyInit;
}VectorString;

void FreeStringVector(VectorString* arr)
{
    if(arr->mSize == 0 || arr->mCapacity == 0)
        return;
            
    // Free eaxh individual string
    for(int i = 0; i < arr->mSize; i++ )
    {
        free(arr->mData[i]);
    }

    free(arr->mData);
    arr->mSize = 0;
    arr->mCapacity = 0;
    arr->mAlreadyInit = false;
    arr = NULL;
}

void InitStringVetor(VectorString* arr)
{
    if(arr->mAlreadyInit) // Check double init
    {
        FreeStringVector(arr);
    }

    // Initialise member variable
    arr->mSize = 0;
    arr->mCapacity = 1;
    arr->mData = NULL;
    arr->mAlreadyInit = true;

    // Allocate Memory
    arr->mData = (char**)(malloc(arr->mCapacity * sizeof(char*)));
}

void PushString(VectorString* arr, const char* str)
{
    if(!arr->mAlreadyInit)
    {
        printf("Vector not initialised\n");
        return;
    }

    if(arr->mSize == arr->mCapacity)
    {
        // Double current capacity
        arr->mCapacity = arr->mCapacity * 2;
        arr->mData = (char**)(realloc(arr->mData, arr->mCapacity * sizeof(char*)));
    }
    arr->mData[arr->mSize] = (char *)(malloc(strlen(str) + 1));
    strcpy(arr->mData[arr->mSize], str);
    arr->mSize++;
    return;
}

void PrintArray(VectorString *arr)
{
    printf("Printing complete array: \n");
    for(int i = 0; i < arr->mSize; i++)
    {
        printf("%s\n",arr->mData[i]);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif