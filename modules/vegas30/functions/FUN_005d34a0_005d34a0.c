/* Module: vegas30.exe
   Function: FUN_005d34a0
   Address: 005d34a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005d34a0(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_568;
  undefined1 local_564 [296];
  uint auStack_43c [128];
  uint auStack_23c [128];
  uint local_3c;
  
  iVar1 = FUN_005d26e0(param_1,local_564);
  if (iVar1 < 0) {
    return iVar1;
  }
  switch(param_4) {
  case 2:
    if ((param_2 != 0) && ((param_3 & 0x80000000) != 0)) {
      return -0x7fff0001;
    }
  case 4:
    auStack_43c[param_2] = param_3;
    uVar3 = 1;
    break;
  default:
    return -0x7fff0001;
  case 5:
    uVar3 = 4;
    auStack_23c[param_2] = param_3;
    break;
  case 7:
    local_3c = param_3;
    param_2 = -1;
    uVar3 = 1;
    param_5 = 0;
    uVar2 = local_568;
    goto LAB_005d3520;
  }
  local_568 = 199;
  uVar2 = 0x18;
LAB_005d3520:
  if (param_5 != 0) {
    FUN_004e9f70(param_1,local_568,0);
    FUN_004ea590(param_1,uVar3,param_2,uVar2);
  }
  iVar1 = FUN_005d2700(param_1,local_564,0,0);
  if (param_5 != 0) {
    if (-1 < iVar1) {
      FUN_004eb2b0(param_1);
    }
    FUN_004ea040(param_1,iVar1 < 0);
  }
  return iVar1;
}


