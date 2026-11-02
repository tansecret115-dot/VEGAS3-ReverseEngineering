/* Module: pncrt.dll
   Function: fputwc
   Address: 78026d10
   Source: Ghidra pseudocode (Stage 10 batch) */


wint_t __cdecl fputwc(wchar_t _Ch,FILE *_File)

{
  uint uVar1;
  undefined2 in_stack_00000006;
  
                    /* 0x26d10  613  fputwc */
  FUN_780094a0((uint)_File);
  uVar1 = FUN_78026d40(__Ch,_File);
  FUN_78009510((uint)_File);
  return (wint_t)uVar1;
}


