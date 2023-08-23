#!/usr/bin/python3i

"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.

    Args:
    Grid: A list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100.
    """
    length = len(grid[0])
    distance = len(grid)
    angles = 0
    size = 0

    for i in range(distance):
        for j in range(length):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    angles += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    angles += 1
    return (size * 4 - angles * 2)
