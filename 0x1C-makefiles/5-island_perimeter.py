#!/usr/bin/python3
"""island perimeter"""


def island_perimeter(grid):
    """return the perimeter of the island"""
    
    perimeter = 0

    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] == 1:
                perimeter += 4
                if row > 0 and grid [row-1][column] == 1:
                    perimeter -= 1
                if column > 0 and grid [row][column -1] == 1:
                    perimeter -= 1
                if column < (len(grid[row])-1) and grid[row][column +1] == 1:
                    perimeter -= 1
                if row < (len(grid)-1) and grid [row+1][column] == 1:
                    perimeter -= 1

    return (perimeter)
