// a small malloc example
// write access off the basis of the edge
typedef struct v {
  int a;
  int b;
} v ;
void main( )
{
  v * x;
  x = malloc( 8 );
  x->a = 10;
  x->b = 3;
  assert( x->a - x->b == 7 );
}
