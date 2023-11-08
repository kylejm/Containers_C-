# Containers_C++

## Array
- Classic C implementation 
- Can use iterators if we use the container method we have in #include <array>
- Iterators are just pointers that we can keep track of to make iterating in a loop easier
- Can use the auto and it basically does everything for you, do not need to reference or derefence anything

## Vector
- First actual container we learn about
- Dynmaically allocated memory
- Once memory overflows it copies entire block to a new block
- Pointers to memory of a vector are pretty much useless because of this
- Can only push to the back

## Lists
- Can push to the front or the back
- Most likely not contigous 
- Linked list with two directions
- To find the size we have to iterate through whole list
- Cannot use [], must walk the list

