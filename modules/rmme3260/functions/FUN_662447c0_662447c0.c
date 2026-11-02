/* Module: rmme3260.dll
   Function: FUN_662447c0
   Address: 662447c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662447c0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((((iVar1 != DAT_6626ad58) || (param_2[1] != DAT_6626ad5c)) || (param_2[2] != DAT_6626ad60)) ||
     (param_2[3] != DAT_6626ad64)) {
    if (((iVar1 == DAT_6626ad68) && (param_2[1] == DAT_6626ad6c)) &&
       ((param_2[2] == DAT_6626ad70 && (param_2[3] == DAT_6626ad74)))) {
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 1);
        return 0;
      }
      *param_3 = 0;
      return 0;
    }
    if (((iVar1 != DAT_6626a598) || (param_2[1] != DAT_6626a59c)) ||
       ((param_2[2] != DAT_6626a5a0 || (param_2[3] != DAT_6626a5a4)))) {
      *param_3 = 0;
      return 0x80004002;
    }
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = (int)param_1;
  return 0;
}


