/* Module: vegas30.exe
   Function: FUN_005dfab0
   Address: 005dfab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005dfab0(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  LPCSTR pCVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  float10 fVar7;
  undefined8 uVar8;
  undefined4 local_b4;
  int local_b0 [5];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  double local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_b4 = 0;
  iVar2 = _ismbcspace((int)*param_2);
  pCVar3 = param_2;
  while (iVar2 != 0) {
    pCVar3 = CharNextA(pCVar3);
    iVar2 = _ismbcspace((int)*pCVar3);
  }
  piVar6 = local_b0;
  for (iVar2 = 0x2c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  local_b0[1] = 0;
  local_98 = 0;
  local_90 = 0;
  local_8c = 0;
  local_b0[3] = 0;
  local_9c = 0;
  iVar2 = FUN_005e3c20(param_2,0);
  while( true ) {
    if (iVar2 == 0) {
      return local_b4;
    }
    iVar4 = FUN_005e3c20(iVar2,0);
    if (iVar4 == 0) {
      return local_b4;
    }
    local_b0[0] = _SfTextToLongToken_8(iVar2,0);
    iVar2 = FUN_005e3c20(iVar4,0);
    if (iVar2 == 0) {
      return local_b4;
    }
    _SfTextToDoubleToken_8(iVar4,0);
    uVar8 = ftol();
    local_88 = uVar8;
    iVar4 = FUN_005e3c20(iVar2,0);
    if (iVar4 == 0) {
      return local_b4;
    }
    _SfTextToDoubleToken_8(iVar2,0);
    uVar8 = ftol();
    local_80 = uVar8;
    iVar2 = FUN_005e3c20(iVar4,0);
    if (iVar2 == 0) {
      return local_b4;
    }
    fVar7 = (float10)_SfTextToDoubleToken_8(iVar4,0);
    local_28 = (double)fVar7;
    iVar4 = FUN_005e3c20(iVar2,0);
    if (iVar4 == 0) {
      return local_b4;
    }
    local_18 = FUN_005dff20(iVar2);
    iVar2 = FUN_005e3c20(iVar4,0);
    if (iVar2 == 0) {
      return local_b4;
    }
    local_14 = FUN_005dff20(iVar4);
    iVar4 = FUN_005e3c20(iVar2,0);
    if (iVar4 == 0) {
      return local_b4;
    }
    local_10 = _SfTextToLongToken_8(iVar2,0);
    iVar2 = FUN_005e3c20(iVar4,0);
    if (iVar2 == 0) {
      return local_b4;
    }
    local_c = FUN_005dff20(iVar4);
    iVar4 = FUN_005e3c20(iVar2,0);
    if (iVar4 == 0) {
      return local_b4;
    }
    local_8 = FUN_005dff20(iVar2);
    iVar2 = FUN_005e3c20(iVar4,0);
    if (iVar2 == 0) {
      return local_b4;
    }
    local_b0[2] = FUN_005dff60(iVar4);
    iVar4 = FUN_005e3c20(iVar2,0);
    if (iVar4 == 0) {
      return local_b4;
    }
    local_b0[4] = iVar2;
    iVar2 = FUN_005e3c20(iVar4,0);
    if (iVar2 == 0) {
      return local_b4;
    }
    local_58 = _SfTextToLongToken_8(iVar4,0);
    iVar4 = FUN_005e3c20(iVar2,0);
    if (iVar4 == 0) {
      return local_b4;
    }
    _SfTextToDoubleToken_8(iVar2,0);
    uVar8 = ftol();
    local_78 = uVar8;
    iVar2 = FUN_005e3c20(iVar4,0);
    if (iVar2 == 0) {
      return local_b4;
    }
    _SfTextToDoubleToken_8(iVar4,0);
    uVar8 = ftol();
    local_70 = uVar8;
    iVar4 = FUN_005e3c20(iVar2,0);
    if (iVar4 == 0) break;
    _SfTextToDoubleToken_8(iVar2,0);
    uVar8 = ftol();
    local_68 = uVar8;
    iVar2 = FUN_005e3c20(iVar4,0);
    if (iVar2 == 0) {
      return local_b4;
    }
    _SfTextToDoubleToken_8(iVar4,0);
    uVar8 = ftol();
    local_60 = uVar8;
    iVar4 = FUN_005e3c20(iVar2,0);
    if (iVar4 == 0) {
      return local_b4;
    }
    fVar7 = (float10)_SfTextToDoubleToken_8(iVar2,0);
    local_50 = (double)fVar7;
    iVar2 = FUN_005e3c20(iVar4,0);
    if (iVar2 == 0) {
      return local_b4;
    }
    local_38 = _SfTextToLongToken_8(iVar4,0);
    iVar4 = FUN_005e3c20(iVar2,0);
    if (iVar4 == 0) {
      return local_b4;
    }
    fVar7 = (float10)_SfTextToDoubleToken_8(iVar2,0);
    local_48 = (double)fVar7;
    iVar2 = FUN_005e3c20(iVar4,0);
    if (iVar2 == 0) {
      return local_b4;
    }
    local_34 = _SfTextToLongToken_8(iVar4,0);
    iVar4 = FUN_005e3c20(iVar2,0);
    if (iVar4 == 0) {
      return local_b4;
    }
    fVar7 = (float10)_SfTextToDoubleToken_8(iVar2,0);
    local_40 = (double)fVar7;
    iVar2 = FUN_005e3c20(iVar4,0);
    if (iVar2 == 0) {
      return local_b4;
    }
    local_20 = _SfTextToLongToken_8(iVar4,0);
    pCVar3 = (LPCSTR)FUN_005e3c20(iVar2,0);
    if (pCVar3 == (char *)0x0) {
      return local_b4;
    }
    local_1c = _SfTextToLongToken_8(iVar2,0);
    pcVar5 = (char *)FUN_005e3c20(pCVar3,0);
    if (pcVar5 == (char *)0x0) {
      local_30 = 0;
      local_2c = 0;
      cVar1 = *pCVar3;
      while (cVar1 != '\0') {
        pCVar3 = CharNextA(pCVar3);
        cVar1 = *pCVar3;
      }
    }
    else {
      local_30 = _SfTextToLongToken_8(pCVar3,0);
      pCVar3 = (LPCSTR)FUN_005e3c20(pcVar5,0);
      if (pCVar3 == (LPCSTR)0x0) {
        cVar1 = *pcVar5;
        pCVar3 = pcVar5;
        while (cVar1 != '\0') {
          pCVar3 = CharNextA(pCVar3);
          cVar1 = *pCVar3;
        }
        local_2c = 0;
      }
      else {
        local_2c = _SfTextToLongToken_8(pcVar5,0);
      }
    }
    local_b4 = 1;
    iVar2 = FUN_005df570(param_1,local_b0);
    if (iVar2 == 0) {
      return 1;
    }
    local_b0[1] = 0;
    local_98 = 0;
    local_90 = 0;
    local_8c = 0;
    local_b0[3] = 0;
    local_9c = 0;
    iVar2 = FUN_005e3c20(pCVar3,0);
  }
  return local_b4;
}


