/* Module: aviplug.dll
   Function: FUN_5f96c390
   Address: 5f96c390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96c390(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = param_2[0x18];
  iVar1 = param_2[0x20];
  iVar11 = *param_2;
  iVar2 = param_2[0x38];
  iVar8 = param_2[0x30];
  iVar9 = param_2[0x28];
  iVar6 = param_2[0x10];
  iVar5 = param_2[8];
  iVar4 = (iVar11 + iVar10 + iVar1 + iVar2) * DAT_5f9f4a70;
  iVar7 = (iVar6 + iVar5 + iVar9 + iVar8) * DAT_5f9f4a70;
  param_1[0x20] = iVar4 - iVar7;
  *param_1 = iVar7 + iVar4;
  iVar4 = ((iVar11 - iVar10) - iVar1) + iVar2;
  iVar7 = ((iVar5 - iVar6) - iVar9) + iVar8;
  param_1[0x10] = DAT_5f9f4a78 * iVar7 + DAT_5f9f4a74 * iVar4;
  iVar11 = iVar11 - iVar2;
  param_1[0x30] = DAT_5f9f4a78 * iVar4 - DAT_5f9f4a74 * iVar7;
  iVar2 = DAT_5f9f4a60;
  iVar5 = iVar5 - iVar8;
  iVar10 = iVar10 - iVar1;
  iVar6 = iVar6 - iVar9;
  bVar3 = (byte)DAT_5f9f4a5c;
  *param_1 = *param_1 + DAT_5f9f4a60 >> (bVar3 & 0x1f);
  iVar1 = DAT_5f9f4a80;
  param_1[8] = DAT_5f9f4a80 * iVar11 +
               DAT_5f9f4a84 * iVar5 + iVar2 + DAT_5f9f4a8c * iVar10 + DAT_5f9f4a88 * iVar6 >>
               (bVar3 & 0x1f);
  iVar8 = DAT_5f9f4a84;
  param_1[0x10] = param_1[0x10] + iVar2 >> (bVar3 & 0x1f);
  iVar9 = DAT_5f9f4a88 * iVar11;
  param_1[0x18] =
       (((iVar8 * iVar11 - DAT_5f9f4a88 * iVar10) - DAT_5f9f4a8c * iVar5) - iVar1 * iVar6) + iVar2
       >> (bVar3 & 0x1f);
  param_1[0x20] = param_1[0x20] + iVar2 >> (bVar3 & 0x1f);
  iVar8 = DAT_5f9f4a8c * iVar6;
  iVar4 = DAT_5f9f4a80 * iVar5;
  iVar7 = DAT_5f9f4a84 * iVar10;
  param_1[0x30] = param_1[0x30] + iVar2 >> (bVar3 & 0x1f);
  iVar1 = DAT_5f9f4a88;
  iVar11 = DAT_5f9f4a8c * iVar11;
  param_1[0x28] = iVar9 + iVar7 + iVar2 + (iVar8 - iVar4) >> (bVar3 & 0x1f);
  param_1[0x38] =
       DAT_5f9f4a84 * iVar6 + iVar2 + ((iVar11 - iVar1 * iVar5) - DAT_5f9f4a80 * iVar10) >>
       (bVar3 & 0x1f);
  return;
}


