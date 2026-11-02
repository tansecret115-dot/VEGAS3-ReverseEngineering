/* Module: mp3plug.dll
   Function: FUN_5f6dbe10
   Address: 5f6dbe10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6dbe10(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = 0;
  param_1[6] = (int)(param_1[6] + 1) % (int)param_1[1];
  if (0 < (int)uVar1) {
    do {
      FUN_5f6ecea0((undefined4 *)param_1[iVar2 + 9],param_2);
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 0x240;
      uVar1 = *param_1;
    } while (iVar2 < (int)uVar1);
  }
  FUN_5f6f4490(uVar1,(int)(param_1 + 0x13),(int *)(param_1 + 9),param_1[4]);
  if (param_1[5] == 0) {
    uVar1 = *param_1;
  }
  else {
    iVar2 = 0;
    uVar1 = *param_1;
    if (0 < (int)uVar1) {
      do {
        uVar1 = param_1[iVar2 + 0x13];
        if (uVar1 == 2) {
          param_1[iVar2 + 0x13] = 5;
          uVar1 = 5;
        }
        if (uVar1 == 1) {
          param_1[iVar2 + 0x13] = 4;
          uVar1 = 4;
        }
        if (uVar1 == 3) {
          param_1[iVar2 + 0x13] = 6;
        }
        iVar2 = iVar2 + 1;
        uVar1 = *param_1;
      } while (iVar2 < (int)uVar1);
    }
  }
  iVar2 = 0;
  if (0 < (int)uVar1) {
    do {
      FUN_5f6ee520((int *)param_1[iVar2 + 0xf],param_1[iVar2 + 9],param_1[iVar2 + 0x13]);
      iVar2 = iVar2 + 1;
      uVar1 = *param_1;
    } while (iVar2 < (int)uVar1);
  }
  iVar2 = 0;
  if (0 < (int)uVar1) {
    do {
      FUN_5f6edae0((int *)param_1[iVar2 + 0xb],param_1[iVar2 + 9],param_1[iVar2 + 0x13]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)*param_1);
  }
  if ((param_1[2] != 0) || (uVar1 = 0, param_1[3] != 0)) {
    FUN_5f6ef0f0((int *)param_1[0x11],param_1[6],(int *)(param_1 + 9),(int *)(param_1 + 0xb),
                 param_1 + 0xf,param_1[0x13]);
    uVar1 = param_1[3];
  }
  if (uVar1 != 0) {
    FUN_5f6f0300((int *)param_1[0x12],param_1[0x11],param_1 + 9,(int *)(param_1 + 0xb),
                 (int *)(param_1 + 0xf),param_1[0x13]);
  }
  if (param_1[2] != 0) {
    FUN_5f6ef8a0(param_1[0x11],(int *)(param_1 + 0xf),(int *)(param_1 + 0xb));
  }
  iVar2 = 0;
  if (0 < (int)*param_1) {
    do {
      FUN_5f6ec6b0((int *)param_1[iVar2 + 0xd],(int *)param_1[iVar2 + 0xf],param_1[iVar2 + 0xb]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)*param_1);
  }
  return 0;
}


