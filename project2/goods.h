#ifndef PROJECT2_GOODS_H_
#define PROJECT2_GOODS_H_

// Goods class for representing goods information with index and price
// Example:
//    Goods test;
//    test.SetGoodsInfo(1, 10000);
//    std::cout << test.GetIndex() << " - " << test.GetPrice << endl;
class Goods{
 public:
  Goods(int index, int price) {
    goods_index_ = index;
    goods_price_ = price;
  }
  
  void SetGoodsInfo(int index, int price);
  int GetIndex();
  int GetPrice();

 private:
  int goods_index_ = 0;
  int goods_price_ = 0;
};


#endif  // PROJECT2_GOODS_H_
