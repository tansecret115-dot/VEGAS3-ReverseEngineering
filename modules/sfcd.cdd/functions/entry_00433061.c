/* Module: sfcd.cdd
   Function: entry
   Address: 00433061
   Source: Ghidra pseudocode (Stage 10 batch) */


uint entry(HMODULE param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2;
  iVar2 = DAT_00446e58;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_004330a9;
    if ((DAT_00446e68 != (code *)0x0) &&
       (iVar2 = (*DAT_00446e68)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_00432fb6(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_004330a9:
  uVar1 = FUN_00401190(param_1,param_2);
  if (param_2 == 1) {
    if (uVar1 != 0) {
      return uVar1;
    }
    FUN_00432fb6(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return uVar1;
  }
  iVar2 = FUN_00432fb6(param_1,param_2);
  param_2 = uVar1;
  if (iVar2 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_00446e68 != (code *)0x0) {
      uVar3 = (*DAT_00446e68)(param_1,uVar3,param_3);
      return uVar3;
    }
    return param_2;
  }
  return 0;
}


