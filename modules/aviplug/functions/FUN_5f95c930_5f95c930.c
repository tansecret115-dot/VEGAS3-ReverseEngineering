/* Module: aviplug.dll
   Function: FUN_5f95c930
   Address: 5f95c930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f95c930(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x428), iVar1 != 0)) &&
      (*(int *)(iVar1 + 0x94) != 0)) && (*(int *)(iVar1 + 4) != 0)) {
    uVar2 = FUN_5f95c8f0(*(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x428) + 0x94) + 0x10);
  }
  return uVar2;
}


