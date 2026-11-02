/* Module: rmbe3260.dll
   Function: FUN_6605b880
   Address: 6605b880
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6605b880(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_6605b5d0(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_6605b610(this);
    FUN_6605b710(this,param_1);
  }
  return;
}


