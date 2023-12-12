* Search Algorithms
    - * 0-linear.c - Implements linear search algorithm.
    - * 1-binary.c - Implements the binary search algorithm.
    - 2-O - Contains the time complexity of the binary search algorithm.
    - 3-O - Space complexity of an iterative linear search algorithm \
    in an array of size n.
    - 4-O - Time complexity (worst case) of a binary search in an array \
    of size n.
    - 5-O - Space complexity (worst case) of a binary search in an array \
    of size n.
    - 6-O - What is the space complexity of this function / algorithm?

    int **allocate_map(int n, int m)
    {
        int **map;

        map = malloc(sizeof(int *) * n);
        for (size_t i = 0; i < n; i++)
        {
            map[i] = malloc(sizeof(int) * m);
        }
        return (map);
    }
    - 100-jump.c - Implements Jump search algorithm.
    - 101-O - What is the time complexity (average case) of a \
    jump search in an array of size n, using step = sqrt(n)?
    - 102-interpolation.c - Implements Interpolation search algorithm.
    - 103-exponential.c - Implements Exponential search algorithm
    - 104-advanced_binary.c - Implements advanced binary search that\
    returns the index of the first value in a sorted array, if the value \
    appears more than once in the array.
    - 105-jump_list.c - Implements linear search algrithm using \
    singly linked list.

    - 106-linear_skip.c - A common way to optimize the time complexity of \
    a search in a singly linked list is to modify the list by adding \
    an "express lane" to browse it. such list is called a skip list.
    Here, we implement a skip list to search a sorted list.

    - 107-O - What is the time complexity (average case) of a jump \
      search in a singly linked list of size n, using step = sqrt(n)?

      - 108-O - What is the time complexity (average case) of a jump\
        search in a skip list of size n, with an express lane using \
        step = sqrt(n)?
