/* Module: rmme3260.dll
   Function: FUN_66235360
   Address: 66235360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66235360(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((((iVar1 == DAT_6626a628) && (param_2[1] == DAT_6626a62c)) && (param_2[2] == DAT_6626a630)) &&
     (param_2[3] == DAT_6626a634)) {
    (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4);
    if (param_1 != 0) {
      *param_3 = param_1 + 0x10;
      return 0;
    }
  }
  else {
    if (((iVar1 == DAT_6626ac28) && (param_2[1] == DAT_6626ac2c)) &&
       ((param_2[2] == DAT_6626ac30 && (param_2[3] == DAT_6626ac34)))) {
      (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4U);
      *param_3 = -(uint)(param_1 != 0) & param_1 + 4U;
      return 0;
    }
    if (((iVar1 == DAT_6626ad78) && (param_2[1] == DAT_6626ad7c)) &&
       ((param_2[2] == DAT_6626ad80 && (param_2[3] == DAT_6626ad84)))) {
      (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4);
      if (param_1 != 0) {
        *param_3 = param_1 + 0x14;
        return 0;
      }
    }
    else if ((((iVar1 == DAT_6626abe8) && (param_2[1] == DAT_6626abec)) &&
             (param_2[2] == DAT_6626abf0)) && (param_2[3] == DAT_6626abf4)) {
      (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4);
      if (param_1 != 0) {
        *param_3 = param_1 + 8;
        return 0;
      }
    }
    else if (((iVar1 == DAT_6626ac98) && (param_2[1] == DAT_6626ac9c)) &&
            ((param_2[2] == DAT_6626aca0 && (param_2[3] == DAT_6626aca4)))) {
      (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4);
      if (param_1 != 0) {
        *param_3 = param_1 + 0xc;
        return 0;
      }
    }
    else if (((iVar1 == DAT_6626ad68) && (param_2[1] == DAT_6626ad6c)) &&
            ((param_2[2] == DAT_6626ad70 && (param_2[3] == DAT_6626ad74)))) {
      (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4);
      if (param_1 != 0) {
        *param_3 = param_1 + 0x18;
        return 0;
      }
    }
    else if ((((iVar1 == DAT_6626acd8) && (param_2[1] == DAT_6626acdc)) &&
             (param_2[2] == DAT_6626ace0)) && (param_2[3] == DAT_6626ace4)) {
      (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4);
      if (param_1 != 0) {
        *param_3 = param_1 + 0x1c;
        return 0;
      }
    }
    else {
      if (((iVar1 != DAT_6626a708) || (param_2[1] != DAT_6626a70c)) ||
         ((param_2[2] != DAT_6626a710 || (param_2[3] != DAT_6626a714)))) {
        if (((iVar1 == DAT_6626a598) && (param_2[1] == DAT_6626a59c)) &&
           ((param_2[2] == DAT_6626a5a0 && (param_2[3] == DAT_6626a5a4)))) {
          (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4U);
          *param_3 = -(uint)(param_1 != 0) & param_1 + 4U;
          return 0;
        }
        *param_3 = 0;
        return 0x80004002;
      }
      (**(code **)(*(int *)(param_1 + 4) + 4))(param_1 + 4);
      if (param_1 != 0) {
        *param_3 = param_1 + 0x20;
        return 0;
      }
    }
  }
  *param_3 = 0;
  return 0;
}


