#include <vector>
#include <algorithm>
#include <iostream>
#include <initializer_list>
#include <random>
#include <iterator>
#include <chrono>
using namespace std;

template <typename T>
void print(vector<T> &vc)
{
    for(auto &i : vc) {
        cout << i <<" ";
    }
    cout << endl;
}

template <typename T>
vector<T> HeapSort(vector<T> &vc){
    // 记录排序开始的时间点
    auto start = std::chrono::high_resolution_clock::now();
    make_heap(vc.begin(), vc.begin()); //创建空堆
    for (int i = 1; i <= vc.size(); i++)
    {
        push_heap(vc.begin(), vc.begin() + i); //一个一个插入
    }
    for (int i = 0; i < vc.size(); i++)
    {
        pop_heap(vc.begin(), vc.end() - i); //一个一个取出
    }
    
    // 记录排序结束的时间点
    auto end = std::chrono::high_resolution_clock::now();
    // 计算排序所花费的时间
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    // 输出排序所花费的时间
    std::cout << "我的排序花费" << duration.count() << " 毫秒" << std::endl;
    
    return vc;
}

template <typename T>
void STLHeapSort(vector<T> &vc){
    auto start = std::chrono::high_resolution_clock::now();
    sort_heap(vc.begin(), vc.end());
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "STL排序花费" << duration.count() << " 毫秒" << std::endl;
}

template <typename T>
void check(vector<T> &vc){
    cout << (is_sorted(vc.begin(), vc.end()) ? "排序正确" : "排序错误" )<<endl; //使用标准库自带的is_sorted函数来检测每一次排序的正确性（C++14开始提供）
}