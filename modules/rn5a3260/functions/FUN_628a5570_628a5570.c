/* Module: rn5a3260.dll
   Function: FUN_628a5570
   Address: 628a5570
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_628a5570(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_628a5410(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_628a5450(this);
    FUN_628a5500(this,param_1);
  }
  return;
}


