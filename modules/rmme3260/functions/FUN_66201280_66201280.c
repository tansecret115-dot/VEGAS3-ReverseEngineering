/* Module: rmme3260.dll
   Function: FUN_66201280
   Address: 66201280
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66201280(int *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  if (iVar2 == 0) {
    if ((((*param_2 == DAT_6626a598) && (param_2[1] == DAT_6626a59c)) &&
        (param_2[2] == DAT_6626a5a0)) && (param_2[3] == DAT_6626a5a4)) {
      (**(code **)(*param_1 + 4))(param_1);
      *param_3 = param_1;
      return 0;
    }
    if (((*param_2 == DAT_6626aaa8) && (param_2[1] == DAT_6626aaac)) &&
       ((param_2[2] == DAT_6626aab0 && (param_2[3] == DAT_6626aab4)))) {
      (**(code **)(*param_1 + 4))(param_1);
      *param_3 = param_1;
      return 0;
    }
    puVar1 = (undefined4 *)param_1[3];
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (**(code **)*puVar1)(puVar1,param_2,param_3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    puVar1 = (undefined4 *)param_1[4];
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (**(code **)*puVar1)(puVar1,param_2,param_3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    puVar1 = (undefined4 *)param_1[5];
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (**(code **)*puVar1)(puVar1,param_2,param_3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    puVar1 = (undefined4 *)param_1[6];
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (**(code **)*puVar1)(puVar1,param_2,param_3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    *param_3 = 0;
    iVar2 = -0x7fffbffe;
  }
  return iVar2;
}


