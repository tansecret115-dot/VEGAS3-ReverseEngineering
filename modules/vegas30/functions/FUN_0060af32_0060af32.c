/* Module: vegas30.exe
   Function: FUN_0060af32
   Address: 0060af32
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0060af32(_onexit_t param_1)

{
  if (DAT_0065f64c == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_0065f64c,&DAT_0065f648);
  return;
}


