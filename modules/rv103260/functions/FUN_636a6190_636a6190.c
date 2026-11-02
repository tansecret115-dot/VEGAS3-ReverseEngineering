/* Module: rv103260.dll
   Function: FUN_636a6190
   Address: 636a6190
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_636a6190(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_636a5f20(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_636a5f60(this);
    FUN_636a6060(this,param_1);
  }
  return;
}


