/* Module: sfxpfx2.dll
   Function: FUN_5c8b4a30
   Address: 5c8b4a30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c8b4a30(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  SHORT SVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x10);
  if ((param_5 == 0) && (param_5 = ((iVar1 - iVar2) + 5) / 10, param_5 == 0)) {
    param_5 = 1;
  }
  SVar3 = GetKeyState(0x11);
  if (SVar3 < 0) {
    param_5 = param_5 * 10;
  }
  switch(param_2) {
  case 0:
    param_3 = param_3 + param_4;
    break;
  case 1:
    param_3 = param_3 - param_4;
    break;
  case 2:
    param_3 = param_3 + param_5;
    break;
  case 3:
    param_3 = param_3 - param_5;
    break;
  default:
    break;
  case 6:
    SVar3 = GetKeyState(0x11);
    param_3 = iVar1;
    if (((-1 < SVar3) && (0 < iVar1)) && (iVar2 < 0)) {
      param_3 = 0;
    }
    break;
  case 7:
    param_3 = iVar2;
    goto LAB_5c8b4ab5;
  }
  if (param_3 < iVar2) {
    return iVar2;
  }
LAB_5c8b4ab5:
  if (iVar1 < param_3) {
    param_3 = iVar1;
  }
  return param_3;
}


