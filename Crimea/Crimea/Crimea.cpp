#include <iostream>
#include <Windows.h>
using namespace std;
int percent = 0;

int main()
{
    setlocale(0, "");
    while (percent < 100)
    {
        cout << "Аннексия Крыма завершена на " << percent << " процентов" << endl << "..." << endl;
        percent += 10;
        Sleep(1000);
    }
}


