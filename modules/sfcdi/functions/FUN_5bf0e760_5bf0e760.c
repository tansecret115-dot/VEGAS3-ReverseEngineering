/* Module: sfcdi.dll
   Function: FUN_5bf0e760
   Address: 5bf0e760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0e760(byte *param_1,int param_2)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  ushort local_4;
  
  iVar1 = FUN_5bf0e6f0(param_1,param_2);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  param_1[0x58] = 1;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  local_10 = *(undefined4 *)(param_2 + 8);
  local_c = *(undefined4 *)(param_2 + 0xc);
  local_8 = *(undefined4 *)(param_2 + 0x10);
  local_4 = (ushort)*(byte *)(param_2 + 0x14);
  _mbscpy(param_1 + 0x5c,(uchar *)&local_10);
  if (((*param_1 & 1) != 0) && (iVar1 == 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1d78) = 1;
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x1d7c) = 0;
    *(undefined4 *)(iVar1 + 0x1d80) = 0;
    *(undefined4 *)(iVar1 + 0x1d84) = 0;
    *(undefined1 *)(iVar1 + 0x1d88) = 0;
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x1d7c) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(iVar1 + 0x1d80) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(iVar1 + 0x1d84) = *(undefined4 *)(param_2 + 0x10);
    *(undefined1 *)(iVar1 + 0x1d88) = *(undefined1 *)(param_2 + 0x14);
  }
  return;
}


