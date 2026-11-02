/* Module: dnet3260.dll
   Function: FUN_630531b0
   Address: 630531b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630531b0(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_63052f40(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_63052f80(this);
    FUN_63053080(this,param_1);
  }
  return;
}


