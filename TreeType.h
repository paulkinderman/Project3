#include <string>
#include <fstream>
#include "QueType.h"

//typedef int ItemType;
template <class ItemType>
struct TreeNode;

enum OrderType {PRE_ORDER, IN_ORDER, POST_ORDER};

template <class ItemType>
class TreeType
{
public:
  TreeType();                     // constructor
 ~TreeType();                    // destructor
  TreeType(const TreeType& originalTree); 
  void operator=(const TreeType& originalTree);
  // copy constructor
  void MakeEmpty();
  bool IsEmpty() const;
  bool IsFull() const;
  int GetLength() const; 
  ItemType GetItem(ItemType item, bool& found);
  void PutItem(ItemType item);
  void DeleteItem(ItemType item);
  void ResetTree(OrderType order); 
  ItemType GetNextItem(OrderType order, bool& finished);
  void Print() const;
private:
  TreeNode<ItemType> * root;
  QueType<ItemType> preQue;
  QueType<ItemType> inQue;
  QueType<ItemType> postQue;
};

