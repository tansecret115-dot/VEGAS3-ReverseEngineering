/* Module: enlv3260.dll
   Function: FUN_661d1fc0
   Address: 661d1fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_661d1fc0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (((((iVar1 == DAT_661d51d0) && (param_2[1] == DAT_661d51d4)) && (param_2[2] == DAT_661d51d8))
      && (param_2[3] == DAT_661d51dc)) ||
     (((iVar1 == DAT_661d5750 && (param_2[1] == DAT_661d5754)) &&
      ((param_2[2] == DAT_661d5758 && (param_2[3] == DAT_661d575c)))))) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((iVar1 == DAT_661d5290) && (param_2[1] == DAT_661d5294)) &&
     ((param_2[2] == DAT_661d5298 && (param_2[3] == DAT_661d529c)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 1);
      return 0;
    }
  }
  else if ((((iVar1 == DAT_661d52a0) && (param_2[1] == DAT_661d52a4)) &&
           (param_2[2] == DAT_661d52a8)) && (param_2[3] == DAT_661d52ac)) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 3);
      return 0;
    }
  }
  else if (((iVar1 == DAT_661d5540) && (param_2[1] == DAT_661d5544)) &&
          ((param_2[2] == DAT_661d5548 && (param_2[3] == DAT_661d554c)))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 2);
      return 0;
    }
  }
  else {
    if (((iVar1 != DAT_661d52d0) || (param_2[1] != DAT_661d52d4)) ||
       ((param_2[2] != DAT_661d52d8 || (param_2[3] != DAT_661d52dc)))) {
      *param_3 = 0;
      return 0x80004002;
    }
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  *param_3 = 0;
  return 0;
}


