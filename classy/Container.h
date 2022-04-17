#pragma once
#ifndef CONTAINER_H
#define CONTAINER_H
#include"Inventory.h"

class Container
{
private:
	struct ListNode
	{
		int itemGold;
		int itemWeight;
		int itemLevel;
		int itemDamage1;
		int itemDamage2;
		string itemName;
		  
		struct ListNode* next;
	};

	ListNode* head;

public:
	Container();

	void appendNode(int, int, int, int,int, string);
	void insertNode();
	void deleteNode();
	void displayList();


};
#endif