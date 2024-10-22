#include "List.h"
#include <iostream>

void prompt(const char * text) {
    std::cout<<std::endl<<text<<std::endl;
}

int main()
{
    
    List<int>::iterator tmp;

    prompt("Create a new empty list called 'lst'.");
    List<int> lst; // List()
    lst.print("lst");

    prompt("Is 'lst' empty?");
    std::cout << lst.empty() << std::endl;

    prompt("Push back 'lst' with even numbers(0~26). "
    "Copy 'lst' to 'lst2'. "
    "Pop front and pop back 'lst'.");
    for (int i = 0; i < 14; ++i)
    {
        lst.push_back(i * 2); //push_back()
    }
    List<int> lst2(lst); //List(const List &)
    lst.pop_front(); // pop_front()
    lst.pop_back(); // pop_back()

    lst.print("lst");
    lst2.print("lst2");

    prompt("Push front 1 in 'lst'.");
    lst.push_front(1);
    lst.print("lst");
    lst2.print("lst2");

    prompt("lst2 = lst");
    lst2 = lst;
    lst.print("lst");
    lst2.print("lst2");

    prompt("Print the size of 'lst'.");
    std::cout<<lst.size()<<std::endl;

    prompt("use begin(), end() and '!=' in a loop "
    "used to iterate all the nodes in 'lst'.");
    for (auto it = lst.begin(); it != lst.end(); ++it)
    {
        std::cout << *it << "\t";
    }
    std::cout << std::endl << std::endl;

    prompt("Get front and back of 'lst'.");
    std::cout << lst.front() <<"\t" << lst.back() << std::endl;

    prompt("Find 6 and insert 5 before 6.");
    lst.insert(lst.find(6), 5);
    lst.print("lst");

    prompt("Delete 8 in 'lst'. Delete 12~16 in 'lst'.");
    lst.erase(lst.find(8));
    tmp = lst.erase(lst.find(12), lst.find(16));
    std::cout << *tmp << std::endl;
    lst.print("lst");

    prompt("Print the size of 'lst'.");
    std::cout<<lst.size()<<std::endl;
    
    prompt("Use erase() with 2 arguments to delete 2~2 in 'lst'.");
    lst.erase(lst.find(2), lst.find(2));
    lst.print("lst");
    
    prompt("Print the size of 'lst'.");
    std::cout<<lst.size()<<std::endl;

    prompt("使用前置++，删除10后面那个元素");
    lst.erase(++lst.find(10));
    lst.print("lst");

    prompt("使用后置++，删除5和5的next，并输出5之后两个节点的元素");
    // std::cout<<*lst.erase(lst.find(5))<<std::endl;
    tmp = lst.erase(lst.find(5));
    lst.erase(tmp++);
    std::cout<<*tmp<<std::endl;
    
    prompt("Before clear 'lst2'");
    lst.print("lst");
    lst2.print("lst2");

    prompt("Is 'lst2' empty?");
    std::cout << lst2.empty() << std::endl;

    lst2.clear();
    prompt("Clear 'lst2'.");
    lst.print("lst");
    lst2.print("lst2");

    prompt("Is 'lst2' empty?");
    std::cout << lst2.empty() << std::endl;

    prompt("Print the size of 'lst2'.");
    std::cout<<lst2.size()<<std::endl;
    
    //delete &lst2;
    prompt("用初始化列表的方法进行构造函数。");
    List<int>lst3({1, 2, 3, 4, 5});
    lst3.print("lst3");

    prompt("用拷贝其他List方法进行构造函数。");
    List<int>lst4(lst);
    lst.print("lst");
    lst4.print("lst4");

    prompt("在main函数结束时调用析构函数。");
    // List<int> lst = {1, 2, 3, 4, 5};
    // for (auto &x : lst)
    // {
    //     std::cout << x << "\t";
    // }
    // std::cout << std::endl;

    // List<int> lst2 = std::move(lst);
    // List<int> lst2 = List<int> {5, 6};
    // for (auto &x : lst2)
    // {
    //     std::cout << x << "\t";
    // }
    // std::cout << std::endl;

    // lst2 = std::move(lst);
    // for (auto &x : lst2)
    // {
    //     std::cout << x << "\t";
    // }
    // std::cout << std::endl;


    return 0;
}
