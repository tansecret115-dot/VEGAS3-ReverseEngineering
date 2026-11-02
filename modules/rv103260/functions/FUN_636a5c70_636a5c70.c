/* Module: rv103260.dll
   Function: FUN_636a5c70
   Address: 636a5c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636a5c70(_onexit_t param_1)

{
  if (DAT_636a8460 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_636a8460,&DAT_636a845c);
  return;
}


