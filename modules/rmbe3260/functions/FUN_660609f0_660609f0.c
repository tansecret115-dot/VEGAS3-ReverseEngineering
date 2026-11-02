/* Module: rmbe3260.dll
   Function: FUN_660609f0
   Address: 660609f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_660609f0(_onexit_t param_1)

{
  if (DAT_660756e8 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_660756e8,&DAT_660756e4);
  return;
}


