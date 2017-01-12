with spec;

extern "C" void printf(...);

extern "C" void polish(Expr e);

void polish(Expr e)
{
   match e {
      rule plus (x, y)   :  printf("plus\n");   polish(x); polish(y);
      rule minus (x, y)  :  printf("minus\n");  polish(x); polish(y);
      rule mult (x, y)   :  printf("mult\n");   polish(x); polish(y);
      rule divide (x, y) :  printf("divide\n"); polish(x); polish(y);
      rule neg (x)       :  printf("neg\n");    polish(x);
      rule num (x)       :  printf("%d\n", x);
   }
}
