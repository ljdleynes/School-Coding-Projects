#ifndef unorderedArrayListType_H
#define unorderedArrayListType_H
 
#include "arrayListType.h"  

template <class elemType>
class unorderedArrayListType: public arrayListType<elemType>
{
public: 
    void insertAt(int location, const elemType& insertItem);
    void insertEnd(const elemType& insertItem);
    void replaceAt(int location, const elemType& repItem);
    int seqSearch(const elemType& searchItem) const;
    void remove(const elemType& removeItem);
    //ADDED FUNCTIONS
    int cartRAM1Size(); //This is to check how many RAM1 the user want to buy
    int cartRAM2Size(); //This is to check how many RAM2 the user want to buy
    int cartRAM3Size(); //This is to check how many RAM3 the user want to buy
    int cartCPU1Size(); //This is to check how many CPU1 the user want to buy
    int cartCPU2Size(); //This is to check how many CPU2 the user want to buy
    int cartCPU3Size(); //This is to check how many CPU3 the user want to buy
    int cartGPU1Size(); //This is to check how many GPU1 the user want to buy
    int cartGPU2Size(); //This is to check how many GPU2 the user want to buy
    int cartGPU3Size(); //This is to check how many GPU3 the user want to buy
    
   

    unorderedArrayListType(int size = 100);
      //Constructor

}; 

template <class elemType>
void unorderedArrayListType<elemType>::insertAt(int location, 
                                         const elemType& insertItem) //Changed, we removed "cout << "Cannot insert in a full list" << endl;"
{
    if (location < 0 || location >= this->maxSize)
        cout << "The position of the item to be inserted "
             << "is out of range." << endl;
    else
    {
        for (int i = this->length; i > location; i--)
            this->list[i] = this->list[i - 1];	//move the elements down

        this->list[location] = insertItem; //insert the item at 
                                     //the specified position

        this->length++;	//increment the length
    }
} //end insertAt

template <class elemType> //Changed, we removed "cout << "Cannot insert in a full list." << endl;"
void unorderedArrayListType<elemType>::insertEnd
                                 (const elemType& insertItem)
{
    if (!(this->length >= this->maxSize))
    {
        this->list[this->length] = insertItem; //insert the item at the end
        this->length++; //increment the length
    }
} //end insertEnd

template <class elemType>
int unorderedArrayListType<elemType>::seqSearch
                            (const elemType& searchItem) const
{
    int loc;
    bool found = false;

    for (loc = 0; loc < this->length; loc++)
        if (this->list[loc] == searchItem)
        {
            found = true;
            break;
        }

    if (found)
        return loc;
    else
        return -1;
} //end seqSearch

template <class elemType>
void unorderedArrayListType<elemType>::remove
                               (const elemType& removeItem) //Changed, we removed " cout << "Cannot delete from an empty list." << endl;"
{
    int loc;

    if (this->length == 0)
        cout << "Cannot delete from an empty list." << endl;
    else
    {
        loc = seqSearch(removeItem);

        if (loc != -1)
        {
            this->removeAt(loc);
            
        }
    }
} //end remove

template <class elemType>
void unorderedArrayListType<elemType>::replaceAt(int location, 
                                       const elemType& repItem)
{
    if (location < 0 || location >= this->length)
        cout << "The location of the item to be "
             << "replaced is out of range." << endl;
    else
        this->list[location] = repItem;
} //end replaceAt

template <class elemType>
unorderedArrayListType<elemType>::unorderedArrayListType(int size)
                       : arrayListType<elemType>(size)
{
}

template <class elemType>
int unorderedArrayListType<elemType>::cartRAM1Size()
{
    int RAM1Count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (this->list[i] == "HyperX Fury")
            RAM1Count++;
    }
    return RAM1Count;
    
}
template <class elemType>
int unorderedArrayListType<elemType>::cartRAM2Size()
{
    int RAM2Count = 0;
    for (int i = 5; i < 10; i++)
    {
        if (this->list[i] == "F4-2400C17S-4GVR")
            RAM2Count++;
    }
    return RAM2Count;
}
template <class elemType>
int unorderedArrayListType<elemType>::cartRAM3Size()
{
    int RAM3Count = 0;
    for (int i = 10; i < 15; i++)
    {
        if (this->list[i] == "F4-2666C18D-16GTZN")
            RAM3Count++;
    }
    return RAM3Count;
}
template <class elemType>
int unorderedArrayListType<elemType>::cartCPU1Size()
{
    int CPU1Count = 0;
    for (int i = 15; i < 20; i++)
    {
        if (this->list[i] == "Intel® Core™ i5-6500 Processor")
            CPU1Count++;
    }
    return CPU1Count;
}
template <class elemType>
int unorderedArrayListType<elemType>::cartCPU2Size()
{
    int CPU2Count = 0;
    for (int i = 20; i < 25; i++)
    {
        if (this->list[i] == "Intel® Core™ i7-10700F Processor")
            CPU2Count++;
    }
    return CPU2Count;
}
template <class elemType>
int unorderedArrayListType<elemType>::cartCPU3Size()
{
    int CPU3Count = 0;
    for (int i = 25; i < 30; i++)
    {
        if (this->list[i] == "Intel® Core™ i5-10400F Processor")
            CPU3Count++;
    }
    return CPU3Count;
}
template <class elemType>
int unorderedArrayListType<elemType>::cartGPU1Size()
{
    int GPU1Count = 0;
    for (int i = 30; i < 35; i++)
    {
        if (this->list[i] == "NVIDIA® GeForce RTX™ 3080")
            GPU1Count++;
    }
    return GPU1Count;
}
template <class elemType>
int unorderedArrayListType<elemType>::cartGPU2Size()
{
    int GPU2Count = 0;
    for (int i = 35; i < 40; i++)
    {
        if (this->list[i] == "GeForce GTX 1060 6 GB")
            GPU2Count++;
    }
    return GPU2Count;
}
template <class elemType>
int unorderedArrayListType<elemType>::cartGPU3Size()
{
    int GPU3Count = 0;
    for (int i = 40; i < 45; i++)
    {
        if (this->list[i] == "GEFORCE GTX 1080 Ti")
            GPU3Count++;
    }
    return GPU3Count;
}
#endif