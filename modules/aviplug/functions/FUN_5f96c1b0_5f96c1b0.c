/* Module: aviplug.dll
   Function: FUN_5f96c1b0
   Address: 5f96c1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96c1b0(int *param_1,int *param_2)

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
  
  iVar8 = param_2[3];
  iVar7 = param_2[4];
  iVar10 = *param_2;
  iVar9 = param_2[7];
  iVar1 = param_2[6];
  iVar11 = param_2[5];
  iVar5 = param_2[2];
  iVar4 = param_2[1];
  iVar3 = (iVar10 + iVar8 + iVar7 + iVar9) * DAT_5f9f4a70;
  iVar6 = (iVar5 + iVar4 + iVar11 + iVar1) * DAT_5f9f4a70;
  param_1[4] = iVar3 - iVar6;
  *param_1 = iVar6 + iVar3;
  iVar3 = ((iVar10 - iVar8) - iVar7) + iVar9;
  iVar6 = ((iVar4 - iVar5) - iVar11) + iVar1;
  param_1[2] = DAT_5f9f4a78 * iVar6 + DAT_5f9f4a74 * iVar3;
  iVar8 = iVar8 - iVar7;
  param_1[6] = DAT_5f9f4a78 * iVar3 - DAT_5f9f4a74 * iVar6;
  iVar3 = DAT_5f9f4a8c;
  iVar10 = iVar10 - iVar9;
  iVar4 = iVar4 - iVar1;
  iVar5 = iVar5 - iVar11;
  bVar2 = (byte)DAT_5f9f4a58;
  iVar7 = DAT_5f9f4a8c * iVar8;
  *param_1 = *param_1 >> (bVar2 & 0x1f);
  iVar1 = DAT_5f9f4a88;
  param_1[1] = iVar7 + DAT_5f9f4a88 * iVar5 + DAT_5f9f4a84 * iVar4 + DAT_5f9f4a80 * iVar10 >>
               (bVar2 & 0x1f);
  iVar9 = DAT_5f9f4a84;
  param_1[2] = param_1[2] >> (bVar2 & 0x1f);
  iVar11 = DAT_5f9f4a80 * iVar5;
  param_1[4] = param_1[4] >> (bVar2 & 0x1f);
  iVar7 = DAT_5f9f4a80;
  param_1[3] = ((iVar9 * iVar10 - iVar1 * iVar8) - iVar3 * iVar4) - iVar11 >> (bVar2 & 0x1f);
  iVar9 = DAT_5f9f4a80 * iVar8;
  iVar11 = DAT_5f9f4a84 * iVar5;
  param_1[5] = (iVar3 * iVar5 - iVar7 * iVar4) + DAT_5f9f4a84 * iVar8 + iVar1 * iVar10 >>
               (bVar2 & 0x1f);
  param_1[6] = param_1[6] >> (bVar2 & 0x1f);
  param_1[7] = ((iVar3 * iVar10 - iVar1 * iVar4) - iVar9) + iVar11 >> (bVar2 & 0x1f);
  return;
}


