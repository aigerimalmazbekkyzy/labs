﻿#include<iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    cout << "Введите число: ";
    string* hund = new string[9]{ "сто", "двести", "триста", "четыреста", "пятьсот","шестьсот", "семьсот", "восемьсот", "девятьсот" };
    string* t = new string[9]{ "десять", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто" };
    string* u = new string[9]{ "один", "два", "три", "четыре", "пять","шесть", "семь", "восемь", "девять" };
    int p;
    cin >> p;
    cout << hund[p / 100 - 1] << " " << t[(p / 10) % 10 - 1] + " " + u[p % 10 - 1];
}
