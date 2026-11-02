/* Module: pngu3266.dll
   Function: FUN_60620ea0
   Address: 60620ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_60620ea0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  iVar1 = *param_2;
  if ((((DAT_6062bd38 == iVar1) && (DAT_6062bd3c == param_2[1])) && (DAT_6062bd40 == param_2[2])) &&
     (DAT_6062bd44 == param_2[3])) {
    (**(code **)(*(int *)(param_1 + -8) + 4))(param_1 + -8);
    *param_3 = param_1;
    return 0;
  }
  if (((DAT_6062c9c8 == iVar1) && (DAT_6062c9cc == param_2[1])) &&
     ((DAT_6062c9d0 == param_2[2] && (DAT_6062c9d4 == param_2[3])))) {
    (**(code **)(*(int *)(param_1 + -8) + 4))(param_1 + -8);
    *param_3 = param_1 + -8;
    return 0;
  }
  if (((DAT_6062c778 == iVar1) && (DAT_6062c77c == param_2[1])) &&
     ((DAT_6062c780 == param_2[2] && (DAT_6062c784 == param_2[3])))) {
    (**(code **)(*(int *)(param_1 + -8) + 4))(param_1 + -8);
    if (param_1 + -8 != 0) {
      *param_3 = param_1 + -4;
      return 0;
    }
    *param_3 = 0;
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}


