/* Module: pngu3266.dll
   Function: FUN_60620970
   Address: 60620970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_60620970(int param_1,int *param_2,int *param_3)

{
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  if ((((DAT_6062bd38 == *param_2) && (DAT_6062bd3c == param_2[1])) && (DAT_6062bd40 == param_2[2]))
     && (DAT_6062bd44 == param_2[3])) {
    (**(code **)(*(int *)(param_1 + -4) + 4))(param_1 + -4);
    *param_3 = param_1;
    return 0;
  }
  if (((DAT_6062c9d8 == *param_2) && (DAT_6062c9dc == param_2[1])) &&
     ((DAT_6062c9e0 == param_2[2] && (DAT_6062c9e4 == param_2[3])))) {
    (**(code **)(*(int *)(param_1 + -4) + 4))(param_1 + -4);
    *param_3 = param_1 + -4;
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}


