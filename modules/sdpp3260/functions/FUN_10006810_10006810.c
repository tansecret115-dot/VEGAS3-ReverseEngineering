/* Module: sdpp3260.dll
   Function: FUN_10006810
   Address: 10006810
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10006810(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_10006560(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_100065a0(this);
    FUN_100066a0(this,param_1);
  }
  return;
}


