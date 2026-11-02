/* Module: encn3260.dll
   Function: FUN_664d9050
   Address: 664d9050
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_664d9050(_onexit_t param_1)

{
  if (DAT_664f2b7c == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_664f2b7c,&DAT_664f2b78);
  return;
}


