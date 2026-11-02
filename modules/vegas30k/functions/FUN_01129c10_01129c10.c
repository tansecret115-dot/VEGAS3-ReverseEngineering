/* Module: vegas30k.dll
   Function: FUN_01129c10
   Address: 01129c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01129c10(int param_1,undefined4 *param_2,int param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  
  iVar4 = param_3;
  local_10 = 0;
  piVar3 = *(int **)(param_1 + 0x1c);
  iVar6 = *(int *)(param_1 + 0x20);
  uVar11 = 0x800;
  if (piVar3 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar3;
  }
  if ((iVar6 < 0) || (iVar5 + -1 < iVar6)) {
    iVar6 = 0;
  }
  else {
    iVar6 = piVar3[1] * iVar6 + piVar3[2];
  }
  iVar5 = *(int *)(iVar6 + 0x14);
  iVar7 = *(int *)(iVar5 + 0x34c);
  local_18 = param_2 + 4;
  memmove(local_18,(void *)(iVar6 + 0xc),8);
  pbVar10 = (byte *)(param_2 + 6);
  if (*(int *)(param_1 + 0x48) == 0) {
    pbVar13 = (byte *)(iVar7 + 0xab);
    bVar1 = *pbVar13;
    pbVar12 = (byte *)(iVar7 + 0x100);
    pbVar14 = pbVar13;
    pbVar16 = pbVar10;
    for (uVar11 = (uint)(bVar1 >> 2); uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pbVar16 = *(undefined4 *)pbVar14;
      pbVar14 = pbVar14 + 4;
      pbVar16 = pbVar16 + 4;
    }
    for (uVar11 = bVar1 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pbVar16 = *pbVar14;
      pbVar14 = pbVar14 + 1;
      pbVar16 = pbVar16 + 1;
    }
    bVar1 = *pbVar13;
    bVar2 = *pbVar12;
    pbVar13 = pbVar12;
    pbVar14 = pbVar10 + bVar1;
    for (uVar11 = (uint)(bVar2 >> 2); uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pbVar14 = *(undefined4 *)pbVar13;
      pbVar13 = pbVar13 + 4;
      pbVar14 = pbVar14 + 4;
    }
    for (uVar11 = bVar2 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pbVar14 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      pbVar14 = pbVar14 + 1;
    }
    pbVar10 = pbVar10 + bVar1 + *pbVar12;
    uVar11 = (0x800 - (uint)bVar1) - (uint)*pbVar12;
  }
  iVar7 = *(int *)(param_1 + 0x48);
  local_14 = local_18;
  while( true ) {
    piVar3 = *(int **)(iVar5 + 0x214);
    if (piVar3 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar3;
    }
    if (iVar8 <= iVar7) {
      if (uVar11 != 0) {
        for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          pbVar10[0] = 0;
          pbVar10[1] = 0;
          pbVar10[2] = 0;
          pbVar10[3] = 0;
          pbVar10 = pbVar10 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pbVar10 = 0;
          pbVar10 = pbVar10 + 1;
        }
      }
      param_3 = param_3 + -0x930;
      *(undefined1 *)((int)local_18 + 6) = 0x89;
      *(undefined1 *)((int)local_18 + 2) = 0x89;
      *(undefined4 *)(param_1 + 0x48) = 0;
      goto LAB_01129e28;
    }
    if (param_3 == 0) break;
    if (piVar3 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar3;
    }
    if ((iVar7 < 0) || (iVar8 + -1 < iVar7)) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(piVar3[2] + iVar7 * 4);
    }
    pbVar13 = (byte *)(*(int *)(iVar8 + 0x34c) + 0x56);
    if (uVar11 < *pbVar13) {
      puVar15 = param_2;
      for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      local_18 = local_14 + 0x24c;
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined1 *)puVar15 = 0;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      param_3 = param_3 + -0x930;
      if (param_3 == 0) break;
      memmove(local_18,(void *)(iVar6 + 0xc),8);
      pbVar10 = (byte *)(local_14 + 0x24e);
      uVar11 = 0x800;
      param_2 = param_2 + 0x24c;
      local_14 = local_18;
    }
    bVar1 = *pbVar13;
    pbVar14 = pbVar13;
    pbVar16 = pbVar10;
    for (uVar9 = (uint)(bVar1 >> 2); uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pbVar16 = *(undefined4 *)pbVar14;
      pbVar14 = pbVar14 + 4;
      pbVar16 = pbVar16 + 4;
    }
    for (uVar9 = bVar1 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pbVar16 = *pbVar14;
      pbVar14 = pbVar14 + 1;
      pbVar16 = pbVar16 + 1;
    }
    pbVar10 = pbVar10 + *pbVar13;
    uVar11 = uVar11 - *pbVar13;
    iVar7 = iVar7 + 1;
  }
  local_10 = 1;
  *(int *)(param_1 + 0x48) = iVar7;
LAB_01129e28:
  *param_4 = iVar4 - param_3;
  return local_10;
}


