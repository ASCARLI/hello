#include "HeapSort.h"

int main(){
    const int size = 1000000;

    //⻓度不少于1000000的随机序列
    cout << "随机序列：" << endl;
    vector<int> v(size);
    mt19937 gen(random_device{}());
    uniform_int_distribution<> dis(0, size - 1);
    for (int i = 0; i < size; ++i) {
        v[i] = dis(gen);
    } //以上为生成随机序列v
    vector<int> v1 = HeapSort(v);
    check(v1);
    STLHeapSort(v);
    v.clear();
    v1.clear();

    //⻓度不少于1000000的有序序列
    cout << endl << "有序序列：" << endl;
    for (int i = 0; i < size; i++)
    {
        v.push_back(i);
    }
    v1 = HeapSort(v);
    check(v1);
    STLHeapSort(v);
    v.clear();
    v1.clear();

    //⻓度不少于1000000的逆序序列
    cout << endl << "逆序序列：" << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        v.push_back(i);
    }
    v1 = HeapSort(v);
    check(v1);
    STLHeapSort(v);
    v.clear();
    v1.clear();

    //⻓度不少于1000000的部分元素重复序列，生成0, 1, ..., int(size / 100) - 1如此循环的序列
    cout << endl << "部分元素重复序列：" << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        v.push_back(i % int(size / 100));
    }
    v1 = HeapSort(v);
    check(v1);
    STLHeapSort(v);
    v.clear();
    v1.clear();

    return 0;
}