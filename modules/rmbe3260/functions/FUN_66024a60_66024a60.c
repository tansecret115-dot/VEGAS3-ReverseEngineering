/* Module: rmbe3260.dll
   Function: FUN_66024a60
   Address: 66024a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66024a60(int *param_1,int *param_2,int *param_3)

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
  if (((DAT_66065b08 == iVar1) && (DAT_66065b0c == param_2[1])) &&
     ((DAT_66065b10 == param_2[2] && (DAT_66065b14 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  else {
    if (((DAT_66065b28 != iVar1) || (DAT_66065b2c != param_2[1])) ||
       ((DAT_66065b30 != param_2[2] || (DAT_66065b34 != param_2[3])))) {
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


