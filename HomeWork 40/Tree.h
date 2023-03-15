#pragma once

#include "Elem.h"

class Tree
{
    Elem* Root;
    unsigned int Size;
public:
    Tree();
    ~Tree();

    // Получить корень.
    Elem* GetRoot() const;

    // Вставка узла.
    void Insert(Elem* el);

    // Максимальное значение от указанного узла.
    Elem* Max(Elem* el) const;

    // Минимальное значение от указанного узла.
    Elem* Min(Elem* el) const;

    // Следующий узел для указанного узла.
    Elem* Next(const Elem* el) const;

    // Предыдущий узел для указанного узла.
    Elem* Previous(const Elem* el) const;

    // Печать от указанного узла.
    void Print(const Elem* el) const;

    // Удаление ветки для указанного узла.
    void Remove(Elem* el);

    // Поиск от указанного узла.
    Elem* Search(Elem* el, const char* key) const;
};