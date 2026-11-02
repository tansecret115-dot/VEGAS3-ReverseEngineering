/* Module: auth3260.dll
   Function: FUN_627a5fc0
   Address: 627a5fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_627a5fc0(void *this,int *param_1)

{
  FUN_627a6080(this);
  if (param_1 != (int *)0x0) {
    *(int **)this = param_1;
    (**(code **)(*param_1 + 4))(param_1);
  }
  return;
}


