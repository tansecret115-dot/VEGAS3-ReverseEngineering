/* Module: auth3260.dll
   Function: FUN_627a1220
   Address: 627a1220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a1220(int *param_1,int *param_2,int *param_3)

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
  if (((DAT_627a72c0 == iVar1) && (DAT_627a72c4 == param_2[1])) &&
     ((DAT_627a72c8 == param_2[2] && (DAT_627a72cc == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  else {
    if (((DAT_627a7200 != iVar1) || (DAT_627a7204 != param_2[1])) ||
       ((DAT_627a7208 != param_2[2] || (DAT_627a720c != param_2[3])))) {
      *param_3 = 0;
      return 0x80004002;
    }
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 5);
      return 0;
    }
  }
  *param_3 = 0;
  return 0;
}


