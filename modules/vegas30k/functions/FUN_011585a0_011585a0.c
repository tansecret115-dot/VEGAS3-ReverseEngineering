/* Module: vegas30k.dll
   Function: FUN_011585a0
   Address: 011585a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011585a0(undefined4 param_1,int param_2,byte *param_3,byte *param_4,undefined4 param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  switch(param_5) {
  case 0:
    break;
  case 1:
    uVar3 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
    param_3 = param_3 + uVar3;
    if (uVar3 < *(uint *)(param_2 + 4)) {
      pbVar12 = param_3 + -uVar3;
      iVar4 = *(uint *)(param_2 + 4) - uVar3;
      do {
        *param_3 = *param_3 + *pbVar12;
        param_3 = param_3 + 1;
        pbVar12 = pbVar12 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return;
    }
    break;
  case 2:
    uVar3 = *(uint *)(param_2 + 4);
    uVar5 = 0;
    if (uVar3 != 0) {
      do {
        *param_3 = *param_3 + param_4[uVar5];
        param_3 = param_3 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
      return;
    }
    break;
  case 3:
    iVar4 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
    iVar6 = *(int *)(param_2 + 4) - iVar4;
    pbVar12 = param_3;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      bVar7 = *param_4;
      param_4 = param_4 + 1;
      *pbVar12 = *pbVar12 + (bVar7 >> 1);
      pbVar12 = pbVar12 + 1;
    }
    if (iVar6 != 0) {
      do {
        bVar7 = *param_3;
        param_3 = param_3 + 1;
        *pbVar12 = *pbVar12 + (char)(((uint)bVar7 + (uint)*param_4) / 2);
        param_4 = param_4 + 1;
        pbVar12 = pbVar12 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return;
    }
    break;
  case 4:
    iVar4 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
    iVar6 = *(int *)(param_2 + 4) - iVar4;
    pbVar12 = param_3;
    pbVar11 = param_4;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pbVar12 = *pbVar12 + *pbVar11;
      pbVar11 = pbVar11 + 1;
      pbVar12 = pbVar12 + 1;
    }
    pbVar8 = param_3;
    pbVar9 = param_4;
    param_3 = pbVar12;
    param_4 = (byte *)iVar6;
    if (iVar6 != 0) {
      do {
        bVar7 = *pbVar8;
        bVar1 = *pbVar9;
        pbVar8 = pbVar8 + 1;
        bVar2 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        iVar4 = (uint)bVar2 - (uint)bVar1;
        pbVar9 = pbVar9 + 1;
        iVar6 = (uint)bVar7 - (uint)bVar1;
        param_2 = iVar4;
        if (iVar4 < 0) {
          param_2 = -iVar4;
        }
        iVar10 = iVar6;
        if (iVar6 < 0) {
          iVar10 = -iVar6;
        }
        iVar4 = iVar4 + iVar6;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (((iVar10 < param_2) || (iVar4 < param_2)) && (bVar7 = bVar1, iVar10 <= iVar4)) {
          bVar7 = bVar2;
        }
        *param_3 = *param_3 + bVar7;
        param_3 = param_3 + 1;
        param_4 = (byte *)((int)param_4 + -1);
      } while (param_4 != (byte *)0x0);
      return;
    }
    break;
  default:
    FUN_01155f80(param_1,"Bad adaptive filter type");
  }
  return;
}


