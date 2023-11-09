#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;



void checkValidParams(int n) {
    if (n < 2) {
        throw "Input incorrrect data";
    }
}


void chackValidInput() {

    if (cin.fail())
        throw "Incorrect input";
}


double calculate(int x, int n)
{
    double y = 0.;
    double op1 = x;

    if (x < 0) {
        for (int i = 1; i <= n - 1; i++) {
            for (int j = 1; j <= n; j++) {
                y += (x - i + j);
            }
        }
    }
    else {
        for (int i = 1; i <= (n - 1); i++) {
            y += (double)(op1 / i);
        }
    }

    return y;
}


int main()
{
    int x, n;
    try {
        cout << "Input n ";
        int n;
        cin >> n;
        chackValidInput();
        checkValidParams(n);

        cout << "Input x ";
        int x;
        cin >> x;
        chackValidInput();
        cout << "If you want save to file, enter 1";
        int isToSave;
        cin >> isToSave;
        if (isToSave == 1) {
            ofstream fout("Resultat.txt");
            fout << "x= " << x << "; " << "y= " << calculate(x, n) << endl;

        }

        cout << "x= " << x << "; " << "y= " << calculate(x, n) << endl;
    }
    catch (const char* ex) {

        cout << ex << endl;
        return -1;
    }
    catch (const char* ex1) {
        cout << "Data is not number" << ex1 << endl;
        return -2;
    }
}