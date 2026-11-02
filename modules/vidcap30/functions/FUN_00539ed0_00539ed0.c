/* Module: vidcap30.exe
   Function: FUN_00539ed0
   Address: 00539ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00539ed0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  undefined4 in_stack_fffffe70;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_stack_fffffe74;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 in_stack_fffffe78;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_stack_fffffe7c;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [20];
  
  if ((param_1[0xb6] & 0x6000) == 0) {
    fVar5 = (float10)fptan((float10)*(double *)(param_1 + 0xa6) * (float10)_DAT_0059a168);
    *(double *)(param_1 + 0xb8) = (double)(fVar5 * (float10)_DAT_0059dbd8);
    fVar5 = (float10)fptan((float10)*(double *)(param_1 + 0xa8) * (float10)_DAT_0059a168);
    *(double *)(param_1 + 0xba) = (double)(fVar5 * (float10)_DAT_0059dbd8);
  }
  else {
    param_1[0xb8] = param_1[0xa6];
    param_1[0xb9] = param_1[0xa7];
    param_1[0xba] = param_1[0xa8];
    param_1[0xbb] = param_1[0xa9];
  }
  local_150 = *(double *)(param_1 + 0xb8) * _DAT_0059dbd0;
  local_138 = *(double *)(param_1 + 0xba) * _DAT_0059dbd0;
  switch(param_1[0xb6] & 0x1e0) {
  case 0x20:
    iVar4 = 0;
    puVar3 = param_1;
    if (0 < (int)param_1[0x50]) {
      do {
        puVar1 = (undefined4 *)
                 FUN_005389a0(local_68,*puVar3,puVar3[1],puVar3[2],puVar3[3],(undefined4)local_150,
                              local_150._4_4_,0,0);
        iVar4 = iVar4 + 1;
        *puVar3 = *puVar1;
        puVar3[1] = puVar1[1];
        puVar3[2] = puVar1[2];
        puVar3[3] = puVar1[3];
        puVar3 = puVar3 + 4;
      } while (iVar4 < (int)param_1[0x50]);
    }
    param_1[0x51] = 0;
    return;
  case 0x40:
    iVar4 = 0;
    puVar3 = param_1;
    if (0 < (int)param_1[0x50]) {
      do {
        uVar7 = *puVar3;
        uVar9 = puVar3[1];
        uVar11 = puVar3[2];
        uVar14 = puVar3[3];
        FUN_0053b9b0((undefined4)local_150,local_150._4_4_);
        puVar1 = (undefined4 *)
                 FUN_005389d0(local_108,in_stack_fffffe70,in_stack_fffffe74,in_stack_fffffe78,
                              in_stack_fffffe7c,uVar7,uVar9,uVar11,uVar14);
        iVar4 = iVar4 + 1;
        *puVar3 = *puVar1;
        puVar3[1] = puVar1[1];
        puVar3[2] = puVar1[2];
        puVar3[3] = puVar1[3];
        puVar3 = puVar3 + 4;
      } while (iVar4 < (int)param_1[0x50]);
    }
    iVar4 = 0;
    if (0 < (int)param_1[0x50]) {
      puVar3 = param_1 + 0x28;
      do {
        iVar4 = iVar4 + 1;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3 = puVar3 + 4;
      } while (iVar4 < (int)param_1[0x50]);
    }
    param_1[0x51] = param_1[0x50];
    return;
  case 0x80:
    iVar4 = 0;
    local_140 = SQRT(local_138 * local_150);
    local_138 = local_138 - local_150;
    puVar3 = param_1;
    if (0 < (int)param_1[0x50]) {
      do {
        puVar1 = (undefined4 *)
                 FUN_005389a0(local_88,*puVar3,puVar3[1],puVar3[2],puVar3[3],(undefined4)local_138,
                              local_138._4_4_,0,0);
        uVar12 = 0x3fe00000;
        uVar10 = 0;
        puVar8 = &local_150;
        uVar6 = 0x53a192;
        FUN_0053a880(puVar8,0,0x3fe00000,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
        uVar7 = (undefined4)local_150;
        uVar9 = local_150._4_4_;
        uVar11 = local_148;
        uVar14 = local_144;
        FUN_0053b9b0((undefined4)local_140,local_140._4_4_);
        puVar1 = (undefined4 *)
                 FUN_005389d0(local_e8,uVar6,puVar8,uVar10,uVar12,uVar7,uVar9,uVar11,uVar14);
        puVar13 = local_48;
        uVar10 = 0x53a1fb;
        puVar1 = (undefined4 *)FUN_00538b30(puVar13,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
        uVar7 = *puVar1;
        uVar9 = puVar1[1];
        uVar11 = puVar1[2];
        uVar14 = puVar1[3];
        FUN_0053b9b0(0,0x3ff00000);
        puVar2 = (undefined4 *)
                 FUN_00538a80(local_c8,uVar6,puVar8,uVar10,puVar13,uVar7,uVar9,uVar11,uVar14);
        puVar1 = &local_160;
        uVar10 = 0x53a259;
        FUN_005388a0(puVar1,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
        uVar7 = local_160;
        uVar9 = local_15c;
        uVar11 = local_158;
        uVar14 = local_154;
        FUN_0053b9b0(0,0x3ff00000);
        puVar1 = (undefined4 *)
                 FUN_00538a40(local_128,uVar6,puVar8,uVar10,puVar1,uVar7,uVar9,uVar11,uVar14);
        uVar7 = (undefined4)local_150;
        uVar9 = local_150._4_4_;
        uVar11 = local_148;
        uVar14 = local_144;
        puVar1 = (undefined4 *)
                 FUN_005389a0(local_a8,(undefined4)local_150,local_150._4_4_,local_148,local_144,
                              *puVar1,puVar1[1],puVar1[2],puVar1[3]);
        *puVar3 = *puVar1;
        puVar3[1] = puVar1[1];
        puVar3[2] = puVar1[2];
        puVar3[3] = puVar1[3];
        uVar6 = local_160;
        uVar10 = local_15c;
        uVar12 = local_158;
        uVar15 = local_154;
        FUN_0053b9b0(0,0x3ff00000);
        puVar1 = (undefined4 *)
                 FUN_00538a80(local_28,uVar7,uVar9,uVar11,uVar14,uVar6,uVar10,uVar12,uVar15);
        puVar1 = (undefined4 *)
                 FUN_005389a0(local_118,(undefined4)local_150,local_150._4_4_,local_148,local_144,
                              *puVar1,puVar1[1],puVar1[2],puVar1[3]);
        puVar2 = param_1 + (iVar4 + param_1[0x50]) * 4;
        iVar4 = iVar4 + 1;
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        puVar2[3] = puVar1[3];
        puVar3 = puVar3 + 4;
      } while (iVar4 < (int)param_1[0x50]);
    }
    iVar4 = 0;
    if (0 < (int)param_1[0x50]) {
      puVar3 = param_1 + 0x28;
      do {
        iVar4 = iVar4 + 1;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3 = puVar3 + 4;
      } while (iVar4 < (int)param_1[0x50]);
    }
    param_1[0x51] = param_1[0x50];
    param_1[0x50] = param_1[0x50] * 2;
    return;
  case 0x100:
    iVar4 = 0;
    local_140 = SQRT(local_138 * local_150);
    local_138 = local_138 - local_150;
    puVar3 = param_1;
    if (0 < (int)param_1[0x50]) {
      do {
        uVar7 = *puVar3;
        uVar9 = puVar3[1];
        uVar11 = puVar3[2];
        uVar14 = puVar3[3];
        FUN_0053b9b0((undefined4)local_138,local_138._4_4_);
        puVar1 = (undefined4 *)
                 FUN_005389d0(local_f8,in_stack_fffffe70,in_stack_fffffe74,in_stack_fffffe78,
                              in_stack_fffffe7c,uVar7,uVar9,uVar11,uVar14);
        uVar12 = 0x3fe00000;
        uVar10 = 0;
        puVar8 = &local_150;
        uVar6 = 0x53a4ad;
        FUN_0053a880(puVar8,0,0x3fe00000,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
        uVar7 = (undefined4)local_150;
        uVar9 = local_150._4_4_;
        uVar11 = local_148;
        uVar14 = local_144;
        FUN_0053b9b0((undefined4)local_140,local_140._4_4_);
        puVar1 = (undefined4 *)
                 FUN_005389d0(local_d8,uVar6,puVar8,uVar10,uVar12,uVar7,uVar9,uVar11,uVar14);
        puVar13 = local_b8;
        uVar10 = 0x53a516;
        puVar1 = (undefined4 *)FUN_00538b30(puVar13,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
        uVar7 = *puVar1;
        uVar9 = puVar1[1];
        uVar11 = puVar1[2];
        uVar14 = puVar1[3];
        FUN_0053b9b0(0,0x3ff00000);
        puVar2 = (undefined4 *)
                 FUN_00538a80(local_98,uVar6,puVar8,uVar10,puVar13,uVar7,uVar9,uVar11,uVar14);
        puVar1 = &local_160;
        uVar10 = 0x53a574;
        FUN_005388a0(puVar1,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
        uVar7 = local_160;
        uVar9 = local_15c;
        uVar11 = local_158;
        uVar14 = local_154;
        FUN_0053b9b0(0,0x3ff00000);
        puVar1 = (undefined4 *)
                 FUN_00538a40(local_78,uVar6,puVar8,uVar10,puVar1,uVar7,uVar9,uVar11,uVar14);
        uVar7 = (undefined4)local_150;
        uVar9 = local_150._4_4_;
        uVar11 = local_148;
        uVar14 = local_144;
        puVar1 = (undefined4 *)
                 FUN_005389a0(local_58,(undefined4)local_150,local_150._4_4_,local_148,local_144,
                              *puVar1,puVar1[1],puVar1[2],puVar1[3]);
        *puVar3 = *puVar1;
        puVar3[1] = puVar1[1];
        puVar3[2] = puVar1[2];
        puVar3[3] = puVar1[3];
        uVar6 = local_160;
        uVar10 = local_15c;
        uVar12 = local_158;
        uVar15 = local_154;
        FUN_0053b9b0(0,0x3ff00000);
        puVar1 = (undefined4 *)
                 FUN_00538a80(local_38,uVar7,uVar9,uVar11,uVar14,uVar6,uVar10,uVar12,uVar15);
        in_stack_fffffe70 = (undefined4)local_150;
        in_stack_fffffe74 = local_150._4_4_;
        in_stack_fffffe78 = local_148;
        in_stack_fffffe7c = local_144;
        puVar1 = (undefined4 *)
                 FUN_005389a0(local_18,(undefined4)local_150,local_150._4_4_,local_148,local_144,
                              *puVar1,puVar1[1],puVar1[2],puVar1[3]);
        puVar2 = param_1 + (iVar4 + param_1[0x50]) * 4;
        iVar4 = iVar4 + 1;
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        puVar2[3] = puVar1[3];
        puVar3 = puVar3 + 4;
      } while (iVar4 < (int)param_1[0x50]);
    }
    iVar4 = 0;
    if (0 < (int)param_1[0x50]) {
      puVar3 = param_1 + 0x28;
      do {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = (undefined4)local_140;
        puVar3[3] = local_140._4_4_;
        puVar1 = param_1 + (iVar4 + 10 + param_1[0x50]) * 4;
        iVar4 = iVar4 + 1;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(double *)(puVar1 + 2) = -local_140;
        puVar3 = puVar3 + 4;
      } while (iVar4 < (int)param_1[0x50]);
    }
    iVar4 = param_1[0x50];
    param_1[0x50] = iVar4 << 1;
    param_1[0x51] = iVar4 << 1;
  }
  return;
}


