/* Module: sdpp3260.dll
   Function: FUN_10006b90
   Address: 10006b90
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_10006b90(void *this,undefined4 *param_1)

{
  if (*(int *)this == 0) {
    FUN_10006560(this);
  }
  FUN_10006aa0(this,((undefined4 *)*param_1)[-2],(undefined4 *)*param_1);
  return this;
}


