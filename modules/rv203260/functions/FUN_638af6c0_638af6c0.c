/* Module: rv203260.dll
   Function: FUN_638af6c0
   Address: 638af6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_638af6c0(void *this,int *param_1)

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
  FUN_638af620(this);
  FUN_638af980(this,(char *)*param_1);
  return this;
}


