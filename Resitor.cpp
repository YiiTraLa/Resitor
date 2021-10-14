#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main() {
	// going to make it output a chart for the user to select which color
	// going to try
	string var1, var2, var3, var4; //  going to be the final band colors at the end before it calculates
	cout << "The table below shows what colors the bands can be:" << endl;
	cout << "|..........|" << endl;
	cout << fixed << setprecision(2) << "| Black    |" << endl;
	cout << fixed << setprecision(2) << "| Brown    |" << endl;
	cout << fixed << setprecision(2) << "| Red      |" << endl;
	cout << fixed << setprecision(2) << "| Orange   |" << endl;
	cout << fixed << setprecision(2) << "| Green    |" << endl;
	cout << fixed << setprecision(2) << "| Blue     |" << endl;
	cout << fixed << setprecision(2) << "| Violet   |" << endl;
	cout << fixed << setprecision(2) << "| Gray     |" << endl;
	cout << fixed << setprecision(2) << "| White    |" << endl;
	cout << fixed << setprecision(2) << "| Gold     |" << endl;
	cout << fixed << setprecision(2) << "| Silver   |" << endl;
	cout << fixed << setprecision(2) << "| NoColor  |" << endl;
	cout << "|..........|" << endl;

	string Black, Brown, Red, Orange, Green, Blue, Violet, Gray, White, Gold, Silver, NoColor;
	while ((var1 != Black) || (var1 != Brown) || (var1 != Red) || (var1 != Orange) || (var1 != Green) || (var1 != Blue) || (var1 != Violet) || (var1 != Gray) || (var1 != White) || (var1 != Gold) || (var1 != Silver) || (var1 != NoColor))
	{
		cout << "Please input what the 1st band of color will be: " << endl;
		cin >> var1;
	}


	if (!(var2 = Black) || !(var2 = Brown) || !(var2 = Red) || !(var2 = Orange) || !(var2 = Green) || !(var2 = Blue) || !(var2 = Violet) || !(var2 = Gray) || !(var2 = White) || !(var2 = Gold) || !(var2 = Silver) || !(var2 = NoColor))
	{
		cout << "Please input what the 2nd band of color will be: " << endl;
		cin >> var2;
	}


	cout << "Please input what the 3rd band of color will be: " << endl;
	cin >> var3;
	cout << "Please input what the 4th band of color will be: " << endl;
	cin >> var4;


	cout << var1 << " " << var2 << " " << var3 << " " << var4 << endl;

	// need to have if else statement for wrong inputs 
	// switch (Black) // switch for each color starting with black, going through all 4 bands so it outputs what each color band needs and it will need to be asked again
   // {
	//case Black: 
	//   int band1 = 0;
	//    break;
	//case 'B': cout << "1";
   //     break;
   // case 'C': cout << "3";
   //     break;
   // case 'D': cout << "4";
   //     break;
   // case 'E': cout << "6";
 //   }


	return 0;
}