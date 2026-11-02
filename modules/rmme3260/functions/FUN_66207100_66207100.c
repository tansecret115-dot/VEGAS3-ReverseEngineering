/* Module: rmme3260.dll
   Function: FUN_66207100
   Address: 66207100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66207100(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  iVar1 = *param_2;
  if ((((DAT_6626a598 == iVar1) && (DAT_6626a59c == param_2[1])) && (DAT_6626a5a0 == param_2[2])) &&
     (DAT_6626a5a4 == param_2[3])) {
    (**(code **)(*param_1 + 4))(param_1);
    *param_3 = (int)param_1;
    return 0;
  }
  if (((DAT_6626b1c8 == iVar1) && (DAT_6626b1cc == param_2[1])) &&
     ((DAT_6626b1d0 == param_2[2] && (DAT_6626b1d4 == param_2[3])))) {
    (**(code **)(*param_1 + 4))(param_1);
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 4);
      return 0;
    }
  }
  else {
    if (((DAT_6626b1a8 != iVar1) || (DAT_6626b1ac != param_2[1])) ||
       ((DAT_6626b1b0 != param_2[2] || (DAT_6626b1b4 != param_2[3])))) {
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


