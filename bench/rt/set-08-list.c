//lsetin set-08, test inclusion check!
typedef struct  elist {
  struct elist * next ;
  int data ;
  } elist ;
typedef elist * list ;
void main( ){
  list l ;
  list k ;
  _memcad( "add_inductive( l, list)" );
  k = null; // nullify, to discard constraint, to remove
  if ( l != 0 )
    k = l->next;
  else
    k = l;
  _memcad( "check_inductive( l, list)" );
  _memcad( "check_inductive( k, list)" );
}
