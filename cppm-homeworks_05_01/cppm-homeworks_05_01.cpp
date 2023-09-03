// cppm-homeworks_05_01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
class Figure {
private:    
    int side_numb = 0;
protected:
    std::string name = "Фигура";
    Figure(int side_numb) {
        this->side_numb = side_numb;
    };
public:
    Figure() :Figure(0) {};
    void print_to_console() {//выводит имя и количество сторон экземпляра класса
        std::cout << name << ": " << side_numb << std::endl;
    }


};

class Triangle:public Figure {
public:
    Triangle() :Figure(3) {
        name = "Треугольник";
    };
};

class Quadrangle:public Figure {
public:
    Quadrangle() :Figure(4) {
        name = "Четырехугольник";
    };
};

int main()
{
    setlocale(LC_ALL, "rus");
    Figure figure;
    Triangle treug;
    Quadrangle quad; 
    std::cout << "Количество сторон: \n";
    figure.print_to_console();
    treug.print_to_console();
    quad.print_to_console();
    
    
   
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


