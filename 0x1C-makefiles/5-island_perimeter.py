#!/usr/bin/python3
"""
This module has a method to
calculate the perimeter of an island
"""


def island_perimeter(grid):
    """
    Return the perimeter of an island
    """
    perimeter = 0
    for i, row in enumerate(grid):
        for j, land in enumerate(row):
            if land:
                try:
                    perimeter += -row[j-1] + 1
                except IndexError:
                    pass
                try:
                    perimeter += -row[j+1] + 1
                except IndexError:
                    pass
                try:
                    perimeter += -grid[i-1][j] + 1
                except IndexError:
                    pass
                try:
                    perimeter += -grid[i+1][j] + 1
                except IndexError:
                    pass
    return perimeter
