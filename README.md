# Uses Strassen's divide and conquer algorithm for matrix multiplication using multi threading

Note: in current state does not work

# How to use
Takes 2 command line inputs. The first one is the path to the file with the matrixes, and the second is the number of matrix (currently only supports 2). All matrixes should be square and and of a size power of two. They are formatted as each value (float64) separated by a space. Every new row is separated with a new line. The next matrix has an additional new line before it 

#Included is create_matrix.cpp 
Which will create a valid matrix for you. Simply execute the program with two command line arguments: the first being the name of the file to write to (will create its own file), and the second being the size of the matrix (currently only supports powers of two)
