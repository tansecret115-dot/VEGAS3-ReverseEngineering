/* Module: mcplug.dll
   Function: entry
   Address: 0047381d
   Source: Ghidra pseudocode (Stage 10 batch) */


int entry(HMODULE param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2;
  iVar4 = DAT_004ae474;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_00473865;
    if ((DAT_004ae484 != (code *)0x0) &&
       (iVar4 = (*DAT_004ae484)(param_1,param_2,param_3), iVar4 == 0)) {
      return 0;
    }
    iVar4 = FUN_00473772(param_1,param_2);
  }
  if (iVar4 == 0) {
    return 0;
  }
LAB_00473865:
  bVar2 = FUN_004012c0(param_1,param_2);
  iVar4 = CONCAT31(extraout_var,bVar2);
  if (param_2 == 1) {
    if (iVar4 != 0) {
      return iVar4;
    }
    FUN_00473772(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar4;
  }
  iVar3 = FUN_00473772(param_1,param_2);
  param_2 = iVar4;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_004ae484 != (code *)0x0) {
      iVar4 = (*DAT_004ae484)(param_1,iVar1,param_3);
      return iVar4;
    }
    return param_2;
  }
  return 0;
}


