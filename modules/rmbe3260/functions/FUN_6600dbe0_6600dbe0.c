/* Module: rmbe3260.dll
   Function: FUN_6600dbe0
   Address: 6600dbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600dbe0(int *param_1,int *param_2,int *param_3)

{
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  if ((((DAT_66064ee8 == *param_2) && (DAT_66064eec == param_2[1])) && (DAT_66064ef0 == param_2[2]))
     && (DAT_66064ef4 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((DAT_66065e78 == *param_2) && (DAT_66065e7c == param_2[1])) &&
     ((DAT_66065e80 == param_2[2] && (DAT_66065e84 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
    *param_3 = 0;
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}


