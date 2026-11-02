/* Module: pncrt.dll
   Function: ferror
   Address: 78026920
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl ferror(FILE *_File)

{
                    /* 0x26920  600  ferror */
  return _File->_flag & 0x20;
}


