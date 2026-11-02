/* Module: sftrans1.dll
   Function: FUN_00463840
   Address: 00463840
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00463840(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  switch(param_2) {
  case 0x4e:
    iVar1 = FUN_00463650(param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_0045fcc0(param_1,param_2,param_3,param_4);
      return iVar1;
    }
    break;
  default:
    iVar1 = FUN_0045fcc0(param_1,param_2,param_3,param_4);
    break;
  case 0x110:
    FUN_00463610();
    return 1;
  case 0x111:
    iVar1 = FUN_00463660(param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_0045fcc0(param_1,param_2,param_3,param_4);
      return iVar1;
    }
    break;
  case 0x114:
    iVar1 = FUN_00463740(param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_0045fcc0(param_1,param_2,param_3,param_4);
      return iVar1;
    }
  }
  return iVar1;
}


