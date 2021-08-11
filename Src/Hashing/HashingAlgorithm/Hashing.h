#ifndef _HASHING_H_
#define _HASHING_H_

    struct Hashtable{
        int value;
        bool isNull = false;
    };
    // insert a value into array
    bool hashInsert(Hashtable *, int, int);

    // find position of a value in array
    int hashSearch(Hashtable *, int, int);

#endif