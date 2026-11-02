/* Module: pngu3266.dll
   Function: FUN_6061aab0
   Address: 6061aab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6061aab0(int *param_1,int *param_2,uint *param_3)

{
  if ((((*param_2 == DAT_6062bd38) && (param_2[1] == DAT_6062bd3c)) && (param_2[2] == DAT_6062bd40))
     && (param_2[3] == DAT_6062bd44)) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (uint)(param_1 + -2);
    return 0;
  }
  if (((*param_2 == DAT_6062bee8) && (param_2[1] == DAT_6062beec)) &&
     ((param_2[2] == DAT_6062bef0 && (param_2[3] == DAT_6062bef4)))) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = -(uint)(param_1 != (int *)0x8) & (uint)param_1;
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}


