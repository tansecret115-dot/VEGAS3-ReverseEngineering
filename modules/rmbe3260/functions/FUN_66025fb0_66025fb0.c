/* Module: rmbe3260.dll
   Function: FUN_66025fb0
   Address: 66025fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66025fb0(int *param_1,int *param_2,int *param_3)

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
  if (((DAT_66065c68 == iVar1) && (DAT_66065c6c == param_2[1])) &&
     ((DAT_66065c70 == param_2[2] && (DAT_66065c74 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  else if (((DAT_660658d8 == iVar1) && (DAT_660658dc == param_2[1])) &&
          ((DAT_660658e0 == param_2[2] && (DAT_660658e4 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 5);
      return 0;
    }
  }
  else if ((((DAT_66066248 == iVar1) && (DAT_6606624c == param_2[1])) &&
           (DAT_66066250 == param_2[2])) && (DAT_66066254 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 6);
      return 0;
    }
  }
  else {
    if (((DAT_66065b78 != iVar1) || (DAT_66065b7c != param_2[1])) ||
       ((DAT_66065b80 != param_2[2] || (DAT_66065b84 != param_2[3])))) {
      *param_3 = 0;
      return 0x80004002;
    }
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 7);
      return 0;
    }
  }
  *param_3 = 0;
  return 0;
}


