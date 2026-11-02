/* Module: enlv3260.dll
   Function: FUN_661d2d50
   Address: 661d2d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_661d2d50(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_661d2ae0(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_661d2b20(this);
    FUN_661d2c20(this,param_1);
  }
  return;
}


