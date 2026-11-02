/* Module: mp3plug.dll
   Function: FUN_5f6f59a0
   Address: 5f6f59a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_5f6f59a0(int *param_1,int param_2,int param_3,int param_4,int param_5,float param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  double dVar12;
  float local_48c [78];
  int local_354 [78];
  float local_21c [78];
  int local_e4;
  int *local_d0;
  double local_cc;
  double local_c4;
  double local_bc;
  double local_b4;
  double local_ac;
  double local_a4;
  double local_9c;
  double local_94;
  double local_8c;
  double local_84;
  double local_7c;
  double local_74;
  double local_6c;
  double local_64;
  double local_5c;
  double local_54;
  double local_4c;
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  int local_24;
  int *local_20;
  
  if (0 < param_5) {
    local_d0 = param_1 + param_5 * 0x2e5;
    iVar10 = 0;
    piVar4 = param_1;
    piVar9 = param_1;
    do {
      iVar3 = 0;
      if (0 < piVar9[0x2c]) {
        pfVar7 = (float *)((int)local_48c + iVar10);
        do {
          iVar8 = iVar3 + 0xa3;
          iVar3 = iVar3 + 1;
          *pfVar7 = SQRT(SQRT((float)piVar4[iVar8]));
          pfVar7 = pfVar7 + 1;
        } while (iVar3 < piVar9[0x2c]);
      }
      piVar4 = piVar4 + 0x2e5;
      piVar9 = piVar9 + 0x2e5;
      iVar10 = iVar10 + 0x9c;
    } while ((int)piVar9 < (int)local_d0);
  }
  FUN_5f6f6510((int)local_354,param_1,param_5);
  local_e4 = *(int *)(param_2 + 0x640);
  local_34 = (double)*(float *)(param_2 + 0x63c);
  fVar1 = _DAT_5f75e2b8 / ((float)local_e4 * _DAT_5f75e2b4);
  local_44 = (double)fVar1;
  local_4c = pow(_DAT_5f75e2c0,
                 (double)((*(float *)(param_2 + 0x63c) - *(float *)(param_2 + 0x638)) * fVar1));
  local_3c = (double)param_6;
  dVar12 = pow(_DAT_5f75e2c8,(local_34 - (double)param_6) * local_44);
  piVar4 = (int *)0x0;
  local_cc = dVar12 - local_4c;
  if (0 < param_5) {
    local_24 = param_2;
    piVar9 = param_1;
    piVar11 = param_1;
    do {
      iVar10 = param_4;
      if (piVar11[0x29] != 2) {
        iVar10 = param_3;
      }
      iVar8 = 0;
      iVar3 = piVar11[0x2c];
      if (0 < iVar3) {
        iVar5 = 0;
        local_d0 = piVar4;
        do {
          fVar1 = (float)piVar9[iVar8 + 0x55];
          local_b4 = (double)fVar1;
          local_bc = (double)(float)piVar9[iVar8 + 0xa3];
          if ((float)piVar9[iVar8 + 0xa3] < fVar1) {
            fVar1 = *(float *)(iVar10 + iVar8 * 4) * fVar1;
            iVar3 = (int)local_d0 * 0x9c + iVar5;
            dVar12 = (double)fVar1;
            local_c4 = dVar12;
            fVar2 = (float)local_cc + *(float *)((int)local_48c + iVar3);
            fVar2 = fVar2 * fVar2 * fVar2 * fVar2;
            if ((fVar1 < fVar2) && (*(int *)((int)local_354 + iVar3) != 0)) {
              if (dVar12 < local_bc) {
                dVar12 = local_bc;
              }
              fVar2 = (float)dVar12;
              *(undefined4 *)((int)local_354 + iVar3) = 2;
            }
            piVar9[iVar8 + 0xa3] = (int)fVar2;
            iVar3 = piVar11[0x2c];
          }
          iVar8 = iVar8 + 1;
          iVar5 = iVar5 + 4;
          piVar4 = local_d0;
        } while (iVar8 < iVar3);
      }
      piVar4 = (int *)((int)piVar4 + 1);
      piVar9 = piVar9 + 0x2e5;
      piVar11 = piVar11 + 0x2e5;
      param_2 = local_24;
    } while ((int)piVar4 < param_5);
  }
  *(undefined4 *)(param_2 + 0x640) = 0;
  *(undefined4 *)(param_2 + 0x63c) = 0;
  *(undefined4 *)(param_2 + 0x638) = 0;
  if (0 < param_5) {
    local_b4 = (double)CONCAT44(local_b4._4_4_,param_5 * 0x31c + param_2);
    local_bc = (double)CONCAT44(local_bc._4_4_,param_1 + 0xa3);
    local_c4 = (double)CONCAT44(local_c4._4_4_,param_1 + 0x55);
    local_74 = (double)CONCAT44(local_74._4_4_,param_1);
    local_6c = (double)CONCAT44(local_6c._4_4_,param_2);
    iVar10 = param_2;
    piVar4 = param_1;
    iVar3 = param_2;
    do {
      FUN_5f70bd40(iVar3,local_c4._0_4_,SUB84(local_bc,0),piVar4[0x2c]);
      *(float *)(param_2 + 0x638) = *(float *)(iVar10 + 0x310) + *(float *)(param_2 + 0x638);
      *(float *)(param_2 + 0x63c) = *(float *)(param_2 + 0x63c) + *(float *)(iVar10 + 0x314);
      *(int *)(param_2 + 0x640) = *(int *)(iVar10 + 0x318) + *(int *)(param_2 + 0x640);
      piVar4[0x30d] = *(int *)(iVar10 + 0x310);
      local_bc = (double)CONCAT44(local_bc._4_4_,local_bc._0_4_ + 0xb94);
      iVar10 = iVar10 + 0x31c;
      local_c4 = (double)CONCAT44(local_c4._4_4_,local_c4._0_4_ + 0xb94);
      piVar4 = piVar4 + 0x2e5;
      iVar3 = iVar3 + 0x31c;
    } while (iVar10 < local_b4._0_4_);
  }
  iVar10 = 0;
  local_a4 = (double)_DAT_5f75e2dc;
  local_ac = (double)_DAT_5f75e2d8;
  local_b4 = (double)CONCAT44(local_b4._4_4_,local_354);
  if (0 < param_5) {
    local_2c = (double)*(float *)(param_2 + 0x638);
    local_bc = (double)CONCAT44(local_bc._4_4_,param_1 + param_5 * 0x2e5);
    iVar8 = 0;
    piVar4 = param_1;
    iVar3 = param_2;
    do {
      if (0 < piVar4[0x2c]) {
        piVar9 = (int *)((int)local_354 + iVar8);
        iVar5 = iVar3;
        do {
          if (*piVar9 < 2) {
            local_ac = local_ac + (double)*(float *)(iVar5 + 0x13c);
            iVar10 = iVar10 + *(int *)(iVar5 + 0x274);
            local_a4 = local_a4 + (double)*(float *)(iVar5 + 0x1d8);
          }
          iVar5 = iVar5 + 4;
          piVar9 = piVar9 + 1;
        } while (iVar5 < iVar3 + piVar4[0x2c] * 4);
      }
      iVar3 = iVar3 + 0x31c;
      piVar4 = piVar4 + 0x2e5;
      iVar8 = iVar8 + 0x9c;
      local_24 = param_2;
    } while ((int)piVar4 < (int)(param_1 + param_5 * 0x2e5));
  }
  local_54 = local_3c - ((double)*(float *)(param_2 + 0x638) - local_ac);
  if (0 < iVar10) {
    local_5c = (double)_DAT_5f75e2e0 / ((double)iVar10 * (double)_DAT_5f75e2b4);
    local_e4 = iVar10;
    local_64 = pow(_DAT_5f75e2e8,(local_a4 - local_ac) * local_5c);
    dVar12 = pow(_DAT_5f75e2f0,(local_a4 - local_54) * local_5c);
    iVar10 = 0;
    local_cc = (dVar12 - local_64) + local_cc;
    if (0 < param_5) {
      local_24 = param_2;
      piVar4 = param_1;
      piVar9 = param_1;
      do {
        iVar3 = param_4;
        if (piVar9[0x29] != 2) {
          iVar3 = param_3;
        }
        iVar5 = 0;
        iVar8 = piVar9[0x2c];
        if (0 < iVar8) {
          iVar6 = 0;
          local_a4 = (double)CONCAT44(local_a4._4_4_,iVar10);
          do {
            fVar1 = (float)piVar4[iVar5 + 0x55];
            local_8c = (double)fVar1;
            local_94 = (double)(float)piVar4[iVar5 + 0xa3];
            if ((float)piVar4[iVar5 + 0xa3] < fVar1) {
              fVar1 = *(float *)(iVar3 + iVar5 * 4) * fVar1;
              iVar10 = local_a4._0_4_ * 0x9c + iVar6;
              dVar12 = (double)fVar1;
              local_9c = dVar12;
              fVar2 = (float)local_cc + *(float *)((int)local_48c + iVar10);
              fVar2 = fVar2 * fVar2 * fVar2 * fVar2;
              if ((fVar1 < fVar2) && (*(int *)((int)local_354 + iVar10) != 0)) {
                if (dVar12 < local_94) {
                  dVar12 = local_94;
                }
                fVar2 = (float)dVar12;
                *(undefined4 *)((int)local_354 + iVar10) = 2;
              }
              piVar4[iVar5 + 0xa3] = (int)fVar2;
              iVar8 = piVar9[0x2c];
            }
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + 4;
          } while (iVar5 < iVar8);
          iVar10 = local_a4._0_4_;
        }
        iVar10 = iVar10 + 1;
        piVar4 = piVar4 + 0x2e5;
        piVar9 = piVar9 + 0x2e5;
        param_2 = local_24;
      } while (iVar10 < param_5);
    }
  }
  *(undefined4 *)(param_2 + 0x640) = 0;
  *(undefined4 *)(param_2 + 0x63c) = 0;
  *(undefined4 *)(param_2 + 0x638) = 0;
  if (0 < param_5) {
    local_8c = (double)CONCAT44(local_8c._4_4_,param_5 * 0x31c + param_2);
    local_94 = (double)CONCAT44(local_94._4_4_,param_1 + 0xa3);
    local_9c = (double)CONCAT44(local_9c._4_4_,param_1 + 0x55);
    local_74 = (double)CONCAT44(local_74._4_4_,param_1);
    local_6c = (double)CONCAT44(local_6c._4_4_,param_2);
    iVar10 = param_2;
    piVar4 = param_1;
    iVar3 = param_2;
    do {
      FUN_5f70bd40(iVar3,local_9c._0_4_,SUB84(local_94,0),piVar4[0x2c]);
      *(float *)(param_2 + 0x638) = *(float *)(iVar10 + 0x310) + *(float *)(param_2 + 0x638);
      *(float *)(param_2 + 0x63c) = *(float *)(param_2 + 0x63c) + *(float *)(iVar10 + 0x314);
      *(int *)(param_2 + 0x640) = *(int *)(iVar10 + 0x318) + *(int *)(param_2 + 0x640);
      piVar4[0x30d] = *(int *)(iVar10 + 0x310);
      local_94 = (double)CONCAT44(local_94._4_4_,local_94._0_4_ + 0xb94);
      iVar10 = iVar10 + 0x31c;
      local_9c = (double)CONCAT44(local_9c._4_4_,local_9c._0_4_ + 0xb94);
      piVar4 = piVar4 + 0x2e5;
      iVar3 = iVar3 + 0x31c;
    } while (iVar10 < local_8c._0_4_);
  }
  local_7c = local_3c - (double)*(float *)(param_2 + 0x638);
  local_84 = (double)_DAT_5f75e300;
  if (0 < param_5) {
    piVar9 = param_1 + param_5 * 0x2e5;
    iVar10 = 0;
    local_24 = param_2;
    piVar4 = param_1;
    do {
      iVar3 = 0;
      if (0 < piVar4[0x2c]) {
        fVar1 = (float)local_84;
        local_8c = (double)((ulonglong)local_8c & 0xffffffff00000000);
        iVar8 = iVar10;
        do {
          if ((*(int *)((int)local_354 + iVar8) < 2) || ((double)_DAT_5f75e32c < local_7c)) {
            fVar2 = (float)*(int *)(param_2 + 0x274 + iVar3 * 4) /
                    (*(float *)((int)local_48c + iVar8) + (float)local_cc);
            fVar1 = fVar1 + fVar2;
            *(float *)((int)local_21c + iVar8) = fVar2;
          }
          else {
            local_20 = piVar9;
            *(int *)((int)local_21c + iVar8) = local_8c._0_4_;
            piVar9 = local_20;
          }
          iVar3 = iVar3 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar3 < piVar4[0x2c]);
        local_cc = (double)(float)local_cc;
        local_84 = (double)fVar1;
      }
      param_2 = param_2 + 0x31c;
      piVar4 = piVar4 + 0x2e5;
      iVar10 = iVar10 + 0x9c;
    } while ((int)piVar4 < (int)piVar9);
    if ((double)_DAT_5f75e308 < local_84) {
      local_8c = (double)((ulonglong)local_8c & 0xffffffff00000000);
      local_74 = (double)(_DAT_5f75e310 / (float)local_84);
      if (0 < param_5) {
        local_9c = (double)CONCAT44(local_9c._4_4_,local_24);
        local_84 = (double)CONCAT44(local_84._4_4_,param_1);
        local_a4 = (double)((ulonglong)local_a4 & 0xffffffff00000000);
        do {
          iVar10 = param_4;
          if (*(int *)(local_84._0_4_ + 0xa4) != 2) {
            iVar10 = param_3;
          }
          local_94 = (double)CONCAT44(local_94._4_4_,iVar10);
          iVar3 = 0;
          iVar10 = *(int *)(local_84._0_4_ + 0xb0);
          if (0 < iVar10) {
            iVar5 = 0;
            iVar8 = (int)local_48c + local_a4._0_4_ + -0x10;
            do {
              local_e4 = *(int *)(local_9c._0_4_ + 0x274 + iVar3 * 4);
              local_6c = (double)(*(float *)(iVar8 + 0x280) * (float)local_74 * (float)local_7c);
              if (0 < local_e4) {
                dVar12 = -local_6c / (double)local_e4;
                if ((double)_DAT_5f75e318 <= dVar12) {
                  dVar12 = (double)_DAT_5f75e328;
                }
                dVar12 = pow(_DAT_5f75e320,dVar12);
                fVar1 = (float)param_1[iVar3 + 0xa3];
                param_1[iVar3 + 0xa3] = (int)((float)dVar12 * fVar1);
                fVar2 = *(float *)(local_94._0_4_ + iVar3 * 4) * (float)param_1[iVar3 + 0x55];
                iVar10 = local_84._0_4_;
                if ((float)dVar12 * fVar1 <= fVar2) {
                  iVar10 = *(int *)(local_84._0_4_ + 0xb0);
                }
                else {
                  iVar6 = local_8c._0_4_ * 0x9c + iVar5;
                  if (*(int *)((int)local_354 + iVar6) == 1) {
                    param_1[iVar3 + 0xa3] = (int)fVar2;
                    *(undefined4 *)((int)local_354 + iVar6) = 2;
                    iVar10 = *(int *)(iVar10 + 0xb0);
                  }
                  else {
                    iVar10 = *(int *)(local_84._0_4_ + 0xb0);
                  }
                }
              }
              iVar3 = iVar3 + 1;
              iVar8 = iVar8 + 4;
              iVar5 = iVar5 + 4;
            } while (iVar3 < iVar10);
          }
          local_a4 = (double)CONCAT44(local_a4._4_4_,local_a4._0_4_ + 0x9c);
          local_84 = (double)CONCAT44(local_84._4_4_,local_84._0_4_ + 0xb94);
          local_9c = (double)CONCAT44(local_9c._4_4_,local_9c._0_4_ + 0x31c);
          iVar10 = local_8c._0_4_ + 1;
          param_1 = param_1 + 0x2e5;
          local_8c = (double)CONCAT44(local_8c._4_4_,iVar10);
        } while (iVar10 < param_5);
      }
    }
  }
  return;
}


