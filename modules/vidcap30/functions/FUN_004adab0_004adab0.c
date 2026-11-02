/* Module: vidcap30.exe
   Function: FUN_004adab0
   Address: 004adab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004adab0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((*param_1 & 0x30) == 0) {
    iVar1 = 0;
    param_1[8] = 1;
    param_1[9] = 1;
  }
  else {
    param_1[8] = 0;
    param_1[9] = *param_1 >> 0xe & 1;
    iVar1 = 6;
  }
  if (param_1[7] == 0) {
    iVar3 = 4;
    iVar1 = iVar1 + 4;
  }
  else {
    iVar3 = iVar1 + 4;
    iVar1 = 4;
  }
  if (((int)(param_1[0x28] - param_1[0x26]) < iVar1) ||
     ((int)(param_1[0x29] - param_1[0x27]) < iVar3)) {
    param_1[8] = 1;
    param_1[9] = 1;
  }
  param_1[0x2b] = param_1[0x26];
  param_1[0x2c] = param_1[0x27];
  param_1[0x2d] = param_1[0x28];
  param_1[0x2e] = param_1[0x29];
  if (param_1[7] != 0) {
    if (param_1[8] == 0) {
      iVar1 = 6;
      if ((param_1[0x29] - param_1[0x27] & 1) != 0) {
        iVar1 = 7;
      }
    }
    else {
      iVar1 = 0;
    }
    uVar2 = (int)((param_1[0x29] + param_1[0x27]) - iVar1) / 2;
    param_1[0x2c] = uVar2;
    param_1[0x2e] = uVar2 + iVar1;
    FUN_004ad090(param_1,param_1[0x13],1);
    return;
  }
  if (param_1[8] == 0) {
    iVar1 = 6;
    if ((param_1[0x28] - param_1[0x26] & 1) != 0) {
      iVar1 = 7;
    }
  }
  else {
    iVar1 = 0;
  }
  uVar2 = (int)((param_1[0x28] - iVar1) + param_1[0x26]) / 2;
  param_1[0x2b] = uVar2;
  param_1[0x2d] = uVar2 + iVar1;
  FUN_004ad090(param_1,param_1[0x13],1);
  return;
}


