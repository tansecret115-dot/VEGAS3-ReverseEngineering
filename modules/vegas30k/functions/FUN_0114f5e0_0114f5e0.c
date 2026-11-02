/* Module: vegas30k.dll
   Function: FUN_0114f5e0
   Address: 0114f5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0114f5e0(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if ((*(uint *)(param_1 + 0x160) & 0x10000) != 0) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x16c);
  uVar5 = *(uint *)(param_1 + 0x5c);
  uVar1 = param_3[3];
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x16c) = iVar3;
  if ((uVar5 != 0) && ((*(uint *)(param_1 + 0x160) & 0x800) == 0)) {
    uVar5 = uVar5 - 1;
  }
  *param_3 = 0;
  if (param_4 == 0) {
    param_4 = 0;
  }
  param_2 = param_2 / *(int *)(param_1 + 0x16c);
  param_3[3] = param_2;
  if (param_2 != 0) {
    param_3[3] = param_2 + -1;
  }
  if (((((*(byte *)(param_1 + 0x168) & 0x20) != 0) && (uVar2 = param_3[3], uVar1 < uVar2)) &&
      (param_4 != 0)) && ((uint)(*(int *)(param_1 + 0x5c) - param_4) <= uVar2)) {
    param_4 = param_4 + (uVar1 - uVar2);
  }
  if ((uint)param_3[3] < uVar5) {
    param_3[1] = uVar5 - param_3[3];
  }
  else {
    param_4 = 0;
    param_3[1] = 0;
  }
  if ((uVar5 == 1) && (param_3[3] == 0)) {
    param_3[3] = 1;
  }
  uVar4 = FUN_0114f6c0(param_1,param_3[2],param_4);
  param_3[2] = param_4;
  return uVar4;
}


