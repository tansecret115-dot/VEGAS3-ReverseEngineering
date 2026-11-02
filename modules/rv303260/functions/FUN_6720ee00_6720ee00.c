/* Module: rv303260.dll
   Function: FUN_6720ee00
   Address: 6720ee00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6720ee00(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_6720eb90(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_6720ebd0(this);
    FUN_6720ecd0(this,param_1);
  }
  return;
}


