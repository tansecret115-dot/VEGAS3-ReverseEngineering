/* Module: encn3260.dll
   Function: FUN_664c2a70
   Address: 664c2a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664c2a70(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  iVar1 = *param_2;
  if ((((DAT_664dc5d0 == iVar1) && (DAT_664dc5d4 == param_2[1])) && (DAT_664dc5d8 == param_2[2])) &&
     (DAT_664dc5dc == param_2[3])) {
    (**(code **)(*(int *)(param_1 + -8) + 4))(param_1 + -8);
    *param_3 = param_1;
    return 0;
  }
  if (((DAT_664dd1b0 == iVar1) && (DAT_664dd1b4 == param_2[1])) &&
     ((DAT_664dd1b8 == param_2[2] && (DAT_664dd1bc == param_2[3])))) {
    (**(code **)(*(int *)(param_1 + -8) + 4))(param_1 + -8);
    *param_3 = param_1 + -8;
    return 0;
  }
  if (((DAT_664dcf60 == iVar1) && (DAT_664dcf64 == param_2[1])) &&
     ((DAT_664dcf68 == param_2[2] && (DAT_664dcf6c == param_2[3])))) {
    (**(code **)(*(int *)(param_1 + -8) + 4))(param_1 + -8);
    if (param_1 + -8 != 0) {
      *param_3 = param_1 + -4;
      return 0;
    }
    *param_3 = 0;
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}


