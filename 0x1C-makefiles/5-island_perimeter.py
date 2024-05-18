#!/usr/bin/python3
"""This function calculates the perimeter of an island"""


def island_perimeter(grid):
    """island_perimeter function defintion"""
    perim = 0
    numb_rows = len(grid)
    numb_cols = len(grid[0])

    for i in range(numb_rows):
        for j in range(numb_cols):
            if grid[i][j] == 1:
                if i == 0 or grid[i-1][j] == 0:
                    peri += 1
                if i == n_rows - 1 or grid[i+1][j] == 0:
                    peri += 1
                if j == 0 or grid[i][j-1] == 0:
                    peri += 1
                if j == n_cols - 1 or grid[i][j+1] == 0:
                    peri += 1
    return perim