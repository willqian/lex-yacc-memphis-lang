// Define a data type Tree and a function Sum(Tree)
// as in the initial example (examples/trees).

domain Tree {
   node(int val, Tree left, Tree right)
   empty()
}

int Sum (Tree t)
{
   match t {
      rule node(v, l, r) :
         return v + Sum(l) + Sum(r);
      rule empty() :
         return 0;
   }
}

// Define a function IncrementValFields(t)
// that adds one to each val field of of each node
// node(val, left, right) of a given Tree t

void IncrementValFields(Tree t)
{
   match t {

      rule node() n :
	 
	 // t matches a value of the form node(v, l, r).
	 // n is introduced as a variable holds this value.
	 // Because the field of n are statically known
	 // the classical "->" notation can be applied,
	 // e.g. n->val refers to the val field of n.

	 // increment the val field

	 n->val = n->val + 1;

	 // Recursivly process the left and right subtree

	 IncrementValFields(n->left);
	 IncrementValFields(n->right);

      rule empty() :
	 
	 ;
   }
}

// In the above example, a variable n was introduced by a construct
// n ~ node(v, l, r) .
// The type of n here is more specifici than the type Tree,
// it is denoted node_subtype, which is a subtype of Tree.
// One may write functions that operate on these more specific types.

// E.g. the function ClearValFieldOfNode(n)
// sets the val field of its parameter n to 0.
// n is of type node_subtype.

void ClearValFieldOfNode (node_subtype n)
{
   n->val = 0;
}

// Using ClearValFieldFieldOfNode(n),
// define a function ClearValFieldsOfTree(t)

void ClearValFieldsOfTree(Tree t)
{
   match t {

      rule node(v, l, r) n :
	 
	 ClearValFieldOfNode(n);

	 ClearValFieldsOfTree(l);
	 ClearValFieldsOfTree(r);

      rule empty() :
	 
	 ;
   }
}

// The type node_subtype is a subtype of the type Tree.
// A node_subtype value can be used whereever a Tree value is admissible.
// The constructor node(v, l, r) actually constructs a node_subtype value.
// This is illustrated by the following function Foo()
// that invokes Sum with a node_subtype variable.

int Foo()
{
   node_subtype n;

   // A node(...) value has the type of n
   n = node(11, empty(), node(22, empty(), empty()));

   // The Tree function can be applied to n
   return Sum(n);
}


// The main function

extern "C" void printf(...);

main ()
{
   Tree t = node(11, empty(), node(22, empty(), empty()));

   printf ("(1) Sum = %d\n", Sum(t));

   IncrementValFields(t);
   printf ("(2) Sum = %d\n", Sum(t));

   ClearValFieldsOfTree(t);
   printf ("(3) Sum = %d\n", Sum(t));

   printf ("(4) Foo = %d\n", Foo());
}
