/* Module: vegas30.exe
   Function: FUN_005b0b50
   Address: 005b0b50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005b0b50(byte *param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  *param_5 = 0;
  param_5[1] = 0;
  *param_6 = 0;
  if ((*param_1 & 1) == 0) {
    piVar5 = *(int **)(param_1 + 0x20);
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    if (1 < *piVar5) {
      return 0;
    }
    if (*piVar5 == 0) {
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x30)) {
      return 0;
    }
    pbVar1 = (byte *)piVar5[2];
    if (*(int *)(pbVar1 + 8) != 1) {
      return 0;
    }
    if (*(int *)(pbVar1 + 5000) != 0) {
      return 0;
    }
    if (*(int *)(pbVar1 + 0x1390) != 0x3f800000) {
      return 0;
    }
    if (*(int *)(pbVar1 + 0x1394) != 4) {
      return 0;
    }
    if (_DAT_00610f20 != *(float *)(pbVar1 + 0x13b0)) {
      return 0;
    }
    if ((*pbVar1 & 1) != 0) {
      return 0;
    }
    iVar3 = *(int *)(param_2 + 0x88) * 0x4000;
    iVar2 = *(int *)(param_2 + 0x8c) * 0x4000;
    if (*(int *)(pbVar1 + 0x13c8) < -3) {
      return 0;
    }
    if (3 < *(int *)(pbVar1 + 0x13c8)) {
      return 0;
    }
    if (*(int *)(pbVar1 + 0x13c4) < -3) {
      return 0;
    }
    if (3 < *(int *)(pbVar1 + 0x13c4)) {
      return 0;
    }
    if (*(int *)(pbVar1 + 0x13d0) < iVar2 + -3) {
      return 0;
    }
    if (iVar2 + 3 < *(int *)(pbVar1 + 0x13d0)) {
      return 0;
    }
    if (*(int *)(pbVar1 + 0x13cc) < iVar3 + -3) {
      return 0;
    }
    if (iVar3 + 3 < *(int *)(pbVar1 + 0x13cc)) {
      return 0;
    }
    if ((*(int **)(pbVar1 + 0x1440) != (int *)0x0) && (0 < **(int **)(pbVar1 + 0x1440))) {
      return 0;
    }
    if (*(int *)(pbVar1 + 0x9c0) != 0) {
      return 0;
    }
    if (*(int *)(pbVar1 + 8) != 1) {
      return 0;
    }
    if ((pbVar1[0x10] & 0x45) != 0) {
      return 0;
    }
    if (*(int *)(pbVar1 + 0x13c8) < *(int *)(pbVar1 + 100) + -3) {
      return 0;
    }
    if (*(int *)(pbVar1 + 100) + 3 < *(int *)(pbVar1 + 0x13c8)) {
      return 0;
    }
    if (*(int *)(pbVar1 + 0x13c4) < *(int *)(pbVar1 + 0x60) + -3) {
      return 0;
    }
    if (*(int *)(pbVar1 + 0x60) + 3 < *(int *)(pbVar1 + 0x13c4)) {
      return 0;
    }
    if (*(int *)(pbVar1 + 0x13d0) < *(int *)(pbVar1 + 0x6c) + -3) {
      return 0;
    }
    if (*(int *)(pbVar1 + 0x6c) + 3 < *(int *)(pbVar1 + 0x13d0)) {
      return 0;
    }
    if (*(int *)(pbVar1 + 0x13cc) < *(int *)(pbVar1 + 0x68) + -3) {
      return 0;
    }
    if (*(int *)(pbVar1 + 0x68) + 3 < *(int *)(pbVar1 + 0x13cc)) {
      return 0;
    }
    if (*(int *)(pbVar1 + 0x488) != 0) {
      return 0;
    }
    if (*(int *)(pbVar1 + 0x490) != 0) {
      return 0;
    }
    if (*(int *)(pbVar1 + 0x498) != 0x3f800000) {
      return 0;
    }
    if (*(int *)(pbVar1 + 0x4e4) != 0) {
      return 0;
    }
    if ((param_4 != 0) && (param_3 != *(int *)(pbVar1 + 0x4ac))) {
      return 0;
    }
    piVar5 = *(int **)(pbVar1 + 0x14);
    uVar6 = *(undefined4 *)(pbVar1 + 0x18);
    uVar4 = *(undefined4 *)(pbVar1 + 0x1c);
  }
  else {
    if ((param_4 != 0) && (param_3 != *(int *)(param_1 + 8))) {
      return 0;
    }
    piVar5 = *(int **)(param_1 + 0xc);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = *(undefined4 *)(param_1 + 0x14);
  }
  if (((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 0x2c))(piVar5), -1 < iVar2)) &&
     (iVar2 != 1)) {
    *param_5 = uVar6;
    param_5[1] = uVar4;
    *param_5 = piVar5;
    return 1;
  }
  return 0;
}


