/* Module: atrc3260.dll
   Function: FUN_68003330
   Address: 68003330
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_68003330(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_680030c0(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_68003100(this);
    FUN_68003200(this,param_1);
  }
  return;
}


