/* Module: rmme3260.dll
   Function: FUN_66269140
   Address: 66269140
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_66269140(_onexit_t param_1)

{
  if (DAT_6627f398 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_6627f398,&DAT_6627f394);
  return;
}


