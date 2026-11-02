/* Module: sipr3260.dll
   Function: FUN_632a2cb0
   Address: 632a2cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_632a2cb0(void *this,int *param_1)

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
  FUN_632a2c10(this);
  FUN_632a2f70(this,(char *)*param_1);
  return this;
}


