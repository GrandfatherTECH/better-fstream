# So here's the functionality:
  - Stores the file path - 'string filePath' var.
  - Get the current file path - 'getpath()' func.
  - Open the file with storing the file path into 'filaPath' var. It is overloaded for 'char*' and 'string&' paths - 'open()' func.
  - Reopen the file and store the new file path value to filePath - custom overloaded 'open()' func for 'char*' and 'string&' paths.
  - Clear the file (closes the file and reopens it with 'out', 'in' and 'trunc' flags) - 'clear()' func. Note that this funtions calls 'fstream::close()' instead of its own 'close()' func because its own func clears the 'filePath' var.
  - Closes the file with clearing the 'filePath' var (actually calls 'fstream::clear()' func and then clears 'filePath' var) - 'close()' func.
# Inheritance:
The class is called 'bfstream' and is inherited from 'fstream'.
