## README for holbertonschool-interview ##
### A repo for the purpose of interview preparation during Specializations ###

| Directory | Description |
| --------- | ----------- |
| 0x00-lockboxes | **0x00. Lockboxes**<br>You have `n` number of locked boxes in front of you. Each box is numbered sequentially from `0` to `n - 1` and each box may contain keys to the other boxes. Write a method that determines if all the boxes can be opened. |
| 0x01-insert_in_sorted_linked_list | **0x01. Insert in sorted linked list** <br> Write a function in C that inserts a number into a sorted singly linked list. <ul><li>Prototype: `listint_t *insert_node(listint_t **head, int number);`</li><li>Return: the address of the new node, or `NULL` if it failed</li></ul> |
| 0x02-heap_insert | **0x02. Heap Insert** <br> Write a function that creates a binary tree node. <ul><li>Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`</li><li>`parent` is a pointer to the parent node of the node to create</li><li>`value` is the value to put in the new node</li><li>When created, a node does not have any children</li><li>Your function must return a pointer to the new node, or `NULL` on failure</li></ul>Write a function that inserts a value into a Max Binary Heap.<ul><li>Prototype: `heap_t *heap_insert(heap_t **root, int value)`</li><li>`root` is a double pointer to the root node of the Heap</li><li>`value` is the value store in the node to be inserted</li><li>Your function must return a pointer to the inserted node, or `NULL` on failure</li><li>If the address stored in `root` is `NULL`, the created node must become the root node</li><li>You have to respect a `Max Heap` ordering</li><li>You are allowed to have up to `6` functions in your file</li></ul> |
| 0x03-minimum_operations | **0x03. Minimum Operations** <br> Write a Python method that calculates the fewest number of operations needed to result in exactly `n` amount of `H` characters wanted. <ul><li>This is pretending the text editor can only copy and paste</li><li>Prototype: `def minOperations(n)`</li><li>Returns an integer</li><li>If `n` is impossible to achieve, return `0`</li></ul> |
| 0x04-sandpiles | **0x04. Sandpiles** <br> Write a function in C that computes the sum of two sandpiles. <ul><li>Prototype: `void sandpiles_sum(int grid1[3][3], int grid2[3][3]);`</li><li>`grid1` and `grid2` are individually stable</li><li>A sandpile is considered stable when none of its cells contains more than 3 grains</li><li>When the function is done, `grid1` must be stable</li><li>`grid1` must be printed before each toppling roundd, only if it is unstable</li><li>Memory can't be allocated dynamically</li></ul>|
| 0x05-linked_list_palindrome | **0x05. Linked list palindrome** <br> Write a function in C that checks if a singly linked list is a palindrome. <ul><li>Prototype: `int is_palindrome(listint_t **head);`</li><li>Return: `0` if not a palindrome, `1` if it is a palindrome</li><li>An empty list is considered a palindrome</li></ul> |
| 0x06-log_parsing | **0x06. Log Parsing** <br> Write a script that reads `stdin` line by line and computes metrics. <ul><li>Input format: `<IP Address> - [<date>] "GET /projects/260 HTTP/1.1" <status code> <file size>`</li><li>After every 10 lines and/or a keyboard interruption (`CTRL + C`), print: the total file size as `File size: <total size>`, and the number of lines by status code in this format `<status code>: <number>`.</li></ul> |
| 0x07-linked_list_cycle | **0x07. Linked list cycle** <br> Write a function in C that checks if a singly linked list has a cycle in it. <ul><li>Prototype: `int check_cycle(listint_t *list);`</li><li>Return: `0` if there is no cycle, `1` if there is.</li><li>Only these functions are allowed: `write`, `printf`, `putchar`, `puts`, `malloc`, and `free`.</li></ul> |
| 0x08-palindrome_integer | **0x08. Palindrome integer** <br> Write a function in C that checks if a given unsigned integer is a palindrome. <ul><li>Prototype: `int is_palindrome(unsigned long n);`</li><li>Where `n` is the number to be checked</li></li>The function must return `1` if `n` is a palindrome, and `0` otherwise</li><li>Memory cannot be dynamically allocated</li></ul> |
| 0x09-utf8_validation | **0x09. UTF-8 Validation** <br> Write a function in Python that determines if a given data set represents a valid UTF-8 encoding. <ul><li>Prototype: `def validUTF8(data)`</li></li>Return: `True` if `data` is a valid UTF-8 encoding, else return `False`.</li></li>A character in UTF-8 can be 1 to 4 bytes long.</li><li>The data set can contain multiple characters.</li><li>The data will be represented by a list of integers.</li><li>Each integer represents 1 byte of data, therefore you only need to handle the 8 least significant bits of each integer.</li><ul> |
| 0x0A-slide_line | **0x0A. 2048 (single line)** <br> Write a function in C that reproduces the 2048 game in the sense that it slides and merges an array of integers. <ul><li>Prototype: `int slide_line(int *line, size_t size, int direction);`</li><li>Return: `1` upon success, `0` upon failure.</li><li>Where `line` points to an array of integers containing `size` elements, that must be slided & merged to the `direction` represented by direction.</li><li>`direction` can be either: `SLIDE_LEFT` or `SLIDE_RIGHT`, as defined in `slide_line.h`.</li><li>If `direction` is anything else, then the function fails.</li></ul> |
| 0x0B-menger | **0x0B. Menger sponge** <br> Write a function in C that prints a 2D Menger Sponge depending on user input. <ul><li>Prototype: `void menger(int level);`</li><li>Where `level` is the level of the Menger Sponge to draw.</li><li>If `level` is lower than `0`, your function must do nothing.</li><li>You’re allowed to use the `math` library. Your program will be compiled using the `ld` flag `-lm`.</li></ul> |
