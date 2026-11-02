/* Module: rmbe3260.dll
   Function: FUN_6605b670
   Address: 6605b670
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_6605b670(void *this,int *param_1)

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
  FUN_6605b5d0(this);
  FUN_6605b970(this,(char *)*param_1);
  return this;
}


