/* Module: sfmarket2.dll
   Function: FUN_00413720
   Address: 00413720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00413720(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x5c) - *(int *)((int)this + 0x54);
  if (iVar1 != 0) {
    *(int *)(param_3 + 0x18) = iVar1;
    *(int *)(param_3 + 0x1c) = *(int *)((int)this + 0x60) - *(int *)((int)this + 0x58);
    return 0;
  }
  return 0;
}


