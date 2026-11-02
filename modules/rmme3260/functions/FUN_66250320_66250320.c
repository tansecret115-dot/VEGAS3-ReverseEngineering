/* Module: rmme3260.dll
   Function: FUN_66250320
   Address: 66250320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66250320(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_66250070(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_662500b0(this);
    FUN_662501b0(this,param_1);
  }
  return;
}


