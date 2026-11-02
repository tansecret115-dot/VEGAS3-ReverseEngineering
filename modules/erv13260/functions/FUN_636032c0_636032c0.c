/* Module: erv13260.dll
   Function: FUN_636032c0
   Address: 636032c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_636032c0(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_63603050(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_63603090(this);
    FUN_63603190(this,param_1);
  }
  return;
}


