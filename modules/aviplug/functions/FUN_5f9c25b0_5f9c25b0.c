/* Module: aviplug.dll
   Function: FUN_5f9c25b0
   Address: 5f9c25b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9c25b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint local_18;
  uint local_14;
  uint local_10;
  
  uVar9 = 0;
  uVar2 = *(uint *)(param_1 + 0x78);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  uVar1 = uVar2;
  if ((uVar2 & 0x3fff) != 0) {
    uVar1 = ((int)(uVar2 + 0x4000 + ((int)(uVar2 + 0x4000) >> 0x1f & 0x3fffU)) >> 0xe) << 0xe;
  }
  uVar2 = *(int *)(param_1 + 0x80) + uVar2;
  iVar8 = (int)(uVar1 + ((int)uVar1 >> 0x1f & 0x3fffU)) >> 0xe;
  if ((uVar2 & 0x3fff) != 0) {
    uVar2 = ((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x3fffU)) >> 0xe) << 0xe;
  }
  uVar1 = *(uint *)(param_1 + 0x7c);
  iVar7 = (int)(uVar2 + ((int)uVar2 >> 0x1f & 0x3fffU)) >> 0xe;
  if ((uVar1 & 0x3fff) != 0) {
    uVar1 = ((int)(uVar1 + 0x4000 + ((int)(uVar1 + 0x4000) >> 0x1f & 0x3fffU)) >> 0xe) << 0xe;
  }
  uVar2 = *(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x7c);
  iVar4 = (int)(uVar1 + ((int)uVar1 >> 0x1f & 0x3fffU)) >> 0xe;
  if ((uVar2 & 0x3fff) != 0) {
    uVar2 = ((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x3fffU)) >> 0xe) << 0xe;
  }
  iVar3 = (int)(uVar2 + ((int)uVar2 >> 0x1f & 0x3fffU)) >> 0xe;
  if (iVar4 < iVar3) {
    do {
      if (iVar8 < iVar7) {
        iVar6 = iVar7 - iVar8;
        local_10 = local_10 + iVar6;
        pbVar5 = (byte *)((*(int *)(param_1 + 0x74) * iVar4 + iVar8) * 3 + *(int *)(param_1 + 0x5c))
        ;
        do {
          uVar9 = uVar9 + pbVar5[2];
          local_18 = local_18 + pbVar5[1];
          local_14 = local_14 + *pbVar5;
          iVar6 = iVar6 + -1;
          pbVar5 = pbVar5 + 3;
        } while (iVar6 != 0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
    if (local_10 != 0) {
      uVar9 = uVar9 / local_10;
      local_18 = local_18 / local_10;
      local_14 = local_14 / local_10;
    }
  }
  *(uint *)(param_1 + 0x3c) = (uVar9 * 0x100 + local_18) * 0x100 + local_14;
  return;
}


