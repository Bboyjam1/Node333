#pragma once
#include <iostream>
#include <string>
template <typename T>
class List
{
public:
	List()
	{
		Node* head = nullptr;
	}
	int add(T data)
	{
		Node* node = new Node(data);
		if (head == nullptr)
		{
			head = node;
			tale = node;
		}
		else
		{
			tail->next = node;
			tail = node;
		}
	}
	int del(T data)
	{
		Node* node = new Node(data);
		if (node == nullptr)
		{
			return;
		}
		if (head = node)
		{
			node = head->ptr
				delete node;
			return head;
		}
	}
	int find(T data)
	{
		Node* current = head;
		int a = 0;
		while (a)
		{
			if (current->a == a)
			{
				return a;
			}
				a++;
			current = current->next;
			
		}
		return -1;
	}
	int find2(T data)
	{

	}
	void print(T data)
	{
		Node* current = head;
		while (current)
		{
			std::cout << current->data << '\t';
			current = current->next;
		}

	}
private:
	void constr();
	void destr();
	List* head;
	List* tail;
private:
	class Node
	{
	public:
		template <typename T>
		T data;
		Node* next;
		Node()
		{
			data = "";
			next = nullptr;
		}
		Node(std::string data)
		{
			this->data = data;
			next = nullptr;
		}
		~Node()
		{

		}
	private:

	};
};