/* Module: rmbe3260.dll
   Function: FUN_6605a6e0
   Address: 6605a6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6605a6e0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  iVar1 = *param_2;
  if ((((DAT_66064ee8 == iVar1) && (DAT_66064eec == param_2[1])) && (DAT_66064ef0 == param_2[2])) &&
     (DAT_66064ef4 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((DAT_66065ba8 == iVar1) && (DAT_66065bac == param_2[1])) &&
     ((DAT_66065bb0 == param_2[2] && (DAT_66065bb4 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  else {
    if (((DAT_66065bc8 != iVar1) || (DAT_66065bcc != param_2[1])) ||
       ((DAT_66065bd0 != param_2[2] || (DAT_66065bd4 != param_2[3])))) {
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


