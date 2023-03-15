#include <iostream>
#include <conio.h>
#include "Tree.h"
#include "Functions.h"


int main()
{
    Tree tree;
    bool exit = false;


    while(true)
    {
        PrintMenu();
        int choice = _getch();


        switch (choice)
        {
        case '1':
            Insert(tree);
            break;
        case '2':
            Remove(tree);
            break;
        case '3':
            Print(tree);
            break;
        case '4':
            Search(tree);
            break;
        case '5':
            exit = true;
            break;
        }


        if (exit)
        {
            break;
        }
    }
}