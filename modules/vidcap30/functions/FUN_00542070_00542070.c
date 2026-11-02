/* Module: vidcap30.exe
   Function: FUN_00542070
   Address: 00542070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00542070(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *param_2 = *(undefined4 *)(param_1 + 0x3c);
  param_2[1] = *(undefined4 *)(param_1 + 0x40);
  puVar1 = (uint *)FUN_00540eb0(param_1,*(undefined4 *)(param_1 + 0x3c),
                                *(undefined4 *)(param_1 + 0x40));
  if (*(int *)(param_1 + 0x5c) == 0) {
    param_2[4] = 0;
    param_2[2] = 0;
  }
  else {
    uVar3 = puVar1[2];
    if (uVar3 == 0xffff) {
      param_2[2] = 0;
      param_2[4] = *(undefined4 *)(param_1 + 0x5c);
    }
    else {
      uVar4 = *puVar1;
      if (uVar3 < *puVar1) {
        uVar4 = uVar3;
      }
      param_2[2] = uVar4;
      uVar3 = puVar1[2];
      if (puVar1[2] <= *puVar1) {
        uVar3 = *puVar1;
      }
      uVar2 = uVar3 + 1;
      if (*(uint *)(param_1 + 0x5c) <= uVar3 + 1) {
        uVar2 = *(uint *)(param_1 + 0x5c);
      }
      param_2[4] = uVar2 - uVar4 & ((int)(uVar2 - uVar4) < 0) - 1;
    }
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    param_2[5] = 0;
    param_2[3] = 0;
  }
  else {
    uVar3 = puVar1[3];
    if (uVar3 == 0xffff) {
      param_2[3] = 0;
      uVar3 = *(uint *)(param_1 + 0x60);
    }
    else {
      uVar4 = puVar1[1];
      if (uVar3 < puVar1[1]) {
        uVar4 = uVar3;
      }
      param_2[3] = uVar4;
      uVar3 = puVar1[1];
      if (puVar1[1] < puVar1[3]) {
        uVar3 = puVar1[3];
      }
      uVar2 = uVar3 + 1;
      if (*(uint *)(param_1 + 0x60) <= uVar3 + 1) {
        uVar2 = *(uint *)(param_1 + 0x60);
      }
      uVar3 = uVar2 - uVar4 & ((int)(uVar2 - uVar4) < 0) - 1;
    }
    param_2[5] = uVar3;
  }
  if ((param_2[4] != 0) && (param_2[5] != 0)) {
    return 1;
  }
  return 0;
}


