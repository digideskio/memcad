// Ex submem-05: array used as a sub-memory + steps (main := sub)
//  => simplified structure with no data field;
//     this should make the computation of segmentations easier
typedef struct elist {
  struct elist * next;
  int data;
} elist ;
typedef elist * list ;
void main( ){
  int i;
  elist t[10];
  list l;
  list k;
  l = null;
  i = 0;
  while( i < 10 ){
    t[i].next = l;
    t[i].data = 0;
    l = &t[i];
    i = i + 1;
  }
  k = l;
  _memcad( "check_inductive( l, list )" );
  if( k != null ){
    // this guard seems not be analyzed well
    assert( k != null ); // nor is this read
    i = k->data;
    k = k->next;
    _memcad( "check_inductive( k, list )" );
    if( k != null ){
      k = k->next;
      _memcad( "check_inductive( k, list )" );
    }
  }
  _memcad( "force_live( l, t, i)" );
}
