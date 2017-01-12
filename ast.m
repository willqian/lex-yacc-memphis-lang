domain Statement {

    assignment (Expression lhs, Expression rhs)
    print (Expression x)
    ifstmt (Expression cond, Statement thenpart, Statement elsepart)
    whilestmt (Expression cond, Statement body)
    seq (Statement s1, Statement s2)
    empty()

}

domain Expression {

    eq (Expression x, Expression y)
    ne (Expression x, Expression y)
    lt (Expression x, Expression y)
    le (Expression x, Expression y)
    gt (Expression x, Expression y)
    ge (Expression x, Expression y)
    plus (Expression x, Expression y)
    minus (Expression x, Expression y)
    mult (Expression x, Expression y)
    divide (Expression x, Expression y)
    neg (Expression x)
    number (int x)
    name(int location)

}
