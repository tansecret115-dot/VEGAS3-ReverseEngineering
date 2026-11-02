/* Module: vegas30.exe
   Function: FUN_0040c2c0
   Address: 0040c2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040c2c0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  tagRECT local_10;
  
  GetClientRect((HWND)*param_1,&local_10);
  param_1[3] = local_10.bottom;
  param_1[2] = local_10.right;
  uVar1 = local_10.bottom - param_1[0x18] & (local_10.bottom - param_1[0x18] < 0) - 1;
  param_1[0x19] = uVar1;
  param_1[8] = 0;
  param_1[10] = local_10.right;
  param_1[9] = 0;
  param_1[0xb] = uVar1;
  if ((int)param_1[0x17] <= (int)uVar1) {
    uVar1 = param_1[0x17];
  }
  param_1[9] = uVar1;
  iVar3 = param_1[0xf] + uVar1;
  param_1[0x14] = iVar3;
  iVar2 = param_1[0xb] - param_1[5];
  if (iVar3 < (int)(param_1[0xb] - param_1[5])) {
    iVar2 = iVar3;
  }
  param_1[0x14] = iVar2;
  param_1[9] = iVar2;
  iVar2 = (param_1[0xb] - param_1[0x11]) - param_1[5];
  param_1[0x16] = iVar2;
  iVar3 = param_1[9] + param_1[0x12] + param_1[5];
  if (iVar2 <= iVar3) {
    iVar2 = iVar3;
  }
  param_1[0x16] = iVar2;
  param_1[0xb] = iVar2;
  iVar2 = param_1[0xe] + param_1[8];
  param_1[0x13] = iVar2;
  iVar3 = param_1[10] - param_1[4];
  if (iVar2 < (int)(param_1[10] - param_1[4])) {
    iVar3 = iVar2;
  }
  param_1[0x13] = iVar3;
  param_1[8] = iVar3;
  iVar2 = param_1[10] - param_1[0x10];
  param_1[0x15] = iVar2;
  iVar3 = param_1[4] * 3 + param_1[8];
  if (iVar3 < iVar2) {
    param_1[0x15] = iVar2;
    param_1[10] = iVar2;
    return;
  }
  param_1[0x15] = iVar3;
  param_1[10] = iVar3;
  return;
}


