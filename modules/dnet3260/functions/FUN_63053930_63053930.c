/* Module: dnet3260.dll
   Function: FUN_63053930
   Address: 63053930
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_63053930(_onexit_t param_1)

{
  if (DAT_6305554c == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_6305554c,&DAT_63055548);
  return;
}


