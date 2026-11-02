/* Module: sftrkfx1.dll
   Function: entry
   Address: 5cc02021
   Source: Ghidra pseudocode (Stage 10 batch) */


int entry(HMODULE param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_5cc17db0;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_5cc02069;
    if ((DAT_5cc17df4 != (code *)0x0) &&
       (iVar2 = (*DAT_5cc17df4)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_5cc01f76(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_5cc02069:
  iVar2 = DllMain(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_5cc01f76(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_5cc01f76(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_5cc17df4 != (code *)0x0) {
      iVar2 = (*DAT_5cc17df4)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}


