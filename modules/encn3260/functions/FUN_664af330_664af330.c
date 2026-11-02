/* Module: encn3260.dll
   Function: FUN_664af330
   Address: 664af330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664af330(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((((iVar1 != DAT_664dd1a0) || (param_2[1] != DAT_664dd1a4)) || (param_2[2] != DAT_664dd1a8)) ||
     (param_2[3] != DAT_664dd1ac)) {
    if (((iVar1 == DAT_664dda90) && (param_2[1] == DAT_664dda94)) &&
       ((param_2[2] == DAT_664dda98 && (param_2[3] == DAT_664dda9c)))) {
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


