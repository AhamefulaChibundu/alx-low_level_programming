# STRUCTURES AND TYPEDEF

Structures are like datatypes, they are defined to be physically grouped list of variables under one name in a block of memory, allowing the different variables to be accessed via a single pointer or by the struct declared name which returns the same address.Unlike arrays, Structures accepts elements of different datatypes.
Example of how to declare a structure is:
 
`struct tag_name {
   type member1;
   type member2;
   /* declare as many members as desired, but the entire structure size must be known to the compiler. */
};`

Typedef is simply creating an alias for the struct tag name. Example:

`typedef struct tag_name {
   type member1;
   type member2;
   /* declare as many members as desired, but the entire structure size must be known to the compiler. */
}alias;
`
