/* Module: mcplugrw.dll
   Function: FUN_00480170
   Address: 00480170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00480170(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x1c1);
  *(int *)(*(int *)(param_1 + 0x1bd) + 0x56) =
       *(int *)(*(int *)(param_1 + 0x1bd) + 0x56) +
       ((int)(*(int *)(iVar1 + 0xc) + (*(int *)(iVar1 + 0xc) >> 0x1f & 7U)) >> 3);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  uVar2 = (**(code **)(*(int *)(param_1 + 0x1bd) + 8))(param_1);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14d)) {
    puVar4 = (undefined4 *)(iVar1 + 0x11);
    do {
      *puVar4 = 0;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x14d));
  }
  uVar2 = *(undefined4 *)(param_1 + 300);
  *(undefined1 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x21) = uVar2;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


