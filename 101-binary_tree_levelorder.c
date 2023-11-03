#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, level;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_height(tree);
	for (level = 1; level <= height + 1; level++)
		levelorder_print(tree, func, level);
}

/**
 * levelorder_print - Prints a given level of the binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 * @level: Level of the binary tree to print
 */
void levelorder_print(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (tree == NULL)
		return;

	if (level == 1)
		func(tree->n);

	else if (level > 1)
	{
		levelorder_print(tree->left, func, level - 1);
		levelorder_print(tree->right, func, level - 1);
	}
}
