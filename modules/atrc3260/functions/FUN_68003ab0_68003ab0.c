/* Module: atrc3260.dll
   Function: FUN_68003ab0
   Address: 68003ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_68003ab0(_onexit_t param_1)

{
  if (DAT_680054fc == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_680054fc,&DAT_680054f8);
  return;
}


