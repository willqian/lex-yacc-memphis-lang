'root'
   expression(-> X)

   print("POLISH NOTATION:")
   polish(X)

   print("REVERSE POLISH NOTATION:")
   rpn(X)

-- Abstract Syntax

'type' Expr

   plus (Expr, Expr)
   minus (Expr, Expr)
   mult (Expr, Expr)
   divide (Expr, Expr)
   neg (Expr)
   num (INT)

-- Concrete Syntax

'nonterm' expression(-> Expr)

   'rule' expression(-> X): expr2(-> X)
   'rule' expression(-> plus(X, Y)): expression(-> X) "+" expr2(-> Y)
   'rule' expression(-> minus(X, Y)): expression(-> X) "-" expr2(-> Y)

'nonterm' expr2(-> Expr)

   'rule' expr2(-> X): expr3(-> X)
   'rule' expr2(-> mult(X,Y)): expr2(-> X) "*" expr3(-> Y)
   'rule' expr2(-> divide(X, Y)): expr2(-> X) "/" expr3(-> Y)

'nonterm' expr3(-> Expr)

   'rule' expr3(-> num(X)): Number(-> X)
   'rule' expr3(-> neg(X)): "-" expr3(-> X)
   'rule' expr3(-> X): "+" expr3(-> X)
   'rule' expr3(-> X): "(" expression(-> X) ")"

'token' Number(-> INT)

-- Reverse Polish Notation

'action' rpn(Expr)
   'rule' rpn(plus (X, Y)): rpn(X) rpn(Y) print("plus")
   'rule' rpn(minus (X, Y)): rpn(X) rpn(Y) print("minus")
   'rule' rpn(mult (X, Y)): rpn(X) rpn(Y) print("mult")
   'rule' rpn(divide (X, Y)): rpn(X) rpn(Y) print("divide")
   'rule' rpn(neg (X)): rpn(X) print("neg")
   'rule' rpn(num (N)): print(N)

-- Polish Notation (External Predicate)

'action' polish(Expr)
