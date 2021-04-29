## README for 0x12-advanced_binary_search ##
### A directory within the holbertonschool-interview repo ###

| File Name | Description |
| --------- | ----------- |
| 0-advanced_binary.c | **Task: 0. Advanced Binary Search** <br> A function in C that searches for a value in a sorted array of integers. The prototype is `int advanced_binary(int *array, size_t size, int value);`. `array` is a pointer to the first element of the array to search in, `size` is the number of elements in `array`, and `value` is the value being searched for. The function returns the index where `value` was located and `array` is assumed to be sorted in ascending order. If `value` was not present in `array`, or if the `array` was `NULL`, then the function returns `-1`. Each time the array was split, the current subarray being searched in would be printed. Recursion was used in this task. |
