/*
  HASH  TABLES
  ->Hashing is a technique that is used to uniquely identify a specific
  object from a group of similar object.  

  What we does is we assign a key to an object to make searching easy
  ->We can use arrays like data structure to store the indices as keys
  -> However where the key are large use hashing.

    # in Hashing the large keys get converted into small keys by using 
    hash funcitons and are stored in a data structure called hash  table.
    By using the key you can access the element in O(1) time.
    
    Hashing is implemented in two ways.
    1.An element is convereted into an integer by using a hash funciton.
        This element can be used as an index to store the original element.
    2. stored in a hash table where it can be retrived using hashed keys.

    hash = hashfunc(key);
    index = hash% array_size

    hash is independent of the array size and it is then reduced to an index.
    and then it is reduced into an index. that a number between -0
    and array size.
    A hash function is used to map a data with arbitary size to
    data with the fixed size.

    collision resolution techniques.
*/