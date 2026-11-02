/* Module: basc3260.dll
   Function: FUN_627f46a0
   Address: 627f46a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_627f46a0(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_627f4590(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_627f45d0(this);
    FUN_627f4630(this,param_1);
  }
  return;
}


