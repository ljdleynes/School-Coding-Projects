#ifndef arrayListType_H
#define arrayListType_H

#include <iostream>

using namespace std;
 
template <class elemType>
class arrayListType 
{
public: 
    const arrayListType<elemType>& 
                  operator=(const arrayListType<elemType>&);
       //Overloads the assignment operator

    bool isEmpty() const;
      //Function to determine whether the list is empty
      //Postcondition: Returns true if the list is empty;
      //               otherwise, returns false.

    bool isFull() const;
      //Function to determine whether the list is full
      //Postcondition: Returns true if the list is full; 
      //               otherwise, returns false.

    int listSize() const;
      //Function to determine the number of elements in 
      //the list.
      //Postcondition: Returns the value of length.

    int maxListSize() const;
      //Function to determine the maximum size of the list
      //Postcondition: Returns the value of maxSize.

    void print() const;
      //Function to output the elements of the list
      //Postcondition: Elements of the list are output on the 
      //               standard output device.

    bool isItemAtEqual(int location, const elemType& item) const;
      //Function to determine whether item is the same as
      //the item in the list at the position specified 
      //by location.
      //Postcondition: Returns true if the list[location] 
      //               is the same as item; otherwise, 
      //               returns false.
      //               If location is out of range, an 
      //               appropriate message is displayed.

    virtual void insertAt(int location, const elemType& insertItem) = 0;
      //Function to insert insertItem in the list at the 
      //position specified by location. 
      //Note that this is an abstract function.
      //Postcondition: Starting at location, the elements of 
      //               the list are shifted down, 
      //               list[location] = insertItem; length++;    
      //               If the list is full or location is out of
      //               range, an appropriate message is displayed.

    virtual void insertEnd(const elemType& insertItem) = 0;
      //Function to insert insertItem an item at the end of 
      //the list. Note that this is an abstract function.
      //Postcondition: list[length] = insertItem; and length++;
      //               If the list is full, an appropriate 
      //               message is displayed.

    void removeAt(int location);
      //Function to remove the item from the list at the 
      //position specified by location 
      //Postcondition: The list element at list[location] is 
      //               removed and length is decremented by 1.
      //               If location is out of range, an 
      //               appropriate message is displayed.

    void retrieveAt(int location, elemType& retItem) const;
      //Function to retrieve the element from the list at the  
      //position specified by location 
      //Postcondition: retItem = list[location] 
      //               If location is out of range, an 
      //               appropriate message is displayed.
    void sort() const; //ADDED FUNCTION, this is the sorting algorithm from searchSortAlgo.h with little changes

    virtual void replaceAt(int location, const elemType& repItem) = 0;
      //Function to replace repItem the elements in the list 
      //at the position specified by location. 
      //Note that this is an abstract function.
      //Postcondition: list[location] = repItem 
      //               If location is out of range, an 
      //               appropriate message is displayed.

    void clearList();
      //Function to remove all the elements from the list 
      //After this operation, the size of the list is zero.
      //Postcondition: length = 0;

    virtual int seqSearch(const elemType& searchItem) const = 0;
      //Function to search the list for searchItem.
      //Note that this is an abstract function.
      //Postcondition: If the item is found, returns the 
      //               location in the array where the item is  
      //               found; otherwise, returns -1.

    virtual void remove(const elemType& removeItem) = 0;
      //Function to remove removeItem from the list.
      //Note that this is an abstract function.
      //Postcondition: If removeItem is found in the list,
      //               it is removed from the list and length 
      //               is decremented by one.

    arrayListType(int size = 100);
      //Constructor
      //Creates an array of the size specified by the 
      //parameter size. The default array size is 100.
      //Postcondition: The list points to the array, length = 0,
      //               and maxSize = size;

    arrayListType (const arrayListType<elemType>& otherList);
       //Copy constructor

    virtual ~arrayListType();
      //Destructor
      //Deallocate the memory occupied by the array.
  

protected:
    elemType *list; //array to hold the list elements
    int length;     //variable to store the length of the list
    int maxSize;    //variable to store the maximum 
                    //size of the list
    int position;
};


template <class elemType>
bool arrayListType<elemType>::isEmpty() const
{
    return (this->length == 0);
}

template <class elemType>
bool arrayListType<elemType>::isFull() const
{
    return (this->length == this->maxSize);
}

template <class elemType>
int arrayListType<elemType>::listSize() const
{
	return this->length;
}

template <class elemType>
int arrayListType<elemType>::maxListSize() const
{
	return this->maxSize;
}

template <class elemType>
void arrayListType<elemType>::print() const
{
    for (int i = 0; i < this->length; i++)
        cout << list[i] << " ";
    cout << endl;
}

template <class elemType>
bool arrayListType<elemType>::isItemAtEqual(int location, 
                                            const elemType& item)  const
{
    if (location < 0 || location >= this->length)
    {
        cout << "The location of the item to be removed "
             << "is out of range." << endl;

        return false;
    }
    else
        return (list[location] == item);
}

template <class elemType>
void arrayListType<elemType>::removeAt(int location)
{
    if (location < 0 || location >= this->length)
        cout << "The location of the item to be removed "
             << "is out of range." << endl;
    else
    {
        for (int i = location; i < this->length - 1; i++)
            list[i] = list[i + 1];

        this->length--;
    }
} //end removeAt

template <class elemType>
void arrayListType<elemType>::retrieveAt(int location,
                                       elemType& retItem) const
{
    if (location < 0 || location >= this->length)
        cout << "The location of the item to be retrieved is "
             << "out of range" << endl;
    else
        retItem = list[location];
} //end retrieveAt

template <class elemType>
void arrayListType<elemType>::clearList()
{
    this->length = 0;
} //end clearList

template <class elemType>
arrayListType<elemType>::arrayListType(int size)
{
    if (size <= 0)
    {
        cout << "The array size must be positive. Creating "
             << "an array of the size 100. " << endl;

        this->maxSize = 100;
    }
    else
        this->maxSize = size;

    this->length = 0;

    list = new elemType[this->maxSize];
}

template <class elemType>
arrayListType<elemType>::~arrayListType()
{
    delete [] list;
}

template <class elemType>
arrayListType<elemType>::arrayListType(const arrayListType<elemType>& otherList)
{
    this->maxSize = otherList.maxSize;
    this->length = otherList.length;

    list = new int[this->maxSize]; 	//create the array

    for (int j = 0; j < this->length; j++)  //copy otherList
        list [j] = otherList.list[j];
}//end copy constructor


template <class elemType>
const arrayListType<elemType>& arrayListType<elemType>::operator=
                             (const arrayListType<elemType>& otherList)
{
    if (this != &otherList)    //avoid self-assignment
    {
        delete [] list;
        this->maxSize = otherList.maxSize;
        this->length = otherList.length;
 
        list = new elemType[this->maxSize];

        for (int i = 0; i < this->length; i++)
            list[i] = otherList.list[i];
    }
    return *this;
}
template <class elemType>
void arrayListType<elemType>::sort() const
{
    for (int firstOutOfOrder = 1; firstOutOfOrder < length;
        firstOutOfOrder++)
        if (list[firstOutOfOrder] < list[firstOutOfOrder - 1])
        {
            elemType temp = list[firstOutOfOrder];
            int location = firstOutOfOrder;

            do
            {
                list[location] = list[location - 1];
                location--;
            } while (location > 0 && list[location - 1] > temp);

            list[location] = temp;
        }
} //end insertionSort

#endif