#ifndef PRODUCTS_H
#define PRODUCTS_H


#include <iostream> 
#include <map>    

using namespace std;
class Products{
  char name_of_category[20];    
  char name[20];
  double import_price;
  int quantity;
  double price;
  char attributes[10][20];
  map<string, char*>attributesMap; 
  
  public:
    //Constructors
    Products(char* id_of_category,char* name);
    Products(char* id_of_category,char* name, int nr_of_attributes);

    //Deconstructor
    ~Products();

    //Printers
    void PrintAttribute(string& key);
    void PrintAllAttributes();
    //Return Functions

    char* GetName();
    int GetNrOfAttributes();

    //Modifiers 
     void SetAttribute(string& key,char* attr);
     void SetName(char* name);
     void SetPrice(double price);
     void SetImportPrice(int import_price);
     void SetQuantity(int quantity);
     void Sell();
     void Sell(int quantity);

};
#endif  
