/* Module: aviplug.dll
   Function: FUN_5f96c5b0
   Address: 5f96c5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96c5b0(int *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
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
  
  iVar12 = param_2[0x10];
  iVar5 = param_2[0x20];
  iVar8 = param_2[0x30];
  iVar7 = *param_2;
  iVar14 = param_2[8];
  iVar10 = param_2[0x38];
  iVar1 = param_2[0x28];
  iVar9 = param_2[0x18];
  iVar6 = (iVar14 + iVar10) * DAT_5f9f4a70;
  iVar13 = (iVar1 + iVar9) * DAT_5f9f4a70;
  iVar11 = (iVar12 + iVar5) * DAT_5f9f4a70;
  iVar3 = (iVar7 + iVar8) * DAT_5f9f4a70;
  *param_1 = iVar13 + iVar6 + iVar11 + iVar3;
  param_1[0x20] = ((iVar11 - iVar13) - iVar6) + iVar3;
  iVar4 = DAT_5f9f4a74;
  iVar14 = iVar14 - iVar10;
  iVar7 = iVar7 - iVar8;
  param_1[0x30] = (iVar3 - iVar11) - (iVar6 - iVar13);
  iVar8 = iVar14 * iVar4;
  iVar4 = iVar7 * iVar4;
  param_1[0x10] = (iVar6 - iVar13) + (iVar3 - iVar11);
  iVar9 = iVar9 - iVar1;
  iVar12 = iVar12 - iVar5;
  iVar10 = iVar9 * DAT_5f9f4a78;
  iVar5 = iVar12 * DAT_5f9f4a78;
  param_1[8] = iVar8 + iVar10 + iVar5 + iVar4;
  param_1[0x28] = ((iVar5 - iVar10) - iVar8) + iVar4;
  iVar5 = DAT_5f9f4a60;
  iVar7 = iVar7 * DAT_5f9f4a78;
  iVar14 = iVar14 * DAT_5f9f4a78;
  iVar9 = iVar9 * DAT_5f9f4a74;
  iVar12 = iVar12 * DAT_5f9f4a74;
  bVar2 = (byte)DAT_5f9f4a5c;
  *param_1 = *param_1 + DAT_5f9f4a60 >> (bVar2 & 0x1f);
  param_1[8] = iVar5 + param_1[8] >> (bVar2 & 0x1f);
  param_1[0x10] = param_1[0x10] + iVar5 >> (bVar2 & 0x1f);
  param_1[0x18] = ((iVar5 - iVar9) - iVar12) + iVar14 + iVar7 >> (bVar2 & 0x1f);
  param_1[0x20] = param_1[0x20] + iVar5 >> (bVar2 & 0x1f);
  param_1[0x28] = param_1[0x28] + iVar5 >> (bVar2 & 0x1f);
  param_1[0x30] = param_1[0x30] + iVar5 >> (bVar2 & 0x1f);
  param_1[0x38] = ((iVar5 - iVar14) - iVar12) + iVar9 + iVar7 >> (bVar2 & 0x1f);
  return;
}


