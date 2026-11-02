/* Module: rmbe3260.dll
   Function: FUN_66057750
   Address: 66057750
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66057750(void *this,undefined4 *param_1)

{
  param_1[1] = *(undefined4 *)this;
  *param_1 = **(undefined4 **)this;
  *(undefined4 **)(**(int **)this + 4) = param_1;
  **(undefined4 **)this = param_1;
  return;
}


