/* Module: aviplug.dll
   Function: FUN_5f96d7c0
   Address: 5f96d7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96d7c0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = DAT_5f9f4a78;
  iVar4 = param_1[0x20] * DAT_5f9f4a70;
  iVar8 = param_1[0x30] * DAT_5f9f4a70;
  iVar2 = *param_1 * DAT_5f9f4a70;
  iVar6 = param_1[0x10] * DAT_5f9f4a70;
  param_1[0x10] = iVar4 - iVar8;
  param_1[0x20] = iVar6 + iVar2;
  *param_1 = iVar8 + iVar4;
  iVar4 = DAT_5f9f4a74;
  param_1[0x30] = iVar2 - iVar6;
  iVar2 = param_1[8] * iVar3 - param_1[0x18] * iVar4;
  iVar3 = param_1[8] * iVar4 + param_1[0x18] * iVar3;
  *param_1 = *param_1 + param_1[0x20];
  param_1[0x10] = param_1[0x10] + param_1[0x30];
  iVar7 = param_1[0x28] * DAT_5f9f4a78 - param_1[0x38] * iVar4;
  iVar6 = param_1[0x28] * iVar4 + param_1[0x38] * DAT_5f9f4a78;
  param_1[0x20] = (param_1[0x10] - iVar7) - iVar2;
  param_1[0x30] = (*param_1 - iVar6) - iVar3;
  iVar4 = DAT_5f9f4a6c;
  iVar5 = param_1[0x10] + DAT_5f9f4a6c;
  iVar8 = param_1[0x20] + DAT_5f9f4a6c;
  bVar1 = (byte)DAT_5f9f4a68;
  *param_1 = *param_1 + DAT_5f9f4a6c + iVar6 + iVar3 >> (bVar1 & 0x1f);
  param_1[0x10] = iVar5 + iVar7 + iVar2 >> (bVar1 & 0x1f);
  param_1[0x20] = iVar8 >> (bVar1 & 0x1f);
  param_1[0x30] = param_1[0x30] + iVar4 >> (bVar1 & 0x1f);
  return;
}


