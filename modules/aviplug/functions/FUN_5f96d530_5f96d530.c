/* Module: aviplug.dll
   Function: FUN_5f96d530
   Address: 5f96d530
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96d530(int *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[6] * DAT_5f9f4a94 + param_1[2] * DAT_5f9f4a90;
  iVar4 = param_1[3] * DAT_5f9f4a9c + param_1[1] * DAT_5f9f4a98 + param_1[5] * DAT_5f9f4aa0 +
          param_1[7] * DAT_5f9f4aa4;
  iVar5 = *param_1 * DAT_5f9f4a70;
  iVar3 = (param_1[1] * DAT_5f9f4aa8 - param_1[3] * DAT_5f9f4aac) + param_1[5] * DAT_5f9f4ab0 +
          param_1[7] * DAT_5f9f4ab4;
  bVar2 = (byte)DAT_5f9f4a64;
  *param_1 = iVar4 + iVar1 + iVar5 >> (bVar2 & 0x1f);
  param_1[1] = (iVar3 - iVar1) + iVar5 >> (bVar2 & 0x1f);
  param_1[2] = (iVar5 - iVar3) - iVar1 >> (bVar2 & 0x1f);
  param_1[3] = (iVar1 - iVar4) + iVar5 >> (bVar2 & 0x1f);
  return;
}


