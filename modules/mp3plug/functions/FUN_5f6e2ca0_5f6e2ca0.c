/* Module: mp3plug.dll
   Function: FUN_5f6e2ca0
   Address: 5f6e2ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6e2ca0(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  if (param_2[2] < 0x5dc1) {
    if (param_2[2] < 0x2ee1) {
      param_1[8] = 2;
      iVar1 = param_2[2];
      if (iVar1 == 8000) {
        param_1[9] = 2;
      }
      else if (iVar1 == 0x2b11) {
        param_1[9] = 0;
      }
      else {
        if (iVar1 != 12000) {
          return 1;
        }
        param_1[9] = 1;
      }
    }
    else {
      param_1[8] = 1;
      iVar1 = param_2[2];
      if (iVar1 == 16000) {
        param_1[9] = 2;
      }
      else if (iVar1 == 0x5622) {
        param_1[9] = 0;
      }
      else {
        if (iVar1 != 24000) {
          return 1;
        }
        param_1[9] = 1;
      }
    }
  }
  else {
    param_1[8] = 0;
    iVar1 = param_2[2];
    if (iVar1 == 32000) {
      param_1[9] = 2;
    }
    else if (iVar1 == 0xac44) {
      param_1[9] = 0;
    }
    else {
      if (iVar1 != 48000) {
        return 1;
      }
      param_1[9] = 1;
    }
  }
  param_1[0xd] = 0x20;
  if (param_2[3] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0x10;
  }
  param_1[0xe] = iVar1;
  param_1[0xf] = *param_2;
  iVar1 = param_1[8];
  if (iVar1 == 0) {
    param_1[10] = 2;
    iVar1 = *param_2;
    if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
      param_1[0xb] = 0x100;
      param_1[7] = 2;
    }
    else {
      if (iVar1 != 3) {
        return 1;
      }
      param_1[0xb] = 0x88;
      param_1[7] = 1;
    }
  }
  else if ((iVar1 == 1) || (iVar1 == 2)) {
    param_1[10] = 1;
    iVar1 = *param_2;
    if ((iVar1 == 0) || ((iVar1 == 1 || (iVar1 == 2)))) {
      param_1[0xb] = 0x88;
      param_1[7] = 2;
    }
    else {
      if (iVar1 != 3) {
        return 1;
      }
      param_1[0xb] = 0x48;
      param_1[7] = 1;
    }
  }
  param_1[0xc] = param_1[0xd] + param_1[0xe] + param_1[0xb];
  FUN_5f6fa6b0(param_1 + 0x13,param_1[0x11],param_1[0x12]);
  param_1[0xd8] = 0;
  param_1[0x10] = 0;
  return 0;
}


