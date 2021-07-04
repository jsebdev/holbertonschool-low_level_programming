#!/usr/bin/python3
"""
This module has a method to
calculate the perimeter of an island
"""


def island_perimeter(grid):
    """
    Return the perimeter of an island
    """
    if grid == None:
        return None
    if type(grid) != list or any([type(i) != list for i in grid])\
            or any([any([type(i) != int for i in row]) for row in grid]):
        return None
    if any([any([i not in [0, 1] for i in row]) for row in grid]):
        return None
    perimeter = 0
    for i, row in enumerate(grid):
        for j, land in enumerate(row):
            if land:
                if j - 1 < 0:
                    perimeter += -row[j-1] + 1
                else:
                    perimeter += 1
                try:
                    perimeter += -row[j+1] + 1
                except IndexError:
                    perimeter += 1
                if i - 1 < 0:
                    perimeter += -grid[i-1][j] + 1
                else:
                    perimeter += 1
                try:
                    perimeter += -grid[i+1][j] + 1
                except IndexError:
                    perimeter += 1
    return perimeter
