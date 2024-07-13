
#ifndef MAGAZIN_H
#define MAGAZIN_H

#include <iostream>
#include <vector>
#include <string>
#include "products.h"

using namespace std;

class Magazin {
    Products** products;
    vector<string> categories;
    char name[40];
    int items_in_store;
    int sold_items;
    int max_items;
    int max_categories;
    double closing_time;
    double opening_time;
    int profit;
    static vector<Magazin*> instances;

public:
    // Constructors
    Magazin();
    Magazin(char* name);
    Magazin(char* name, int max_items);
    Magazin(char* name, int max_items, int max_categories);
    Magazin(char* name, int max_items, int max_categories, double closing_time, double opening_time);

    // Destructor
    ~Magazin();

    // Printers
    void PrintProducts();
    void PrintCategories();
    void PrintDetails();
    static void PrintInstances();

    // Modifiers
    void RemoveCategories(char* id_of_category);
    void AddCategories(char* id_of_category);
    void SetMaxItems(int max_items);
    void SetOpeningTime(double opening_time);
    void SetClosingTime(double closing_time);
    void SetMaxCategories(int max_categories);
    void IncreaseSoldItems(int increment);
    void AddProfit(int profit);
    void AddItems(int items);
    void RemoveItems(int items);
    void SetName(char* name);

    // Return functions
    int GetSoldItems();
    int GetMaxItems();
    double GetClosingTime();
    double GetOpeningTime();
    int GetProfit();
    int GetItemsInStore();
    char* GetName();

    // Checker
    static bool HasInstances();
};

#endif
