# Array Programs

Arrays is a kind of data structure that can store a fixed-size sequential collection of elements of the same type.
An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.

# Address of 2d array

# For array  (m * n)

## // Row Major Implementation
a[i][j] = Base_address + ((i * n)+j ) * size of that data_type    

## // Column Major Implementation
a[i][j] = Base_address + ((j * m)+i ) * size of that data_type   
