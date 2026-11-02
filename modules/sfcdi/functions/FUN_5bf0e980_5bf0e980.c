/* Module: sfcdi.dll
   Function: FUN_5bf0e980
   Address: 5bf0e980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0e980(byte *param_1,undefined4 *param_2)

{
  bool bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  
  puVar3 = param_2;
  pbVar2 = param_1;
  iVar5 = *(int *)(param_1 + 4);
  pbVar2[0xc] = 0;
  pbVar2[0xd] = 0;
  pbVar2[0xe] = 0;
  pbVar2[0xf] = 0;
  bVar1 = false;
  if ((iVar5 == param_2[2]) && (*(int *)(param_1 + 8) == param_2[3])) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 4) = param_2[2];
    *(undefined4 *)(param_1 + 8) = param_2[3];
  }
  if ((1 < (uint)(param_2[2] - *(int *)(param_1 + 4))) ||
     (1 < (uint)(param_2[3] - *(int *)(param_1 + 8)))) {
    if (((param_2[3] == 0) || (param_2[3] == 1)) && (param_2[2] - *(int *)(param_1 + 4) == 1)) {
      pbVar2[0xc] = 1;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
    }
    else {
      if (iVar5 != 0) goto LAB_5bf0ea5d;
      bVar1 = true;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
  }
  if (iVar5 == 0) {
    if (bVar1) {
      pbVar2[0x20] = 0;
      pbVar2[0x21] = 0;
      pbVar2[0x22] = 0;
      pbVar2[0x23] = 0;
    }
    else if (*(int *)(param_1 + 0x20) == 0) {
      bVar1 = true;
      puVar7 = param_2;
      pbVar8 = param_1 + 0x24;
      for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pbVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        pbVar8 = pbVar8 + 4;
      }
      pbVar2[0x20] = 1;
      pbVar2[0x21] = 0;
      pbVar2[0x22] = 0;
      pbVar2[0x23] = 0;
    }
    else {
      if ((*(int *)(param_1 + 0x2c) == param_2[2]) && (*(int *)(param_1 + 0x30) == param_2[3])) {
        iVar5 = *(int *)(param_1 + 0x20) + 1;
        *(int *)(param_1 + 0x20) = iVar5;
        if (iVar5 == 3) {
          pbVar8 = param_1 + 0x24;
          puVar7 = param_2;
          for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *(undefined4 *)pbVar8;
            pbVar8 = pbVar8 + 4;
            puVar7 = puVar7 + 1;
          }
          pbVar2[0x20] = 0;
          pbVar2[0x21] = 0;
          pbVar2[0x22] = 0;
          pbVar2[0x23] = 0;
          goto LAB_5bf0ea5d;
        }
      }
      else {
        pbVar2[0x20] = 0;
        pbVar2[0x21] = 0;
        pbVar2[0x22] = 0;
        pbVar2[0x23] = 0;
      }
      bVar1 = true;
    }
  }
LAB_5bf0ea5d:
  pbVar2[0x10] = 0;
  pbVar2[0x11] = 0;
  pbVar2[0x12] = 0;
  pbVar2[0x13] = 0;
  if (!bVar1) {
    iVar5 = param_2[2];
    *(int *)(param_1 + 4) = iVar5;
    iVar6 = param_2[3];
    *(int *)(param_1 + 8) = iVar6;
    if ((*param_1 & 8) != 0) {
      if (iVar6 == 1) {
        if (*(int *)(param_1 + 0x14) != 0) {
          uVar4 = FUN_5bf2bbe0(*(int *)(param_1 + 0x18),iVar5 + -1);
          if (-1 < (int)uVar4) {
            FUN_5bf2b640((int *)&param_1,puVar3 + 7);
            iVar5 = FUN_5bf2bbb0(*(int *)(pbVar2 + 0x18),uVar4);
            param_1 = param_1 + -*(int *)(iVar5 + 0x14);
            *(byte **)(iVar5 + 0x18) = param_1;
          }
          pbVar2[0x14] = 0;
          pbVar2[0x15] = 0;
          pbVar2[0x16] = 0;
          pbVar2[0x17] = 0;
        }
        uVar4 = FUN_5bf2bbe0(*(int *)(pbVar2 + 0x18),*(int *)(pbVar2 + 4));
        if (-1 < (int)uVar4) {
          iVar5 = FUN_5bf2bbb0(*(int *)(pbVar2 + 0x18),uVar4);
          iVar6 = FUN_5bf2bbb0(*(int *)(pbVar2 + 0x18),*(int *)(pbVar2 + 4) - 1);
          FUN_5bf2b640((int *)&param_1,puVar3 + 7);
          pbVar8 = *(byte **)(iVar5 + 0x14);
          if (pbVar8 < param_1) {
            *(byte **)(iVar5 + 0x14) = param_1;
            if (iVar6 != iVar5) {
              *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) - ((int)param_1 - (int)pbVar8);
              pbVar2[0x14] = 1;
              pbVar2[0x15] = 0;
              pbVar2[0x16] = 0;
              pbVar2[0x17] = 0;
            }
          }
        }
      }
      if (((*(int *)(pbVar2 + 8) == 0) && (*(int *)(pbVar2 + 4) != 1)) &&
         (uVar4 = FUN_5bf2bbe0(*(int *)(pbVar2 + 0x18),*(int *)(pbVar2 + 4) + -1), -1 < (int)uVar4))
      {
        FUN_5bf2b640((int *)&param_1,puVar3 + 7);
        iVar5 = FUN_5bf2bbb0(*(int *)(pbVar2 + 0x18),uVar4);
        param_1 = param_1 + -*(int *)(iVar5 + 0x14);
        *(byte **)(iVar5 + 0x18) = param_1;
        pbVar2[0x14] = 0;
        pbVar2[0x15] = 0;
        pbVar2[0x16] = 0;
        pbVar2[0x17] = 0;
      }
    }
    if ((((*pbVar2 & 0x10) != 0) && (1 < *(uint *)(pbVar2 + 8))) &&
       (uVar4 = FUN_5bf2bbe0(*(int *)(pbVar2 + 0x18),*(int *)(pbVar2 + 4)), -1 < (int)uVar4)) {
      iVar5 = FUN_5bf2bbb0(*(int *)(pbVar2 + 0x18),uVar4);
      uVar4 = FUN_5bf2bb00(iVar5);
      if (uVar4 == 0) {
        FUN_5bf2bb30(iVar5,0,*(undefined4 *)(iVar5 + 0x14));
        uVar4 = 1;
      }
      FUN_5bf2b640((int *)&param_1,puVar3 + 7);
      FUN_5bf2bb30(iVar5,uVar4,param_1);
    }
  }
  return;
}


