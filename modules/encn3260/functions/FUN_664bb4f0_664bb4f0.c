/* Module: encn3260.dll
   Function: FUN_664bb4f0
   Address: 664bb4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664bb4f0(void *this,int param_1)

{
  if (*(int *)this == 0) {
    FUN_664bb240(this);
  }
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_664bb280(this);
    FUN_664bb380(this,param_1);
  }
  return;
}


