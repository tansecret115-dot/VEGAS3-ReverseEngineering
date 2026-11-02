/* Module: erv33260.dll
   Function: FUN_670728e0
   Address: 670728e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_670728e0(void *this,int param_1,int *param_2,int *param_3)

{
  if ((-2 < param_1) && (param_1 < *(int *)((int)this + 0x80))) {
    if (param_1 < 0) {
      *param_2 = 0;
      *param_3 = *(int *)((int)this + 0x80) + -1;
      return 0;
    }
    *param_3 = param_1;
    *param_2 = param_1;
    return 0;
  }
  return 10;
}


