# 8Puzzle-DAA-D
 
 Rules for solving the puzzle.
Instead of moving the tiles in the empty space we can visualize moving the empty space in place of the
tile, basically swapping the tile with the empty space. The empty space can only move in four directions
viz.,
1. Up
2. Down
3. Right or
4. Left.

The empty space cannot move diagonally and can take only one step at a time (i.e. move the empty
space one position at a time).

1. **Uninformed Search.**

The Linear Search, Binary Search, Depth-First Search or the Breadth-First Search algorithms
fallsq into the category of uninformed search techniques i.e. these algorithms do not know anything
about what they are searching and where they should search for it. That’s why the name “uninformed”
search. Uninformed searching takes a lot of time to search as it doesn’t know where to head and where
the best chances of finding the element are.

2. **Informed Search.**

Informed search is exactly opposite to the uninformed search. In this, the algorithm is aware of
where the best chances of finding the elements are and the algorithm heads that way. Heuristic search
is an informed search technique. A heuristic value tells the algorithm which path will provide the
solution as early as possible. The heuristic function is used to generate this heuristic value. Different
heuristic functions can be designed depending on the searching problem. So we can conclude
that Heuristic search is a technique that uses heuristic value for optimizing the search.


**BFS (Breadth-first search)**

is an algorithm for traversing or searching tree or graph data structures. It starts at the tree root (or some arbitrary node of a graph, sometimes referred to as a 'search key', and explores all of the neighbor nodes at the present depth prior to moving on to the nodes at the next depth level. It uses the opposite strategy as depth-first search, which instead explores the node branch as far as possible before being forced to backtrack and expand other nodes
