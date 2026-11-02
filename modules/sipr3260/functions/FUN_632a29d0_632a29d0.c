/* Module: sipr3260.dll
   Function: FUN_632a29d0
   Address: 632a29d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_632a29d0(_onexit_t param_1)

{
  if (DAT_632a53e8 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_632a53e8,&DAT_632a53e4);
  return;
}


