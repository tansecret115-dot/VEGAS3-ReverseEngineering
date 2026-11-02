/* Module: enlv3260.dll
   Function: FUN_661d2b80
   Address: 661d2b80
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_661d2b80(void *this,int *param_1)

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
  FUN_661d2ae0(this);
  FUN_661d2e40(this,(char *)*param_1);
  return this;
}


