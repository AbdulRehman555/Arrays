#include "Array.h"



Array::Array(int length)
{
	items=new int[length];
	size = length;
	count = 0;
}


Array::~Array()
{
}

void Array::print()
{
	for (int i = 0; i < count; i++)
		cout << items[i]<<" ";
	cout << endl;
}

void Array::removeAt(int index)
{
	if (index<0 || index>count)
		cout << "ERROR! invalid index\n";
	for (int i = index; i < count; i++)
		items[i] = items[i + 1];
	count--;
}

int Array::indexOf(int item)
{
	for (int i = 0; i < count; i++)
		if (items[i] == item)
			return i;
	return -1;
}

void Array::sort()
{
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++)
			if(items[i]<items[j])
				swap(items[i], items[j]);
	}
}

void Array::update(int previousItem, int newItem)
{
	items[indexOf(previousItem)]=newItem;
}

void Array::insert(int item)
{
	if (size == count) {
		int *newItems = new int[count * 2];
		for (int i = 0; i < count; i++) {
			newItems[i] = items[i];
		}
		items = newItems;
	}
	items[count++] = item;
}
