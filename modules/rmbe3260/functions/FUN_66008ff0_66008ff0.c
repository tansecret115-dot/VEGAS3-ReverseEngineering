/* Module: rmbe3260.dll
   Function: FUN_66008ff0
   Address: 66008ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66008ff0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  iVar1 = *param_2;
  if ((((DAT_66064ee8 == iVar1) && (DAT_66064eec == param_2[1])) && (DAT_66064ef0 == param_2[2])) &&
     (DAT_66064ef4 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((DAT_660662d8 == iVar1) && (DAT_660662dc == param_2[1])) &&
     ((DAT_660662e0 == param_2[2] && (DAT_660662e4 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  else {
    if (((DAT_660662c8 != iVar1) || (DAT_660662cc != param_2[1])) ||
       ((DAT_660662d0 != param_2[2] || (DAT_660662d4 != param_2[3])))) {
      iVar1 = (**(code **)(*param_1 + 0x24))(param_1,param_2,param_3);
      if (-1 < iVar1) {
        return 0;
      }
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


