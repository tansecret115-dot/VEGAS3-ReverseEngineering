/* Module: rmme3260.dll
   Function: FUN_66260380
   Address: 66260380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66260380(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((((iVar1 == DAT_6626ab18) && (param_2[1] == DAT_6626ab1c)) && (param_2[2] == DAT_6626ab20)) &&
     (param_2[3] == DAT_6626ab24)) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((iVar1 == DAT_6626ab38) && (param_2[1] == DAT_6626ab3c)) &&
     ((param_2[2] == DAT_6626ab40 && (param_2[3] == DAT_6626ab44)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 1);
      return 0;
    }
  }
  else {
    if (((iVar1 != DAT_6626ab68) || (param_2[1] != DAT_6626ab6c)) ||
       ((param_2[2] != DAT_6626ab70 || (param_2[3] != DAT_6626ab74)))) {
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


