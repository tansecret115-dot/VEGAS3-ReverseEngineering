/* Module: rmbe3260.dll
   Function: FUN_660256d0
   Address: 660256d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660256d0(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 == (int *)0x0) {
    return -0x7ffbfff9;
  }
  uVar2 = 0;
  iVar3 = 0;
  if (param_2 == 0) {
    switch(param_3) {
    case (int *)0x0:
      uVar2 = 4;
      break;
    case (int *)0x1:
      uVar2 = 5;
      break;
    case (int *)0x2:
      uVar2 = 6;
      break;
    case (int *)0x3:
      uVar2 = 7;
      break;
    default:
      goto switchD_66025700_default;
    }
    goto LAB_6602577b;
  }
  if (param_2 == 1) {
    switch(param_3) {
    case (int *)0x0:
      uVar2 = 0;
      break;
    case (int *)0x1:
      uVar2 = 1;
      break;
    case (int *)0x2:
      uVar2 = 2;
      break;
    case (int *)0x3:
      uVar2 = 3;
      break;
    default:
      goto switchD_66025700_default;
    }
    goto LAB_6602577b;
  }
  if (param_2 == 2) {
    switch(param_3) {
    case (int *)0x0:
      uVar2 = 8;
      break;
    case (int *)0x1:
      uVar2 = 9;
      break;
    case (int *)0x2:
      uVar2 = 10;
      break;
    case (int *)0x3:
      uVar2 = 0xb;
      break;
    default:
      goto switchD_66025700_default;
    }
  }
  else {
switchD_66025700_default:
    iVar3 = -0x7ff8ffa9;
  }
LAB_6602577b:
  param_3 = (int *)0x0;
  if ((-1 < iVar3) && (iVar3 = (**(code **)(*piVar1 + 0x10))(piVar1,uVar2,&param_3), -1 < iVar3)) {
    iVar3 = (**(code **)*param_3)(param_3,&DAT_66065c48,param_4);
  }
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))(param_3);
  }
  return iVar3;
}


