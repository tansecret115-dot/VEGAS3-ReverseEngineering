/* Module: rmbe3260.dll
   Function: FUN_66027750
   Address: 66027750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66027750(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  iVar1 = *param_2;
  if ((((DAT_66065998 == iVar1) && (DAT_6606599c == param_2[1])) && (DAT_660659a0 == param_2[2])) &&
     (DAT_660659a4 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0x23);
      return 0;
    }
  }
  else if (((DAT_660659a8 == iVar1) && (DAT_660659ac == param_2[1])) &&
          ((DAT_660659b0 == param_2[2] && (DAT_660659b4 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0x24);
      return 0;
    }
  }
  else if (((DAT_660661f8 == iVar1) && (DAT_660661fc == param_2[1])) &&
          ((DAT_66066200 == param_2[2] && (DAT_66066204 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0x25);
      return 0;
    }
  }
  else if ((((DAT_660659c8 == iVar1) && (DAT_660659cc == param_2[1])) &&
           (DAT_660659d0 == param_2[2])) && (DAT_660659d4 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0x27);
      return 0;
    }
  }
  else {
    if (((DAT_660659d8 != iVar1) || (DAT_660659dc != param_2[1])) ||
       ((DAT_660659e0 != param_2[2] || (DAT_660659e4 != param_2[3])))) {
      uVar2 = FUN_66014d40(param_1,param_2,param_3);
      return uVar2;
    }
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 0x26);
      return 0;
    }
  }
  *param_3 = 0;
  return 0;
}


