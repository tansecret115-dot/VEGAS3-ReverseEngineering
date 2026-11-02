/* Module: pngu3266.dll
   Function: FUN_6061fca0
   Address: 6061fca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6061fca0(_onexit_t param_1)

{
  if (DAT_6064b4bc == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_6064b4bc,&DAT_6064b4b8);
  return;
}


