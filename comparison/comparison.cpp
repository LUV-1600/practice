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
    cout << " 1st file ";
    cin >> name1;
    cout << " 2nd file ";
    cin >> name2;



    //string path1 = "file1big.txt";
    ifstream fin1;
    fin1.open(name1);

    //string path2 = "file2big.txt";
    ifstream fin2;
    fin2.open(name2);


    // fot the 1st file
    string str1;//name of the variable
    string str2;// value
    string str3; //commentary to the variable is here

    // fot the 2nd file
    string str11;//name of the variable
    string str22;// value
    string str33; //commentary to the variable is here
    
    

    int i;
    cout << "Key";
    for (i = 0; i < 57; i++) cout << " ";
    cout << name1;
    for (i = name1.length(); i < 30; i++) cout << " ";
    cout << name2;
    //for (i = 0; i < 20; i++) cout << " ";
    cout << endl;
    while (!fin1.eof())
    {


        
        //reading the 1st file
        fin1 >> str1;
        fin1 >> str2;
        getline(fin1, str3);
        int count1 = str1.length();//number f characters in key
        int count2 = str2.length();//number f characters in value 1
        //cout << "count1=" << count1 << endl;

        //reading the 2nd file
        fin2 >> str11;
        fin2 >> str22;
        getline(fin2, str33);
        int count3 = str22.length();//number f characters in value 2
        //cout <<""<<str1 << "\t\t " << str2 << "\t\t " << str22 << "\n";
       // cout << "\t count1=" << count1 ;
        //cout << "\t count2=" << count2 ;
        //cout << "\t count3=" << count3 << endl;
        if (str1[0] != '#')
        {
            cout << str1;

            for (i = count1; i < 60; i++) cout << " ";
            cout << str2;
            for (i = count2; i < 30; i++) cout << " ";
            cout << str22 << endl;
        }



    }








    fin1.close();
    fin2.close();











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
