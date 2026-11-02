/* Module: auth3260.dll
   Function: FUN_627a1c00
   Address: 627a1c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a1c00(int *param_1,int *param_2,int *param_3)

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
  else if (((DAT_627a7740 == iVar1) && (DAT_627a7744 == param_2[1])) &&
          ((DAT_627a7748 == param_2[2] && (DAT_627a774c == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 5);
      return 0;
    }
  }
  else if ((((DAT_627a7750 == iVar1) && (DAT_627a7754 == param_2[1])) &&
           (DAT_627a7758 == param_2[2])) && (DAT_627a775c == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 6);
      return 0;
    }
  }
  else if (((DAT_627a7720 == iVar1) && (DAT_627a7724 == param_2[1])) &&
          ((DAT_627a7728 == param_2[2] && (DAT_627a772c == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 7);
      return 0;
    }
  }
  else if (((DAT_627a7730 == iVar1) && (DAT_627a7734 == param_2[1])) &&
          ((DAT_627a7738 == param_2[2] && (DAT_627a773c == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 8);
      return 0;
    }
  }
  else {
    if ((((DAT_627a7710 != iVar1) || (DAT_627a7714 != param_2[1])) || (DAT_627a7718 != param_2[2]))
       || (DAT_627a771c != param_2[3])) {
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


