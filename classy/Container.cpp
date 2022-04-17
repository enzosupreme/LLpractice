#include"Container.h"
#include"Inventory.h"

Container::Container()
{
	head = nullptr;

}

void Container::appendNode(int g, int w, int l,int d,int s, string n)
{

	ListNode* newNode;
	ListNode* nodePtr;


	newNode = new ListNode;
	newNode->itemGold = g;
	newNode->itemWeight = w;
	newNode->itemName = n;
	newNode->itemLevel = l;
	newNode->itemDamage1 = d;
	newNode->itemDamage2 = s;
	newNode->next = nullptr;
	if (!head)
		head = newNode;
	else 
	{
		nodePtr = head;

		while (nodePtr->next)
			nodePtr = nodePtr->next;

		nodePtr->next = newNode;
	}

}

void Container::displayList()
{
	ListNode* nodePtr;

	nodePtr = head;

	while (nodePtr)
	{
		cout << "Type: " << nodePtr->itemName << endl;
		cout << "Level: " << nodePtr->itemLevel << endl;
		cout << "Damage: " << nodePtr->itemDamage1 << "d" << nodePtr->itemDamage2 << endl;
		cout << "Weight: " << nodePtr->itemWeight << endl;
		cout << "Value: " << nodePtr->itemGold << endl;

		cout << endl;

		nodePtr = nodePtr->next;

	}
}