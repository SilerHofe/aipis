#include <iostream>
#include <string>
using namespace std;
// Главная функция - точка входа в программу
int main(){
    string name; // Переменная для хранения имени пользователя

    // Запрашиваем ввод от пользователя
    cout << "Enter your name: ";
    cin >> name; // Читаем ввод пользователя
    // Выводим приветственное сообщение
    cout << "Hello world from " << name << endl;

    return 0; // Программа завершена успешно
}