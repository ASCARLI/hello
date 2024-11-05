#include <iostream>
#include "BinarySearchTree.h"

int main(){
    cout << "1. 找不到要删除的节点：" << endl;
    BinarySearchTree<double> tree({5, 3, 7, 2, 8});
    cout << "\t删除前的树：" << endl;
    tree.printTree();
    tree.frontprintTree();
    tree.remove(6);
    cout << "\t删除后的树：" << endl;
    tree.printTree();
    tree.frontprintTree();

    cout << "2. 要删除的节点为根节点，且该节点没有孩子：" << endl;
    tree.remake({4});
    cout << "\t删除前的树：" << endl;
    tree.printTree();
    tree.frontprintTree();
    tree.remove(4);
    cout << "\t删除后的树：" << endl;
    tree.printTree();
    tree.frontprintTree();

    cout << "3. 要删除的节点为根节点，且该节点只有一个孩子：" << endl;
    tree.remake({4, 2});
    cout << "\t删除前的树：" << endl;
    tree.printTree();
    tree.frontprintTree();
    tree.remove(4);
    cout << "\t删除后的树：" << endl;
    tree.printTree();
    tree.frontprintTree();

    cout << "4. 要删除的节点为根节点，且该节点有两个孩子：" << endl;
    tree.remake({4, 3, 8, 6, 5, 7, 9, 10});
    cout << "\t删除前的树：" << endl;
    tree.printTree();
    tree.frontprintTree();
    tree.remove(4);
    cout << "\t删除后的树：" << endl;
    tree.printTree();
    tree.frontprintTree();

    cout << "5. 要删除的节点不是根节点，且该节点没有孩子：" << endl;
    tree.remake({4, 3, 8});
    cout << "\t删除前的树：" << endl;
    tree.printTree();
    tree.frontprintTree();
    tree.remove(3);
    cout << "\t删除后的树：" << endl;
    tree.printTree();
    tree.frontprintTree();

    cout << "6. 要删除的节点不是根节点，且该节点只有一个孩子：" << endl;
    tree.remake({1, 5, 3, 2, 4});
    cout << "\t删除前的树：" << endl;
    tree.printTree();
    tree.frontprintTree();
    tree.remove(5);
    cout << "\t删除后的树：" << endl;
    tree.printTree();
    tree.frontprintTree();

    cout << "7. 要删除的节点不是根节点，该节点有两个孩子，且右节点没有孩子：" << endl;
    tree.remake({1, 3, 2, 4});
    cout << "\t删除前的树：" << endl;
    tree.printTree();
    tree.frontprintTree();
    tree.remove(3);
    cout << "\t删除后的树：" << endl;
    tree.printTree();
    tree.frontprintTree();

    cout << "8. 要删除的节点不是根节点，该节点有两个孩子，且右节点只有一个右孩子：" << endl;
    tree.remake({1, 3, 2, 4, 6, 5, 7});
    cout << "\t删除前的树：" << endl;
    tree.printTree();
    tree.frontprintTree();
    tree.remove(3);
    cout << "\t删除后的树：" << endl;
    tree.printTree();
    tree.frontprintTree();

    cout << "9. 要删除的节点不是根节点，该节点有两个孩子，且右节点有两个孩子：" << endl;
    tree.remake({2, 1, 4, 3, 8, 6, 5, 7, 9, 10});
    cout << "\t删除前的树：" << endl;
    tree.printTree();
    tree.frontprintTree();
    tree.remove(4);
    cout << "\t删除后的树：" << endl;
    tree.printTree();
    tree.frontprintTree();

    cout << "10. 对空树执行remove操作" << endl;
    tree.makeEmpty();
    cout << "\t删除前的树：" << endl;
    tree.printTree();
    tree.frontprintTree();
    tree.remove(4);
    cout << "\t删除后的树：" << endl;
    tree.printTree();
    tree.frontprintTree();
    
    
    return 0;
}