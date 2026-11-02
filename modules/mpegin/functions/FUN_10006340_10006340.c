/* Module: mpegin.dll
   Function: FUN_10006340
   Address: 10006340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10006340(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
joined_r0x1000634d:
  if (((0 < (int)param_2) && (param_1[0x10] == 0)) && (param_1[0x11] == 0)) {
    iVar2 = param_1[1];
    uVar1 = iVar2 + param_2;
    if (((uint)param_1[3] <= uVar1) || ((uint)param_1[4] <= uVar1)) {
      if ((uint)param_1[4] <= uVar1) goto code_r0x10006382;
      uVar4 = param_1[3] - iVar2;
      uVar1 = param_1[8];
      param_1[1] = iVar2 + uVar4;
      param_1[8] = uVar1 + uVar4;
      param_2 = param_2 - uVar4;
      param_1[9] = param_1[9] + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar1,uVar4);
      goto LAB_100063d8;
    }
    uVar1 = param_1[8];
    param_1[1] = param_1[1] + param_2;
    param_1[8] = uVar1 + param_2;
    param_1[9] = param_1[9] + ((int)param_2 >> 0x1f) + (uint)CARRY4(uVar1,param_2);
  }
  param_1[2] = 0;
  uVar3 = 1;
  if ((param_1[0x13] <= param_1[9]) &&
     ((param_1[0x13] < param_1[9] || ((uint)param_1[0x12] <= (uint)param_1[8])))) {
    param_1[0x11] = 1;
  }
  if ((param_1[0x10] == 0) && (param_1[0x11] == 0)) {
    uVar3 = 0;
  }
  return uVar3;
code_r0x10006382:
  uVar4 = param_1[4] - iVar2;
  uVar1 = param_1[8];
  param_1[1] = iVar2 + uVar4;
  param_1[8] = uVar1 + uVar4;
  param_2 = param_2 - uVar4;
  param_1[9] = param_1[9] + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar1,uVar4);
  FUN_10005690(param_1);
  if ((param_1[0xb] != 0) && (param_1[1] == param_1[3])) {
LAB_100063d8:
    FUN_1000b0f0(param_1);
  }
  goto joined_r0x1000634d;
}


