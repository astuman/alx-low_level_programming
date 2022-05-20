#include "lists.h"
/**
 * ToIntFunction: holds number of nodes
 * count: holds 0
 **/
ToIntFunction<LinearNode<T>> counter = (node) ->{
int count = 0;
while( node != null ) {
count++;
node = node.getNext();
}
return( count );
};
