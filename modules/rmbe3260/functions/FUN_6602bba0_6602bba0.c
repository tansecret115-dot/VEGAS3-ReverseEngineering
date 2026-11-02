/* Module: rmbe3260.dll
   Function: FUN_6602bba0
   Address: 6602bba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6602bba0(int param_1,int *param_2,int *param_3)

{
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  if ((((DAT_66064ee8 == *param_2) && (DAT_66064eec == param_2[1])) && (DAT_66064ef0 == param_2[2]))
     && (DAT_66064ef4 == param_2[3])) {
    (**(code **)(*(int *)(param_1 + -0xc) + 4))(param_1 + -0xc);
    *param_3 = param_1;
    return 0;
  }
  if (((DAT_66066278 == *param_2) && (DAT_6606627c == param_2[1])) &&
     ((DAT_66066280 == param_2[2] && (DAT_66066284 == param_2[3])))) {
    (**(code **)(*(int *)(param_1 + -0xc) + 4))(param_1 + -0xc);
    *param_3 = param_1 + -0xc;
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}


