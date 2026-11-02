/* Module: vegas30.exe
   Function: FUN_00508cc0
   Address: 00508cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00508cc0(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EBP;
  int *unaff_ESI;
  int *piVar5;
  undefined4 unaff_EDI;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 local_244;
  int *local_240;
  int *local_23c;
  int local_238 [4];
  CHAR local_228 [243];
  undefined1 uStack_135;
  uint uStack_134;
  undefined1 auStack_12c [4];
  uint uStack_128;
  int *local_124;
  int *local_120;
  CHAR local_11c [260];
  uint uStack_18;
  uint uStack_14;
  int iStack_8;
  
  piVar5 = DAT_0064b468;
  iVar2 = FUN_00508c40(param_1);
  uVar3 = local_244;
  if (iVar2 == 0) {
    if (param_2 == 0) goto LAB_00508f4f;
  }
  else if (param_2 == 0) {
    piVar6 = local_238;
    for (iVar4 = 0x47; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    _SfLoadString_16(DAT_00647204,0x4f8d,local_228,0x104);
    local_238[1] = DAT_0061a2c4;
    local_124 = (int *)((uint)local_124 & 0xfffffff7 | 6);
    local_238[0] = DAT_0061a2c0;
    local_238[2] = DAT_0061a2c8;
    local_238[3] = DAT_0061a2cc;
    iVar2 = FUN_00509a00(iVar2,local_238,0);
    if (iVar2 != 0) {
      local_238[1] = DAT_0061a2d4;
      local_238[2] = DAT_0061a2d8;
      local_238[0] = DAT_0061a2d0;
      local_124 = (int *)((uint)local_124 | 8);
      local_238[3] = DAT_0061a2dc;
      _SfLoadString_16(DAT_00647204,0x4f8e,local_228,0x104);
      uVar3 = FUN_00509a00(iVar2,local_238,0);
      local_124 = (int *)((uint)local_124 & 0xfffffff7);
      local_238[2] = DAT_0061a2e8;
      local_238[1] = DAT_0061a2e4;
      local_238[0] = DAT_0061a2e0;
      local_238[3] = DAT_0061a2ec;
      _SfLoadString_16(DAT_00647204,0x4f8f,local_228,0x104);
      local_23c = (int *)FUN_00509a00(uVar3,local_238,0);
      local_124 = (int *)((uint)local_124 | 8);
      local_238[1] = DAT_0061a2f4;
      local_238[2] = DAT_0061a2f8;
      local_238[0] = DAT_0061a2f0;
      local_238[3] = DAT_0061a2fc;
      _SfLoadString_16(DAT_00647204,0x4f90,local_228,0x104);
      local_244 = FUN_00509a00(iVar2,local_238,0);
      local_124 = (int *)((uint)local_124 & 0xfffffff7);
      local_238[0] = DAT_0061a300;
      local_238[1] = DAT_0061a304;
      local_238[2] = DAT_0061a308;
      local_238[3] = DAT_0061a30c;
      _SfLoadString_16(DAT_00647204,0x4f8f,local_228,0x104);
      FUN_00509a00(local_244,local_238,0);
    }
    goto LAB_00508f4f;
  }
  FUN_00509fb0(param_1,&DAT_0061a2c0);
  uVar3 = FUN_00509fb0(param_1,&DAT_0061a2d0);
  local_23c = (int *)FUN_00509fb0(param_1,&DAT_0061a2e0);
  local_244 = FUN_00509fb0(param_1,&DAT_0061a2f0);
  FUN_00509fb0(param_1,&DAT_0061a300);
LAB_00508f4f:
  if (piVar5 != (int *)0x0) {
    piVar6 = local_238;
    for (iVar2 = 0x47; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    do {
      if (piVar5[1] == 4) {
        lstrcpynA(local_228,(LPCSTR)(piVar5 + 8),0x104);
        uStack_128 = uStack_128 & 0xffffff;
        local_238[0] = piVar5[4];
        local_238[1] = piVar5[5];
        local_238[2] = piVar5[6];
        local_238[3] = piVar5[7];
        local_120 = piVar5;
        if (((param_2 == 0) || (iVar2 = FUN_00509fd0(uVar3,piVar5 + 4), iVar2 == 0)) &&
           (FUN_00509a00(uVar3,local_238,0), (*(byte *)(piVar5 + 3) & 4) != 0)) {
          FUN_00509a00(local_244,local_238,0);
        }
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
  }
  local_240 = (int *)0x0;
  _FXPackage_CreateEnumerator_4(&local_240);
  if (local_240 != (int *)0x0) {
    iVar2 = (**(code **)(*local_240 + 0xc))(local_240,1,local_11c,0);
    piVar5 = local_124;
    while (local_124 = piVar5, iVar2 == 0) {
      puVar7 = (undefined4 *)&stack0xfffffdb8;
      for (iVar2 = 0x47; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_23c = local_120;
      local_240 = piVar5;
      lstrcpynA((LPSTR)local_238,local_11c,0x104);
      iVar2 = iStack_8;
      uVar1 = uStack_14;
      uStack_135 = 0;
      uStack_134 = uStack_134 | 0x80;
      if (uStack_18 < 5) {
        if ((iStack_8 == 0) || (iVar4 = FUN_00509fd0(unaff_EBP,auStack_12c), iVar4 == 0)) {
          FUN_00509a00(unaff_EBP,&stack0xfffffdb8,0);
        }
        if (((uVar1 & 1) != 0) &&
           ((iVar2 == 0 || (iVar2 = FUN_00509fd0(unaff_EDI,auStack_12c), iVar2 == 0)))) {
          FUN_00509a00(unaff_EDI,&stack0xfffffdb8,0);
        }
      }
      iVar2 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,1,auStack_12c,0);
      piVar5 = local_124;
    }
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


