// Define a data type Tree.
// A Tree is either
//    a node with an int field val and two subtrees left and right
//    denoted node(val, left, right)
// or
//    an empty tree
//    denoted empty()

domain Tree {
   node(int val, Tree left, Tree right)
   empty()
}

// Define a function ExampleTree that constructs a Tree
//
//    node
//    |
//    +- 11
//    |
//    +- empty
//    |
//    +- node
//       |
//       +- 22
//       |
//       +- empty
//       |
//       +- empty

Tree ExampleTree ()
{
   return node(11, empty(), node(22, empty(), empty()));
}

// Define a function Sum that computes the sum
// of the values of a all nodes of a given Tree t

int Sum (Tree t)
{
   // inspect the structure of t

   match t {

      rule node(v, l, r) :

         // if t has the form node(v, l, r)
         // the result is obtained by adding v to the
         // recursively computed sums of l and r

         return v + Sum(l) + Sum(r);

      rule empty() :

         // if t is the empty tree
         // the result is 0

         return 0;

   }
}

// The main function

extern "C" void printf(...);

main ()
{
   printf ("Sum of ExampleTree is %d\n", Sum(ExampleTree()));
}
