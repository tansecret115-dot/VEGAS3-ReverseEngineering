/* Module: vegas30.exe
   Function: FUN_00509140
   Address: 00509140
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00509140(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  int *unaff_EDI;
  int *piVar9;
  int *local_258;
  int *local_254;
  int *local_250;
  uint local_24c;
  uint local_248 [3];
  uint *local_23c;
  uint local_238 [4];
  CHAR local_228 [243];
  undefined1 uStack_135;
  uint uStack_134;
  uint uStack_12c;
  uint uStack_128;
  uint local_124;
  uint *local_120;
  CHAR local_11c [260];
  int iStack_18;
  int iStack_8;
  
  iVar2 = FUN_00508c40(param_1);
  if (iVar2 == 0) {
    uVar4 = local_24c;
    uVar3 = local_24c;
    piVar6 = local_254;
    if (param_2 == 0) goto LAB_005094b1;
  }
  else if (param_2 == 0) {
    puVar8 = local_238;
    for (iVar7 = 0x47; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    _SfLoadString_16(DAT_00647204,0x4f91,local_228,0x104);
    local_238[1] = DAT_0061a314;
    local_238[0] = DAT_0061a310;
    local_124 = local_124 | 7;
    local_238[2] = DAT_0061a318;
    local_238[3] = DAT_0061a31c;
    iVar2 = FUN_00509a00(iVar2,local_238,0);
    uVar4 = local_24c;
    uVar3 = local_24c;
    piVar6 = local_254;
    if (iVar2 != 0) {
      local_124 = local_124 | 8;
      local_238[1] = DAT_0061a324;
      local_238[2] = DAT_0061a328;
      local_238[0] = DAT_0061a320;
      local_238[3] = DAT_0061a32c;
      _SfLoadString_16(DAT_00647204,0x4f92,local_228,0x104);
      uVar3 = FUN_00509a00(iVar2,local_238,0);
      local_238[2] = DAT_0061a338;
      local_238[1] = DAT_0061a334;
      local_238[0] = DAT_0061a330;
      local_124 = local_124 | 8;
      local_238[3] = DAT_0061a33c;
      _SfLoadString_16(DAT_00647204,0x4f93,local_228,0x104);
      uVar4 = FUN_00509a00(iVar2,local_238,0);
      local_124 = local_124 | 8;
      local_238[2] = DAT_0061a348;
      local_238[1] = DAT_0061a344;
      local_238[0] = DAT_0061a340;
      local_238[3] = DAT_0061a34c;
      _SfLoadString_16(DAT_00647204,0x4f95,local_228,0x104);
      uVar5 = FUN_00509a00(iVar2,local_238,0);
      local_124 = local_124 & 0xfffffff7;
      local_238[1] = DAT_0061a354;
      local_238[0] = DAT_0061a350;
      local_238[2] = DAT_0061a358;
      local_238[3] = DAT_0061a35c;
      local_248[1] = uVar5;
      _SfLoadString_16(DAT_00647204,0x6dc5,local_228,0x104);
      piVar6 = (int *)FUN_00509a00(uVar3,local_238,0);
      local_124 = local_124 & 0xfffffff7;
      local_238[2] = DAT_0061a368;
      local_238[1] = DAT_0061a364;
      local_238[0] = DAT_0061a360;
      local_238[3] = DAT_0061a36c;
      local_254 = piVar6;
      _SfLoadString_16(DAT_00647204,0x6dc6,local_228,0x104);
      local_248[0] = FUN_00509a00(uVar4,local_238,0);
      local_124 = local_124 & 0xfffffff7;
      local_238[1] = DAT_0061a374;
      local_238[2] = DAT_0061a378;
      local_238[0] = DAT_0061a370;
      local_238[3] = DAT_0061a37c;
      _SfLoadString_16(DAT_00647204,0x6dc7,local_228,0x104);
      local_248[2] = FUN_00509a00(uVar5,local_238,0);
    }
    goto LAB_005094b1;
  }
  FUN_00509fb0(param_1,&DAT_0061a310);
  uVar3 = FUN_00509fb0(param_1,&DAT_0061a320);
  uVar4 = FUN_00509fb0(param_1,&DAT_0061a330);
  local_248[1] = FUN_00509fb0(param_1,&DAT_0061a340);
  local_254 = (int *)FUN_00509fb0(param_1,&DAT_0061a350);
  local_248[0] = FUN_00509fb0(param_1,&DAT_0061a360);
  local_248[2] = FUN_00509fb0(param_1,&DAT_0061a370);
  piVar6 = local_254;
LAB_005094b1:
  local_23c = DAT_0064b464;
  if (DAT_0064b464 != (uint *)0x0) {
    local_24c = *DAT_0064b464;
    local_250 = (int *)0x0;
    if (0 < (int)local_24c) {
      do {
        puVar8 = local_238;
        for (iVar2 = 0x47; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        local_124 = local_124 | 1;
        puVar8 = (uint *)((int)local_250 * local_23c[1] + local_23c[2]);
        if (puVar8 != (uint *)0x0) {
          lstrcpynA(local_228,(LPCSTR)(puVar8 + 10),0x104);
          uVar5 = local_248[1];
          uStack_128 = uStack_128 & 0xffffff;
          local_238[0] = *puVar8;
          local_238[1] = puVar8[1];
          local_238[2] = puVar8[2];
          local_238[3] = puVar8[3];
          local_120 = puVar8;
          switch(puVar8[4]) {
          case 1:
          case 2:
          case 0xc:
            if ((uVar3 != 0) &&
               ((uVar5 = uVar3, param_2 == 0 || (iVar2 = FUN_00509fd0(uVar3,puVar8), iVar2 == 0))))
            {
LAB_005095d8:
              FUN_00509a00(uVar5,local_238,0);
            }
            break;
          case 5:
            if (uVar4 != 0) {
              uVar5 = uVar4;
              if (param_2 != 0) {
                iVar2 = FUN_00509fd0(uVar4,puVar8);
joined_r0x005095ce:
                if (iVar2 != 0) break;
              }
              goto LAB_005095d8;
            }
            break;
          case 0xb:
            if (local_248[1] != 0) {
              if (param_2 != 0) {
                iVar2 = FUN_00509fd0(local_248[1],puVar8);
                goto joined_r0x005095ce;
              }
              goto LAB_005095d8;
            }
          }
        }
        local_250 = (int *)((int)local_250 + 1);
        piVar6 = local_254;
      } while ((int)local_250 < (int)local_24c);
    }
  }
  local_258 = (int *)0x0;
  _FXPackage_CreateEnumerator_4(&local_258);
  if (local_258 != (int *)0x0) {
    iVar2 = (**(code **)(*local_258 + 0xc))(local_258,1,local_11c,0);
    uVar4 = local_124;
    while (local_124 = uVar4, iVar2 == 0) {
      puVar8 = local_248;
      for (iVar2 = 0x47; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      local_248[1] = uStack_128;
      local_248[0] = uStack_12c;
      local_23c = local_120;
      local_248[2] = uVar4;
      lstrcpynA((LPSTR)local_238,local_11c,0x104);
      piVar1 = local_250;
      piVar9 = local_258;
      uStack_135 = 0;
      uStack_134 = uStack_134 | 0x81;
      if (iStack_18 == 5) {
        if ((piVar6 != (int *)0x0) &&
           ((piVar9 = piVar6, iStack_8 == 0 ||
            (iVar2 = FUN_00509fd0(piVar6,&uStack_12c), iVar2 == 0)))) goto LAB_00509738;
      }
      else if (iStack_18 == 6) {
        if (local_258 != (int *)0x0) {
          if (iStack_8 != 0) {
            iVar2 = FUN_00509fd0(local_258,&uStack_12c);
joined_r0x0050972e:
            if (iVar2 != 0) goto LAB_0050973d;
          }
LAB_00509738:
          FUN_00509a00(piVar9,local_248,0);
        }
      }
      else if ((iStack_18 == 7) && (local_250 != (int *)0x0)) {
        piVar9 = local_250;
        if (iStack_8 != 0) {
          iVar2 = FUN_00509fd0(local_250,&uStack_12c);
          piVar9 = piVar1;
          goto joined_r0x0050972e;
        }
        goto LAB_00509738;
      }
LAB_0050973d:
      iVar2 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,1,&uStack_12c,0);
      uVar4 = local_124;
    }
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  return;
}


