#include <iostream>
#include <iomanip>
using namespace std;
struct menu
{
	string name;
	int price;
} arr[30];
void printmenu(menu arr[30])
{
	cout << "-------------------------------MENU-----------------------------------\n"
		 << endl;
	cout << "        !_Fast Foods__!" << endl
		 << endl
		 << endl;
	for (int i = 0; i <= 7; i++)
	{
		cout << i + 1 << ":" << arr[i].name << setw(10) << arr[i].price;
		cout << "\n";
	}
	cout << "\n      !__DESSERTS__ !" << endl
		 << endl
		 << endl;
	for (int i = 8; i <= 10; i++)
	{
		cout << i + 1 << ":" << arr[i].name << setw(10) << arr[i].price;
		cout << "\n";
	}

	cout << "\n      !__SHAKES__!" << endl
		 << endl
		 << endl;
	for (int i = 11; i <= 15; i++)
	{
		cout << i + 1 << ":" << arr[i].name << setw(10) << arr[i].price;
		cout << "\n";
	}
	cout << "\n \n";
	cout << "\n      !__MOJITOS__!" << endl
		 << endl
		 << endl;
	for (int i = 16; i <= 20; i++)
	{
		cout << i + 1 << ":" << arr[i].name << setw(10) << arr[i].price;
		cout << "\n";
	}
	cout << "\n \n";
}

int main()
{

	arr[0].name = "Veg-Pizza\t\t";
	arr[0].price = 300;

	arr[1].name = "Aloo-Tikki-Burger\t";
	arr[1].price = 60;

	arr[2].name = "Steam-Momos\t\t";
	arr[2].price = 50;

	arr[3].name = "Manchurian\t\t";
	arr[3].price = 80;

	arr[4].name = "Cheesy-Grilled-Sandwich";
	arr[4].price = 40;

	arr[5].name = "Hakka Noodles\t\t";
	arr[5].price = 100;

	arr[6].name = "Spring roll\t\t";
	arr[6].price = 150;

	arr[7].name = "White Sauce Pasta\t";
	arr[7].price = 120;

	arr[8].name = "	Pastries\t";
	arr[8].price = 70;

	arr[9].name = "Ice-Cream\t\t";
	arr[9].price = 60;

	arr[10].name = "Cupcake\t\t";
	arr[10].price = 80;

	arr[11].name = "Kesar Badam\t\t";
	arr[11].price = 50;

	arr[12].name = "Choco Loaded\t\t";
	arr[12].price = 60;

	arr[13].name = "Kit-Kat\t\t";
	arr[13].price = 40;

	arr[14].name = "Oreo\t\t\t";
	arr[14].price = 65;

	arr[15].name = "Butter-scotch\t";
	arr[15].price = 45;

	arr[16].name = "Blue Magic\t\t";
	arr[16].price = 75;

	arr[17].name = "Red Melon\t\t";
	arr[17].price = 85;

	arr[18].name = "Green Apple\t\t";
	arr[18].price = 70;

	arr[19].name = "Mango Mint\t\t";
	arr[19].price = 55;

	arr[20].name = "Blackberry\t\t";
	arr[20].price = 95;
	printmenu(arr);
	int limit, l, sum = 0, orders, o, extra, orderno, check[15];
	int j = 0;
limits:
	cout << "Enter amount " << endl;
	cin >> limit;
	if (limit < 40)
	{
		goto end;
	}
	cout << "You can Order Following things within your Budget, Please Choose  :" << endl;
	for (int i = 0; i <= 20; i++)
	{

		if (arr[i].price <= limit)
		{
			cout << i + 1 << "\t" << arr[i].name << endl;
		}
	}
	cout << " If you want to order item which is not in ur limit .....then PRESS 1 and re-enter ur limit!! if not then PRESS 0" << endl;
	cin >> l;
	if (l == 1)
	{
		goto limits;
	}

	cout << "Enter how many thing you want to order" << endl;

	cin >> orders;

	cout << "Enter you desire orders from above order list" << endl;

	for (int i = 0; i < orders; i++)
	{
	start:

		cin >> orderno;
		cout << endl;
		if (i == 0)
		{
			if (limit >= arr[orderno - 1].price)
			{
				cout << orderno << "  " << arr[orderno - 1].name << " " << arr[orderno - 1].price;
				goto order;
			}
			else
			{
				cout << "You have to order from above list" << endl;
				goto start;
			}
		}
		if (i >= 1)
		{
			//  check:
			// for(int j=0;j<=20;j++)

			if (extra >= arr[orderno - 1].price)
			//{ if(orderno==(j+1))                         //	if(i>=1)
			{
				goto order;
			} //	{ goto there;

			else
			{
				cout << "You have to order from the above list only" << endl;
				goto start;
			}
		}

		//	}
	order:
		cout << "\nYour order Summary : " << i + 1 << ":" << arr[orderno - 1].name << " is " << arr[orderno - 1].price << endl;
		sum = sum + arr[orderno - 1].price;
		cout << "Amount To PAY is " << sum << endl;
		if (sum <= limit)
		{
			extra = limit - sum;
			// cout << "Extra amount is" << extra << endl;
			if (extra < 40)
			{
				cout << "Extra amount is"
					 << " " << extra << " "
					 << "\nYou are out of Budget :)" << endl;
				break;
				goto end;
			}
			for (int i = 0; i <= 20; i++)
			{
				if (extra >= arr[i].price)
				{
					j++;
					cout << "You can order more items from "
						 << "   " << i + 1 << " " << arr[i].name << endl;

					// arr[j]=i+1;
					continue;
				}
			}
			i++;
			goto start;
		}
		else if (sum > limit)
		{
			cout << "  You have used all your money  ";
			break;
		}
	}
end:
{
	cout << endl;
	// break;
	cout << "_________________Visit Again__________________";
}
	return 0;
}