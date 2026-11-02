/* Module: encn3260.dll
   Function: FUN_6649cfa0
   Address: 6649cfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649cfa0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((((iVar1 != DAT_664dcb00) || (param_2[1] != DAT_664dcb04)) || (param_2[2] != DAT_664dcb08)) ||
     (param_2[3] != DAT_664dcb0c)) {
    if (((iVar1 == DAT_664dcb10) && (param_2[1] == DAT_664dcb14)) &&
       ((param_2[2] == DAT_664dcb18 && (param_2[3] == DAT_664dcb1c)))) {
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 1);
        return 0;
      }
      *param_3 = 0;
      return 0;
    }
    if (((iVar1 != DAT_664dc5d0) || (param_2[1] != DAT_664dc5d4)) ||
       ((param_2[2] != DAT_664dc5d8 || (param_2[3] != DAT_664dc5dc)))) {
      *param_3 = 0;
      return 0x80004002;
    }
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = (int)param_1;
  return 0;
}


