/* Module: auth3260.dll
   Function: FUN_627a2b70
   Address: 627a2b70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a2b70(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  iVar1 = *param_2;
  if ((((DAT_627a7050 == iVar1) && (DAT_627a7054 == param_2[1])) && (DAT_627a7058 == param_2[2])) &&
     (DAT_627a705c == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((DAT_627a7370 == iVar1) && (DAT_627a7374 == param_2[1])) &&
     ((DAT_627a7378 == param_2[2] && (DAT_627a737c == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  else if (((DAT_627a7760 == iVar1) && (DAT_627a7764 == param_2[1])) &&
          ((DAT_627a7768 == param_2[2] && (DAT_627a776c == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 5);
      return 0;
    }
  }
  else if ((((DAT_627a7770 == iVar1) && (DAT_627a7774 == param_2[1])) &&
           (DAT_627a7778 == param_2[2])) && (DAT_627a777c == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 6);
      return 0;
    }
  }
  else if (((DAT_627a7820 == iVar1) && (DAT_627a7824 == param_2[1])) &&
          ((DAT_627a7828 == param_2[2] && (DAT_627a782c == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 7);
      return 0;
    }
  }
  else if (((DAT_627a77e0 == iVar1) && (DAT_627a77e4 == param_2[1])) &&
          ((DAT_627a77e8 == param_2[2] && (DAT_627a77ec == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 8);
      return 0;
    }
  }
  else {
    if ((((DAT_627a77f0 != iVar1) || (DAT_627a77f4 != param_2[1])) || (DAT_627a77f8 != param_2[2]))
       || (DAT_627a77fc != param_2[3])) {
      *param_3 = 0;
      return 0x80004002;
    }
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 9);
      return 0;
    }
  }
  *param_3 = 0;
  return 0;
}


