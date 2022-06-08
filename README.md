# MapPhoneList
##C++ Map or Dictionary Data Structure
In this tutorial, we are learning Map & Dictonary Data Structure in C++

## What is Map in C++?
A C++ map is a way to store a key-value pair. A map can be declared as follows:

```
#include <iostream>
#include <map>
using namaspace std;

map<string, sring> phoneList;
```

Each map entry consists of a pair: a key and a value. In this case, both the key and the value are defined as string,
but we can use other types as well: int, vectors and more.

## Advantages of Using Map in C++?
There are two main advantages:
- The map ensures that a key is unique across the entire data structure.
- A map allows fast access to the value using the key. 

For more to know about Map in C++, follow the link [Map in C++](https://www.udacity.com/blog/2020/03/c-maps-explained.html). 

## Let's learn a Map & Dictonary Data Structure in C++ by solving a problem?
### Task
Given `n` names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. You will then be given an unknown number
f names to query your phone book for. For each `name` queried, print the associated entry from your phone book on a new line in the form name=phoneList; if an entry
for `name` is not found, print `Not found` instead.

### Sample Input
```
3
sayed 99912222
abu 11122222
sha 12299933
sam
shucok
assad
```

### Sample Output

```
sayed 99912222
Not found
sha 12299933
```
## Code Overview

```
map<string,string> j; //Decleration of a Map
``` 
```
auto it=j.begin();  Initailize of iterator
```
We Can also decleare iterator it in this way
```
map<string,string>::iterator j;
```
```
.find() //0peration is to search for an element with given key.
```
