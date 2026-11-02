/* Module: vidcap30.exe
   Function: FUN_0043fb80
   Address: 0043fb80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043fb80(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                int param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = CONCAT44(param_6,param_5);
  if (param_4 != 2) {
    if (param_4 == 3) {
      return 1;
    }
    if (param_4 == 0x2a) goto switchD_0043fc2a_switchD;
    switch(param_3) {
    case 0x1db:
      uVar2 = CONCAT44(-(param_6 + (uint)(param_5 != 0)),-param_5);
      goto LAB_0043fbbe;
    case 0x1dc:
      uVar4 = 0xffffffff;
      uVar3 = 0xfffffffe;
      break;
    case 0x1dd:
      goto LAB_0043fbbe;
    case 0x1de:
      uVar4 = 0;
      uVar3 = 2;
      break;
    default:
      goto switchD_0043fbad_default;
    }
    uVar2 = __alldiv(param_5,param_6,uVar3,uVar4);
LAB_0043fbbe:
    iVar1 = FUN_00425060(param_2,uVar2);
    if (iVar1 < 0) {
      return iVar1;
    }
    FUN_0043aea0(param_1);
    return iVar1;
  }
switchD_0043fc2a_switchD:
  switch(param_3) {
  case 0x1db:
    uVar2 = CONCAT44(-(param_6 + (uint)(param_5 != 0)),-param_5);
    goto LAB_0043fc6a;
  case 0x1dc:
    uVar4 = 0xffffffff;
    uVar3 = 0xfffffffe;
    break;
  case 0x1dd:
    goto LAB_0043fc6a;
  case 0x1de:
    uVar4 = 0;
    uVar3 = 2;
    break;
  default:
switchD_0043fbad_default:
    return -0x7fffbfff;
  }
  uVar2 = __alldiv(param_5,param_6,uVar3,uVar4);
LAB_0043fc6a:
  iVar1 = FUN_00425060(param_2,uVar2);
  if (-1 < iVar1) {
    FUN_0043aea0(param_1);
  }
  return iVar1;
}


