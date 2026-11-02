/* Module: sfppack2.dll
   Function: entry
   Address: 5cd4d9db
   Source: Ghidra pseudocode (Stage 10 batch) */


int entry(HMODULE param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_5cd764f0;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_5cd4da23;
    if ((DAT_5cd76534 != (code *)0x0) &&
       (iVar2 = (*DAT_5cd76534)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_5cd4d930(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_5cd4da23:
  iVar2 = DllMain(param_1,param_2,param_3);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_5cd4d930(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_5cd4d930(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_5cd76534 != (code *)0x0) {
      iVar2 = (*DAT_5cd76534)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}


