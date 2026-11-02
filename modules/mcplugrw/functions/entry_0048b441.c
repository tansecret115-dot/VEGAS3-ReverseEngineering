/* Module: mcplugrw.dll
   Function: entry
   Address: 0048b441
   Source: Ghidra pseudocode (Stage 10 batch) */


int entry(HMODULE param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2;
  iVar4 = DAT_004cee28;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_0048b489;
    if ((DAT_004cee38 != (code *)0x0) &&
       (iVar4 = (*DAT_004cee38)(param_1,param_2,param_3), iVar4 == 0)) {
      return 0;
    }
    iVar4 = FUN_0048b396(param_1,param_2);
  }
  if (iVar4 == 0) {
    return 0;
  }
LAB_0048b489:
  bVar2 = FUN_00401000(param_1,param_2);
  iVar4 = CONCAT31(extraout_var,bVar2);
  if (param_2 == 1) {
    if (iVar4 != 0) {
      return iVar4;
    }
    FUN_0048b396(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar4;
  }
  iVar3 = FUN_0048b396(param_1,param_2);
  param_2 = iVar4;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_004cee38 != (code *)0x0) {
      iVar4 = (*DAT_004cee38)(param_1,iVar1,param_3);
      return iVar4;
    }
    return param_2;
  }
  return 0;
}


