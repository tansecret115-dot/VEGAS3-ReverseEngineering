/* Module: pncrt.dll
   Function: ungetwc
   Address: 78027e90
   Source: Ghidra pseudocode (Stage 10 batch) */


wint_t __cdecl ungetwc(wint_t _Ch,FILE *_File)

{
  uint uVar1;
  undefined2 in_stack_00000006;
  
                    /* 0x27e90  738  ungetwc */
  FUN_780094a0((uint)_File);
  uVar1 = FUN_78027ec0(__Ch,(int *)_File);
  FUN_78009510((uint)_File);
  return (wint_t)uVar1;
}


