/* Module: vegas30k.dll
   Function: entry
   Address: 010021e7
   Source: Ghidra pseudocode (Stage 10 batch) */


int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_01209148;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_0100222f;
    if ((DAT_012b0b74 != (code *)0x0) &&
       (iVar2 = (*DAT_012b0b74)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_0100213c(param_1,param_2,param_3);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_0100222f:
  iVar2 = FUN_01001bc0(param_1,param_2,param_3);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_0100213c(param_1,0,param_3);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_0100213c(param_1,param_2,param_3);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_012b0b74 != (code *)0x0) {
      iVar2 = (*DAT_012b0b74)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}


