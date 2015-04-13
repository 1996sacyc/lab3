lab3_A
g++ -o lab3_A lab3_A.cpp
result:2032


lab3_B
sort(): 0 seconds
v1/v2 are different.
insertion_sort(): 0.01 seconds
v1/v2 are the same.

sort(): 0 seconds
v1/v2 are different.
insertion_sort(): 1.29 seconds
v1/v2 are the same.

sort(): 0.04 seconds
v1/v2 are different.
insertion_sort(): 129.59 seconds
v1/v2 are the same.

sort(): 0.51 seconds
v1/v2 are different.
insertion_sort(): 12904.88 seconds
v1/v2 are the same.
所花時間，在資料量大小(n)的狀況下，最好的狀況是O(n log n)，最不好的狀況是O(n^2)。
對於一個排序理想的表現是O(n)。
僅使用一個抽象關鍵比較運算的排序演算法總平均上至少需要O(n log n)
