/* Module: vegas30k.dll
   Function: FUN_01063ec0
   Address: 01063ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01063ec0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_8;
  
  fVar3 = _DAT_011dad68 / (float)param_1[0x1e];
  piVar1 = (int *)(param_3 + 0x244 + *(int *)(*param_1 + 0x5c) * 0x18);
  *(int *)(param_3 + 0x5b8) = -*(int *)(param_3 + 0x248 + *(int *)(*param_1 + 0x5c) * 0x18);
  local_8 = SUB84((double)(fVar3 * (float)param_1[0x1b] * (float)_DAT_011e1da8 +
                          (float)_DAT_011dbdd0),0);
  uVar4 = local_8 + 0x80000000;
  local_8 = SUB84((double)(fVar3 * (float)param_1[0x1c] * (float)_DAT_011e1da8 +
                          (float)_DAT_011dbdd0),0);
  uVar5 = local_8 + 0x80000000;
  if ((int)uVar4 >> 0xe < piVar1[4] + -1) {
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = (piVar1[4] + -2) * 0x4000;
  }
  iVar2 = piVar1[5];
  if ((int)uVar5 >> 0xe < iVar2 + -1) {
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = (iVar2 + -2) * 0x4000;
  }
  uVar6 = uVar4 & 0x80003fff;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xffffc000) + 1;
  }
  *(uint *)(param_3 + 0x5bc) = uVar6;
  uVar6 = uVar5 & 0x80003fff;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xffffc000) + 1;
  }
  *(uint *)(param_3 + 0x5c0) = uVar6;
  uVar4 = ((int)uVar4 >> 0xe) * piVar1[3];
  uVar6 = uVar4 & 0x80000007;
  *(int *)(param_3 + 0x5a0) =
       ((iVar2 - ((int)uVar5 >> 0xe)) + -1) * piVar1[1] +
       ((int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3) + *piVar1;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
  }
  *(uint *)(param_3 + 0x5a4) = uVar6;
  (**(code **)(param_3 + 0x558))(param_3 + 0x544);
  *param_1 = *(int *)(param_3 + 0x580);
  return;
}


