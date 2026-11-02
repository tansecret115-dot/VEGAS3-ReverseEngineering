/* Module: vegas30k.dll
   Function: _SfPixelate@36
   Address: 0109f190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
_SfPixelate_36(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,int param_9)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
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
  
                    /* 0x9f190  1153  _SfPixelate@36 */
  puVar5 = (undefined1 *)
           _SfDibPrepareSet_32(&local_6c,&local_68,&local_54,param_5,param_6,param_7,param_8,param_9
                              );
  if ((-1 < (int)puVar5) &&
     (puVar5 = (undefined1 *)
               _SfDibPrepareSet_32(&local_88,&local_70,&local_84,param_1,param_2,param_3,param_4,
                                   param_9), iVar12 = local_70, iVar7 = local_88, -1 < (int)puVar5))
  {
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
            if (0 < iVar7) {
              local_7c = 0;
              iVar7 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
              local_48 = (double)CONCAT44(local_48._4_4_,iVar7);
              local_78 = local_78 * param_7;
              local_60 = (double)CONCAT44(local_60._4_4_,iVar7 * iVar12);
              do {
                uVar13 = 0;
                puVar5 = (undefined1 *)(local_84 + local_80 * 4);
                local_38 = (double)CONCAT44(local_38._4_4_,puVar5);
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
                    iVar7 = local_48._0_4_;
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
                        iVar7 = iVar7 + -1;
                        pbVar9 = pbVar9 + 4;
                        iVar12 = local_3c;
                      } while (iVar7 != 0);
                    }
                    local_64 = local_64 + param_7;
                    iVar7 = local_60._0_4_ + -1;
                    local_60 = (double)CONCAT44(local_60._4_4_,iVar7);
                    local_10 = uVar13;
                  } while (iVar7 != 0);
                }
                uVar4 = ftol();
                *puVar5 = uVar4;
                uVar4 = ftol();
                puVar5[1] = uVar4;
                uVar4 = ftol();
                puVar5[2] = uVar4;
                uVar4 = ftol();
                puVar5[3] = uVar4;
                local_80 = local_80 + 1;
                local_7c = local_7c + local_74;
                iVar7 = local_88;
              } while (local_80 < local_88);
            }
          }
          else {
            local_64 = (byte *)0x0;
            if (0 < iVar7) {
              iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
              local_80 = 0;
              local_7c = 0;
              fVar3 = (float)_DAT_011dad58 / (float)(iVar6 * iVar12);
              do {
                fVar2 = (float)_DAT_011db3f0;
                pfVar1 = (float *)(local_7c + local_84);
                local_38 = _DAT_011db3f0;
                local_48 = _DAT_011db3f0;
                local_60 = _DAT_011db3f0;
                if (0 < iVar12) {
                  pfVar11 = (float *)(((int)(local_80 + (local_80 >> 0x1f & 0x3fffU)) >> 0xe) * 0x10
                                      + local_78 * param_7 + local_54 + 8);
                  iVar7 = iVar12;
                  do {
                    pfVar8 = pfVar11;
                    iVar10 = iVar6;
                    if (0 < iVar6) {
                      do {
                        fVar2 = pfVar8[-2] + fVar2;
                        local_38 = (double)pfVar8[-1] + local_38;
                        local_48 = (double)*pfVar8 + local_48;
                        iVar10 = iVar10 + -1;
                        local_60 = local_60 + (double)pfVar8[1];
                        pfVar8 = pfVar8 + 4;
                      } while (iVar10 != 0);
                    }
                    pfVar11 = (float *)((int)pfVar11 + param_7);
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                }
                *pfVar1 = fVar2 * fVar3;
                pfVar1[1] = (float)local_38 * fVar3;
                pfVar1[2] = (float)local_48 * fVar3;
                pfVar1[3] = (float)local_60 * fVar3;
                local_64 = local_64 + 1;
                local_80 = local_80 + local_74;
                local_7c = local_7c + 0x10;
                iVar7 = local_88;
              } while ((int)local_64 < local_88);
            }
          }
          local_84 = local_84 + param_3;
          local_50 = local_50 + 1;
          local_4c = local_4c + local_2c;
          iVar6 = local_74;
        } while (local_50 < local_70);
      }
      return (undefined1 *)0x0;
    }
    puVar5 = &DAT_80070057;
  }
  return puVar5;
}


