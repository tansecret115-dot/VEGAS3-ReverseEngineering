/* Module: erv23260.dll
   Function: FUN_6380f490
   Address: 6380f490
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_6380f490(void *this,uint *param_1,int *param_2,uint param_3,int param_4,int param_5,
            byte *param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint local_8;
  
  bVar3 = *(byte *)((int)this + 0x1b8);
  local_8 = CONCAT31(local_8._1_3_,bVar3);
  iVar4 = *(int *)(param_5 + 0x10);
  if (param_4 == 0) {
    iVar5 = param_2[1];
    pbVar13 = (byte *)(*param_2 + (iVar5 + (param_3 & 2) * 4) * iVar4 + *(int *)(param_5 + 4) +
                      (param_3 & 1) * 8);
    param_5 = *param_2;
  }
  else {
    if (param_3 == 4) {
      iVar7 = *(int *)(param_5 + 8);
    }
    else {
      iVar7 = *(int *)(param_5 + 0xc);
    }
    iVar5 = param_2[1];
    param_5 = *param_2;
    pbVar13 = (byte *)((param_5 >> 1) + iVar7 + (iVar5 >> 1) * iVar4);
  }
  iVar7 = param_2[0x16];
  if (iVar7 == 0) {
    iVar7 = 8;
    do {
      iVar5 = 0;
      puVar12 = param_1;
      do {
        param_1 = puVar12 + 1;
        pbVar14 = pbVar13 + iVar5;
        iVar5 = iVar5 + 1;
        *puVar12 = (uint)*pbVar14;
        puVar12 = param_1;
      } while (iVar5 < 8);
      pbVar13 = pbVar13 + iVar4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    return;
  }
  if ((((iVar7 != 2) && (iVar7 != 4)) && (iVar7 != 6)) && ((iVar7 != 7 && (iVar7 != 10)))) {
    return;
  }
  uVar8 = param_2[param_3 * 2 + 2] & 1;
  iVar7 = param_2[param_3 * 2 + 2] >> 1;
  iVar9 = param_2[param_3 * 2 + 3] >> 1;
  uVar10 = param_2[param_3 * 2 + 3] & 1;
  if (param_4 == 0) {
    pbVar14 = (byte *)(iVar7 + (iVar9 + (param_3 & 2) * 4 + iVar5) * iVar4 + *(int *)(param_6 + 4) +
                       (param_3 & 1) * 8 + param_5);
  }
  else {
    if (param_3 == 4) {
      iVar11 = *(int *)(param_6 + 8);
    }
    else {
      iVar11 = *(int *)(param_6 + 0xc);
    }
    pbVar14 = (byte *)((param_5 >> 1) + iVar7 + ((iVar5 >> 1) + iVar9) * iVar4 + iVar11);
  }
  if (uVar8 == 0) {
    if (uVar10 == 0) {
      pbVar15 = pbVar14 + 3;
      pbVar6 = pbVar13 + 2;
      param_2 = (int *)0x8;
      puVar12 = param_1 + 2;
      do {
        puVar12[-2] = (uint)pbVar6[-2] - (uint)pbVar15[-3];
        puVar12[-1] = (uint)pbVar6[-1] - (uint)pbVar15[-2];
        *puVar12 = (uint)*pbVar6 - (uint)pbVar6[(int)pbVar14 - (int)pbVar13];
        puVar12[1] = (uint)pbVar6[1] - (uint)*pbVar15;
        puVar12[2] = (uint)pbVar6[2] - (uint)pbVar15[1];
        puVar12[3] = (uint)pbVar6[3] - (uint)pbVar15[2];
        puVar12[4] = (uint)pbVar6[4] - (uint)pbVar15[3];
        pbVar1 = pbVar15 + 4;
        pbVar15 = pbVar15 + iVar4;
        pbVar2 = pbVar6 + 5;
        pbVar6 = pbVar6 + iVar4;
        puVar12[5] = (uint)*pbVar2 - (uint)*pbVar1;
        param_2 = (int *)((int)param_2 + -1);
        puVar12 = puVar12 + 8;
      } while (param_2 != (int *)0x0);
      return;
    }
  }
  else {
    if (uVar10 == 0) {
      uVar8 = (uint)bVar3;
      pbVar15 = pbVar14 + 3;
      pbVar6 = pbVar13 + 2;
      param_3 = 8;
      puVar12 = param_1 + 2;
      do {
        puVar12[-2] = (uint)pbVar6[-2] -
                      ((int)((((uint)pbVar15[-3] + (uint)pbVar15[-2]) - uVar8) + 1) >> 1);
        puVar12[-1] = (uint)pbVar6[-1] -
                      ((int)((((uint)pbVar15[-2] + (uint)pbVar6[(int)pbVar14 - (int)pbVar13]) -
                             uVar8) + 1) >> 1);
        *puVar12 = (uint)*pbVar6 -
                   ((int)((((uint)pbVar6[(int)pbVar14 - (int)pbVar13] + (uint)*pbVar15) - uVar8) + 1
                         ) >> 1);
        puVar12[1] = (uint)pbVar6[1] -
                     ((int)((((uint)pbVar15[1] + (uint)*pbVar15) - uVar8) + 1) >> 1);
        puVar12[2] = (uint)pbVar6[2] -
                     ((int)((((uint)pbVar15[1] + (uint)pbVar15[2]) - uVar8) + 1) >> 1);
        puVar12[3] = (uint)pbVar6[3] -
                     ((int)((((uint)pbVar15[3] + (uint)pbVar15[2]) - uVar8) + 1) >> 1);
        puVar12[4] = (uint)pbVar6[4] -
                     ((int)((((uint)pbVar15[3] + (uint)pbVar15[4]) - uVar8) + 1) >> 1);
        pbVar1 = pbVar15 + 5;
        pbVar2 = pbVar15 + 4;
        pbVar15 = pbVar15 + iVar4;
        puVar12[5] = (uint)pbVar6[5] - ((int)((((uint)*pbVar1 + (uint)*pbVar2) - uVar8) + 1) >> 1);
        pbVar6 = pbVar6 + iVar4;
        param_3 = param_3 - 1;
        puVar12 = puVar12 + 8;
      } while (param_3 != 0);
      return;
    }
    if (uVar8 != 0) goto LAB_6380f967;
  }
  if (uVar10 != 0) {
    pbVar15 = pbVar13 + 3;
    uVar8 = (uint)bVar3;
    param_6 = pbVar14 + iVar4 + 3;
    pbVar6 = pbVar14 + 1;
    param_3 = 8;
    puVar12 = param_1 + 2;
    do {
      puVar12[-2] = (uint)pbVar15[-3] -
                    ((int)((((uint)pbVar6[iVar4 + -1] + (uint)pbVar6[-1]) - uVar8) + 1) >> 1);
      puVar12[-1] = (uint)pbVar6[(int)pbVar13 - (int)pbVar14] -
                    ((int)((((uint)pbVar6[iVar4] + (uint)*pbVar6) - uVar8) + 1) >> 1);
      *puVar12 = (uint)pbVar15[-1] -
                 ((int)((((uint)pbVar6[1] + (uint)param_6[-1]) - uVar8) + 1) >> 1);
      puVar12[1] = (uint)*pbVar15 - ((int)((((uint)pbVar6[2] + (uint)*param_6) - uVar8) + 1) >> 1);
      puVar12[2] = (uint)pbVar15[1] -
                   ((int)((((uint)pbVar6[3] + (uint)param_6[1]) - uVar8) + 1) >> 1);
      puVar12[3] = (uint)pbVar15[2] -
                   ((int)((((uint)pbVar6[4] + (uint)param_6[2]) - uVar8) + 1) >> 1);
      puVar12[4] = (uint)pbVar15[3] -
                   ((int)((((uint)pbVar6[5] + (uint)param_6[3]) - uVar8) + 1) >> 1);
      pbVar1 = pbVar6 + 6;
      pbVar6 = pbVar6 + iVar4;
      pbVar2 = pbVar15 + 4;
      pbVar15 = pbVar15 + iVar4;
      puVar12[5] = (uint)*pbVar2 - ((int)((((uint)*pbVar1 + (uint)param_6[4]) - uVar8) + 1) >> 1);
      param_6 = param_6 + iVar4;
      param_3 = param_3 - 1;
      puVar12 = puVar12 + 8;
    } while (param_3 != 0);
    return;
  }
LAB_6380f967:
  FUN_63810690((int *)param_1,pbVar13,pbVar14,iVar4,local_8);
  return;
}


