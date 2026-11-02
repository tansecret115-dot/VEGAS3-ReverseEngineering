/* Module: encn3260.dll
   Function: FUN_66482750
   Address: 66482750
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66482750(void *this,int *param_1)

{
  *(int **)((int)this + 0x1c) = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return;
}


