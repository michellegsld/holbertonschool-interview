## README for 0x14-heap_extract ##
### A directory within the holbertonschool-interview repo ###

| File Name | Description |
| --------- | ----------- |
| 0-heap_extract.c | **Task: 0. Heap - Extract** <br> A function written in C that extracts the root node of a Max Binary Heap. The prototype is `int heap_extract(heap_t **root);`, where `root` is a double pointer to the root node of the heap. The function returns the root node's value after freeing it and replacing the root node with the last `level-order` node of the heap. If the function fails, `0` is returned. |
