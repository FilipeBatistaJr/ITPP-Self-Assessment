#include <iostream>

using namespace std;

int main()
{
		cout << "QUESTION 1" << endl;
		double length, width, area;

		cout << "Enter a value for length." << endl;
		cin >> length;
		cout << "Enter a value for width." << endl;
		cin >> width;
		area = length * width;

		cout << "The area of the square is:" << area << endl;


		cout << "QUESTION 2" << endl;
		int a, b, sum;

		cout << "Enter a value for a." << endl;
		cin >> a;
		cout << "Enter a value for b." << endl;
		cin >> b;
		sum = a + b;

		cout << "The sum of these two numbers are:" << sum << endl;


		cout << "QUESTION 3" << endl;
		double items = 257;
		double items_per_packet = 14;
		double result;

		cout << "Thandi has a total of 257 items. Enter amount." << endl;
		cin >> items;
		cout << "Thandi can fit a total of 14 items into a packet. Enter amount." << endl;
		cin >> items_per_packet;
		result = items / items_per_packet;

		cout << "The amount of packets Thandi will have: " << result << endl;

	
		cout << "QUESTION 4" << endl;
		string name;
		string surname;
		int age;

		cout << "Enter your Name" << endl;
		cin >> name;
		cout << "Enter your Age" << endl;
		cin >> age;
		cout << "Enter your Surname" << endl;
		cin >> surname;

		cout << "Hey there " << name << endl << surname << endl;
		cout << "You are " << age << " years old." << endl;


		cout << "QUESTION 5" << endl;
		int socks;
		double price = 3.50;
		result;

		cout << "How many socks would you want?" << endl;
		cin >> socks;
		cout << "You bought them at R3.50 each. Enter price" << endl;
		cin >> price;
		result = socks * price;

		cout << "The total amount due is :R" << result << endl;


		cout << "QUESTION 6" << endl;
		int hours;
		double rate;
		result;

		cout << "Please enter your hours worked" << endl;
		cin >> hours;
		cout << "Please enter your hourly rate" << endl;
		cin >> rate;
		result = hours * rate;

		cout << "Your total weekly wage is R:" << result << endl;


		cout << "QUESTION 7" << endl;
		int nodogs;
		int totalb;
		const int grams = 250;
		const int buy = 50;
		int total;

		cout << "Enter amount of dogs that you own:" << endl;
		cin >> nodogs;

		totalb = nodogs * grams;
		total = totalb / buy;

		cout << "Total amount:R" << total << endl; 
		
		cout << "QUESTION 8" << endl;
		int paintBrushes;
		const double priceBrushes = 19.75;
		result;

		cout << "Enter amount of Paint Brushes you buy:" << endl;
		cin >> paintBrushes;
		result = paintBrushes * priceBrushes;
		cout << "Total amount due:R" << result << endl;

		cout << "QUESTION 9" << endl;
		int degreef;
		double degreec;

		cout << "Enter degrees Fahrenheit" << endl;
		cin >> degreef;

		degreec = 5 * (degreef - 32) / 9;

		cout << "Answer in Fahrenheit:" << degreef << degreec << endl;

		
		cout << "QUESTION 10" << endl;
		const int hours_worked = 8;
		const int rate_work = 11;
		const int taxi_fare = 12;
		const int days_worked = 5;
		int totalc;
		int totald; 
		int totale; 
		int totalf;
		string name_employee;

		cout << "Enter Your name" << endl;
		cin >> name_employee;
		totalf = hours_worked * rate_work;
		totale = totalf * days_worked;
		totald = taxi_fare * days_worked;
		totalc = totale - totald;
		
		cout << "Your total earnings:R" << totalc << endl;

		cout << "I. int no_marbles" << endl;
		cout << "II. double money_due" << endl;
		cout << "III. string register" << endl;
		cout << "IV. const double height = 1.75" << endl;
		cout << "V. string name" << endl;
		cout << "VI. int code" << endl;
		cout << "VII. string dog_descr" << endl;
		cout << "VIII. int no_smarties " << endl;


		return 0;
}



