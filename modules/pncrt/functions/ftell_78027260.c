/* Module: pncrt.dll
   Function: ftell
   Address: 78027260
   Source: Ghidra pseudocode (Stage 10 batch) */


long __cdecl ftell(FILE *_File)

{
  int iVar1;
  
                    /* 0x27260  622  ftell */
  FUN_780094a0((uint)_File);
  iVar1 = FUN_78027290(&_File->_ptr);
  FUN_78009510((uint)_File);
  return iVar1;
}


