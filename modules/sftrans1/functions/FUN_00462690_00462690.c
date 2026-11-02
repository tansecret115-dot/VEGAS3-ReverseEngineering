/* Module: sftrans1.dll
   Function: FUN_00462690
   Address: 00462690
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00462690(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  switch(param_2) {
  case 0x4e:
    iVar1 = FUN_00461a10(param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_0045fcc0(param_1,param_2,param_3,param_4);
      return iVar1;
    }
    break;
  default:
    iVar1 = FUN_0045fcc0(param_1,param_2,param_3,param_4);
    break;
  case 0x110:
    FUN_00461980();
    return 1;
  case 0x111:
    iVar1 = FUN_00461f10(param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_0045fcc0(param_1,param_2,param_3,param_4);
      return iVar1;
    }
    break;
  case 0x114:
    iVar1 = FUN_004622d0(param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_0045fcc0(param_1,param_2,param_3,param_4);
      return iVar1;
    }
  }
  return iVar1;
}


