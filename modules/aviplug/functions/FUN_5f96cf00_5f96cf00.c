/* Module: aviplug.dll
   Function: FUN_5f96cf00
   Address: 5f96cf00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96cf00(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar2 = *param_1 * DAT_5f9f4a70;
  iVar4 = param_1[0x20] * DAT_5f9f4a70;
  param_1[0x20] = iVar2 - iVar4;
  *param_1 = iVar4 + iVar2;
  iVar2 = param_1[0x20];
  iVar4 = param_1[0x28];
  iVar10 = param_1[0x10] * DAT_5f9f4a78 - param_1[0x30] * DAT_5f9f4a74;
  iVar3 = param_1[0x38];
  param_1[0x10] = param_1[0x30] * DAT_5f9f4a78 + param_1[0x10] * DAT_5f9f4a74;
  iVar7 = param_1[0x18];
  iVar8 = param_1[8];
  iVar6 = iVar7 * DAT_5f9f4a8c;
  iVar5 = iVar8 * DAT_5f9f4a80 + iVar7 * DAT_5f9f4a84 + iVar4 * DAT_5f9f4a88 + iVar3 * DAT_5f9f4a8c;
  param_1[0x30] = iVar10;
  param_1[0x20] = *param_1 - param_1[0x10];
  *param_1 = param_1[0x10] + *param_1;
  iVar9 = ((iVar8 * DAT_5f9f4a84 - iVar6) - iVar3 * DAT_5f9f4a88) - iVar4 * DAT_5f9f4a80;
  param_1[0x30] = iVar10 + iVar2;
  iVar6 = iVar7 * DAT_5f9f4a80;
  param_1[0x10] = iVar2 - iVar10;
  iVar6 = (iVar8 * DAT_5f9f4a88 - iVar6) + iVar4 * DAT_5f9f4a8c + iVar3 * DAT_5f9f4a84;
  iVar4 = ((iVar8 * DAT_5f9f4a8c - iVar7 * DAT_5f9f4a88) - iVar3 * DAT_5f9f4a80) +
          iVar4 * DAT_5f9f4a84;
  param_1[0x38] = *param_1 - iVar5;
  iVar7 = param_1[0x30] + iVar9;
  param_1[8] = iVar7;
  param_1[0x28] = param_1[0x10] - iVar6;
  iVar2 = DAT_5f9f4a6c;
  iVar3 = iVar4 + param_1[0x20];
  iVar8 = *param_1 + DAT_5f9f4a6c;
  param_1[0x18] = iVar3;
  bVar1 = (byte)DAT_5f9f4a68;
  param_1[8] = iVar7 + iVar2 >> (bVar1 & 0x1f);
  *param_1 = iVar8 + iVar5 >> (bVar1 & 0x1f);
  param_1[0x10] = param_1[0x10] + iVar2 + iVar6 >> (bVar1 & 0x1f);
  param_1[0x18] = iVar3 + iVar2 >> (bVar1 & 0x1f);
  param_1[0x20] = (param_1[0x20] - iVar4) + iVar2 >> (bVar1 & 0x1f);
  param_1[0x28] = param_1[0x28] + iVar2 >> (bVar1 & 0x1f);
  param_1[0x30] = (param_1[0x30] - iVar9) + iVar2 >> (bVar1 & 0x1f);
  param_1[0x38] = param_1[0x38] + iVar2 >> (bVar1 & 0x1f);
  return;
}


