/* Module: rmme3260.dll
   Function: FUN_66255770
   Address: 66255770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66255770(int param_1,int *param_2,int *param_3)

{
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  if ((((DAT_6626a598 == *param_2) && (DAT_6626a59c == param_2[1])) && (DAT_6626a5a0 == param_2[2]))
     && (DAT_6626a5a4 == param_2[3])) {
    (**(code **)(*(int *)(param_1 + -4) + 4))(param_1 + -4);
    *param_3 = param_1;
    return 0;
  }
  if (((DAT_6626b028 == *param_2) && (DAT_6626b02c == param_2[1])) &&
     ((DAT_6626b030 == param_2[2] && (DAT_6626b034 == param_2[3])))) {
    (**(code **)(*(int *)(param_1 + -4) + 4))(param_1 + -4);
    *param_3 = param_1 + -4;
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}


