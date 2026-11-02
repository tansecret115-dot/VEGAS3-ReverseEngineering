/* Module: pncrt.dll
   Function: fflush
   Address: 7800e540
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl fflush(FILE *_File)

{
  int iVar1;
  
                    /* 0xe540  601  fflush */
  if (_File == (FILE *)0x0) {
    iVar1 = FUN_7800e640(0);
    return iVar1;
  }
  FUN_780094a0((uint)_File);
  iVar1 = FUN_7800e580((int *)_File);
  FUN_78009510((uint)_File);
  return iVar1;
}


