#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @node: A pointer to the node to measure the depth.
 *
 * Return: If node is NULL, return 0.
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	if (!node)
		return (0);

	while (node->parent)
	{
		depth++;
		node = node->parent;
	}

	return (depth);
}
