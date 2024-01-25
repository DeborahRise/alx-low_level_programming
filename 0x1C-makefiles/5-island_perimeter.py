#!/usr/bin/python3
""" Calculates the perimeter of an island in a grid."""


def num_water_neighbors(grid, i, j):
    """Returns the grid's water neighbors cell number."""

    num = 0

    if i <= 0 or not grid[i - 1][j]:
        num += 1
    if j <= 0 or not grid[i][j - 1]:
        num += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        num += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        num += 1

    return num


def island_perimeter(grid):
    """Returns grid's perimeter."""

    per = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                per += num_water_neighbors(grid, i, j)

    return per
