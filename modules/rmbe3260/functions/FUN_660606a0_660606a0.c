/* Module: rmbe3260.dll
   Function: FUN_660606a0
   Address: 660606a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_660606a0(void *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (param_1 == *(int **)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    if (param_1 == *(int **)this) {
      *(int *)this = param_1[2];
    }
    FUN_66060650(param_1);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  return;
}


