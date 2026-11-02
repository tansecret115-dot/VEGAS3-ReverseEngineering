/* Module: vegas30.exe
   Function: FUN_005c7c50
   Address: 005c7c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c7c50(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  uint *puVar5;
  bool bVar6;
  bool bVar7;
  
  FUN_005c7af0(param_2,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  iVar2 = 0x40;
  bVar6 = false;
  iVar1 = 0;
  bVar7 = true;
  puVar3 = param_2;
  pbVar4 = (byte *)(param_1 + 0x58);
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = (byte)*puVar3 < *pbVar4;
    bVar7 = (byte)*puVar3 == *pbVar4;
    puVar3 = (uint *)((int)puVar3 + 1);
    pbVar4 = pbVar4 + 1;
  } while (bVar7);
  if (!bVar7) {
    iVar1 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
  }
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 != 0) {
      FUN_005b83b0(*(undefined4 *)(iVar1 + 8),1);
    }
    puVar3 = (uint *)(param_1 + 0x58);
    puVar5 = puVar3;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    *puVar3 = *puVar3 & 0xfffffffc;
    iVar2 = *(int *)(param_1 + 0x3c) + 1;
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x3c) = iVar2;
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x200000;
      *(uint *)**(undefined4 **)(iVar1 + 8) = *(uint *)**(undefined4 **)(iVar1 + 8) | 0x2000;
      FUN_005b84d0(*(undefined4 *)(iVar1 + 8),1);
      *(uint *)**(undefined4 **)(iVar1 + 8) = *(uint *)**(undefined4 **)(iVar1 + 8) | 0x100;
    }
    return 0;
  }
  return 1;
}


