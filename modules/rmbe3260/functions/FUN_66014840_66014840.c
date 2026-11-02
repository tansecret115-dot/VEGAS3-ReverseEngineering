/* Module: rmbe3260.dll
   Function: FUN_66014840
   Address: 66014840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66014840(int *param_1,int *param_2,undefined4 *param_3)

{
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if ((((DAT_66064ee8 == *param_2) && (DAT_66064eec == param_2[1])) && (DAT_66064ef0 == param_2[2]))
     && (DAT_66064ef4 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = param_1;
    return 0;
  }
  if (((DAT_66065978 == *param_2) && (DAT_6606597c == param_2[1])) &&
     ((DAT_66065980 == param_2[2] && (DAT_66065984 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = param_1;
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}


