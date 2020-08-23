#pragma once
#include<iostream>
using namespace std;
class Array
{
	int *items;
	int count;
	int size;

public:
	Array(int length);
	void insert(int item);
	void print();
	void removeAt(int index);
	int indexOf(int item);
	void sort();
	void update(int previousItem, int newItem);
	~Array();
};

