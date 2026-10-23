//Лабораторна робота №4 Романовича Іллі КН-11 23.10.2026
//
// Завдання 1
//Написати програму, яка обчислює площу наступних фігур згідно вибору користувача :
//
//прямокутника;
//	паралелепіпеда;
//	трикутника

//#include <iostream>
//#include <cmath>
//using namespace std;
//enum class figure {
//	prmo = 1,
//	paral,
//	triangle
//};
//
//int main() {
//	cout << "Choose whose area you want to calculate:\n";
//	cout << "1 - of a rectangle\n";
//	cout << "2 - parallelepiped\n";
//	cout << "3 - of a triangle\n";
//	cout << "Your choise: ";
//	int userchoise = 0;
//	cin >> userchoise;
//
//	figure method = static_cast<figure>(userchoise);
//	switch (method) {
//	case figure::prmo: {
//		double w = 0, h = 0;
//		cout << "\n---Calculating the area of rectangle---\n";
//		cout << "Enter the width(w): ";
//		cin >> w;
//		cout << "Enter the height(h): ";
//		cin >> h;
//
//		double S = w * h;
//		cout << "Area rectangle S = " << S << endl;
//		break;
//			
//	}
//	case figure::paral: {
//		double w = 0, h = 0, l = 0;
//		cout << "\n---Calculating the area of a paralelepiped---\n";
//		cout << "Enter the width(w): ";
//		cin >> w;
//		cout << "Enter the height(h): ";
//		cin >> h;
//		cout << "Enter the length(l): ";
//		cin >> l;
//
//		double S = 2 * (w * h + w * l + h * l);
//		cout << "Area paralelepiped S = " << S << endl;
//		break;
//	}
//	case figure::triangle: {
//		double a = 0, b = 0, c = 0;
//		cout << "\n--- Calculating the Area of ​​a Triangle (Heron's Formula) ---\n";
//		cout << "Enter side A: ";
//		cin >> a;
//		cout << "Enter side B: ";
//		cin >> b;
//		cout << "Enter side C: ";
//		cin >> c;
//
//		if (a + b > c && a + c > b && b + c > a) {
//			double p = (a + b + c) / 2.0;
//			double s = sqrt(p * (p - a) * (p - b) * (p - c));
//			cout << "Semiperimeter (p=): " << p << "\n";
//			cout << "Area triangle (S): " << s << endl;
//		}
//		else {
//			cout << "Error!...triangle of this sides it doesn't happen.\n";
//		}
//		break;
//	}
//	default:
//		cout << "\nEror! Incorrect choise figure. Choosing from 1 to 3.\n";
//		break;
//	}
//	return 0;
//	
//
//}

//Завдання 2
//Написати програму - калькулятор.Ввід даних здійснювати у форматі число операція число(наприклад 1.2 + 3.45).
//У програмі передбачити уникнення помилок(ділення на нуль і т.д.).
//Використати оператор switch.

//#include <iostream>
//
//using namespace std;
//
//int main() {
//	double num1 = 0, num2 = 0;
//	char op;
//	cout << "Enter expression(e.g 1.2+3.45: ";
//	cin >> num1 >> op >> num2;
//	switch (op) {
//	case '+':
//		cout << "Result: " << num1 + num2 << endl;
//		break;
//	case '-':
//		cout << "Result: " << num1 - num2 << endl;
//		break;
//	case '*':
//		cout << "Result: " << num1 * num2 << endl;
//		break;
//	case '/':
//		if (num2 == 0) {
//			cout << "Error:Division by zero!" << endl;
//		}else{
//			cout << "Result: " << num1 / num2 << endl;
//			
//		}
//		break;
//	default:cout << "Eror : Unknown operator '" << op << "'!" << endl;
//		break;
//	}
//	return 0;
//}

//Завдання 3
//Корабель рухається у певному напрямі(північ, південь, захід, схід).
//Напрям задається символом(N – північ, S - південь, E – схід, W – захід).
//Вводиться команда виду «наліво».«направо».«вперед», «назад»(L - наліво, R - направо, F - вперед, B - назад).Вивести новий курс корабля після виконання  команди.
//Використати оператор switch.

//#include <iostream>
//using namespace std;
//
//int main() {
//    char choise;
//    cout << "Choosing initial direction 'N' 'S' 'E' 'W': ";
//    cin >> choise;
//
//  
//    char move;
//    cout << "Choosing move ship 'L' 'R' 'F' 'B': ";
//    cin >> move;
//
//    cout << "\n--- Result ---\n";
//
// 
//    switch (choise) {
//    case 'N': {
//        cout << "The ship was facing North. ";
//
//     
//        switch (move) {
//        case 'F': cout << "Moving Forward: now swimming North.\n"; break;
//        case 'B': cout << "Moving Back: now swimming South.\n"; break;
//        case 'R': cout << "Turning Right: now swimming East.\n"; break;
//        case 'L': cout << "Turning Left: now swimming West.\n"; break;
//        default:  cout << "Error! Enter only 'L' 'R' 'F' 'B'.\n"; break;
//        }
//        break;
//    }
//    case 'S': {
//        cout << "The ship was facing South. ";
//
//   
//        switch (move) {
//        case 'F': cout << "Moving Forward: now swimming South.\n"; break;
//        case 'B': cout << "Moving Back: now swimming North.\n"; break;
//        case 'R': cout << "Turning Right: now swimming West.\n"; break;
//        case 'L': cout << "Turning Left: now swimming East.\n"; break;
//        default:  cout << "Error! Enter only 'L' 'R' 'F' 'B'.\n"; break;
//        }
//        break;
//    }
//    case 'E': {
//        cout << "The ship was facing East. ";
//
//        switch (move) {
//        case 'F': cout << "Moving Forward: now swimming East.\n"; break;
//        case 'B': cout << "Moving Back: now swimming West.\n"; break;
//        case 'R': cout << "Turning Right: now swimming South.\n"; break;
//        case 'L': cout << "Turning Left: now swimming North.\n"; break;
//        default:  cout << "Error! Enter only 'L' 'R' 'F' 'B'.\n"; break;
//        }
//        break;
//    }
//    case 'W': {
//        cout << "The ship was facing West. ";
//
// 
//        switch (move) {
//        case 'F': cout << "Moving Forward: now swimming West.\n"; break;
//        case 'B': cout << "Moving Back: now swimming East.\n"; break;
//        case 'R': cout << "Turning Right: now swimming North.\n"; break;
//        case 'L': cout << "Turning Left: now swimming South.\n"; break;
//        default:  cout << "Error! Enter only 'L' 'R' 'F' 'B'.\n"; break;
//        }
//        break;
//    }
//    default: {
//        cout << "Error! Enter only 'N' 'S' 'E' 'W'.\n";
//        break;
//    }
//    }
//
//    return 0;
//}

//Завдання 4
//Написати програму, що реалізує процедуру замовлення в міні - піцерії.
//У меню піцерії передбачено 4 види піци та три види напоїв.Користувачеві виводиться меню(спочатку піци, потім напої),
//що містить код та назву.Користувач вводить код бажаного продукту та кількість одиниць цього продукту.
//У піцерії передбачено два види знижок :
//■ якщо загальна сума замовлення більше 50$, то розмір знижки становить 20 % суми замовлення;
//■ кожна п'ята піца – у подарунок.
//Вивести користувачеві «чек» для оплати у вигляді : назва – кількість – ціна та загальна сума замовлення.

//#include <iostream>
//using namespace std;
//int main() {
//	char pizza;
//	double quant = 0;
//	double quant1 = 0;
//	char water;
//
//	double pizzaprice;
//	double waterprice;
//	cout << "\nWelcome to Pizza-House\n"<<endl;
//	cout << "\nOur Menu Pizza:\n";
//	cout << "[1]" << "BeconPizza" << "<--25$"<<endl;
//		cout << "[2]" << "FourCheesePizza" << "<--15$"<<endl;
//		cout << "[3]" << "BigBROPizza" << "<--30$"<<endl;
//		cout << "[4]" << "SuperCheapPizza" << "<--10$"<<endl;
//		cout << "Enter your choise pizza:  ";
//		cin >> pizza;
//		cout << " And quantity: ";cin >> quant;
//		cout << "\nOur Menu Drinks:\n";
//		cout << "[1]" << "Coca-Cola 500ml." << "<--2$"<<endl;
//		cout << "[2]" << "Fanta 500ml." << "<--1.5$"<<endl;
//		cout << "[3]" << "Water 1L." << "<--0.5$"<<endl;
//		cout << "Enter your choise water:  ";
//		cin >> water;
//		cout << " And quantity: ";cin >> quant1;
//
//		switch (pizza) {
//		case'1': pizzaprice = 25.0; break;
//		case'2': pizzaprice = 15.0; break;
//		case'3': pizzaprice = 30.0;break;
//		case'4':pizzaprice = 10.0;break;
//		default:
//			cout << "\nWrong pizza choice! Price set to 0.\n";
//			break;
//		}
//		switch (water) {
//		case '1': waterprice = 2.0;   break;
//		case '2': waterprice = 1.5;   break;
//		case '3': waterprice = 0.5;   break;
//		default:
//			cout << "Wrong water choice! Price set to 0.\n";
//			break;
//		}
//		double totalPizza = pizzaprice * quant;
//		double totalWater = waterprice * quant1;
//		double finalSum = totalPizza + totalWater;
//
//		cout << "\n----- YOUR RECEIPT -----\n";
//		cout << "Pizza cost: " << totalPizza << "$\n";
//		cout << "Drinks cost: " << totalWater << "$\n";
//		cout << "Total to pay: " << finalSum << "$\n";
//		cout << "------------------------\n";
//
//
//	return 0;
//}

//Завдання 5
//Дано ціле число в діапазоні 100 - 999. Вивести рядок - опис даного числа.Наприклад: 256 – "двісті п'ятдесят шість", 814 – "вісімсот чотирнадцять»

//#include <iostream>
//#include <windows.h>
//using namespace std;
//int main(){
//    SetConsoleCP(65001);       
//    SetConsoleOutputCP(65001);
//int number;
//cout << "Введи число від 100-999: ";
//cin >> number;
//
//if (number < 100 || number > 999) {
//    cout << "Помилка!Число виходить за межі діапазона (100-999):" << endl;
//    return 0;
//}
//
//
//int hundreds = number / 100;      
//int dozens = (number / 10) % 10; 
//int units = number % 10;         
//
//cout << "Description: ";
//
//
//switch (hundreds) {
//case 1: cout << "сто "; break;
//case 2: cout << "двісті "; break;
//case 3: cout << "триста "; break;
//case 4: cout << "чотириста "; break;
//case 5: cout << "п'ятсот "; break;
//case 6: cout << "шістсот "; break;
//case 7: cout << "вісімсот "; break; 
//case 8: cout << "вісімсот "; break;
//case 9: cout << "дев'ятсот "; break;
//}
//
//
//
//if (dozens == 1) {
//    int teen = dozens * 10 + units; 
//    switch (teen) {
//    case 10: cout << "десять"; break;
//    case 11: cout << "одинадцять"; break;
//    case 12: cout << "дванадцять"; break;
//    case 13: cout << "тринадцять"; break;
//    case 14: cout << "чотирнадцять"; break;
//    case 15: cout << "п'ятнадцять"; break;
//    case 16: cout << "шістнадцять"; break;
//    case 17: cout << "сімнадцять"; break;
//    case 18: cout << "вісімнадцять"; break;
//    case 19: cout << "дев'ятнадцять"; break;
//    }
//}
//else {
//
//    switch (dozens) {
//    case 2: cout << "двадцять "; break;
//    case 3: cout << "тридцять "; break;
//    case 4: cout << "сорок "; break;
//    case 5: cout << "п'ятдесят "; break;
//    case 6: cout << "шістдесят "; break;
//    case 7: cout << "сімдесят "; break;
//    case 8: cout << "вісімдесят "; break;
//    case 9: cout << "дев'яносто "; break;
//    }
//
//
//    switch (units) {
//    case 1: cout << "один"; break;
//    case 2: cout << "два"; break;
//    case 3: cout << "три"; break;
//    case 4: cout << "чотири"; break;
//    case 5: cout << "п'ять"; break;
//    case 6: cout << "шість"; break;
//    case 7: cout << "сім"; break;
//    case 8: cout << "вісім"; break;
//    case 9: cout << "дев'ять"; break;
//    }
//}
//
//cout << endl;
//return 0;
//}
// 
// 
//Завдання 5
//Дано країну(номер у пункті меню).Визначити на якому континенті вона розташована.


#include <iostream>
using namespace std;
int main() {
	char chooise;
	cout << "\nEnter the country:\n" << endl;
	cout << "[1]-Ukraine." << endl;
	cout << "[2]-USA." << endl;
	cout << "[3]-FRANCE." << endl;
	cout << "[4]-CHINA." << endl;
	cout << "[5]-Canady." << endl;
	cout << "[6]-Australia" << endl;
 cin >> chooise;
 switch (chooise) {
 case '1': {
	 cout << "\nCountry Ukraine->Ukraine is the largest country located entirely within Europe, covering a total area of 603,700 km\n";
	 break;
 }
 case'2': {
	 cout << "\nThe United States of America (USA), commonly known as the United States or America, is a country primarily located in North America.\n";
	 break;
 }
 case'3': {
	 cout << "\nFrance, officially the French Republic, is a transcontinental country predominantly located in Western Europe.\n";
	 break;
 }
 case '4': {
	 cout << "\nChina, officially the People's Republic of China (PRC), is a country located in East Asia.\n";
	 break;
 }
 case'5': {
	 cout << "\nCanada is the second-largest country in the world by total land area, covering approximately 9.98 million km².\n";
	 break;
 }
 case'6': {
	 cout << "\nAustralia, officially the Commonwealth of Australia, is the largest country in Oceania and the world's sixth-largest country by total area.\n";
	 break;
 }
 default:
	 cout << "\nError! Enter digits to [1]-[6]\n";
	 break;
 }
 return 0;
}
