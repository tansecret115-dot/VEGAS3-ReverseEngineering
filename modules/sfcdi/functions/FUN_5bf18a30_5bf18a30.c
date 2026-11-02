/* Module: sfcdi.dll
   Function: FUN_5bf18a30
   Address: 5bf18a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf18a30(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x4c + *(int *)(param_1 + 0x44) * 0x28;
  FUN_5bf189f0(iVar1,*(uint *)(param_1 + 0x54 + *(int *)(param_1 + 0x44) * 0x28));
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x44);
  *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + 1;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) - *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return *(undefined4 *)(iVar1 + 0x20);
}


