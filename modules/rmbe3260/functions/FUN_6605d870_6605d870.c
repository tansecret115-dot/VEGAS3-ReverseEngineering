/* Module: rmbe3260.dll
   Function: FUN_6605d870
   Address: 6605d870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6605d870(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((((iVar1 != DAT_66064f78) || (param_2[1] != DAT_66064f7c)) || (param_2[2] != DAT_66064f80)) ||
     (param_2[3] != DAT_66064f84)) {
    if (((iVar1 == DAT_66064f88) && (param_2[1] == DAT_66064f8c)) &&
       ((param_2[2] == DAT_66064f90 && (param_2[3] == DAT_66064f94)))) {
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 1);
        return 0;
      }
      *param_3 = 0;
      return 0;
    }
    if (((iVar1 != DAT_66064ee8) || (param_2[1] != DAT_66064eec)) ||
       ((param_2[2] != DAT_66064ef0 || (param_2[3] != DAT_66064ef4)))) {
      *param_3 = 0;
      return 0x80004002;
    }
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = (int)param_1;
  return 0;
}


