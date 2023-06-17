// comparison.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    string name1;
    string name2;
    string name3;/////new
    cout << " 1st file ";
    cin >> name1;
    cout << " 2nd file ";
    cin >> name2;
    cout << " result file ";//new
    cin >> name3;/////new

    int found_in_1st;

    //string path1 = "file1big.txt";
    ifstream fin1;
    fin1.open(name1);

    //string path2 = "file2big.txt";
    ifstream fin2;
    fin2.open(name2);

    ofstream fout;
    fout.open(name3);


    if (!fin1.is_open()) { cout << "\n Неправильное имя 1-ого файла"; }
    if (!fin2.is_open()) { cout << "\n Неправильное имя 2-ого файла"; }





    // fot the 1st file
    string str1;//name of the variable
    string str2;// value
    string str3; //commentary to the variable is here

    // fot the 2nd file
    string str11;//name of the variable
    string str22;// value
    string str33; //commentary to the variable is here



    int i, count1, count2;
    fout << "Key";
    for (i = 0; i < 57; i++) fout << " ";
    fout << name1;
    for (i = name1.length(); i < 50; i++) fout << " ";
    fout << name2 << endl;


    while (!fin1.eof())
    {
        fin1 >> str1;//key if the first symbol is not'#'
        if (str1[0] != '#')
        {
            fin1 >> str2;//value 1
            getline(fin1, str3);//trash
            count1 = str1.length();
            count2 = str2.length();

            fout << str1;

            for (i = count1; i < 60; i++) fout << " ";
            fout << str2;

            fin2.open(name2);

            while (!fin2.eof())
            {
                fin2 >> str11;
                if ((str11[0] != '#') && (str1 == str11))
                {
                    fin2 >> str22;
                    getline(fin2, str33);
                    for (i = count2; i < 50; i++) fout << " ";
                    fout << str22;

                }

                else { getline(fin2, str33); }


            }


            fout << endl;


        }

        else
        {
            getline(fin1, str3); //if the first sy,bol is '#' then the whole line is trash
        }


        fin2.close();
    }

    fin1.close();
    ///////////////////////////////
    fin2.open(name2);

    while (!fin2.eof())
    {
        fin2 >> str11;
        if (str11[0] != '#')
        {
            fin2 >> str22;
            getline(fin2, str33);

            fin1.open(name1);

            found_in_1st = 0;//before lookung for this value in the first file
            while (!fin1.eof())
            {
                fin1 >> str1;
                if ((str1[0] != '#') && (str1 == str11))
                {
                    found_in_1st = 1;


                }
                else getline(fin1, str3);
            }
            fin1.close();
            //если в первом файле не нашли такой параметр, тобудем выводить параметр со второго файла

            if (found_in_1st == 0)
            {
                count1 = str11.length();
                fout << str11;
                for (i = count1; i < 110; i++) fout << ' ';
                fout << str22;

                fout << endl;///////////////////////

            }
            //fout << endl;

        }

        else { getline(fin2, str33); }









    }








    fin1.close();
    fin2.close();

    fout.close();



    cout << "\n Откройте "<<name3<<endl;





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
