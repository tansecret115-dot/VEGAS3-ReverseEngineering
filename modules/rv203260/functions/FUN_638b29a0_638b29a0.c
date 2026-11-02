/* Module: rv203260.dll
   Function: FUN_638b29a0
   Address: 638b29a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_638b29a0(_onexit_t param_1)

{
  if (DAT_638b67c4 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_638b67c4,&DAT_638b67c0);
  return;
}


