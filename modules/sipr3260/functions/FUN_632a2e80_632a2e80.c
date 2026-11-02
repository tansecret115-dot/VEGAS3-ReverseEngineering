/* Module: sipr3260.dll
   Function: FUN_632a2e80
   Address: 632a2e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_632a2e80(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_632a2c10(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_632a2c50(this);
    FUN_632a2d50(this,param_1);
  }
  return;
}


