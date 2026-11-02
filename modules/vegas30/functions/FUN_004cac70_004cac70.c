/* Module: vegas30.exe
   Function: FUN_004cac70
   Address: 004cac70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004cac70(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  param_2 = ((int)param_2 < 1) - 1 & param_2;
  uVar3 = ((int)param_3 < 1) - 1 & param_3;
  uVar4 = param_4 & 4;
  param_3 = uVar3;
  if (uVar4 != 0) {
    *(uint *)(param_1 + 0xbac) = uVar3;
    uVar2 = FUN_004caaa0(param_1);
    *(undefined4 *)(param_1 + 0x674) = uVar2;
  }
  uVar1 = *(uint *)(param_1 + 0x674);
  if ((int)uVar1 < 1) {
    uVar3 = 0;
    param_3 = 0;
    param_2 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0xad4);
    if (((int)uVar3 < (int)uVar5) || (uVar5 = uVar1, (int)uVar1 < (int)uVar3)) {
      uVar3 = uVar5;
      param_3 = uVar5;
    }
    if ((int)uVar1 < (int)(param_2 + uVar3)) {
      param_2 = ((int)(uVar1 - uVar3) < 1) - 1 & uVar1 - uVar3;
    }
  }
  uVar2 = FUN_004cada0(param_1,&param_2,(int *)(param_1 + 0xbcc));
  *(undefined4 *)(param_1 + 0xbc0) = uVar2;
  if ((*(byte *)(param_1 + 0x654) & 0x40) == 0) {
    *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0xbb0) + -0x18;
    *(int *)(param_1 + 0x680) = DAT_006477b0 + -0x18;
    *(int *)(param_1 + 0x678) = *(int *)(param_1 + 0xbcc) + -0x18;
  }
  *(uint *)(param_1 + 0xbac) = uVar3;
  *(uint *)(param_1 + 0xba8) = param_2;
  *(undefined4 *)(param_1 + 0xd38) = 1;
  *(double *)(param_1 + 3000) = (double)(int)param_3 / (double)*(int *)(param_1 + 0xbb0);
  if (uVar4 == 0) {
    uVar2 = FUN_004caaa0(param_1);
    *(undefined4 *)(param_1 + 0x674) = uVar2;
  }
  FUN_00452ea0(param_1);
  FUN_004530a0(param_1,0x7800);
  return;
}


