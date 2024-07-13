#include "products.h"

// Constructors
Products::Products(const char* id_of_category, const char* name) {
    strncpy(this->name_of_category, id_of_category, 19);
    strncpy(this->name, name, 19);
    this->name[19] = '\0';
    import_price = 0.0;
    quantity = 0;
    price = 0.0;
}

Products::Products(const char* id_of_category, const char* name, int nr_of_attributes) : Products(id_of_category, name) {
for (int i = 0; i < nr_of_attributes; ++i) {
        char attr_name[20];
        cout << "Enter attribute name for attribute " << i + 1 << ": ";
        cin >> attr_name;
        
        cout << "Enter attribute value for " << attr_name << ": ";
        cin >> attributes[i];
        
        attributesMap[string(attr_name)] = attributes[i];
    }

  }

// Destructor
Products::~Products() {
    // Clean up resources if needed
}

// Printers
void Products::PrintAttribute(const string& key) {
    if (attributesMap.find(key) != attributesMap.end()) {
        cout << key << ": " << attributesMap[key] << endl;
    } else {
        cout << "Attribute not found!" << endl;
    }
}

void Products::PrintAllAttributes() {
    for (const auto& attr : attributesMap) {
        cout << attr.first << ": " << attr.second << endl;
    }
}

// Return Functions
const char* Products::GetName()  {
    return name;
}

const char* Products::GetCategory() {
    return name_of_category;
}

int Products::GetNrOfAttributes() {
    return attributesMap.size();
}

// Modifiers 
void Products::SetAttribute(string& key, char* attr) {
    attributesMap[key] = strdup(attr); // Remember to free this later if necessary
}

void Products::SetName(c char* name) {
    strncpy(this->name, name, 19);
    this->name[19] = '\0';
}

void Products::SetPrice(double price) {
    this->price = price;
}

void Products::SetQuantity(int quantity) {
    this->quantity = quantity;
}

void Products::Sell() {
    if (quantity > 0) {
        --quantity;
    }
}

void Products::Sell(int quantity) {
    if (this->quantity >= quantity) {
        this->quantity -= quantity;
    }
}
