//tree.h

//--------------------------------------------------------------------------
// Tree
// Designed by: Brandan Haertel, Erick House, Jennifer Kowalsky,
// 		Gary Mixson, Binh Nguyen
// Implemented by:
// A type of Book representing all Fiction books.
// Assumptions:
//

#ifndef TREE_H
#define TREE_H

#include <iostream>
// Might need to include Bintree here

class Tree
{
public:
   //--------------------------------------------------------------------------
   // constructor
   // Constructs an instance of Tree
   // Assumptions: All information needed to construct the Tree is provided.
   // Precondition: Hashtable has been invoked.
   // Postcondition: Empty Tree has been constructed.
   // Sample call: Tree t();
   Tree();
   
   //--------------------------------------------------------------------------
   // Destructor
   // Destroys an instance of Tree
   // Assumptions: Items in Tree are completely destroyed by their destructors.
   // Precondition: Tree exists.
   // Postcondition: Tree is destroyed, as well as all contents of Tree.
   // Sample call: Called at end of program.
   ~Tree();

   //--------------------------------------------------------------------------
   // insert (public)
   // Inserts an item into the tree.
   // Assumptions: Item is able to be sorted into the tree.
   // Precondition: Tree exists.
   // Postcondition: Item is successfully added to tree in correct position.
   // Sample call: tree.insert(book);
   bool insert(item);
   
   //--------------------------------------------------------------------------
   // remove (public)
   // removes an item into the tree.
   // Assumptions: Items in Tree are completely destroyed by their destructors.
   // Precondition: Tree exists.
   // Postcondition: Item is successfully removed from tree,
   // 		     which is rebalanced.
   // Sample call: tree.remove(book);
   bool remove(item);

// overloaded operator<<

protected:

private:
   BinTree tree;

};

#endif // TREE_H
