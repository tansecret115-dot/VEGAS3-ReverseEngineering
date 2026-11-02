/* Module: vegas30k.dll
   Function: FUN_01041850
   Address: 01041850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01041850(ushort *param_1,int *param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1[6] * param_3 == 0) {
    return 0;
  }
  uVar1 = *param_1;
  if (uVar1 < 0xfe01) {
    if (uVar1 == 0xfe00) {
      uVar3 = 0;
      if (param_3 == 0) {
        return 0;
      }
      while (*param_2 == 0) {
        param_2 = param_2 + 1;
        uVar3 = uVar3 + 1;
        if (param_3 <= uVar3) {
          return 0;
        }
      }
    }
    else {
      if (uVar1 == 1) goto LAB_01041963;
      if (uVar1 != 3) {
        return 0x80004005;
      }
      if (param_3 == 0) {
        return 0;
      }
      while ((((iVar2 = ftol(), -0x8001 < iVar2 && (iVar2 < 0x8000)) && ((short)iVar2 == 0)) &&
             ((param_1[1] != 2 ||
              (((iVar2 = ftol(), -0x8001 < iVar2 && (iVar2 < 0x8000)) && ((short)iVar2 == 0))))))) {
        uVar3 = uVar3 + 1;
        if (param_3 <= uVar3) {
          return 0;
        }
      }
    }
  }
  else {
    if (uVar1 != 0xfe01) {
      if (uVar1 != 0xfe02) {
        return 0x80004005;
      }
LAB_01041963:
      uVar3 = 0;
      if (param_3 == 0) {
        return 0;
      }
      uVar1 = param_1[7];
      while( true ) {
        if (uVar1 == 8) {
          if ((char)*param_2 != -0x80) {
            return 1;
          }
        }
        else if ((uVar1 == 0x10) && ((short)*param_2 != 0)) {
          return 1;
        }
        if ((uVar1 == 0x18) && (*param_2 != 0)) break;
        uVar3 = uVar3 + 1;
        if (param_3 <= uVar3) {
          return 0;
        }
      }
      return 1;
    }
    uVar3 = 0;
    if (param_3 == 0) {
      return 0;
    }
    while ((char)*param_2 == '\0') {
      param_2 = (int *)((int)param_2 + 1);
      uVar3 = uVar3 + 1;
      if (param_3 <= uVar3) {
        return 0;
      }
    }
  }
  return 1;
}


