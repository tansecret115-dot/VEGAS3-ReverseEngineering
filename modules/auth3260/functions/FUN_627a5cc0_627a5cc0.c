/* Module: auth3260.dll
   Function: FUN_627a5cc0
   Address: 627a5cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_627a5cc0(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_627a5b60(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_627a5ba0(this);
    FUN_627a5c50(this,param_1);
  }
  return;
}


