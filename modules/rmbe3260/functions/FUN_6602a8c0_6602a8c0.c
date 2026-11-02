/* Module: rmbe3260.dll
   Function: FUN_6602a8c0
   Address: 6602a8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6602a8c0(void *this,int *param_1)

{
  *(int **)((int)this + 0x14) = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return;
}


