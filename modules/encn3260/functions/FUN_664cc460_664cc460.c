/* Module: encn3260.dll
   Function: FUN_664cc460
   Address: 664cc460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664cc460(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((((iVar1 == DAT_664dcd20) && (param_2[1] == DAT_664dcd24)) && (param_2[2] == DAT_664dcd28)) &&
     (param_2[3] == DAT_664dcd2c)) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((iVar1 == DAT_664dcd40) && (param_2[1] == DAT_664dcd44)) &&
     ((param_2[2] == DAT_664dcd48 && (param_2[3] == DAT_664dcd4c)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 1);
      return 0;
    }
  }
  else {
    if (((iVar1 != DAT_664dcd70) || (param_2[1] != DAT_664dcd74)) ||
       ((param_2[2] != DAT_664dcd78 || (param_2[3] != DAT_664dcd7c)))) {
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


