/* Module: rmbe3260.dll
   Function: FUN_66060740
   Address: 66060740
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66060740(void *this,int param_1,void *param_2)

{
  if (param_1 != 0) {
    if (param_2 == (void *)0x0) {
      if (*(void **)((int)this + 4) != (void *)0x0) {
        FUN_66060620(*(void **)((int)this + 4),param_1);
        *(int *)((int)this + 4) = param_1;
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
        return;
      }
      *(int *)((int)this + 4) = param_1;
      *(int *)this = param_1;
    }
    else {
      FUN_66060620(param_2,param_1);
      if (param_2 == *(void **)((int)this + 4)) {
        *(int *)((int)this + 4) = param_1;
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
        return;
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  }
  return;
}


