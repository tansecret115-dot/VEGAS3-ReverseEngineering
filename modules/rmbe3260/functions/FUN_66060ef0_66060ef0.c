/* Module: rmbe3260.dll
   Function: FUN_66060ef0
   Address: 66060ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66060ef0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((((iVar1 != DAT_66065508) || (param_2[1] != DAT_6606550c)) || (param_2[2] != DAT_66065510)) ||
     (param_2[3] != DAT_66065514)) {
    if (((iVar1 == DAT_66065528) && (param_2[1] == DAT_6606552c)) &&
       ((param_2[2] == DAT_66065530 && (param_2[3] == DAT_66065534)))) {
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


