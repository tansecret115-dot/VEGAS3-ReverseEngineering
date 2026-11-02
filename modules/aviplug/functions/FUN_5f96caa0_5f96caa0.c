/* Module: aviplug.dll
   Function: FUN_5f96caa0
   Address: 5f96caa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96caa0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar6 = *param_1 * DAT_5f9f4a70;
  iVar7 = param_1[4] * DAT_5f9f4a70;
  param_1[4] = iVar6 - iVar7;
  *param_1 = iVar7 + iVar6;
  iVar6 = param_1[4];
  iVar7 = param_1[5];
  iVar11 = param_1[2] * DAT_5f9f4a78 - param_1[6] * DAT_5f9f4a74;
  iVar1 = param_1[7];
  param_1[2] = param_1[6] * DAT_5f9f4a78 + param_1[2] * DAT_5f9f4a74;
  iVar2 = param_1[3];
  iVar3 = param_1[1];
  iVar9 = iVar2 * DAT_5f9f4a8c;
  iVar8 = iVar3 * DAT_5f9f4a80 + iVar2 * DAT_5f9f4a84 + iVar7 * DAT_5f9f4a88 + iVar1 * DAT_5f9f4a8c;
  param_1[6] = iVar11;
  param_1[4] = *param_1 - param_1[2];
  *param_1 = param_1[2] + *param_1;
  iVar10 = ((iVar3 * DAT_5f9f4a84 - iVar9) - iVar1 * DAT_5f9f4a88) - iVar7 * DAT_5f9f4a80;
  iVar9 = iVar6 - iVar11;
  param_1[6] = iVar11 + iVar6;
  iVar6 = iVar2 * DAT_5f9f4a80;
  param_1[2] = iVar9;
  iVar11 = (iVar3 * DAT_5f9f4a88 - iVar6) + iVar7 * DAT_5f9f4a8c + iVar1 * DAT_5f9f4a84;
  iVar7 = ((iVar3 * DAT_5f9f4a8c - iVar2 * DAT_5f9f4a88) - iVar1 * DAT_5f9f4a80) +
          iVar7 * DAT_5f9f4a84;
  param_1[5] = iVar9 - iVar11;
  uVar4 = DAT_5f9f4a64;
  param_1[7] = *param_1 - iVar8;
  iVar6 = param_1[4];
  bVar5 = (byte)uVar4;
  *param_1 = iVar8 + *param_1 >> (bVar5 & 0x1f);
  param_1[1] = param_1[6] + iVar10 >> (bVar5 & 0x1f);
  param_1[6] = param_1[6] - iVar10 >> (bVar5 & 0x1f);
  param_1[2] = param_1[2] + iVar11 >> (bVar5 & 0x1f);
  param_1[4] = iVar6 - iVar7 >> (bVar5 & 0x1f);
  param_1[3] = iVar7 + iVar6 >> (bVar5 & 0x1f);
  param_1[5] = param_1[5] >> (bVar5 & 0x1f);
  param_1[7] = param_1[7] >> (bVar5 & 0x1f);
  return;
}


