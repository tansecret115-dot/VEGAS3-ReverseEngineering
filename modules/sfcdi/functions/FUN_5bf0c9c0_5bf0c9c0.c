/* Module: sfcdi.dll
   Function: FUN_5bf0c9c0
   Address: 5bf0c9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf0c9c0(byte *param_1,byte *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  param_2[0x58] = 0xff;
  param_2[0x59] = 0xff;
  param_2[0x5a] = 0xff;
  param_2[0x5b] = 0xff;
  uVar1 = DAT_5bf630e8;
  if (param_3 != 0) {
    if (param_3 == 1) {
      *(undefined4 *)(param_2 + 0x54) = DAT_5bf630ec;
      goto LAB_5bf0ca00;
    }
    uVar1 = DAT_5bf630f4;
    if (param_3 == 2) {
      *(undefined4 *)(param_2 + 0x54) = DAT_5bf630f0;
      goto LAB_5bf0ca00;
    }
  }
  *(undefined4 *)(param_2 + 0x54) = uVar1;
LAB_5bf0ca00:
  if ((*(int *)(param_1 + 0x14) == 0) || (*(uint *)(param_1 + 0x10) < *(uint *)(param_2 + 0x4c))) {
    iVar3 = -0x7fffbffd;
  }
  else {
    uVar2 = *(uint *)(param_2 + 4);
    if ((uVar2 == 0) && ((param_2[8] < 0x20 || (uVar2 = 10, 0xbf < param_2[8])))) {
      uVar2 = 6;
    }
    if ((*param_1 & 1) == 0) {
      iVar3 = FUN_5bf0c7c0(param_1,param_2,uVar2);
    }
    else {
      iVar3 = FUN_5bf0c620((int)param_1,param_2,uVar2);
    }
    if (-1 < iVar3) {
      return 0;
    }
    if ((param_2[0x59] & 2) != 0) {
      return -0x7ffb1f2d;
    }
    if ((param_2[0x59] & 8) != 0) {
      return -0x7ffb1f2e;
    }
  }
  return iVar3;
}


