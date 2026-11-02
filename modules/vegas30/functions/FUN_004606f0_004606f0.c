/* Module: vegas30.exe
   Function: FUN_004606f0
   Address: 004606f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004606f0(int param_1,int param_2,undefined4 param_3,int *param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar2 = FUN_005be610(1,0);
  if (iVar2 != 0) {
    if (((*(uint *)(param_1 + 0x10) & 0x80000) == 0) || ((*(uint *)(param_1 + 0x10) & 0x10000) != 0)
       ) {
      iVar4 = 0;
    }
    else {
      iVar4 = 1;
    }
    iVar6 = FUN_005382e0(iVar4);
    if (iVar4 != 0) {
      iVar6 = iVar2 * iVar6 + 1;
    }
    if ((param_2 - iVar6 < 0x29) && (iVar6 = param_2 + -0x29, iVar6 < 0)) {
      iVar6 = 0;
    }
  }
  iVar2 = _SfGetUIFontSize_4(0x6e);
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar5 = uVar1 & 0x40000;
  iVar2 = *(int *)(iVar2 + 4) + 7;
  if ((uVar5 == 0) || ((uVar1 & 0x10000) != 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  if ((uVar5 == 0) || ((uVar1 & 0x10000) != 0)) {
    iVar2 = 0;
  }
  else {
    iVar3 = (param_2 - iVar6) / ((iVar4 + 1) * 2);
    if (iVar3 < iVar2) {
      iVar2 = iVar3;
    }
  }
  iVar4 = ((param_2 - iVar2) - iVar6) / (iVar4 + 1);
  switch(param_3) {
  case 1:
    break;
  case 2:
    if ((uVar5 != 0) && ((uVar1 & 0x10000) == 0)) {
      *param_4 = iVar4;
      *param_5 = iVar2;
      return;
    }
  case 0:
    *param_4 = 0;
    *param_5 = iVar4;
    return;
  case 3:
    *param_4 = param_2 - iVar6;
    *param_5 = iVar6;
    return;
  default:
    *param_4 = 0;
    *param_5 = param_2;
    return;
  }
  if ((uVar5 != 0) && ((uVar1 & 0x10000) == 0)) {
    *param_4 = iVar2 + iVar4;
    *param_5 = iVar4;
    return;
  }
  *param_4 = 0;
  *param_5 = iVar4;
  return;
}


