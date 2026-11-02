/* Module: erv13260.dll
   Function: FUN_635f8380
   Address: 635f8380
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_635f8380(int param_1,int *param_2,uint param_3,int *param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_14;
  int local_10;
  
  iVar3 = *(int *)(param_8 + 8);
  if (*(int *)(param_8 + 0x1ce8) == 0) {
    iVar8 = *(int *)(param_8 + 0x23cb) / 2;
  }
  else {
    iVar8 = *(int *)(param_8 + 0x23cb) / 2 +
            (-(uint)(*(int *)(param_8 + 0x1cec) != 0) & 0x10) + 0x10;
  }
  uVar9 = param_3 & 1;
  uVar10 = (uint)param_4 & 1;
  iVar6 = param_1 >> 1;
  iVar5 = (int)param_2 >> 1;
  iVar4 = (int)param_3 >> 1;
  iVar14 = (int)param_4 >> 1;
  if (uVar9 == 0) {
    if (uVar10 == 0) {
      param_4 = (int *)0x8;
      piVar11 = (int *)(param_7 + 0x500);
      iVar12 = iVar5 * iVar3 + iVar6;
      iVar6 = (iVar5 + iVar14) * iVar8 + iVar4 + iVar6;
      do {
        param_1 = 8;
        iVar4 = iVar6;
        piVar7 = piVar11;
        do {
          iVar5 = (iVar12 - iVar6) + iVar4;
          piVar11 = piVar7 + 1;
          piVar7[-0x40] =
               (uint)*(byte *)(iVar5 + *(int *)(param_5 + 4)) -
               (uint)*(byte *)(*(int *)(param_6 + 4) + iVar4);
          pbVar1 = (byte *)(*(int *)(param_6 + 8) + iVar4);
          iVar4 = iVar4 + 1;
          *piVar7 = (uint)*(byte *)(iVar5 + *(int *)(param_5 + 8)) - (uint)*pbVar1;
          param_1 = param_1 + -1;
          piVar7 = piVar11;
        } while (param_1 != 0);
        iVar6 = iVar6 + iVar8;
        iVar12 = iVar12 + iVar3;
        param_4 = (int *)((int)param_4 + -1);
      } while (param_4 != (int *)0x0);
      return;
    }
    if (uVar10 != 0) {
      param_1 = iVar5 * iVar3;
      param_2 = (int *)((iVar14 + iVar5) * iVar8);
      param_4 = (int *)(param_7 + 0x500);
      local_10 = 8;
      param_3 = (iVar14 + uVar10 + iVar5) * iVar8;
      do {
        param_7 = 0;
        iVar5 = iVar4 + iVar6;
        do {
          param_4[-0x40] =
               (uint)*(byte *)(param_7 + iVar6 + param_1 + *(int *)(param_5 + 4)) -
               ((int)(*(byte *)((int)param_2 + *(int *)(param_6 + 4) + iVar5) + 1 +
                     (uint)*(byte *)(param_3 + iVar5 + *(int *)(param_6 + 4))) >> 1);
          iVar14 = param_7 + iVar6;
          param_7 = param_7 + 1;
          *param_4 = (uint)*(byte *)(iVar14 + param_1 + *(int *)(param_5 + 8)) -
                     ((int)(*(byte *)(param_3 + iVar5 + *(int *)(param_6 + 8)) + 1 +
                           (uint)*(byte *)((int)param_2 + *(int *)(param_6 + 8) + iVar5)) >> 1);
          param_4 = param_4 + 1;
          iVar5 = iVar5 + 1;
        } while (param_7 < 8);
        param_1 = param_1 + iVar3;
        param_2 = (int *)((int)param_2 + iVar8);
        param_3 = param_3 + iVar8;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      return;
    }
  }
  else if (uVar10 == 0) {
    param_2 = (int *)(iVar5 * iVar3);
    iVar5 = (iVar14 + iVar5) * iVar8;
    param_4 = (int *)(param_7 + 0x500);
    local_10 = 8;
    do {
      param_7 = 0;
      iVar14 = iVar4 + iVar6;
      do {
        iVar12 = iVar5 + *(int *)(param_6 + 4);
        param_4[-0x40] =
             (uint)*(byte *)((int)param_2 + *(int *)(param_5 + 4) + param_7 + iVar6) -
             ((int)(*(byte *)(uVar9 + iVar14 + iVar12) + 1 + (uint)*(byte *)(iVar14 + iVar12)) >> 1)
        ;
        iVar13 = iVar5 + *(int *)(param_6 + 8);
        iVar12 = param_7 + iVar6;
        param_7 = param_7 + 1;
        *param_4 = (uint)*(byte *)((int)param_2 + *(int *)(param_5 + 8) + iVar12) -
                   ((int)(*(byte *)(uVar9 + iVar14 + iVar13) + 1 + (uint)*(byte *)(iVar14 + iVar13))
                   >> 1);
        param_4 = param_4 + 1;
        iVar14 = iVar14 + 1;
      } while (param_7 < 8);
      param_2 = (int *)((int)param_2 + iVar3);
      iVar5 = iVar5 + iVar8;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    return;
  }
  param_2 = (int *)(param_7 + 0x500);
  local_14 = 8;
  iVar12 = iVar5 * iVar3 + iVar6;
  iVar6 = (iVar5 + iVar14) * iVar8 + iVar4 + iVar6;
  do {
    iVar5 = uVar10 * iVar8 + iVar6;
    param_4 = (int *)0x8;
    iVar4 = iVar6;
    do {
      iVar13 = (iVar12 - iVar6) + iVar4;
      iVar14 = *(int *)(param_6 + 4);
      param_2[-0x40] =
           (uint)*(byte *)(iVar13 + *(int *)(param_5 + 4)) -
           ((int)((uint)*(byte *)(iVar4 + uVar9 + iVar14) + (uint)*(byte *)(iVar4 + iVar14) +
                  (uint)*(byte *)(iVar5 + uVar9 + iVar14) + 2 + (uint)*(byte *)(iVar5 + iVar14)) >>
           2);
      iVar14 = *(int *)(param_6 + 8);
      pbVar1 = (byte *)(iVar5 + iVar14);
      pbVar2 = (byte *)(iVar5 + uVar9 + iVar14);
      iVar5 = iVar5 + 1;
      *param_2 = (uint)*(byte *)(iVar13 + *(int *)(param_5 + 8)) -
                 ((int)((uint)*(byte *)(iVar4 + iVar14) + (uint)*(byte *)(iVar4 + uVar9 + iVar14) +
                        (uint)*pbVar1 + 2 + (uint)*pbVar2) >> 2);
      param_2 = param_2 + 1;
      iVar4 = iVar4 + 1;
      param_4 = (int *)((int)param_4 + -1);
    } while (param_4 != (int *)0x0);
    iVar6 = iVar6 + iVar8;
    iVar12 = iVar12 + iVar3;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  return;
}


