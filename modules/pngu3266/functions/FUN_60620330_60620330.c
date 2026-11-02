/* Module: pngu3266.dll
   Function: FUN_60620330
   Address: 60620330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_60620330(int *param_1,int *param_2,undefined4 *param_3)

{
  if (((((*param_2 != DAT_6062bd38) || (param_2[1] != DAT_6062bd3c)) || (param_2[2] != DAT_6062bd40)
       ) || (param_2[3] != DAT_6062bd44)) &&
     (((*param_2 != DAT_6062c778 || (param_2[1] != DAT_6062c77c)) ||
      ((param_2[2] != DAT_6062c780 || (param_2[3] != DAT_6062c784)))))) {
    *param_3 = 0;
    return 0x80004002;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}


