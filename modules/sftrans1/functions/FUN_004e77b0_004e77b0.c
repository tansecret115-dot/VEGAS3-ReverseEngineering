/* Module: sftrans1.dll
   Function: FUN_004e77b0
   Address: 004e77b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004e77b0(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 < param_1[2]) {
    param_2[2] = *param_1;
    param_2[3] = param_1[2];
  }
  else {
    param_2[2] = param_1[2];
    param_2[3] = *param_1;
  }
  if (param_1[4] < param_1[6]) {
    param_2[4] = param_1[4];
    param_2[5] = param_1[6];
  }
  else {
    param_2[4] = param_1[6];
    param_2[5] = param_1[4];
  }
  iVar2 = param_2[2];
  *param_2 = iVar2;
  param_2[1] = iVar2 + 0x4000U & 0xffffc000;
  param_2[6] = (param_3 + 1) * 0x4000;
  if (param_5 == 2) {
    param_2[0x1e] = param_1[10];
    param_2[0x1f] = param_1[0xc];
    param_2[0x1a] = param_1[0x10];
    param_2[0x1b] = param_1[0x11];
    iVar2 = *param_1 - iVar2;
    if (iVar2 < 0x4001) {
      param_2[0x23] = 0;
      param_2[0x24] = 0;
      goto LAB_004e78e0;
    }
    param_2[0x23] = (int)(((longlong)(param_1[10] - param_1[0x10]) * 0x4000) / (longlong)iVar2);
    iVar2 = (int)(((longlong)(param_1[0xc] - param_1[0x11]) * 0x4000) / (longlong)iVar2);
  }
  else {
    if (param_5 != 3) goto LAB_004e78e0;
    param_2[0x21] = param_1[0xe];
    param_2[0x1e] = param_1[10];
    param_2[0x1f] = param_1[0xc];
    param_2[0x1d] = param_1[0x13];
    param_2[0x1a] = param_1[0x10];
    param_2[0x1b] = param_1[0x11];
    param_2[0x22] = param_1[0xf];
    param_2[0x23] = param_1[0xb];
    iVar2 = param_1[0xd];
  }
  param_2[0x24] = iVar2;
LAB_004e78e0:
  param_2[0x1c] = 0;
  param_2[0x25] = 0;
  if ((param_2[3] < *param_2) && (param_2[1] < param_2[4])) {
    if (((param_1[1] & 0x3fffU) == 0) && (param_1[3] - param_1[1] == 0x4000)) {
      param_2[0x17] = -1;
    }
    else {
      iVar2 = param_2[6];
      param_2[7] = 0;
      iVar1 = param_1[1];
      param_2[0xf] = 0;
      param_2[8] = (iVar1 - iVar2) + 0x4000;
      iVar1 = param_1[3];
      param_2[9] = 0x4000;
      param_2[0x10] = (iVar1 - iVar2) + 0x4000;
      iVar1 = param_1[1];
      param_2[0x11] = 0x4000;
      param_2[10] = (iVar1 - iVar2) + 0x4000;
      iVar1 = param_1[3];
      param_2[0x17] = 2;
      param_2[0x12] = (iVar1 - iVar2) + 0x4000;
    }
  }
  else {
    FUN_004e7250(param_2);
  }
  if (param_2[5] <= param_2[1]) {
    param_2[0x25] = 1;
  }
  return;
}


