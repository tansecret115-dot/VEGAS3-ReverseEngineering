/* Module: rmme3260.dll
   Function: FUN_6622d7b0
   Address: 6622d7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6622d7b0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((((iVar1 != DAT_6626a6a8) || (param_2[1] != DAT_6626a6ac)) || (param_2[2] != DAT_6626a6b0)) ||
     (param_2[3] != DAT_6626a6b4)) {
    if (((iVar1 == DAT_6626ae38) && (param_2[1] == DAT_6626ae3c)) &&
       ((param_2[2] == DAT_6626ae40 && (param_2[3] == DAT_6626ae44)))) {
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 1);
        return 0;
      }
      *param_3 = 0;
      return 0;
    }
    if (((iVar1 != DAT_6626a598) || (param_2[1] != DAT_6626a59c)) ||
       ((param_2[2] != DAT_6626a5a0 || (param_2[3] != DAT_6626a5a4)))) {
      *param_3 = 0;
      return 0x80004002;
    }
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = (int)param_1;
  return 0;
}


