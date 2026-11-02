/* Module: pncrt.dll
   Function: fgetwc
   Address: 78026a50
   Source: Ghidra pseudocode (Stage 10 batch) */


wint_t __cdecl fgetwc(FILE *_File)

{
  uint uVar1;
  void *this;
  
                    /* 0x26a50  605  fgetwc */
  FUN_780094a0((uint)_File);
  uVar1 = FUN_78026a80(this,_File);
  FUN_78009510((uint)_File);
  return (wint_t)uVar1;
}


