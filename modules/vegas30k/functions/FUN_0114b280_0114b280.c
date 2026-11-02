/* Module: vegas30k.dll
   Function: FUN_0114b280
   Address: 0114b280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0114b280(int param_1,byte *param_2,int param_3,uint *param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  
  piVar4 = *(int **)(param_1 + 0x14);
  iVar6 = *(int *)(param_1 + 0x18);
  if (piVar4 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar4;
  }
  if ((iVar6 < 0) || (iVar3 + -1 < iVar6)) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(piVar4[1] * iVar6 + piVar4[2]);
  }
  piVar2 = (int *)piVar4[2];
  bVar12 = *piVar4 != 10;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    pbVar5 = (byte *)((int)piVar2 + 0x217);
    if (bVar12) {
      pbVar5 = (byte *)((int)piVar2 + 0x1d3);
    }
    if (0x800 < *pbVar5) {
      pbVar10 = param_2;
      for (iVar6 = 0x200; iVar6 != 0; iVar6 = iVar6 + -1) {
        pbVar10[0] = 0;
        pbVar10[1] = 0;
        pbVar10[2] = 0;
        pbVar10[3] = 0;
        pbVar10 = pbVar10 + 4;
      }
      uVar9 = 0x800;
      param_2 = param_2 + 0x800;
      param_3 = param_3 + -0x800;
    }
    bVar1 = *pbVar5;
    pbVar10 = pbVar5;
    pbVar11 = param_2;
    for (uVar7 = (uint)(bVar1 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar7 = bVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar11 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar11 = pbVar11 + 1;
    }
    uVar7 = (uint)*pbVar5;
    uVar9 = uVar9 + uVar7;
    param_2 = param_2 + uVar7;
    param_3 = param_3 - uVar7;
    if (bVar12) {
      pbVar5 = (byte *)((int)piVar2 + 0x1f5);
    }
    else {
      pbVar5 = (byte *)((int)piVar2 + 0x239);
    }
    uVar7 = 0x800 - (uVar9 & 0x7ff);
    if (uVar7 < *pbVar5) {
      pbVar10 = param_2;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        pbVar10[0] = 0;
        pbVar10[1] = 0;
        pbVar10[2] = 0;
        pbVar10[3] = 0;
        pbVar10 = pbVar10 + 4;
      }
      uVar9 = uVar9 + uVar7;
      param_2 = param_2 + uVar7;
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar10 = 0;
        pbVar10 = pbVar10 + 1;
      }
      param_3 = param_3 - uVar7;
    }
    bVar1 = *pbVar5;
    pbVar10 = pbVar5;
    pbVar11 = param_2;
    for (uVar7 = (uint)(bVar1 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar7 = bVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar11 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar11 = pbVar11 + 1;
    }
    uVar7 = (uint)*pbVar5;
    uVar9 = uVar9 + uVar7;
    param_2 = param_2 + uVar7;
    param_3 = param_3 - uVar7;
  }
  iVar6 = *(int *)(param_1 + 0x38);
  while( true ) {
    piVar4 = *(int **)(*piVar2 + 0x214);
    if (piVar4 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar4;
    }
    if (iVar3 <= iVar6) {
      if ((uVar9 & 0x7ff) != 0) {
        uVar8 = 0x800 - (uVar9 & 0x7ff);
        for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          param_2[0] = 0;
          param_2[1] = 0;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2 = param_2 + 4;
        }
        uVar9 = uVar9 + uVar8;
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *param_2 = 0;
          param_2 = param_2 + 1;
        }
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      *param_4 = uVar9;
      return 0;
    }
    iVar3 = *(int *)(*(int *)(piVar4[2] + iVar6 * 4) + 0x34c);
    if (bVar12) {
      pbVar5 = (byte *)(iVar3 + 0xe6);
    }
    else {
      pbVar5 = (byte *)(iVar3 + 0x12d);
    }
    uVar7 = 0x800 - (uVar9 & 0x7ff);
    if (uVar7 < *pbVar5) {
      pbVar10 = param_2;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        pbVar10[0] = 0;
        pbVar10[1] = 0;
        pbVar10[2] = 0;
        pbVar10[3] = 0;
        pbVar10 = pbVar10 + 4;
      }
      uVar9 = uVar9 + uVar7;
      param_2 = param_2 + uVar7;
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar10 = 0;
        pbVar10 = pbVar10 + 1;
      }
      param_3 = param_3 - uVar7;
    }
    if (param_3 == 0) break;
    bVar1 = *pbVar5;
    pbVar10 = pbVar5;
    pbVar11 = param_2;
    for (uVar7 = (uint)(bVar1 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar7 = bVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar11 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar11 = pbVar11 + 1;
    }
    uVar7 = (uint)*pbVar5;
    uVar9 = uVar9 + uVar7;
    param_3 = param_3 - uVar7;
    param_2 = param_2 + uVar7;
    iVar6 = iVar6 + 1;
  }
  *(int *)(param_1 + 0x38) = iVar6;
  *param_4 = uVar9;
  return 1;
}


