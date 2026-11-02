/* Module: erv13260.dll
   Function: FUN_635f9e40
   Address: 635f9e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_635f9e40(int param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6,int param_7)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int local_8;
  
  if (*(int *)(param_7 + 0x1ce8) == 0) {
    iVar2 = *(int *)(param_7 + 0x23cb) / 2;
  }
  else {
    iVar2 = *(int *)(param_7 + 0x23cb) / 2 +
            (-(uint)(*(int *)(param_7 + 0x1cec) != 0) & 0x10) + 0x10;
  }
  uVar9 = param_3 & 1;
  iVar4 = param_1 >> 1;
  iVar10 = param_2 >> 1;
  iVar7 = (int)param_3 >> 1;
  iVar8 = (int)param_4 >> 1;
  uVar3 = param_4 & 1;
  if (uVar9 == 0) {
    if (uVar3 == 0) {
      param_2 = 8;
      iVar8 = (iVar8 + iVar10) * iVar2;
      piVar5 = (int *)(param_6 + 0x500);
      do {
        param_6 = 8;
        piVar6 = piVar5;
        iVar10 = iVar7 + iVar4;
        do {
          piVar5 = piVar6 + 1;
          piVar6[-0x40] = piVar6[-0x40] + (uint)*(byte *)(iVar8 + iVar10 + *(int *)(param_5 + 4));
          pbVar1 = (byte *)(*(int *)(param_5 + 8) + iVar8 + iVar10);
          iVar10 = iVar10 + 1;
          *piVar6 = *piVar6 + (uint)*pbVar1;
          param_6 = param_6 + -1;
          piVar6 = piVar5;
        } while (param_6 != 0);
        iVar8 = iVar8 + iVar2;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return;
    }
    if (uVar3 != 0) {
      param_2 = (iVar8 + iVar10) * iVar2;
      piVar5 = (int *)(param_6 + 0x500);
      param_4 = 8;
      param_6 = (uVar3 + iVar8 + iVar10) * iVar2;
      do {
        param_3 = 8;
        piVar6 = piVar5;
        iVar8 = iVar7 + iVar4;
        do {
          piVar5 = piVar6 + 1;
          piVar6[-0x40] =
               piVar6[-0x40] +
               ((int)(*(byte *)(param_2 + iVar8 + *(int *)(param_5 + 4)) + 1 +
                     (uint)*(byte *)(param_6 + iVar8 + *(int *)(param_5 + 4))) >> 1);
          *piVar6 = *piVar6 + ((int)(*(byte *)(param_6 + iVar8 + *(int *)(param_5 + 8)) + 1 +
                                    (uint)*(byte *)(param_2 + iVar8 + *(int *)(param_5 + 8))) >> 1);
          iVar8 = iVar8 + 1;
          param_3 = param_3 - 1;
          piVar6 = piVar5;
        } while (param_3 != 0);
        param_2 = param_2 + iVar2;
        param_6 = param_6 + iVar2;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
      return;
    }
  }
  else if (uVar3 == 0) {
    iVar8 = (iVar10 + iVar8) * iVar2;
    piVar5 = (int *)(param_6 + 0x500);
    param_3 = 8;
    do {
      param_6 = 8;
      piVar6 = piVar5;
      iVar10 = iVar7 + iVar4;
      do {
        piVar5 = piVar6 + 1;
        iVar11 = iVar8 + *(int *)(param_5 + 4);
        piVar6[-0x40] =
             piVar6[-0x40] +
             ((int)(*(byte *)(uVar9 + iVar10 + iVar11) + 1 + (uint)*(byte *)(iVar10 + iVar11)) >> 1)
        ;
        iVar11 = iVar8 + *(int *)(param_5 + 8);
        *piVar6 = *piVar6 + ((int)(*(byte *)(uVar9 + iVar10 + iVar11) + 1 +
                                  (uint)*(byte *)(iVar10 + iVar11)) >> 1);
        iVar10 = iVar10 + 1;
        param_6 = param_6 + -1;
        piVar6 = piVar5;
      } while (param_6 != 0);
      iVar8 = iVar8 + iVar2;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    return;
  }
  param_3 = (iVar8 + iVar10) * iVar2;
  piVar5 = (int *)(param_6 + 0x500);
  local_8 = 8;
  param_6 = (uVar3 + iVar8 + iVar10) * iVar2;
  param_4 = 8;
  iVar8 = iVar7 + iVar4;
  while( true ) {
    do {
      piVar6 = piVar5 + 1;
      iVar10 = param_3 + *(int *)(param_5 + 4);
      iVar11 = param_6 + *(int *)(param_5 + 4);
      piVar5[-0x40] =
           piVar5[-0x40] +
           ((int)((uint)*(byte *)(uVar9 + iVar8 + iVar11) + (uint)*(byte *)(uVar9 + iVar8 + iVar10)
                  + (uint)*(byte *)(iVar8 + iVar11) + 2 + (uint)*(byte *)(iVar8 + iVar10)) >> 2);
      iVar10 = param_6 + *(int *)(param_5 + 8);
      iVar11 = param_3 + *(int *)(param_5 + 8);
      *piVar5 = *piVar5 + ((int)((uint)*(byte *)(uVar9 + iVar8 + iVar10) +
                                 (uint)*(byte *)(uVar9 + iVar8 + iVar11) +
                                 (uint)*(byte *)(iVar8 + iVar10) + 2 +
                                (uint)*(byte *)(iVar8 + iVar11)) >> 2);
      iVar8 = iVar8 + 1;
      param_4 = param_4 - 1;
      piVar5 = piVar6;
    } while (param_4 != 0);
    param_3 = param_3 + iVar2;
    param_6 = param_6 + iVar2;
    local_8 = local_8 + -1;
    if (local_8 == 0) break;
    param_4 = 8;
    iVar8 = iVar7 + iVar4;
  }
  return;
}


