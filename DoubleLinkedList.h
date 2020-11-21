#pragma once
#include "Node1.h";

template <typename T>

class DoubleLinkedList
{
public:
	Node1<T>* start;
	Node1<T>* end;
	int count;

	DoubleLinkedList() {
		start = nullptr;
		end = nullptr;
		count = 0;
	};

	~DoubleLinkedList() {};

	bool IsEmpty() {
		return count == 0;
	}

	void InsertAtEnd(T new_value) {
		Node1<T>* new_node = new Node1<T>();
		new_node->value = new_value;

		if (IsEmpty()) {
			start = new_node;
			end = new_node;
		}
		else {
			end->next = new_node;
			new_node->prev = end;
			end = new_node;
		}

		count++;
		return;
	}

	Node1<T>* ExtractAtStart() {
		Node1<T>* temp = start;
		if (!IsEmpty()) {
			start = start->next;
			if (count == 1) {
				end = start;
			}
			count--;
		}
		return temp;
	}

	Node1<T>* ExtractAtEnd() {
		Node1<T>* temp = end;
		if (!IsEmpty()) {
			if (count == 1) {
				end = end->next;
				start = end;
			}
			else {
				Node1<T>* pretemp = start;
				temp = pretemp->next;
				while (temp != end) {
					pretemp = temp;
					temp = pretemp->next;
				}
				pretemp->next = temp->next;
				end = pretemp;
			}
			count--;
		}
		return temp;
	}

	Node1<T>* Extract(int position) {
		Node1<T>* temp = start;
		if (!IsEmpty()) {
			if ((count == 1) || (position == 0)) {
				return ExtractAtStart();
			}
			else {
				if (position >= count) {
					return ExtractAtEnd();
				}
				else {
					Node1<T>* pretemp = start;
					temp = pretemp->next;
					int index = 1;
					while ((temp) && (index < position)) {
						pretemp = temp;
						temp = pretemp->next;
						index++;
					}
					pretemp->next = temp->next;
					count--;
				}
			}
		}
		return temp;
	}

	Node1<T>* GetNode(int value) {
		Node1<T>* temp = start;
		while ((temp) && (temp->value != value)) {
			temp = temp->next;
		}
		return temp;
	}

};

