/* Module: erv33260.dll
   Function: FUN_6707dcc0
   Address: 6707dcc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707dcc0(void *this,int param_1,undefined4 param_2)

{
  if (*(int *)((int)this + 4) == 0) {
    *(undefined4 *)(*(int *)this + param_1 * 8) = param_2;
  }
  return;
}


