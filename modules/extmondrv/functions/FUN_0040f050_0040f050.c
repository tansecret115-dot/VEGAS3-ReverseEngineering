/* Module: extmondrv.dll
   Function: FUN_0040f050
   Address: 0040f050
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040f050(uint *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  switch(param_2) {
  case 0x60a:
    return param_1[7];
  case 0x60b:
    return param_1[4];
  case 0x60c:
    return param_1[5];
  case 0x60d:
    param_1[4] = (int)(short)param_4;
    param_1[5] = (int)(short)(param_4 >> 0x10);
    break;
  case 0x60e:
    param_1[4] = param_4;
    break;
  case 0x60f:
    param_1[5] = param_4;
    break;
  case 0x610:
    if (param_3 == 0) {
      FUN_0040dd30(param_1,param_4,0);
      return param_1[7];
    }
    uVar4 = param_1[4];
    if (((int)param_4 < (int)uVar4) || (uVar4 = param_1[5], (int)uVar4 < (int)param_4)) {
      param_4 = uVar4;
    }
    iVar2 = FUN_0040bc90(param_1,param_4);
    iVar3 = FUN_0040bc90(param_1,param_1[7]);
    if (iVar3 == iVar2) {
      param_1[7] = param_4;
      return param_4;
    }
    FUN_0040dd30(param_1,param_4,1);
    return param_1[7];
  case 0x611:
    uVar4 = param_1[4];
    if (((int)param_1[4] <= (int)param_4) && (uVar4 = param_1[5], (int)param_4 <= (int)param_1[5]))
    {
      uVar4 = param_4;
    }
    param_1[6] = uVar4;
    return uVar4;
  default:
    goto switchD_0040f06f_caseD_612;
  case 0x61e:
    return CONCAT22((short)param_1[0x12],(short)param_1[0x17]);
  case 0x61f:
    param_1[3] = (param_4 & 1) << 9 | param_1[3] & 0xfffffdff;
    if (param_3 != 0) {
      InvalidateRect((HWND)param_1[10],(RECT *)0x0,1);
    }
    return (int)(param_1[3] << 0x16) >> 0x1f;
  case 0x620:
    param_1[3] = (param_4 & 1) << 10 | param_1[3] & 0xfffffbff;
    if (param_3 != 0) {
      InvalidateRect((HWND)param_1[10],(RECT *)0x0,1);
    }
    return (int)(param_1[3] << 0x15) >> 0x1f;
  case 0x627:
    param_1[0x23] = param_4;
    return 0;
  case 0x628:
    return param_1[0x23];
  case 0x629:
    param_1[0x31] = param_4;
    return 0;
  case 0x62a:
    return param_1[0x31];
  }
  uVar4 = param_1[4];
  if (((int)uVar4 < 0) && (uVar5 = param_1[5], -1 < (int)uVar5)) {
    uVar4 = ~-(uint)(uVar5 != 0) & uVar4;
  }
  else {
    uVar5 = param_1[5];
    uVar4 = (int)(uVar5 + uVar4) / 2;
  }
  param_1[6] = uVar4;
  if ((*param_1 & 0x80) != 0) {
    iVar2 = FUN_0040bd60(uVar5,*param_1 & 0x40);
    uVar4 = param_1[5];
    uVar1 = param_1[4];
    iVar3 = FUN_0040bd60(uVar1,*param_1 & 0x40);
    if (iVar2 - iVar3 < 1) {
      uVar6 = 1;
    }
    else {
      iVar3 = FUN_0040bd60(param_1[4],*param_1 & 0x40);
      uVar6 = iVar2 - iVar3;
    }
    uVar5 = param_1[5];
    param_1[9] = uVar6;
    param_1[8] = uVar5 - (int)(((longlong)iVar2 * (longlong)(int)(uVar4 - uVar1)) /
                              (longlong)(int)uVar6);
  }
  uVar4 = (uint)((int)(uVar5 - param_1[4]) <= (int)param_1[0x17]) << 0xf | param_1[3] & 0xffff7fff;
  param_1[3] = uVar4;
  if ((*param_1 & 4) != 0) {
    param_1[3] = uVar4 | 0x8000;
  }
  FUN_0040dd30(param_1,param_1[7],param_3);
switchD_0040f06f_caseD_612:
  return 0;
}


