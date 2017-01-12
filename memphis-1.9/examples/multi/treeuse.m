// Use the Tree definition

with treedef;

// Define a function Sum that computes the sum
// of the values of a all nodes of a given Tree t

int Sum (Tree t)
{
   match t {
      rule node(v, l, r) :
         return v + Sum(l) + Sum(r);
      rule empty() :
         return 0;
   }
}

// The main function

extern "C" void printf(...);

main ()
{
   Tree ExampleTree = node(11, empty(), node(22, empty(), empty()));

   printf ("Sum of ExampleTree is %d\n", Sum(ExampleTree));
}
