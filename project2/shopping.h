#ifndef PROJECT2_SHOPPING_H_
#define PROJECT2_SHOPPING_H_

#include "goods.h"

#include <vector>

// Shopping class presents List of shopping.
// Example:
//     Shopping tobuylist;
//     Goods obj1;
//     Goods obj2;
//     ...
//     tobuylist.PushList(obj1);
//     tobuylist.PushList(obj2);
//     tobuylist.PrintList();
class Shopping{
 public:
  void PushList(Goods object);
  Goods GetLastElement();
  void PrintList();
  void SortByPrice();
  void SortByIndex();

 private:
  enum SortType {
    INDEX,
    PRICE,
  }
  
  void SortBy_(SortType sortType);

  std::vector<Goods> shopping_list_;
};

#endif  // PROJECT2_SHOPPING_H_
