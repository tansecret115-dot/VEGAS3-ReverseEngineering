/* Module: erv33260.dll
   Function: FUN_6707ad70
   Address: 6707ad70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707ad70(void *this,int param_1)

{
  int iVar1;
  
  *(int *)((int)this + 0x38) = param_1;
  *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x28) * *(int *)((int)this + 0x34) + param_1;
  iVar1 = FUN_6707d640((int)this);
  if (*(int *)((int)this + 0x38) != 0) {
    FUN_6707dcc0(*(void **)((int)this + 0x48),*(int *)((int)this + 0x3c),iVar1);
  }
  return;
}


