//Karina Baslyk 14.11
#include<iostream>
using namespace std;
int main() {
	//2. напечатать все числа в диапозоне от a до b с шагом k.
	/*int a,b,k;
	cin >> a >> b >> k;
	for (int i = a; i <= b; i=i+k) { cout << i << ' ';}
	cout << endl;*/
	//1. напечатать все двузначные числа,которые делятся на 5 без остатка.
	/*for (int i = 5; i <= 95; i = i + 5) { cout << i << ' ';}
	cout << endl;*/
	//описание массива целых чисел.
	/*const int size = 5;
	int mas[size];
	//массива с клавиатуры:
	for (int i = 0; i < size; i = i + 1) {
		cin >> mas[i];
	}
	//вывести массив на экран:
	for (int i = 0; i < size; i = i + 1) {
		cout << mas[i] << ' ';
	}
		cout << endl;*/
	//Series1◦ .Даны десять вещественных чисел.Найти их сумму.
	    /*double sum = 0;
		const int size = 10;
		double mas[size];
		for (int i = 0; i < size; i++) {
			cin >> mas[i];
		}
		for (int i = 0; i < size; i = i + 1) {
			sum = sum + mas[i];
			cout << mas[i] << ' ';
		}
		cout <<"sum="<<sum << endl;*/
	//Series2. Даны десять вещественных чисел. Найти их произведение.
		/*(double sum = 1;
		const int size = 10;
		double mas[size];
		for (int i = 0; i < size; i++) {
			cin >> mas[i];
		}
		for (int i = 0; i < size; i = i + 1) {
			sum = sum * mas[i];
			cout << mas[i] << ' ';
		}
		cout << "pro=" << sum << endl;*/
	    //Series3.Даны десять вещественных чисел.Найти их среднее арифметическое
		double sum = 0;
		const int size = 10;
		double mas[size];
		for (int i = 0; i < size; i++) {
			cin >> mas[i];
		}
		for (int i = 0; i < size; i = i + 1) {
			sum = sum + mas[i];
			cout << mas[i] << ' ';
		}
		cout << "sum=" << sum/size << endl;
	return 0;
}