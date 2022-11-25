// parsing.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int width, height;
    string line1, line2, welcome, goodbye;
    setlocale(LC_ALL, "ru");

    string path = "ex1.txt";
    ifstream fin;
    fin.open(path);

    if (!fin.is_open())
    {
        cout << " Error\n";
    }
    else 
    {
        cout << "Great\n";
        string str1, str2;
        int i, k;

        while(!fin.eof())
        {
            fin >> str1;
            
            if (str1 == "welcome_phrase")
            {
                getline(fin, str2);
                welcome = str2;
                //cout << " welcome_phrase:" << welcome << endl;
            }

            if (str1 == "line2")
            {
                getline(fin, str2);
                line2 = str2;
                //cout << " line2:" << line2 << endl;
            }

            if (str1 == "line1")
            {
                getline(fin, str2);
                line1 = str2;
                //cout << " line1:" << line1 << endl;
            }




            if (str1 == "goodbye_phrase")
            {
                getline(fin, str2);
                goodbye = str2;
                //cout << " goodbye_phrase:" << goodbye << endl;
            }

            if(str1=="height")
            {
                fin >> height;
                //cout << " height=" << height<<endl;
            }

            if (str1 == "width")
            {
                fin >> width;
                //cout << " width=" << width << endl;
            }




        }




        cout  << welcome << endl;

        for (i = 0; i < height; i++)
        {
            cout << " ";
            for (k = 0; k < width; k++)
                cout << "*";
            cout << endl;
        }


        cout  << line1 << endl;
        cout  << line2 << endl;
        //cout << " height=" << height << endl;
        //cout << " width=" << width << endl;
        cout << goodbye << endl;





        fin.close();
    }








    

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
