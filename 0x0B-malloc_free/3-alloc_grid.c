#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

int **alloc_grid(int width, int height) {
    // Check for invalid width or height
    if (width <= 0 || height <= 0) {
        return NULL;
    }

    // Allocate memory for the rows
    int **grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL) {
        return NULL; // Memory allocation failed
    }

    // Allocate memory for the columns of each row
    for (int i = 0; i < height; i++) {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL) {
            // Memory allocation for a row failed
            // Free the memory allocated so far and return NULL
            for (int j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }

        // Initialize each element to 0
        for (int j = 0; j < width; j++) {
            grid[i][j] = 0;
        }
    }

    return grid;
}
