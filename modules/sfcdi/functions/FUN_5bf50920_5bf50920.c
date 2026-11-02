/* Module: sfcdi.dll
   Function: FUN_5bf50920
   Address: 5bf50920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf50920(int param_1,undefined4 *param_2,int param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  undefined4 *_Dst;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  undefined4 *local_14;
  undefined4 local_10;
  
  iVar3 = param_3;
  local_10 = 0;
  piVar9 = *(int **)(param_1 + 0x1c);
  iVar5 = *(int *)(param_1 + 0x20);
  uVar11 = 0x800;
  if (piVar9 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar9;
  }
  if ((iVar5 < 0) || (iVar4 + -1 < iVar5)) {
    iVar5 = 0;
  }
  else {
    iVar5 = piVar9[1] * iVar5 + piVar9[2];
  }
  iVar4 = *(int *)(iVar5 + 0x14);
  iVar6 = *(int *)(iVar4 + 0x34c);
  local_14 = param_2;
  memmove(param_2,(void *)(iVar5 + 0xc),8);
  pbVar10 = (byte *)(param_2 + 2);
  if (*(int *)(param_1 + 0x48) == 0) {
    pbVar12 = (byte *)(iVar6 + 0xab);
    bVar1 = *pbVar12;
    pbVar13 = pbVar12;
    pbVar15 = pbVar10;
    for (uVar11 = (uint)(bVar1 >> 2); uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pbVar15 = *(undefined4 *)pbVar13;
      pbVar13 = pbVar13 + 4;
      pbVar15 = pbVar15 + 4;
    }
    for (uVar11 = bVar1 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pbVar15 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      pbVar15 = pbVar15 + 1;
    }
    bVar1 = *pbVar12;
    pbVar12 = (byte *)(iVar6 + 0x100);
    bVar2 = *pbVar12;
    pbVar13 = pbVar12;
    pbVar15 = pbVar10 + bVar1;
    for (uVar11 = (uint)(bVar2 >> 2); uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pbVar15 = *(undefined4 *)pbVar13;
      pbVar13 = pbVar13 + 4;
      pbVar15 = pbVar15 + 4;
    }
    for (uVar11 = bVar2 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pbVar15 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      pbVar15 = pbVar15 + 1;
    }
    pbVar10 = pbVar10 + bVar1 + *pbVar12;
    uVar11 = (0x800 - (uint)bVar1) - (uint)*pbVar12;
  }
  iVar6 = *(int *)(param_1 + 0x48);
  while( true ) {
    piVar9 = *(int **)(iVar4 + 0x214);
    if (piVar9 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar9;
    }
    if (iVar7 <= iVar6) {
      if (uVar11 != 0) {
        for (uVar8 = uVar11 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
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
      param_3 = param_3 + -0x91c;
      iVar5 = *(int *)(param_1 + 0x20) + 1;
      piVar9 = *(int **)(param_1 + 0x1c);
      if (piVar9 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar9;
      }
      if ((iVar5 < 0) || (iVar4 + -1 < iVar5)) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)(piVar9[1] * iVar5 + piVar9[2]);
      }
      if (*piVar9 != 10) {
        *(undefined1 *)((int)local_14 + 6) = 0x89;
        *(undefined1 *)((int)local_14 + 2) = 0x89;
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
      goto LAB_5bf50b56;
    }
    if (param_3 == 0) break;
    if (piVar9 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar9;
    }
    if ((iVar6 < 0) || (iVar7 + -1 < iVar6)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(piVar9[2] + iVar6 * 4);
    }
    pbVar12 = (byte *)(*(int *)(iVar7 + 0x34c) + 0x56);
    _Dst = param_2;
    if (uVar11 < *(byte *)(*(int *)(iVar7 + 0x34c) + 0x56)) {
      puVar14 = param_2;
      for (uVar8 = uVar11 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      _Dst = param_2 + 0x247;
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined1 *)puVar14 = 0;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      param_3 = param_3 + -0x91c;
      if (param_3 == 0) break;
      memmove(_Dst,(void *)(iVar5 + 0xc),8);
      pbVar10 = (byte *)(param_2 + 0x249);
      uVar11 = 0x800;
      local_14 = _Dst;
    }
    bVar1 = *pbVar12;
    pbVar13 = pbVar12;
    pbVar15 = pbVar10;
    for (uVar8 = (uint)(bVar1 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar15 = *(undefined4 *)pbVar13;
      pbVar13 = pbVar13 + 4;
      pbVar15 = pbVar15 + 4;
    }
    for (uVar8 = bVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar15 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      pbVar15 = pbVar15 + 1;
    }
    pbVar10 = pbVar10 + *pbVar12;
    uVar11 = uVar11 - *pbVar12;
    iVar6 = iVar6 + 1;
    param_2 = _Dst;
  }
  *(int *)(param_1 + 0x48) = iVar6;
  local_10 = 1;
LAB_5bf50b56:
  *param_4 = iVar3 - param_3;
  return local_10;
}


