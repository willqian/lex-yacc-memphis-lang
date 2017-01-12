with ast;

extern "C" void printf(...);
extern "C" void execute(Statement s);

int var[26];

int evaluate(Expression e)
{
    match e {
        rule eq(x, y)     :  return evaluate(x) == evaluate(y);
        rule ne(x, y)     :  return evaluate(x) != evaluate(y);
        rule lt(x, y)     :  return evaluate(x) <  evaluate(y);
        rule le(x, y)     :  return evaluate(x) <= evaluate(y);
        rule gt(x, y)     :  return evaluate(x) >  evaluate(y);
        rule ge(x, y)     :  return evaluate(x) >= evaluate(y);
        rule plus(x, y)   :  return evaluate(x) +  evaluate(y);
        rule minus(x, y)  :  return evaluate(x) -  evaluate(y);
        rule mult(x, y)   :  return evaluate(x) *  evaluate(y);
        rule divide(x, y) :  return evaluate(x) /  evaluate(y);
        rule neg(x)       :  return - evaluate(x);
        rule number(x)    :  return x;
        rule name(x)      :  return var[x];
    }
}

void execute (Statement s)
{
    match s {
        rule assignment(name(x), rhs) : 
            var[x] = evaluate(rhs);
        rule print(x) :
            printf("%d\n", evaluate(x));
        rule ifstmt(c, s1, s2) :
            if(evaluate(c)) execute(s1); else execute(s2);
        rule whilestmt(c, s) :
            while(evaluate(c)) execute(s);
        rule seq(s1, s2) :
            execute(s1); execute(s2);
        rule empty() :
            ;
    }
}
