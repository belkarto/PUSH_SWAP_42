# PUSH_SWAPP

The Push swap project is a very simple and a highly straightforward algorithm project:
data must be sorted.

You have at your disposal a set of integer values, 2 stacks, and a set of instructions
to manipulate both stacks.

sounds simple but you only allowed to use few moves.

## • At the beginning:
    ◦ The stack a contains a random amount of negative and/or positive numbers
    which cannot be duplicated.

    ◦ The stack b is empty.
## Rules or allowed moves:
#### sa (swap a): Swap the first 2 elements at the top of stack a.
    Do nothing if there is only one or no elements.
#### sb (swap b): Swap the first 2 elements at the top of stack b.
    Do nothing if there is only one or no elements.
#### ss : sa and sb at the same time.

#### pa (push a): Take the first element at the top of b and put it at the top of a.
    Do nothing if b is empty.
    
#### pb (push b): Take the first element at the top of a and put it at the top of b.
    Do nothing if a is empty.
    
#### ra (rotate a): Shift up all elements of stack a by 1.
    The first element becomes the last one.
    
#### rb (rotate b): Shift up all elements of stack b by 1.
    The first element becomes the last one.
    
#### rr : ra and rb at the same time.

#### rra (reverse rotate a): Shift down all elements of stack a by 1.
    The last element becomes the first one.
    
#### rrb (reverse rotate b): Shift down all elements of stack b by 1.
    The last element becomes the first one.
    
#### rrr : rra and rrb at the same time.

## Ressources

*https://www.youtube.com/watch?v=E6us4nmXTHs

*https://drive.google.com/file/d/1Xj3LHrwi2W9sIGluu-1rwVSJX1tMlPz_/view?usp=sharing

