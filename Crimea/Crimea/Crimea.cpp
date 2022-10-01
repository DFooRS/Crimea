#include <iostream>
#include <Windows.h>
using namespace std;
int percent = 0;

int main()
{
    setlocale(0, "");
    cout << "Аннексия Крыма начата" << endl << "..." << endl;
    Sleep(1000);
    while (percent < 100)
    {
        cout << "Аннексия Крыма завершена на " << percent << " процентов" << endl << "..." << endl;
        percent += 10;
        Sleep(1000);
    }
    cout << "Аннексия Крыма успешно завершена. Поздравляем" << endl << "..." << endl;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
}


