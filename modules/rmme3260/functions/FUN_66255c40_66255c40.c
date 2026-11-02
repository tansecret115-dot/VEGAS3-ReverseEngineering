/* Module: rmme3260.dll
   Function: FUN_66255c40
   Address: 66255c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66255c40(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  iVar1 = *param_2;
  if ((((DAT_6626a598 == iVar1) && (DAT_6626a59c == param_2[1])) && (DAT_6626a5a0 == param_2[2])) &&
     (DAT_6626a5a4 == param_2[3])) {
    (**(code **)(*(int *)(param_1 + -8) + 4))(param_1 + -8);
    *param_3 = param_1;
    return 0;
  }
  if (((DAT_6626b038 == iVar1) && (DAT_6626b03c == param_2[1])) &&
     ((DAT_6626b040 == param_2[2] && (DAT_6626b044 == param_2[3])))) {
    (**(code **)(*(int *)(param_1 + -8) + 4))(param_1 + -8);
    *param_3 = param_1 + -8;
    return 0;
  }
  if (((DAT_6626a5f8 == iVar1) && (DAT_6626a5fc == param_2[1])) &&
     ((DAT_6626a600 == param_2[2] && (DAT_6626a604 == param_2[3])))) {
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


