/* Module: rmto3260.dll
   Function: FUN_663041d0
   Address: 663041d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_663041d0(void *this,int param_1,void *param_2)

{
  if (param_1 != 0) {
    if (param_2 == (void *)0x0) {
      if (*(void **)this != (void *)0x0) {
        FUN_663040f0(*(void **)this,param_1);
        *(int *)this = param_1;
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
        return;
      }
      *(int *)((int)this + 4) = param_1;
      *(int *)this = param_1;
    }
    else {
      FUN_663040f0(param_2,param_1);
      if (param_2 == *(void **)this) {
        *(int *)this = param_1;
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
        return;
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  }
  return;
}


