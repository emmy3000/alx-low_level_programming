#!/usr/bin/python3

"""
5-island perimeter
"""


def island_perimeter(grid):
    """
    Calculates the perimeter described in grid.

    Args:
        grid: List of lists representing the perimeter of an island.

    Returns:
        The perimeter of an island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
