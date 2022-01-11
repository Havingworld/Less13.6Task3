/*
В базу данных, являющуюся вектором, с клавиатуры приходят целочисленные значения, и помещаются в конец.
Однако, эта база может хранить только 20 элементов, а дальше необходимо будет удалять элементы, которые лежат в базе дольше всех.

При вводе -1 с клавиатуры необходимо вывести всё содержимое базы данных (то есть 20 или менее элементов).
При выводе элементы должны быть в том порядке, в котором они добавлялись в базу данных.

Попробуйте написать максимально оптимизированное решение данной задачи, чтобы совершалось как можно меньше расширений и перемещений элементов внутри вектора.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> database(20);
    int nInput = 0;
    int nCount = 0;
    cout << "input number in data base: ";
    while (nInput != -1) {
        cin >> nInput;
        if (nCount < 20) {
            database[nCount] = nInput;
            nCount++;
        }
        else { database.push_back(nInput); 
            for (int i = 0; i < database.size()-1; i++) {
                database[i] = database[i + 1];
            }
            database.pop_back();
        }
        
    }
    
    for (int i = 0; i < database.size(); i++) {
        cout << database[i] << " ";
    }
}
