/* Module: rmto3260.dll
   Function: FUN_662d2db0
   Address: 662d2db0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662d2db0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  iVar1 = *param_2;
  if ((((DAT_663064a8 == iVar1) && (DAT_663064ac == param_2[1])) && (DAT_663064b0 == param_2[2])) &&
     (DAT_663064b4 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((DAT_66306a28 == iVar1) && (DAT_66306a2c == param_2[1])) &&
     ((DAT_66306a30 == param_2[2] && (DAT_66306a34 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  else {
    if (((DAT_66306a38 != iVar1) || (DAT_66306a3c != param_2[1])) ||
       ((DAT_66306a40 != param_2[2] || (DAT_66306a44 != param_2[3])))) {
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


