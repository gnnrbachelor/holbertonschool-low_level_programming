#!/usr/bin/python3
"""
island_perimeter
"""

def island_perimeter(grid):
    """
    Calculates Perimeter
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < len(grid[i]) - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1
                perimeter += 4
    return (perimeter)
