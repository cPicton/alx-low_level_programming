#!/usr/bin/python3
"""Defines an island perimeter measuring function.
You are not allowed to google anything
Whiteboard first
"""


def island_perimeter(grid):
    """Return the perimiter of an island.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for k in range(height):
        for i in range(width):
            if grid[k][i] == 1:
                size += 1
                if (i > 0 and grid[k][i - 1] == 1):
                    edges += 1
                if (k > 0 and grid[k - 1][i] == 1):
                    edges += 1
    return size * 4 - edges * 2
