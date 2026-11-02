/* Module: sftrans1.dll
   Function: FUN_005516c8
   Address: 005516c8
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005516c8(_onexit_t param_1)

{
  if (DAT_00622498 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_00622498,&DAT_00622494);
  return;
}


