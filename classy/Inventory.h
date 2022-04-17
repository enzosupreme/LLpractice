#pragma once
#include<string>
#include<set>
#include<algorithm>
#include<iostream>
using namespace std;

class Inventory
{
private:
	string item;
	int weight;
	int gold;
	int lvl;
	int die;
	int sides;
	
	string list[5] = { "Sword", "Axe", "Hammer", "Bow", "Crossbow" };
	

public:

	Inventory()
	{
		srand(time(NULL));
		item = " ";
		weight = 0;
		gold = 0;
		lvl = rand() % 20 + 1;

	};
	~Inventory()
	{
		item = " ";
		weight = 0;
		gold = 0;
		lvl = 0;
	}
	void setItem();
	void setDamage();
	void setWeight();
	void setGold();

	int getGold() const;
	int getLevel() const;
	int getWeight() const;
	int getSides() const;
	int getDie() const;
	string getItem() const;
	
	

};