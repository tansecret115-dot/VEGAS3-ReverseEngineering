/* Module: rmbe3260.dll
   Function: FUN_6601f3a0
   Address: 6601f3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6601f3a0(undefined4 param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *local_8;
  
  iVar2 = *param_2;
  iVar1 = -0x7fffbffe;
  local_8 = (int *)0x0;
  if ((((iVar2 == DAT_66065a88) && (param_2[1] == DAT_66065a8c)) && (param_2[2] == DAT_66065a90)) &&
     (param_2[3] == DAT_66065a94)) {
    iVar2 = FUN_66016c10(param_4,&local_8);
    *param_3 = (int)local_8;
    return iVar2;
  }
  if (((iVar2 == DAT_66065aa8) && (param_2[1] == DAT_66065aac)) &&
     ((param_2[2] == DAT_66065ab0 && (param_2[3] == DAT_66065ab4)))) {
    iVar2 = FUN_66016ef0(param_4,&local_8);
    *param_3 = (int)local_8;
    return iVar2;
  }
  if (((iVar2 == DAT_66065ac8) && (param_2[1] == DAT_66065acc)) &&
     ((param_2[2] == DAT_66065ad0 && (param_2[3] == DAT_66065ad4)))) {
    iVar2 = FUN_660174f0(param_4,&local_8);
    *param_3 = (int)local_8;
    return iVar2;
  }
  if ((((iVar2 == DAT_66065a58) && (param_2[1] == DAT_66065a5c)) && (param_2[2] == DAT_66065a60)) &&
     (param_2[3] == DAT_66065a64)) {
    iVar2 = FUN_66019f40(param_4,&local_8);
    *param_3 = (int)local_8;
    return iVar2;
  }
  if (((iVar2 == DAT_66065a38) && (param_2[1] == DAT_66065a3c)) &&
     ((param_2[2] == DAT_66065a40 && (param_2[3] == DAT_66065a44)))) {
    iVar2 = FUN_66019bc0(param_4,&local_8);
    *param_3 = (int)local_8;
    return iVar2;
  }
  if (((iVar2 == DAT_660659f8) && (param_2[1] == DAT_660659fc)) &&
     ((param_2[2] == DAT_66065a00 && (param_2[3] == DAT_66065a04)))) {
    iVar2 = FUN_660127a0(param_4,&local_8);
    *param_3 = (int)local_8;
    return iVar2;
  }
  if ((((iVar2 == DAT_660658a8) && (param_2[1] == DAT_660658ac)) && (param_2[2] == DAT_660658b0)) &&
     (param_2[3] == DAT_660658b4)) {
    iVar2 = FUN_66026fe0(param_4,&local_8);
    *param_3 = (int)local_8;
    return iVar2;
  }
  if (((iVar2 == DAT_66065e88) && (param_2[1] == DAT_66065e8c)) &&
     ((param_2[2] == DAT_66065e90 && (param_2[3] == DAT_66065e94)))) {
    iVar2 = FUN_6600db40(param_4,&local_8);
    *param_3 = (int)local_8;
    return iVar2;
  }
  if (((iVar2 == DAT_66065ea8) && (param_2[1] == DAT_66065eac)) &&
     ((param_2[2] == DAT_66065eb0 && (param_2[3] == DAT_66065eb4)))) {
    iVar2 = FUN_6600dfd0(param_4,&local_8);
    *param_3 = (int)local_8;
    return iVar2;
  }
  if ((((iVar2 == DAT_66065e68) && (param_2[1] == DAT_66065e6c)) && (param_2[2] == DAT_66065e70)) &&
     (param_2[3] == DAT_66065e74)) {
    iVar2 = FUN_6600e8a0(param_4,&local_8);
    *param_3 = (int)local_8;
    return iVar2;
  }
  if (((iVar2 == DAT_66065c68) && (param_2[1] == DAT_66065c6c)) &&
     ((param_2[2] == DAT_66065c70 && (param_2[3] == DAT_66065c74)))) {
    if (param_4 == 0) {
      param_4 = 0;
      iVar1 = FUN_66025350(&param_4,0);
      if (-1 < iVar1) {
        *param_3 = param_4;
        return iVar1;
      }
      goto LAB_6601f95f;
    }
  }
  else if (((iVar2 == DAT_660658d8) && (param_2[1] == DAT_660658dc)) &&
          ((param_2[2] == DAT_660658e0 && (param_2[3] == DAT_660658e4)))) {
    if (param_4 == 0) {
      param_4 = 0;
      iVar1 = FUN_660253a0(&param_4,0);
      if (-1 < iVar1) {
        *param_3 = param_4;
        return iVar1;
      }
      goto LAB_6601f95f;
    }
  }
  else if ((((iVar2 == DAT_66065938) && (param_2[1] == DAT_6606593c)) &&
           (param_2[2] == DAT_66065940)) && (param_2[3] == DAT_66065944)) {
    if (param_4 == 0) {
      param_4 = 0;
      iVar1 = FUN_660130d0(&param_4);
      if (-1 < iVar1) {
        *param_3 = param_4;
        return iVar1;
      }
      goto LAB_6601f95f;
    }
  }
  else if (((iVar2 == DAT_66064f48) && (param_2[1] == DAT_66064f4c)) &&
          ((param_2[2] == DAT_66064f50 && (param_2[3] == DAT_66064f54)))) {
    if (param_4 == 0) {
      puVar3 = operator_new(0x28);
      if (puVar3 == (undefined4 *)0x0) {
        local_8 = (int *)0x0;
      }
      else {
        local_8 = (int *)FUN_6605c060(puVar3);
      }
      if (local_8 == (int *)0x0) {
        *param_3 = 0;
        return -0x7ff8fff2;
      }
      (**(code **)(*local_8 + 4))(local_8);
      *param_3 = (int)local_8;
      return 0;
    }
  }
  else {
    if (((iVar2 != DAT_66064f78) || (param_2[1] != DAT_66064f7c)) ||
       ((param_2[2] != DAT_66064f80 || (param_2[3] != DAT_66064f84)))) goto LAB_6601f95f;
    if (param_4 == 0) {
      piVar4 = operator_new(0x6c);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = (int)&PTR_LAB_66066da0;
        piVar4[1] = 0;
        FUN_6605c7f0(piVar4 + 2,10);
        FUN_6605c7f0(piVar4 + 9,10);
        FUN_6605c7f0(piVar4 + 0x10,10);
        piVar4[0x17] = 0;
        piVar4[0x18] = 0;
        piVar4[0x19] = 0;
        piVar4[0x1a] = 0;
        *piVar4 = (int)&PTR_FUN_66066d60;
      }
      if (piVar4 == (int *)0x0) {
        *param_3 = 0;
        return -0x7ff8fff2;
      }
      local_8 = piVar4;
      (**(code **)(*piVar4 + 4))(piVar4);
      *param_3 = (int)local_8;
      return 0;
    }
  }
  iVar1 = 0x40014;
LAB_6601f95f:
  *param_3 = (int)local_8;
  return iVar1;
}


