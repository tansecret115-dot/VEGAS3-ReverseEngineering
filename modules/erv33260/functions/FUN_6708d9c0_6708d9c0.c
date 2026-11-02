/* Module: erv33260.dll
   Function: FUN_6708d9c0
   Address: 6708d9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6708d9c0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte local_3c [16];
  undefined4 local_2c;
  byte local_28 [16];
  uint local_18;
  
  iVar2 = 0;
  iVar4 = 0;
  do {
    local_28[iVar2] = (local_28 + iVar2)[((param_2 - (int)local_28) - param_3) + -1];
    iVar1 = iVar2 + 1;
    local_3c[iVar2] = *(byte *)(param_2 + -1 + (iVar4 - param_3));
    iVar2 = iVar1;
    iVar4 = iVar4 + param_3;
  } while (iVar1 < 0x11);
  iVar1 = 0;
  param_2 = 0;
  iVar4 = 0;
  iVar2 = 0;
  do {
    iVar5 = iVar2 + 1;
    iVar1 = iVar1 + ((uint)local_28[iVar2 + 9] - (uint)local_28[iVar4 + 7]) * iVar5;
    param_2 = param_2 + ((uint)local_3c[iVar2 + 9] - (uint)local_3c[iVar4 + 7]) * iVar5;
    iVar4 = iVar4 + -1;
    iVar3 = iVar2 + 2;
    iVar2 = iVar5;
  } while (iVar3 < 9);
  param_3 = 0;
  iVar4 = (param_2 >> 2) + param_2 >> 4;
  iVar2 = (iVar1 >> 2) + iVar1 >> 4;
  param_2 = param_4;
  param_4 = 0x10;
  do {
    iVar1 = 0;
    iVar5 = 0;
    do {
      iVar3 = (int)(((local_18 & 0xff) + (local_2c & 0xff)) * 0x10 + param_3 + iVar4 * -7 + 0x10 +
                   iVar5 + iVar2 * -7) >> 5;
      if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      *(byte *)(iVar1 + param_2) = (iVar3 < 0) - 1U & (byte)iVar3;
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + iVar2;
    } while (iVar1 < 0x10);
    param_3 = param_3 + iVar4;
    param_2 = param_2 + 0x10;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  return;
}


