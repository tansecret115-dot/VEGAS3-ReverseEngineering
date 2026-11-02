/* Module: sdpp3260.dll
   Function: FUN_100010d0
   Address: 100010d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_100010d0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (((((iVar1 == DAT_10008080) && (param_2[1] == DAT_10008084)) && (param_2[2] == DAT_10008088))
      && (param_2[3] == DAT_1000808c)) ||
     (((iVar1 == DAT_10008130 && (param_2[1] == DAT_10008134)) &&
      ((param_2[2] == DAT_10008138 && (param_2[3] == DAT_1000813c)))))) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((iVar1 == DAT_10008370) && (param_2[1] == DAT_10008374)) &&
     ((param_2[2] == DAT_10008378 && (param_2[3] == DAT_1000837c)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 1);
      return 0;
    }
  }
  else {
    if ((((iVar1 != DAT_10008380) || (param_2[1] != DAT_10008384)) || (param_2[2] != DAT_10008388))
       || (param_2[3] != DAT_1000838c)) {
      *param_3 = 0;
      return 0x80004002;
    }
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 2);
      return 0;
    }
  }
  *param_3 = 0;
  return 0;
}


