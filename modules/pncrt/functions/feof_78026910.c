/* Module: pncrt.dll
   Function: feof
   Address: 78026910
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl feof(FILE *_File)

{
                    /* 0x26910  599  feof */
  return _File->_flag & 0x10;
}


