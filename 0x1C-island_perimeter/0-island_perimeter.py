#!/usr/bin/python3
"""
0-island_perimeter
Task 0: Island Perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island, defined by grid
    """
    total = 0

    rows = len(grid)
    columns = len(grid[0])

    for r in range(rows):
        for c in range(columns):
            cell = grid[r][c]
            if cell is 1:
                total += 4
                if r != 0 and grid[r-1][c] is 1:
                    total -= 1
                if c != 0 and grid[r][c-1] is 1:
                    total -= 1
                if r + 1 != rows and grid[r + 1][c] is 1:
                    total -= 1
                if c + 1 != columns and grid[r][c + 1] is 1:
                    total -= 1

    return total
