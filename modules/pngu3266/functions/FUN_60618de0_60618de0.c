/* Module: pngu3266.dll
   Function: FUN_60618de0
   Address: 60618de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_60618de0(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_60618b30(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_60618b70(this);
    FUN_60618c70(this,param_1);
  }
  return;
}


