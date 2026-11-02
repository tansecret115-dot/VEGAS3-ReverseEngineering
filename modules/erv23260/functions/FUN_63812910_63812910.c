/* Module: erv23260.dll
   Function: FUN_63812910
   Address: 63812910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_63812910(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_638128a0((int)this);
  iVar1 = *(int *)(*(int *)((int)this + 0x110) + param_2 * 4) +
          (iVar1 + 8) * *(int *)((int)this + 0x118) + *(int *)((int)this + 0x120);
  if (param_1 == 0) {
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) | 0x80;
    return 0;
  }
  return 3;
}


