#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//Series1◦.Даны десять вещественных чисел.Найти их сумму.
	/*double x, sum;
	int i = 1;
	sum = 0;
	while (i <= 10) {
		cin >> x;
		sum += x;
		i++;
	}
	cout << sum << endl;*/

	//Series2.Даны десять вещественных чисел.Найти их произведение.
	/*double res, x;
	int i;
	res = 1;
	for (i = 1; i <= 10; ++i) {
		cin >> x;
		res *= x;
	}
	cout << res << endl;*/

	//Series3.Даны десять вещественных чисел.Найти их среднее арифметическое.
	/*double res, x;
	int i = 1;
	res = 0;
	while (i <= 10) {
		cin >> x;
		res += x;
		i++;
	}
	res = res / 10;
	cout << res << endl;*/

	//Series4.Дано целое число N и набор из N вещественных чисел.Вывести сумму и произведение чисел из данного набора.
	/*double n, pro, sum;
	int x;
	pro = 1;
	sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		sum += x;
		pro *= x;
	}
	cout << sum << " " << pro << endl;*/

	//Series5.Дано целое число N и набор из N положительных вещественных чисел.Вывести в том же порядке целые части всех чисел из данного 
	//набора(как вещественные числа с нулевой дробной частью), а также сумму всех целых частей.
	/*double x;
	double x = 1.5;
	int i, n, sum;
	i = 1;
	sum = 0;
	cin >> n;
	while (i <= n) {
		cout << "Целые часть числа - " << x - (int)x << endl;
		cin >> x;
		sum += (int)x;
		i++;
	}
	cout << "Сумма чисел - " << sum << endl;*/

	
	//Series6.Дано целое число N и набор из N положительных вещественных чисел.Вывести в том же порядке дробные части всех чисел из данного набора
	//(как вещественные числа с нулевой целой частью), а также произведение всех дробных частей.
	int i, n, pro;
	double x = 1.5;
	i = 1;
	pro = 1;
	cin >> n;
	while (i <= n) {
		
		cout << "Целые часть числа - " << x - (int) x << endl;
		cin >> x;
		pro += (int)x;
		i++;
	}
	cout << "Произведение чисел - " << pro << endl;

	return 0;
}