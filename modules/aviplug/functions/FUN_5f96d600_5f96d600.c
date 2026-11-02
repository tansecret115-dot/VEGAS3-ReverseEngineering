/* Module: aviplug.dll
   Function: FUN_5f96d600
   Address: 5f96d600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96d600(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar1 = DAT_5f9f4a78;
  iVar5 = *param_1 * DAT_5f9f4a70;
  iVar10 = param_1[0x20] * DAT_5f9f4a70;
  param_1[0x20] = iVar5 - iVar10;
  *param_1 = iVar10 + iVar5;
  iVar11 = param_1[0x30] * iVar1 + param_1[0x10] * DAT_5f9f4a74;
  iVar5 = param_1[0x20];
  iVar10 = param_1[0x18];
  iVar15 = param_1[0x10] * iVar1 - param_1[0x30] * DAT_5f9f4a74;
  iVar1 = *param_1;
  param_1[0x30] = iVar15;
  iVar6 = iVar1 + iVar11;
  param_1[0x10] = iVar11;
  *param_1 = iVar6;
  iVar2 = param_1[8];
  iVar12 = iVar10 * DAT_5f9f4a84;
  iVar7 = iVar2 * DAT_5f9f4a80;
  iVar3 = param_1[0x28];
  iVar13 = iVar3 * DAT_5f9f4a88;
  param_1[0x20] = iVar1 - iVar11;
  iVar1 = param_1[0x38];
  iVar14 = iVar2 * DAT_5f9f4a88;
  iVar11 = iVar10 * DAT_5f9f4a80;
  iVar8 = iVar3 * DAT_5f9f4a8c;
  iVar9 = iVar1 * DAT_5f9f4a84;
  *param_1 = iVar1 * DAT_5f9f4a8c + iVar13 + iVar6 + iVar7 + iVar12 + DAT_5f9f4a6c >>
             ((byte)DAT_5f9f4a68 & 0x1f);
  param_1[0x10] =
       (((iVar14 - iVar11) + iVar8 + iVar9) - iVar15) + DAT_5f9f4a6c + iVar5 >>
       ((byte)DAT_5f9f4a68 & 0x1f);
  iVar11 = iVar10 * DAT_5f9f4a8c;
  iVar7 = iVar1 * DAT_5f9f4a88;
  iVar6 = iVar3 * DAT_5f9f4a80;
  bVar4 = (byte)DAT_5f9f4a68;
  param_1[0x20] =
       ((iVar10 * DAT_5f9f4a88 - iVar2 * DAT_5f9f4a8c) - iVar3 * DAT_5f9f4a84) +
       iVar1 * DAT_5f9f4a80 + param_1[0x20] + DAT_5f9f4a6c >> (bVar4 & 0x1f);
  param_1[0x30] =
       iVar6 + iVar7 + DAT_5f9f4a6c + (iVar11 - iVar2 * DAT_5f9f4a84) + iVar15 + iVar5 >>
       (bVar4 & 0x1f);
  return;
}


