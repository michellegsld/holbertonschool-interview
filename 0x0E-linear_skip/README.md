## README for 0x0E-linear_skip ##
### A directory within the holbertonschool-interview repo ###

| File Name | Description |
| --------- | ----------- |
| 0-linear_skip.cs | **Task: 0. Linear search in a skip list** <br> A C function that searches for a value in a sorted skip list of integers. The prototype is `skiplist_t *linear_skip(skiplist_t *list, int value);`, where `list` is a pointer to the head of the skip list to search in. A node of the express lane is placed every index which is a multiple of the square root of the size of the list, where `value` is the value to search for. The function returns a pointer on the first node where `value` is located, if it's not present in `list` or `head` is `NULL` then the function returns `NULL`. It is assumed `list` is sorted in ascending order. |
