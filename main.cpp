// Создание массива данных типа список на C++
#include <array>
#include <iostream>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}

// Создание структуры данных типа стек на C++
#include <stack>
#include <iostream>
#include <string>

int main() {
    std::stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    std::cout << "Верхний элемент: " << s.top() << std::endl;
    std::cout << "Размер стека: " << s.size() << std::endl;

    s.pop();
    std::cout << "Верхний элемент после pop: " << s.top() << std::endl;

    while (!s.empty()) {
        std::cout << "Удаляем: " << s.top() << std::endl;
        s.pop();
    }

    return 0;
}
