/* Module: cook3260.dll
   Function: FUN_633a6d20
   Address: 633a6d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a6d20(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_633a6ab0(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_633a6af0(this);
    FUN_633a6bf0(this,param_1);
  }
  return;
}


