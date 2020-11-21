#pragma once
template <typename T>

class Node1
{
public:
	T value;
	Node1<T>* next;
	Node1<T>* prev;

	Node1() { next = nullptr; prev = nullptr; };
	~Node1() { };
};

