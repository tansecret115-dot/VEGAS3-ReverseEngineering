/* Module: vfplugs.dll
   Function: FUN_00434a30
   Address: 00434a30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00434a30(int param_1,RECT *param_2,int param_3,undefined4 *param_4,int param_5,RECT *param_6
                ,int param_7,undefined4 *param_8,int param_9)

{
  undefined1 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  byte *local_64;
  double local_60;
  int local_54;
  int local_50;
  int local_4c;
  double local_48;
  int local_3c;
  double local_38;
  int local_2c;
  uint local_28;
  int iStack_24;
  uint local_20;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  uint local_10;
  int iStack_c;
  
  iVar6 = FUN_00430f00(&local_6c,&local_68,&local_54,param_5,param_6,param_7,param_8,param_9);
  if ((-1 < iVar6) &&
     (iVar6 = FUN_00430f00(&local_88,&local_70,&local_84,param_1,param_2,param_3,param_4,param_9),
     iVar12 = local_70, iVar8 = local_88, -1 < iVar6)) {
    if ((local_88 <= local_6c) && (local_70 <= local_68)) {
      iVar6 = ftol();
      local_74 = iVar6;
      local_2c = ftol();
      local_50 = 0;
      if (0 < iVar12) {
        iVar12 = (int)(local_2c + (local_2c >> 0x1f & 0x3fffU)) >> 0xe;
        local_4c = 0;
        local_3c = iVar12;
        do {
          local_78 = (int)(local_4c + (local_4c >> 0x1f & 0x3fffU)) >> 0xe;
          if (param_9 == 4) {
            local_80 = 0;
            if (0 < iVar8) {
              local_7c = 0;
              iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
              local_48 = (double)CONCAT44(local_48._4_4_,iVar6);
              local_78 = local_78 * param_7;
              local_60 = (double)CONCAT44(local_60._4_4_,iVar6 * iVar12);
              do {
                uVar13 = 0;
                puVar1 = (undefined1 *)(local_84 + local_80 * 4);
                local_38 = (double)CONCAT44(local_38._4_4_,puVar1);
                local_10 = 0;
                iStack_c = 0;
                local_28 = 0;
                iStack_24 = 0;
                local_20 = 0;
                iStack_1c = 0;
                local_18 = 0;
                iStack_14 = 0;
                if (0 < iVar12) {
                  local_64 = (byte *)(local_78 +
                                      ((int)(local_7c + (local_7c >> 0x1f & 0x3fffU)) >> 0xe) * 4 +
                                      local_54 + 2);
                  local_60 = (double)CONCAT44(local_60._4_4_,iVar12);
                  do {
                    pbVar9 = local_64;
                    iVar6 = local_48._0_4_;
                    if (0 < local_48._0_4_) {
                      do {
                        bVar14 = CARRY4(uVar13,(uint)pbVar9[-2]);
                        uVar13 = uVar13 + pbVar9[-2];
                        iStack_c = iStack_c + (uint)bVar14;
                        bVar14 = CARRY4(local_28,(uint)pbVar9[-1]);
                        local_28 = local_28 + pbVar9[-1];
                        iStack_24 = iStack_24 + (uint)bVar14;
                        bVar14 = CARRY4(local_20,(uint)*pbVar9);
                        local_20 = local_20 + *pbVar9;
                        iStack_1c = iStack_1c + (uint)bVar14;
                        bVar14 = CARRY4(local_18,(uint)pbVar9[1]);
                        local_18 = local_18 + pbVar9[1];
                        iStack_14 = iStack_14 + (uint)bVar14;
                        iVar6 = iVar6 + -1;
                        pbVar9 = pbVar9 + 4;
                        iVar12 = local_3c;
                      } while (iVar6 != 0);
                    }
                    local_64 = local_64 + param_7;
                    iVar6 = local_60._0_4_ + -1;
                    local_60 = (double)CONCAT44(local_60._4_4_,iVar6);
                    local_10 = uVar13;
                  } while (iVar6 != 0);
                }
                uVar5 = ftol();
                *puVar1 = uVar5;
                uVar5 = ftol();
                puVar1[1] = uVar5;
                uVar5 = ftol();
                puVar1[2] = uVar5;
                uVar5 = ftol();
                puVar1[3] = uVar5;
                local_80 = local_80 + 1;
                local_7c = local_7c + local_74;
                iVar8 = local_88;
              } while (local_80 < local_88);
            }
          }
          else {
            local_64 = (byte *)0x0;
            if (0 < iVar8) {
              iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
              local_80 = 0;
              local_7c = 0;
              fVar4 = (float)_DAT_00487590 / (float)(iVar6 * iVar12);
              do {
                fVar3 = (float)_DAT_00487598;
                pfVar2 = (float *)(local_7c + local_84);
                local_38 = _DAT_00487598;
                local_48 = _DAT_00487598;
                local_60 = _DAT_00487598;
                if (0 < iVar12) {
                  pfVar11 = (float *)(((int)(local_80 + (local_80 >> 0x1f & 0x3fffU)) >> 0xe) * 0x10
                                      + local_78 * param_7 + local_54 + 8);
                  iVar8 = iVar12;
                  do {
                    pfVar7 = pfVar11;
                    iVar10 = iVar6;
                    if (0 < iVar6) {
                      do {
                        fVar3 = pfVar7[-2] + fVar3;
                        local_38 = (double)pfVar7[-1] + local_38;
                        local_48 = (double)*pfVar7 + local_48;
                        iVar10 = iVar10 + -1;
                        local_60 = local_60 + (double)pfVar7[1];
                        pfVar7 = pfVar7 + 4;
                      } while (iVar10 != 0);
                    }
                    pfVar11 = (float *)((int)pfVar11 + param_7);
                    iVar8 = iVar8 + -1;
                  } while (iVar8 != 0);
                }
                *pfVar2 = fVar3 * fVar4;
                pfVar2[1] = (float)local_38 * fVar4;
                pfVar2[2] = (float)local_48 * fVar4;
                pfVar2[3] = (float)local_60 * fVar4;
                local_64 = local_64 + 1;
                local_80 = local_80 + local_74;
                local_7c = local_7c + 0x10;
                iVar8 = local_88;
              } while ((int)local_64 < local_88);
            }
          }
          local_84 = local_84 + param_3;
          local_50 = local_50 + 1;
          local_4c = local_4c + local_2c;
          iVar6 = local_74;
        } while (local_50 < local_70);
      }
      return 0;
    }
    iVar6 = -0x7ff8ffa9;
  }
  return iVar6;
}


