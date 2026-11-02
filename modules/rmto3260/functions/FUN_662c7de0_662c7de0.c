/* Module: rmto3260.dll
   Function: FUN_662c7de0
   Address: 662c7de0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c7de0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  iVar1 = *param_2;
  if ((((DAT_663064a8 == iVar1) && (DAT_663064ac == param_2[1])) && (DAT_663064b0 == param_2[2])) &&
     (DAT_663064b4 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((DAT_663069f8 == iVar1) && (DAT_663069fc == param_2[1])) &&
     ((DAT_66306a00 == param_2[2] && (DAT_66306a04 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  else if (((DAT_66306a08 == iVar1) && (DAT_66306a0c == param_2[1])) &&
          ((DAT_66306a10 == param_2[2] && (DAT_66306a14 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  else {
    if ((((DAT_66306af8 != iVar1) || (DAT_66306afc != param_2[1])) || (DAT_66306b00 != param_2[2]))
       || (DAT_66306b04 != param_2[3])) {
      *param_3 = 0;
      return 0x80004002;
    }
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 5);
      return 0;
    }
  }
  *param_3 = 0;
  return 0;
}


