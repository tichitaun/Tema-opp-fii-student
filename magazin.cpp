
#include "magazin.h"
#include <algorithm>
#include <cstring>

vector<Magazin*> Magazin::instances;

// Constructors
Magazin::Magazin() {
    cout << "Am construit un magazin default\n";
    this->name[0] = '\0';
    this->items_in_store = 0;
    this->sold_items = 0;
    this->max_items = 0;
    this->closing_time = 0.0;
    this->opening_time = 0.0;
    this->profit = 0;
    this->max_categories = 0;
    this->products = nullptr;
    instances.push_back(this);
}

Magazin::Magazin(char* name) : Magazin() {
    strncpy(this->name, name, 39);
    this->name[39] = '\0';
}

Magazin::Magazin(char* name, int max_items) : Magazin(name) {
    this->max_items = max_items;
}

Magazin::Magazin(char* name, int max_items, int max_categories) : Magazin(name, max_items) {
    this->max_categories = max_categories;
}

Magazin::Magazin(char* name, int max_items, int max_categories, double closing_time, double opening_time)
    : Magazin(name, max_items, max_categories) {
    this->closing_time = closing_time;
    this->opening_time = opening_time;
}

// Destructor
Magazin::~Magazin() {
    if (products != nullptr) {
        for (int i = 0; i < max_items; ++i) {
            delete products[i];
        }
        delete[] products;
    }

    auto it = find(instances.begin(), instances.end(), this);
    if (it != instances.end()) {
        instances.erase(it);
    }
}

// Modifiers
void Magazin::AddCategories(char* id_of_category) {
    categories.push_back(id_of_category);
}

void Magazin::RemoveCategories(char* id_of_category) {
    auto it = products;
    while (it != products ) {
        if (strcmp((*it)->GetName(), id_of_category) == 0) {
            delete *it;
            // Compact the array
            std::move(it + 1, products + max_items, it);
        } else {
            ++it;
        }
    }
}

void Magazin::SetMaxItems(int max_items) {
    this->max_items = max_items;
}

void Magazin::SetMaxCategories(int max_categories) {
    this->max_categories = max_categories;
}

void Magazin::SetOpeningTime(double opening_time) {
    this->opening_time = opening_time;
}

void Magazin::SetClosingTime(double closing_time) {
    this->closing_time = closing_time;
}

void Magazin::AddProfit(int profit) {
    this->profit += profit;
}

void Magazin::AddItems(int items) {
    this->items_in_store += items;
}

void Magazin::RemoveItems(int items) {
    this->items_in_store -= items;
}

void Magazin::IncreaseSoldItems(int increment) {
    this->sold_items += increment;
}

void Magazin::SetName(char* name) {
    strncpy(this->name, name, 39);
    this->name[39] = '\0';
}

// Printers
void Magazin::PrintCategories() {
    system("CLS");
    for (int i = 0; i < this->categories.size(); i++) {
        cout << i + 1 << ". " << this->categories[i] << endl;
    }
}

void Magazin::PrintProducts() {
    for (int i = 0; i < this->max_items; i++) {
        if (products[i] != nullptr) {
            cout << "Product: " << products[i]->GetName() << endl;
        }
    }
}

void Magazin::PrintDetails() {
    cout << "Store Name: " << this->name << std::endl;
    cout << "Profit: " << this->profit << endl;
    cout << "Items in store: " << this->items_in_store << endl;
    cout << "Max Items: " << this->max_items << std::endl;
    cout << "Max Categories: " << this->max_categories << endl;
    cout << "Closing Time: " << this->closing_time << endl;
    cout << "Opening Time: " << this->opening_time << endl;
}

void Magazin::PrintInstances() {
    int i = 1;
    for (const auto& instance : instances) {
        cout << i << ". " << instance << endl;
        i++;
    }
}

// Return functions
int Magazin::GetSoldItems() {
    return this->sold_items;
}

int Magazin::GetMaxItems() {
    return this->max_items;
}

double Magazin::GetClosingTime() {
    return this->closing_time;
}

double Magazin::GetOpeningTime() {
    return this->opening_time;
}

int Magazin::GetProfit() {
    return this->profit;
}

int Magazin::GetItemsInStore() {
    return this->items_in_store;
}

char* Magazin::GetName() {
    return this->name;
}

bool Magazin::HasInstances() {
    return !instances.empty();
}
