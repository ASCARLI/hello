# remove()函数修改报告
我修改了remove()函数。
## 功能
**_（加粗倾斜为修改设计部分）_**
1. 若当前位置为空则不进行操作；
2. 若链表仅有一个元素则删除此元素成为空链表；
3. **_若链表有超过一个元素且当前位置不为第一个，则删除当前元素，且currentpos更新为原来的前一个元素_**

## 输出结果
（****为与评分标准不同的部分）
```c++
5
a       c       g
0 1
3
1.5     2       9       4.7     8.8
1.5     2       8.8     9       4.7


1.5     2       **4.7**     8.8
