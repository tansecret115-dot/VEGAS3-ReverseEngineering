/* Module: vegas30.exe
   Function: FUN_00521af0
   Address: 00521af0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00521af0(undefined4 *param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float10 fVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  int local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_154 [4];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140 [6];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  uint local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  uint local_c4;
  undefined4 local_c0;
  undefined4 local_bc [6];
  float local_a4 [24];
  undefined4 local_44;
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_4 != 0) {
    FUN_005b83b0(DAT_0064b138,1);
  }
  if (param_3 == 0) {
    if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) goto joined_r0x00521cbe;
    iVar3 = *(int *)(param_2 + 4);
  }
  else {
    if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) goto joined_r0x00521cbe;
    iVar3 = *(int *)(param_2 + 4);
  }
  if (iVar3 == 3) {
    uVar12 = 0;
    puVar7 = param_1;
    for (iVar3 = 0x2e; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    param_1[0x20] = 0;
    param_1[0x21] = 0x3ff00000;
    param_1[7] = param_1[7] & 0xfffffffe;
    param_1[1] = (param_3 & 1) << 0xc | param_1[1] & 0xffffe1bd | 0x1bc;
    param_1[0x28] = 1;
    uVar1 = DAT_0064b138;
    if (param_3 == 0) {
      FUN_005c9630(DAT_0064b138,param_2,local_154,local_40,&local_15c,0);
    }
    else {
      puVar7 = &local_15c;
      puVar11 = local_40;
      puVar10 = local_154;
      uVar2 = FUN_005ba4b0(DAT_0064b138,0);
      FUN_005ba670(uVar1,uVar2,puVar10,puVar11,puVar7,uVar12);
    }
    param_1[0x20] = local_28;
    param_1[0x21] = local_24;
    pfVar5 = (float *)(param_1 + 9);
    local_14c = 0;
    local_144 = local_158;
    local_150 = 0;
    local_148 = local_15c;
    FUN_0051f5a0(pfVar5,&local_150);
    param_1[0x19] = ((float)param_1[0x11] + *pfVar5) * _DAT_0061a460;
    param_1[0x1a] = ((float)param_1[0x12] + (float)param_1[10]) * _DAT_0061a460;
    iVar3 = _SfList_CreateExZ_32(param_1 + 0x29,4,0xffffffff,0xffffffff,0x40000004,0,0,0);
    if (-1 < iVar3) {
      local_168 = _SfList_CreateExZ_32(&local_160,0x84,0xffffffff,0xffffffff,0x40000004,0,0,0);
      if (local_168 < 0) {
        for (iVar3 = 0x2e; iVar3 != 0; iVar3 = iVar3 + -1) {
          *param_1 = 0;
          param_1 = param_1 + 1;
        }
        goto joined_r0x00521cbe;
      }
      puVar7 = local_bc;
      for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_bc[0] = 0x7c;
      pfVar6 = local_a4;
      for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar6 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar6 = pfVar6 + 1;
      }
      local_bc[1] = 0;
      local_bc[2] = 0;
      local_44 = 0x3f800000;
      local_bc[3] = DAT_0064ab80;
      _SfList_InsertList_16(local_160,0xffffffff,local_bc,1);
      _SfList_InsertList_16(param_1[0x29],0xffffffff,&local_160,1);
      iVar3 = local_168;
      if ((param_1[1] & 0x1000) == 0) {
LAB_00521f60:
        param_1[0x22] = 0;
        param_1[0x23] = 0;
        param_1[2] = 0x3f800000;
        param_1[5] = 0;
        param_1[6] = 0;
        fVar8 = (float10)FUN_005a5f80(param_1 + 9);
        param_1[3] = (float)(fVar8 * (float10)_DAT_0061a634);
        fVar9 = (float10)FUN_005a5ff0(param_1 + 9);
        fVar8 = (float10)_DAT_0061a634;
        param_1[0x24] = param_2;
        param_1[4] = (float)(fVar9 * fVar8);
        param_1[8] = 0x3d800000;
        param_1[1] = param_1[1] | 1;
        if (param_4 != 0) {
          FUN_005b84d0(DAT_0064b138,1);
        }
        return iVar3;
      }
      iVar3 = _SfList_CreateExZ_32(&local_164,0x8c,0xffffffff,0xffffffff,0x40000004,0,0,0);
      if (-1 < iVar3) {
        puVar7 = local_140;
        for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        local_c4 = local_c4 | 4;
        local_e4 = 0;
        local_d8 = 0;
        local_dc = 0;
        local_e0 = 0;
        local_140[0] = 0x84;
        local_f4 = 0x3ccccccd;
        local_f0 = 0x3ccccccd;
        local_ec = 0x3f800000;
        local_e8 = 0x3f800000;
        local_d4 = 0x3f000000;
        local_d0 = 0x3ccccccd;
        local_c0 = 0;
        local_140[1] = 0;
        local_140[2] = 0;
        local_140[3] = DAT_0064ab80;
        _SfList_InsertList_16(local_164,0xffffffff,local_140,1);
        _SfList_InsertList_16(param_1[0x29],0xffffffff,&local_164,1);
        iVar3 = _SfList_CreateExZ_32(&local_168,0x8c,0xffffffff,0xffffffff,0x40000004,0,0,0);
        if (iVar3 < 0) {
          for (iVar3 = 0x2e; iVar3 != 0; iVar3 = iVar3 + -1) {
            *param_1 = 0;
            param_1 = param_1 + 1;
          }
          goto joined_r0x00521cbe;
        }
        puVar7 = local_140;
        for (iVar4 = 0x21; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        local_128 = 0;
        local_f8 = local_f8 | 4;
        local_124 = 0;
        local_118 = 0;
        local_114 = 0;
        local_140[0] = 0x84;
        local_120 = 0x3f800000;
        local_11c = 0x3f800000;
        local_10c = 0x3f800000;
        local_110 = 0x3f800000;
        local_108 = 0x3f800000;
        local_104 = 0x3ccccccd;
        local_100 = 0x3f000000;
        local_c0 = 1;
        local_140[1] = 0;
        local_140[2] = 0;
        local_140[3] = DAT_0064ab80;
        _SfList_InsertList_16(local_168,0xffffffff,local_140,1);
        _SfList_InsertList_16(param_1[0x29],0xffffffff,&local_168,1);
        goto LAB_00521f60;
      }
    }
    for (iVar3 = 0x2e; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
joined_r0x00521cbe:
  if (param_4 != 0) {
    FUN_005b84d0(DAT_0064b138,1);
  }
  return -0x7ff8ffa9;
}


