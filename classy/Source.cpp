#include "Container.h"
#include "Inventory.h"
#include<iostream>
using namespace std;


int main()
{
	Container chest;
	string name;
	string damage;
	int w,g,l,s,d;
	char response;

	cout << "Type 'r' to roll a weapon. Type 'x' to exit: ";
	cin >> response;

	while (response != 'x')
	{
		if (response == 'r')
		{
			Inventory* weapon = new Inventory;
			weapon->setGold();
			weapon->setWeight();
			weapon->setItem();

			name = weapon->getItem();
			w = weapon->getWeight();
			g = weapon->getGold();
			l = weapon->getLevel();
			weapon->setDamage();
			d = weapon->getDie();
			s = weapon->getSides();

			cout << "You rolled: \n";
			cout << "Type: " << name << endl;
			cout << "Level: " << l << endl;
			cout << "Damage: " << d << "d" << s << endl;
			cout << "Weight: " << w << " Lbs" << endl;
			cout << "Worth: " << g << " GP" << endl;

			chest.appendNode(g, w, l, d, s, name);

			weapon = nullptr;
			delete weapon;

			cout << "Type 'r' to roll a weapon. Type 'x' to exit: ";
			cin >> response;

		}

		else
		{
			cout << "Invalid Selection!" << endl;
			break;
		}
		
	}
	cout << "Thanks for playing....\n";
	cout << "Here is your inventory: " << endl;
	chest.displayList();

	
	return 0;
}
