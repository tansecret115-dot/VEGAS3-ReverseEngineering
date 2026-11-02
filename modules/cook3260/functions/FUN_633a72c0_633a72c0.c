/* Module: cook3260.dll
   Function: FUN_633a72c0
   Address: 633a72c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_633a72c0(_onexit_t param_1)

{
  if (DAT_633b1c74 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_633b1c74,&DAT_633b1c70);
  return;
}


