#include "shopping.h"

#include <iostream>

// Push Goods object to shopping_list_ vector
void Shopping::PushList(Goods object) {
  shopping_list_.push_back(object);
}

// Get Goods object from end of shopping_list_ vector
Goods Shopping::GetLastElement() {
  return shopping_list_.back();
}

// Print shopping_list_ Elements
void Shopping::PrintList() {
  for (std::vector<Goods>::iterator i = shopping_list_.begin();
      i != shopping_list_.end(); i++) {
    std::cout << "Goods #" << i->GetIndex() << " - Price : " <<
    i->GetPrice() << std::endl;
  }
}

// Sort shopping_list_ Elements by Price
// Apply Selection Sort algorithm
void Shopping::SortByPrice() {
  SortBy_(PRICE);
}

// Sort shopping_list_ Elements by Index
// Apply Selection Sort algorithm
void Shopping::SortByIndex() {
  SortBy_(INDEX);
}

// Sort shopping_list_ Elements by Index
// Apply Selection Sort algorithm
void Shopping::SortBy_(SortType sortType);
  std::vector<Goods>::iterator p = shopping_list_.begin();
  std::vector<Goods>::iterator min = shopping_list_.end();
  for (std::vector<Goods>::iterator i = shopping_list_.begin(); 
    i != shopping_list_.end()-1; i++) {
    for (std::vector<Goods>::iterator j = i; j != shopping_list_.end(); j++) {
      if (min == shopping_list_.end()) {
        min = j;
        continue;
      }

      switch(sortType) {
        case INDEX:
          if (min->GetIndex() > j->GetIndex()) {
            min = j;
          }
          break;
        case PRICE:
          if (min->GetPrice() > j->GetPrice()) {
            min = j;
          }
          break;
        default:
          ;
      }

    }
    std::iter_swap(i, min);
    min = shopping_list_.end();
  }
}
