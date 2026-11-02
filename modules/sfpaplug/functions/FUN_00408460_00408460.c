/* Module: sfpaplug.dll
   Function: FUN_00408460
   Address: 00408460
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00408460(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar1 = FUN_00408120(param_1,*(int **)(param_1 + 0x60),*(int *)(param_1 + 0x18),
                       *(int *)(param_1 + 0x14));
  if ((param_2 == param_3 + -1) &&
     (uVar2 = *(int *)(param_1 + 0x4c) - (uint)*(ushort *)(param_1 + 0xe6),
     uVar4 = (int)uVar2 >> 0x1f, 1 < (int)((uVar2 ^ uVar4) - uVar4))) {
    return -1;
  }
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_004081a0(*(int *)(param_1 + 0x60),*(int *)(param_1 + 0x14),param_2 * 5 + 0xec + param_1,4);
  }
  iVar1 = FUN_00408240(param_1);
  puVar5 = *(undefined4 **)(param_1 + 0x60);
  for (uVar2 = *(uint *)(param_1 + 0x14) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_4 = *puVar5;
    puVar5 = puVar5 + 1;
    param_4 = param_4 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)param_4 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    param_4 = (undefined4 *)((int)param_4 + 1);
  }
  return iVar1;
}


