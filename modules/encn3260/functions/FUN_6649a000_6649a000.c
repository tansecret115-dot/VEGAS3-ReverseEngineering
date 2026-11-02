/* Module: encn3260.dll
   Function: FUN_6649a000
   Address: 6649a000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649a000(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((((iVar1 != DAT_664dc6e0) || (param_2[1] != DAT_664dc6e4)) || (param_2[2] != DAT_664dc6e8)) ||
     (param_2[3] != DAT_664dc6ec)) {
    if (((iVar1 == DAT_664dd910) && (param_2[1] == DAT_664dd914)) &&
       ((param_2[2] == DAT_664dd918 && (param_2[3] == DAT_664dd91c)))) {
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


