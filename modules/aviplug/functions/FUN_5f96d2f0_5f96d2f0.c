/* Module: aviplug.dll
   Function: FUN_5f96d2f0
   Address: 5f96d2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96d2f0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = DAT_5f9f4a78;
  iVar2 = *param_1 * DAT_5f9f4a70;
  iVar5 = param_1[0x10] * DAT_5f9f4a70;
  iVar4 = param_1[0x30] * DAT_5f9f4a70 + param_1[0x20] * DAT_5f9f4a70;
  param_1[0x10] = param_1[0x20] * DAT_5f9f4a70 - param_1[0x30] * DAT_5f9f4a70;
  param_1[0x20] = iVar5 + iVar2;
  param_1[0x30] = iVar2 - iVar5;
  iVar5 = param_1[8] * DAT_5f9f4a74 + param_1[0x18] * iVar3;
  iVar2 = param_1[0x10];
  iVar3 = param_1[8] * iVar3 - param_1[0x18] * DAT_5f9f4a74;
  *param_1 = iVar4;
  *param_1 = iVar4 + param_1[0x20];
  param_1[0x20] = param_1[0x20] - iVar4;
  param_1[0x10] = iVar2 + param_1[0x30];
  param_1[0x30] = param_1[0x30] - iVar2;
  iVar6 = param_1[0x28] * DAT_5f9f4a78 - param_1[0x38] * DAT_5f9f4a74;
  iVar2 = param_1[0x28] * DAT_5f9f4a74 + param_1[0x38] * DAT_5f9f4a78;
  iVar4 = iVar5 - iVar2;
  param_1[0x38] = iVar2 + iVar5;
  iVar2 = param_1[0x38];
  iVar5 = iVar3 - iVar6;
  iVar6 = iVar6 + iVar3;
  param_1[8] = iVar4;
  param_1[8] = param_1[0x20] + iVar4;
  param_1[0x28] = iVar6;
  param_1[0x18] = iVar5;
  param_1[0x18] = param_1[0x30] + iVar5;
  param_1[0x28] = param_1[0x30] - iVar5;
  param_1[0x38] = param_1[0x20] - iVar4;
  param_1[0x20] = param_1[0x10] - iVar6;
  param_1[0x30] = *param_1 - iVar2;
  iVar3 = DAT_5f9f4a6c;
  iVar7 = param_1[0x10] + DAT_5f9f4a6c;
  iVar4 = *param_1 + DAT_5f9f4a6c;
  bVar1 = (byte)DAT_5f9f4a68;
  iVar5 = param_1[8] + DAT_5f9f4a6c;
  param_1[0x18] = param_1[0x18] + DAT_5f9f4a6c >> (bVar1 & 0x1f);
  param_1[0x10] = iVar7 + iVar6 >> (bVar1 & 0x1f);
  param_1[0x20] = param_1[0x20] + iVar3 >> (bVar1 & 0x1f);
  *param_1 = iVar4 + iVar2 >> (bVar1 & 0x1f);
  param_1[8] = iVar5 >> (bVar1 & 0x1f);
  param_1[0x28] = param_1[0x28] + iVar3 >> (bVar1 & 0x1f);
  param_1[0x30] = param_1[0x30] + iVar3 >> (bVar1 & 0x1f);
  param_1[0x38] = param_1[0x38] + iVar3 >> (bVar1 & 0x1f);
  return;
}


