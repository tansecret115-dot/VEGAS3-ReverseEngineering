/* Module: sfcdi.dll
   Function: FUN_5bf18b60
   Address: 5bf18b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf18b60(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = param_1 + 0x4c + *(int *)(param_1 + 0x3c) * 0x28;
  *(int *)(iVar1 + 0xc) = *(int *)(param_1 + 0x58 + *(int *)(param_1 + 0x3c) * 0x28) + param_2;
  if (param_3 != 0) {
    *(int *)(param_1 + 0x34) = param_3;
  }
  if ((*(int *)(iVar1 + 0xc) != *(int *)(iVar1 + 8)) && (*(int *)(param_1 + 0x34) == 0)) {
    return 0;
  }
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  iVar2 = *(int *)(iVar1 + 0x1c);
  iVar3 = *(int *)(iVar1 + 0x20);
  *(undefined4 *)(iVar1 + 0x18) = 1;
  iVar4 = *(int *)(param_1 + 4);
  uVar5 = FUN_5bf18b30(*(int *)(param_1 + 0x3c));
  *(uint *)(param_1 + 0x3c) = uVar5;
  iVar1 = param_1 + 0x4c + uVar5 * 0x28;
  *(int *)(iVar1 + 0x20) = iVar3 + iVar4;
  *(int *)(iVar1 + 0x1c) = iVar2 + iVar4;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  return 0;
}


