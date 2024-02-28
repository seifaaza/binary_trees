#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/* Header file inclusions */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>

/* MACROS */
#define MAX(a, b) ((a) > (b) ? (a) : (b))

/* Basic Binary tree struct */

/**
   * struct binary_tree_s - Binary tree node
   *
   * @n: Integer stored in the node.
   * @parent: pointer to parent node.
   * @left: pointer to left child node
   * @right: pointer to right child node.
   */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* Function Prototypes */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

#endif /* BINARY_TREES_H */

