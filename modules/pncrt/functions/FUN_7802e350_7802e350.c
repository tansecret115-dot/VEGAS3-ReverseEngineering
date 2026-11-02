/* Module: pncrt.dll
   Function: FUN_7802e350
   Address: 7802e350
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_7802e350(int *param_1,int param_2)

{
  int iVar1;
  tm *ptVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = param_1;
  uVar3 = param_1[5];
  if ((int)uVar3 < 0x45) {
    return -1;
  }
  if (0x8b < (int)uVar3) {
    return -1;
  }
  iVar4 = param_1[4];
  if ((iVar4 < 0) || (0xb < iVar4)) {
    uVar3 = uVar3 + iVar4 / 0xc;
    iVar4 = iVar4 % 0xc;
    param_1[4] = iVar4;
    if (iVar4 < 0) {
      uVar3 = uVar3 - 1;
      param_1[4] = iVar4 + 0xc;
    }
    if ((int)uVar3 < 0x45) {
      return -1;
    }
    if (0x8b < (int)uVar3) {
      return -1;
    }
  }
  iVar4 = (&DAT_78040578)[param_1[4]];
  if (((uVar3 & 3) == 0) && (1 < param_1[4])) {
    iVar4 = iVar4 + 1;
  }
  iVar1 = param_1[3];
  iVar5 = uVar3 * 0x16d + -0x63df + iVar4 + ((int)(uVar3 - 1) >> 2);
  iVar4 = iVar5 + iVar1;
  if (iVar5 < 0) {
LAB_7802e400:
    if ((iVar1 < 0) && (-1 < iVar4)) {
      return -1;
    }
  }
  else {
    if ((-1 < iVar1) && (iVar4 < 0)) {
      return -1;
    }
    if (iVar5 < 0) goto LAB_7802e400;
  }
  iVar5 = iVar4 * 0x18;
  if (iVar4 != 0 && iVar5 / iVar4 != 0x18) {
    return -1;
  }
  iVar1 = param_1[2];
  iVar4 = iVar1 + iVar5;
  if (iVar5 < 0) {
LAB_7802e44b:
    if ((iVar1 < 0) && (-1 < iVar4)) {
      return -1;
    }
  }
  else {
    if ((-1 < iVar1) && (iVar4 < 0)) {
      return -1;
    }
    if (iVar5 < 0) goto LAB_7802e44b;
  }
  iVar5 = iVar4 * 0x3c;
  if (iVar4 != 0 && iVar5 / iVar4 != 0x3c) {
    return -1;
  }
  iVar1 = param_1[1];
  iVar4 = iVar1 + iVar5;
  if (iVar5 < 0) {
LAB_7802e49a:
    if ((iVar1 < 0) && (-1 < iVar4)) {
      return -1;
    }
  }
  else {
    if ((-1 < iVar1) && (iVar4 < 0)) {
      return -1;
    }
    if (iVar5 < 0) goto LAB_7802e49a;
  }
  iVar5 = iVar4 * 0x3c;
  if (iVar4 != 0 && iVar5 / iVar4 != 0x3c) {
    return -1;
  }
  iVar4 = *param_1;
  param_1 = (int *)(iVar4 + iVar5);
  if (-1 < iVar5) {
    if ((-1 < iVar4) && ((int)param_1 < 0)) {
      return -1;
    }
    if (-1 < iVar5) goto LAB_7802e4f8;
  }
  if ((iVar4 < 0) && (-1 < (int)param_1)) {
    return -1;
  }
LAB_7802e4f8:
  if (param_2 == 0) {
    ptVar2 = gmtime((time_t *)&param_1);
    if (ptVar2 == (tm *)0x0) {
      return -1;
    }
  }
  else {
    FUN_78015b30();
    param_1 = (int *)((int)param_1 + _timezone);
    ptVar2 = localtime((time_t *)&param_1);
    if (ptVar2 == (tm *)0x0) {
      return -1;
    }
    if ((0 < piVar6[8]) || ((piVar6[8] < 0 && (0 < ptVar2->tm_isdst)))) {
      param_1 = (int *)((int)param_1 + _dstbias);
      ptVar2 = localtime((time_t *)&param_1);
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar6 = ptVar2->tm_sec;
        ptVar2 = (tm *)&ptVar2->tm_min;
        piVar6 = piVar6 + 1;
      }
      return (int)param_1;
    }
  }
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = ptVar2->tm_sec;
    ptVar2 = (tm *)&ptVar2->tm_min;
    piVar6 = piVar6 + 1;
  }
  return (int)param_1;
}


