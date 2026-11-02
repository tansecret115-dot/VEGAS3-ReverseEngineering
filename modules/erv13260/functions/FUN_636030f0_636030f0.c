/* Module: erv13260.dll
   Function: FUN_636030f0
   Address: 636030f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_636030f0(void *this,int *param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar1 = *param_1;
  if (-1 < *(int *)(iVar1 + -0xc)) {
    *(int *)this = iVar1;
    InterlockedIncrement((LONG *)(iVar1 + -0xc));
    return this;
  }
  FUN_63603050(this);
  FUN_636033b0(this,(char *)*param_1);
  return this;
}


