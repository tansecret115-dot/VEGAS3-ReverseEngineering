/* Module: erv33260.dll
   Function: FUN_6707ad20
   Address: 6707ad20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707ad20(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x28) * param_2;
  *(int *)((int)this + 0x34) = param_2;
  *(undefined4 *)((int)this + 0x40) = param_3;
  iVar1 = FUN_6707d640((int)this);
  FUN_6707dcc0(*(void **)((int)this + 0x48),*(int *)((int)this + 0x3c),iVar1);
  return;
}


