/* Module: rv303260.dll
   Function: FUN_6720ec30
   Address: 6720ec30
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_6720ec30(void *this,int *param_1)

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
  FUN_6720eb90(this);
  FUN_6720eef0(this,(char *)*param_1);
  return this;
}


