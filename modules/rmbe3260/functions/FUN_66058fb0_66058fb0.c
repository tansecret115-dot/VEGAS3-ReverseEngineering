/* Module: rmbe3260.dll
   Function: FUN_66058fb0
   Address: 66058fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66058fb0(int *param_1,int *param_2,int *param_3)

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
  if (((DAT_66065bd8 == iVar1) && (DAT_66065bdc == param_2[1])) &&
     ((DAT_66065be0 == param_2[2] && (DAT_66065be4 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  else {
    if (((DAT_66065bf8 != iVar1) || (DAT_66065bfc != param_2[1])) ||
       ((DAT_66065c00 != param_2[2] || (DAT_66065c04 != param_2[3])))) {
      *param_3 = 0;
      return 0x80004002;
    }
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  *param_3 = 0;
  return 0;
}


