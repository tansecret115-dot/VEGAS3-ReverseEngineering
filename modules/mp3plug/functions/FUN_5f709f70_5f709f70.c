/* Module: mp3plug.dll
   Function: FUN_5f709f70
   Address: 5f709f70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_5f709f70(int *param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  float *extraout_ECX_04;
  float *pfVar8;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  float *extraout_ECX_10;
  int iVar9;
  int iVar10;
  int *piVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  undefined4 local_9c [18];
  float *local_54 [6];
  double local_3c;
  double local_34;
  float *local_2c;
  uint local_24;
  int local_1c;
  int local_18;
  
  pfVar8 = (float *)(param_1 + 0x14);
  piVar11 = param_1 + 2;
  local_2c = pfVar8;
  local_3c._0_4_ = (float *)(param_1 + 0x482);
  local_34._0_4_ = (float *)piVar11;
  do {
    FUN_5f6d5090(pfVar8,piVar11,0x12);
    piVar11 = piVar11 + 0x24;
    pfVar8 = pfVar8 + 0x24;
  } while ((int)piVar11 < (int)(param_1 + 0x482));
  uVar4 = 0;
  pfVar8 = (float *)0x0;
  do {
    local_54[0] = pfVar8;
    uVar4 = uVar4 + 0x12;
    iVar9 = 0;
    do {
      if ((((uint)local_54[0] & 1) == 0) || ((uVar4 & 1) == 0)) {
        param_1[uVar4 + 2] = *(int *)(param_3 + iVar9 + (int)local_54[0] * 4);
      }
      else {
        param_1[uVar4 + 2] =
             (int)(*(float *)(param_3 + iVar9 + (int)local_54[0] * 4) * _DAT_5f7609e4);
      }
      uVar4 = uVar4 + 1;
      iVar9 = iVar9 + 0x80;
    } while (iVar9 < 0x900);
    pfVar8 = (float *)((int)local_54[0] + 1U);
  } while ((int)((int)local_54[0] + 1U) < 0x20);
  if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 3)) {
    local_2c = (float *)(param_1 + 2);
    local_34._0_4_ = param_4;
    pfVar8 = param_4;
    do {
      FUN_5f70b240(param_2,pfVar8);
      pfVar8 = pfVar8 + 0x12;
    } while ((int)pfVar8 < (int)(param_4 + 0x240));
  }
  else if (param_2 == 2) {
    local_54[2] = param_4 + 0xc;
    local_54[3] = param_4 + 0xd;
    pfVar8 = param_4 + 6;
    local_54[1] = param_4 + 7;
    pfVar5 = param_4 + 1;
    local_54[4] = (float *)(param_1 + 0x480);
    local_3c._0_4_ = (float *)param_1;
    local_2c = param_4;
    piVar11 = param_1;
    pfVar12 = param_4;
    pfVar7 = param_4;
    local_54[0] = pfVar8;
    local_34._0_4_ = pfVar5;
    do {
      FUN_5f709c80(pfVar8,pfVar7);
      FUN_5f709c80(extraout_ECX_05,pfVar5);
      fVar1 = pfVar12[3];
      fVar2 = pfVar12[1];
      fVar3 = pfVar12[2];
      pfVar12[2] = pfVar12[5] + pfVar12[3] + pfVar12[2];
      pfVar12[3] = pfVar12[4] + pfVar12[5] + pfVar12[3];
      pfVar12[1] = fVar1 + fVar2 + fVar3;
      *pfVar12 = *pfVar12 + fVar1 + fVar2;
      pfVar12[4] = pfVar12[4] + pfVar12[5];
      FUN_5f709c80(extraout_ECX_06,local_54[0]);
      FUN_5f709c80(extraout_ECX_07,local_54[1]);
      fVar1 = pfVar12[9];
      fVar2 = pfVar12[7];
      fVar3 = pfVar12[8];
      pfVar12[8] = pfVar12[0xb] + pfVar12[9] + pfVar12[8];
      pfVar12[9] = pfVar12[10] + pfVar12[0xb] + pfVar12[9];
      pfVar12[7] = fVar1 + fVar2 + fVar3;
      pfVar12[6] = pfVar12[6] + fVar1 + fVar2;
      pfVar12[10] = pfVar12[10] + pfVar12[0xb];
      FUN_5f709c80(extraout_ECX_08,local_54[2]);
      FUN_5f709c80(extraout_ECX_09,local_54[3]);
      pfVar12[0xc] = pfVar12[0xc] + pfVar12[0xf] + pfVar12[0xd];
      pfVar12[0xd] = pfVar12[0xf] + pfVar12[0xd] + pfVar12[0xe];
      pfVar12[0xe] = pfVar12[0xe] + pfVar12[0xf] + pfVar12[0x11];
      pfVar12[0xf] = pfVar12[0xf] + pfVar12[0x11] + pfVar12[0x10];
      pfVar12[0x10] = pfVar12[0x10] + pfVar12[0x11];
      local_54[2] = local_54[2] + 0x12;
      local_54[3] = local_54[3] + 0x12;
      local_54[0] = local_54[0] + 0x12;
      local_54[1] = local_54[1] + 0x12;
      piVar11 = piVar11 + 0x24;
      pfVar12 = pfVar12 + 0x12;
      pfVar7 = pfVar7 + 0x12;
      pfVar5 = pfVar5 + 0x12;
      pfVar8 = extraout_ECX_10;
    } while ((int)piVar11 < (int)local_54[4]);
  }
  else if (param_2 == 4) {
    iVar9 = *param_1 * 0x12;
    if (0 < iVar9) {
      local_2c = (float *)(param_1 + 2);
      local_34._0_4_ = param_4;
      iVar13 = 0;
      pfVar8 = param_4;
      do {
        FUN_5f70b240(0,pfVar8);
        iVar13 = iVar13 + 0x12;
        iVar9 = *param_1 * 0x12;
        pfVar8 = pfVar8 + 0x12;
      } while (iVar13 < iVar9);
    }
    if (iVar9 < 0x240) {
      pfVar8 = param_4 + iVar9;
      local_2c = (float *)(param_1 + iVar9 * 2 + 2);
      local_34._0_4_ = pfVar8;
      do {
        FUN_5f70b240(1,pfVar8);
        pfVar8 = pfVar8 + 0x12;
      } while ((int)pfVar8 < (int)(param_4 + 0x240));
    }
  }
  else if (param_2 == 6) {
    iVar9 = *param_1 * 0x12;
    if (0 < iVar9) {
      local_2c = (float *)(param_1 + 2);
      local_34._0_4_ = param_4;
      iVar13 = 0;
      pfVar8 = param_4;
      do {
        FUN_5f70b240(0,pfVar8);
        iVar13 = iVar13 + 0x12;
        iVar9 = *param_1 * 0x12;
        pfVar8 = pfVar8 + 0x12;
      } while (iVar13 < iVar9);
    }
    if (iVar9 < 0x240) {
      pfVar8 = param_4 + iVar9;
      local_2c = (float *)(param_1 + iVar9 * 2 + 2);
      local_34._0_4_ = pfVar8;
      do {
        FUN_5f70b240(3,pfVar8);
        pfVar8 = pfVar8 + 0x12;
      } while ((int)pfVar8 < (int)(param_4 + 0x240));
    }
  }
  else if (param_2 == 5) {
    iVar9 = *param_1 * 0x12;
    if (0 < iVar9) {
      local_2c = (float *)(param_1 + 2);
      local_34._0_4_ = param_4;
      iVar13 = 0;
      pfVar8 = param_4;
      do {
        FUN_5f70b240(0,pfVar8);
        iVar13 = iVar13 + 0x12;
        iVar9 = *param_1 * 0x12;
        pfVar8 = pfVar8 + 0x12;
      } while (iVar13 < iVar9);
    }
    if (iVar9 < 0x240) {
      local_54[2] = param_4 + iVar9 + 0xc;
      local_54[1] = param_4 + iVar9 + 0xd;
      local_54[4] = param_4 + iVar9 + 6;
      local_54[3] = param_4 + iVar9 + 7;
      pfVar15 = param_4 + iVar9 + 1;
      pfVar8 = (float *)(param_1 + iVar9 * 2);
      pfVar7 = (float *)(param_1 + 0x480);
      pfVar5 = param_4 + iVar9;
      pfVar12 = param_4 + iVar9;
      local_54[0] = pfVar7;
      local_2c = pfVar8;
      local_3c._0_4_ = pfVar15;
      local_34._0_4_ = pfVar5;
      do {
        FUN_5f709c80(pfVar7,pfVar12);
        FUN_5f709c80(extraout_ECX,pfVar15);
        fVar1 = pfVar5[3];
        fVar2 = pfVar5[1];
        fVar3 = pfVar5[2];
        pfVar5[2] = pfVar5[5] + pfVar5[3] + pfVar5[2];
        pfVar5[3] = pfVar5[4] + pfVar5[5] + pfVar5[3];
        pfVar5[1] = fVar1 + fVar2 + fVar3;
        *pfVar5 = *pfVar5 + fVar1 + fVar2;
        pfVar5[4] = pfVar5[4] + pfVar5[5];
        FUN_5f709c80(extraout_ECX_00,local_54[4]);
        FUN_5f709c80(extraout_ECX_01,local_54[3]);
        fVar1 = pfVar5[9];
        fVar2 = pfVar5[7];
        fVar3 = pfVar5[8];
        pfVar5[8] = pfVar5[0xb] + pfVar5[9] + pfVar5[8];
        pfVar5[9] = pfVar5[10] + pfVar5[0xb] + pfVar5[9];
        pfVar5[7] = fVar1 + fVar2 + fVar3;
        pfVar5[6] = pfVar5[6] + fVar1 + fVar2;
        pfVar5[10] = pfVar5[10] + pfVar5[0xb];
        FUN_5f709c80(extraout_ECX_02,local_54[2]);
        FUN_5f709c80(extraout_ECX_03,local_54[1]);
        pfVar5[0xc] = pfVar5[0xc] + pfVar5[0xf] + pfVar5[0xd];
        pfVar5[0xd] = pfVar5[0xf] + pfVar5[0xd] + pfVar5[0xe];
        pfVar5[0xe] = pfVar5[0xe] + pfVar5[0xf] + pfVar5[0x11];
        pfVar5[0xf] = pfVar5[0xf] + pfVar5[0x11] + pfVar5[0x10];
        pfVar5[0x10] = pfVar5[0x10] + pfVar5[0x11];
        local_54[2] = local_54[2] + 0x12;
        local_54[1] = local_54[1] + 0x12;
        local_54[4] = local_54[4] + 0x12;
        local_54[3] = local_54[3] + 0x12;
        pfVar8 = pfVar8 + 0x24;
        pfVar5 = pfVar5 + 0x12;
        pfVar12 = pfVar12 + 0x12;
        pfVar15 = pfVar15 + 0x12;
        pfVar7 = extraout_ECX_04;
      } while ((int)pfVar8 < (int)local_54[0]);
    }
  }
  if (((param_2 == 0) || (param_2 == 1)) || ((param_2 == 3 || ((param_2 == 4 || (param_2 == 6))))))
  {
    iVar14 = 0x12;
    iVar13 = 0x11;
    iVar9 = -0x20;
    do {
      pfVar8 = param_4 + iVar14;
      fVar1 = *(float *)(&DAT_5f74b6e8 + iVar9);
      fVar2 = *(float *)((int)&DAT_5f74b6c8 + iVar9);
      iVar6 = -0x1f;
      pfVar5 = param_4 + iVar13;
      while( true ) {
        fVar3 = *pfVar8;
        *pfVar8 = *pfVar8 * fVar1 - *pfVar5 * fVar2;
        fVar3 = *pfVar5 * fVar1 + fVar3 * fVar2;
        pfVar8 = pfVar8 + 0x12;
        iVar6 = iVar6 + 1;
        if (iVar6 == 0) break;
        *pfVar5 = fVar3;
        pfVar5 = pfVar5 + 0x12;
      }
      *pfVar5 = fVar3;
      iVar13 = iVar13 + -1;
      iVar14 = iVar14 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar9 != 0);
  }
  else if (param_2 == 2) {
    iVar9 = 0;
    local_3c._0_4_ = (float *)0xc;
    local_54[4] = param_4;
    local_34._0_4_ = (float *)0x6;
    do {
      iVar13 = 0;
      iVar14 = -0x48;
      do {
        iVar10 = (int)local_34._0_4_;
        iVar6 = (int)local_3c._0_4_;
        local_1c = iVar9;
        *(undefined4 *)((int)local_54 + iVar14) = *(undefined4 *)((int)param_4 + iVar13 + iVar9 * 4)
        ;
        *(undefined4 *)((int)local_54 + iVar14 + 4) =
             *(undefined4 *)(iVar13 + iVar10 * 4 + (int)param_4);
        *(undefined4 *)((int)local_54 + iVar14 + 8) =
             *(undefined4 *)(iVar13 + iVar6 * 4 + (int)param_4);
        iVar9 = local_1c;
        iVar6 = (int)local_34._0_4_;
        local_18 = (int)local_3c._0_4_;
        *(undefined4 *)((int)local_54 + iVar14 + 0xc) =
             *(undefined4 *)((int)param_4 + iVar13 + 4 + local_1c * 4);
        *(undefined4 *)((int)local_54 + iVar14 + 0x10) =
             *(undefined4 *)(iVar13 + 4 + iVar6 * 4 + (int)param_4);
        iVar6 = iVar13 + 4;
        iVar13 = iVar13 + 8;
        *(undefined4 *)((int)local_54 + iVar14 + 0x14) =
             *(undefined4 *)(iVar6 + local_18 * 4 + (int)param_4);
        iVar10 = (int)local_34._0_4_;
        iVar6 = (int)local_3c._0_4_;
        iVar14 = iVar14 + 0x18;
      } while (iVar14 != 0);
      FUN_5f6d5090(local_9c,local_54[4],0x12);
      iVar9 = iVar9 + 0x12;
      local_54[4] = local_54[4] + 0x12;
      local_34._0_4_ = (float *)(iVar10 + 0x12);
      local_3c._0_4_ = (float *)(iVar6 + 0x12);
    } while (iVar9 < 0x240);
  }
  else if (param_2 == 5) {
    iVar14 = 0x12;
    local_54[4] = (float *)*param_1;
    iVar13 = 0x11;
    iVar9 = -0x20;
    do {
      fVar1 = *(float *)(&DAT_5f74b6e8 + iVar9);
      fVar2 = *(float *)((int)&DAT_5f74b6c8 + iVar9);
      iVar6 = 0;
      uVar4 = (int)local_54[4] - 1;
      pfVar8 = param_4 + iVar14;
      pfVar5 = param_4 + iVar13;
      if (0 < (int)uVar4) {
        local_24 = uVar4 & 0xfffffffe;
        if (0 < (int)local_24) {
          do {
            fVar3 = *pfVar8;
            *pfVar8 = *pfVar8 * fVar1 - *pfVar5 * fVar2;
            *pfVar5 = *pfVar5 * fVar1 + fVar3 * fVar2;
            fVar3 = pfVar8[0x12];
            pfVar8[0x12] = pfVar8[0x12] * fVar1 - pfVar5[0x12] * fVar2;
            iVar6 = iVar6 + 2;
            pfVar8 = pfVar8 + 0x24;
            pfVar5[0x12] = pfVar5[0x12] * fVar1 + fVar3 * fVar2;
            pfVar5 = pfVar5 + 0x24;
          } while (iVar6 < (int)local_24);
        }
        if (iVar6 < (int)uVar4) {
          while( true ) {
            fVar3 = *pfVar8;
            *pfVar8 = *pfVar8 * fVar1 - *pfVar5 * fVar2;
            fVar3 = *pfVar5 * fVar1 + fVar3 * fVar2;
            iVar6 = iVar6 + 1;
            pfVar8 = pfVar8 + 0x12;
            if ((int)uVar4 <= iVar6) break;
            *pfVar5 = fVar3;
            pfVar5 = pfVar5 + 0x12;
          }
          *pfVar5 = fVar3;
        }
        local_54[4] = (float *)*param_1;
      }
      local_34 = (double)fVar1;
      local_3c = (double)fVar2;
      iVar13 = iVar13 + -1;
      iVar14 = iVar14 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar9 != 0);
    iVar9 = (int)local_54[4] * 0x12;
    if (iVar9 < 0x240) {
      iVar13 = iVar9 + 0xc;
      local_54[4] = param_4 + (int)local_54[4] * 0x12;
      iVar14 = iVar9 + 6;
      do {
        iVar6 = 0;
        iVar10 = -0x48;
        local_34 = (double)CONCAT44(local_34._4_4_,iVar14);
        local_3c = (double)CONCAT44(local_3c._4_4_,iVar13);
        do {
          iVar14 = (int)local_34._0_4_;
          iVar13 = (int)local_3c._0_4_;
          local_1c = iVar9;
          *(undefined4 *)((int)local_54 + iVar10) =
               *(undefined4 *)((int)param_4 + iVar6 + iVar9 * 4);
          *(undefined4 *)((int)local_54 + iVar10 + 4) =
               *(undefined4 *)(iVar6 + iVar14 * 4 + (int)param_4);
          *(undefined4 *)((int)local_54 + iVar10 + 8) =
               *(undefined4 *)(iVar6 + iVar13 * 4 + (int)param_4);
          iVar9 = local_1c;
          iVar13 = (int)local_34._0_4_;
          local_18 = (int)local_3c._0_4_;
          *(undefined4 *)((int)local_54 + iVar10 + 0xc) =
               *(undefined4 *)((int)param_4 + iVar6 + 4 + local_1c * 4);
          *(undefined4 *)((int)local_54 + iVar10 + 0x10) =
               *(undefined4 *)(iVar6 + 4 + iVar13 * 4 + (int)param_4);
          iVar13 = iVar6 + 4;
          iVar6 = iVar6 + 8;
          *(undefined4 *)((int)local_54 + iVar10 + 0x14) =
               *(undefined4 *)(iVar13 + local_18 * 4 + (int)param_4);
          iVar10 = iVar10 + 0x18;
        } while (iVar10 != 0);
        iVar13 = (int)local_3c._0_4_;
        iVar14 = (int)local_34._0_4_;
        FUN_5f6d5090(local_9c,local_54[4],0x12);
        iVar9 = iVar9 + 0x12;
        local_54[4] = local_54[4] + 0x12;
        iVar14 = iVar14 + 0x12;
        iVar13 = iVar13 + 0x12;
      } while (iVar9 < 0x240);
    }
  }
  return 1;
}


