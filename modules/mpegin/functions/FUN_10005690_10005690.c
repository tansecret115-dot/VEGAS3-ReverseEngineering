/* Module: mpegin.dll
   Function: FUN_10005690
   Address: 10005690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10005690(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0x200000;
  uVar1 = param_1[8];
  iVar3 = param_1[9];
  iVar2 = iVar3 + (uint)(0xffdfffff < uVar1);
  if ((iVar2 < param_1[0x13]) ||
     (((iVar2 <= param_1[0x13] && (uVar1 + 0x200000 <= (uint)param_1[0x12])) ||
      (uVar4 = param_1[0x12] - param_1[8], 0 < (int)uVar4)))) {
    iVar2 = *param_1;
    *(uint *)(iVar2 + 8) = uVar1;
    *(int *)(iVar2 + 0xc) = iVar3;
    if (*(int *)(*param_1 + 0x10) != 0) {
      *(undefined4 *)(*param_1 + 0x10) = 0;
      iVar3 = (*(code *)param_1[0x2c])(param_1[0x2f],param_1[8],param_1[9]);
      if (iVar3 != 0) {
        param_1[0x10] = 1;
        return;
      }
    }
    uVar4 = (*(code *)param_1[0x2d])(param_1[0x2f],*(undefined4 *)*param_1,uVar4);
  }
  param_1[1] = *(int *)*param_1;
  if ((int)uVar4 < 0x200000) {
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    while ((uVar4 & 3) != 0) {
      uVar4 = uVar4 + 1;
      *(undefined1 *)(*(int *)*param_1 + -1 + uVar4) = 0;
    }
  }
  iVar3 = *(int *)*param_1;
  param_1[4] = uVar4 + iVar3;
  if (param_1[0xb] == 0) {
    param_1[3] = uVar4 + iVar3;
  }
  else if (param_1[0xe] == 0) {
    param_1[3] = param_1[3] + -0x200000;
    return;
  }
  return;
}


