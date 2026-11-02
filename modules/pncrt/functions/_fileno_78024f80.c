/* Module: pncrt.dll
   Function: _fileno
   Address: 78024f80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _fileno(FILE *_File)

{
                    /* 0x24f80  232  _fileno */
  return _File->_file;
}


