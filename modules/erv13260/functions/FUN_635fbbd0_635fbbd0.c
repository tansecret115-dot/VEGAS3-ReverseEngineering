/* Module: erv13260.dll
   Function: FUN_635fbbd0
   Address: 635fbbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_635fbbd0(int *param_1,uint param_2,int *param_3,byte param_4,undefined4 param_5,
            undefined4 param_6,int *param_7,int *param_8,int *param_9,byte *param_10,
            undefined4 *param_11,int *param_12)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar7;
  undefined2 uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  undefined1 *puVar13;
  int local_8c [9];
  int local_68;
  int *local_64;
  int local_60;
  int *local_5c;
  int local_58;
  uint local_54;
  float local_50;
  undefined1 *local_4c;
  byte *local_48;
  int *local_44;
  undefined1 *local_40;
  int *local_3c;
  int *local_38;
  undefined1 *local_34;
  int local_30;
  int *local_2c;
  uint *local_28;
  byte *local_24;
  int *local_20;
  int *local_1c;
  byte *local_18;
  int *local_14;
  undefined1 *local_10;
  int *local_c;
  int local_8;
  
  local_34 = (undefined1 *)param_12[1];
  local_38 = (int *)*param_12;
  local_40 = *(undefined1 **)((int)param_12 + 0x23cb);
  local_14 = *(int **)((int)param_12 + 0x23cf);
  local_8 = (int)param_12 + 0x5a;
  local_20 = (int *)param_12[0xb];
  piVar9 = (int *)param_12[0x74d];
  local_28 = (uint *)(local_20 + 0x180);
  piVar10 = (int *)((int)param_12 + 0x1cd3);
  local_44 = local_20 + 0x300;
  local_18 = (byte *)local_20[0x2305];
  local_24 = (byte *)local_20[0x2306];
  local_8c[5] = 0;
  local_8c[6] = 0;
  local_8c[7] = 0;
  local_50 = 0.0;
  iVar5 = *(int *)((int)param_12 + 0x1d5f) * 8;
  local_3c = (int *)0x0;
  local_68 = iVar5 + -0x96;
  local_8c[0] = 0;
  local_8c[1] = 0;
  local_8c[2] = 0;
  local_8c[3] = 0;
  local_8c[4] = 0;
  local_58 = 0;
  local_54 = (uint)(iVar5 != 0);
  if ((param_12[0x73c] != 0) && (0 < (int)local_34)) {
    local_1c = (int *)((int)param_12 + 0x6b);
    local_10 = local_34;
    do {
      if (0 < (int)local_38) {
        piVar11 = local_1c;
        for (uVar7 = ((int)local_38 * 3 & 0x7fffffffU) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
          *piVar11 = 0;
          piVar11 = piVar11 + 1;
        }
        for (iVar5 = ((int)local_38 * 3 & 1U) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined1 *)piVar11 = 0;
          piVar11 = (int *)((int)piVar11 + 1);
        }
      }
      local_1c = local_1c + 0x3c;
      local_10 = local_10 + -1;
    } while (local_10 != (undefined1 *)0x0);
  }
  local_5c = piVar9;
  local_c = piVar10;
  if (param_12[0x73a] == 0) {
    FUN_635fcf50((byte *)*param_3,(int)local_40,(int)local_14,local_18);
    local_48 = local_18;
    local_14 = param_3;
  }
  else {
    iVar12 = (-(uint)(param_12[0x73b] != 0) & 8) + 8;
    local_10 = local_40 + iVar12 * 4;
    local_1c = (int *)(iVar12 * 2);
    piVar10 = (int *)((int)(local_10 + 1) * iVar12 * 2);
    local_2c = piVar10;
    FUN_635fd4e0((undefined4 *)*param_3,(undefined4 *)(local_24 + (int)piVar10),local_40,
                 (int)local_14,(int)local_1c);
    local_30 = (int)local_14 + iVar12 * 4;
    FUN_635fcf50(local_24,(int)local_10,local_30,local_18);
    local_48 = local_18 + ((int)local_10 * 8 + 4) * iVar12;
    local_3c = FUN_635f7db0(local_30 * (int)local_10);
    FUN_635fd4e0((undefined4 *)*param_3,(undefined4 *)(*local_3c + (int)piVar10),local_40,
                 (int)local_14,(int)local_1c);
    local_4c = (undefined1 *)((int)local_40 / 2);
    local_30 = (int)local_14 / 2;
    iVar5 = (int)(local_4c + 1 + (int)local_1c) * iVar12;
    FUN_635fd4e0((undefined4 *)param_3[1],(undefined4 *)(iVar5 + local_3c[1]),local_4c,local_30,
                 iVar12);
    piVar10 = local_3c;
    FUN_635fd4e0((undefined4 *)param_3[2],(undefined4 *)(iVar5 + local_3c[2]),local_4c,local_30,
                 iVar12);
    local_14 = malloc(0xc);
    *local_14 = *piVar10 + (int)local_2c;
    local_14[1] = iVar5 + piVar10[1];
    local_14[2] = iVar5 + piVar10[2];
    piVar10 = local_c;
  }
  if (param_7 == (int *)0x0) {
    if (1 < (int)local_38 + 1) {
      param_7 = local_38;
      piVar10 = local_20 + 0x482;
      do {
        param_3 = (int *)0x6;
        piVar11 = piVar10;
        do {
          FUN_635fb640((undefined4 *)*piVar11);
          piVar11 = piVar11 + 0x516;
          param_3 = (int *)((int)param_3 + -1);
        } while (param_3 != (int *)0x0);
        iVar5 = *piVar10;
        piVar10 = piVar10 + 1;
        *(undefined4 *)(iVar5 + 0x14) = 3;
        param_7 = (int *)((int)param_7 + -1);
      } while (param_7 != (int *)0x0);
    }
    if (0 < (int)(local_34 + 1)) {
      param_3 = local_20 + 0x481;
      param_7 = local_20 + (int)local_38 + 0x482;
      local_24 = local_34 + 1;
      do {
        local_10 = (undefined1 *)0x6;
        piVar10 = param_7;
        piVar11 = param_3;
        do {
          FUN_635fb620((undefined4 *)*piVar11);
          FUN_635fb620((undefined4 *)*piVar10);
          piVar11 = piVar11 + 0x516;
          piVar10 = piVar10 + 0x516;
          local_10 = (undefined1 *)((int)local_10 + -1);
        } while (local_10 != (undefined1 *)0x0);
        iVar5 = *param_3;
        param_3 = param_3 + 0x2a;
        *(undefined4 *)(iVar5 + 0x14) = 3;
        iVar5 = *param_7;
        param_7 = param_7 + 0x2a;
        local_24 = local_24 + -1;
        *(undefined4 *)(iVar5 + 0x14) = 3;
        local_10 = (undefined1 *)0x0;
      } while (local_24 != (byte *)0x0);
    }
    iVar5 = FUN_635fd060(param_1,param_2,local_14,(int)local_48,(int)(local_20 + 0x481),param_12);
    piVar10 = local_c;
    if (iVar5 == 3) {
      *param_9 = 1;
    }
  }
  if ((*param_9 == 0) || (*(int *)((int)param_12 + 0x1d8f) != 0)) {
    uVar7 = param_12[9] + 1;
    while (((uint)param_12[9] < uVar7 || (0x80000 < (int)uVar7))) {
      if (0x1f < param_4) {
        if (*(int *)(local_8 + 0x1c8e) != 0) {
          free(local_14);
          FUN_635f7e90(local_3c);
        }
        return 3;
      }
      puVar13 = (undefined1 *)0x0;
      *param_11 = 0;
      local_24 = (byte *)0x0;
      local_18 = (byte *)0x0;
      *param_10 = 0;
      FUN_635fb4d0(piVar9);
      local_30 = 0;
      FUN_635f2090((int)piVar10);
      if (0 < (int)local_34) {
        do {
          if (puVar13 == (undefined1 *)0x0) {
            iVar5 = FUN_635fb6b0(0,0,local_8,param_12[8],local_c);
            piVar9[6] = piVar9[6] + iVar5;
          }
          param_3 = (int *)0x0;
          if (0 < (int)local_38) {
            local_64 = (int *)((int)local_38 + -1);
            iVar5 = (int)puVar13 * (int)local_38;
            param_7 = (int *)0x0;
            do {
              if (param_3 == local_64) {
                local_4c = (undefined1 *)0x0;
                local_10 = puVar13 + 1;
              }
              else {
                local_4c = (undefined1 *)((int)param_3 + 1);
                local_10 = puVar13;
              }
              uVar7 = FUN_635fb5e0(piVar9);
              if ((uint)param_12[9] < uVar7) {
                local_c[1] = 0;
                goto LAB_635fc5aa;
              }
              if (((*(char *)(iVar5 + *(int *)(local_8 + 0x1d01)) != '\0') &&
                  (param_7 != (int *)0x0)) &&
                 (*(int *)(local_20[(int)param_3 + (int)puVar13 * 0x2a + 0x4ac] + 0x14) == 2)) {
                *(undefined1 *)(iVar5 + *(int *)(local_8 + 0x1d01)) = 0;
              }
              local_60 = (int)puVar13 * 0x2a;
              local_1c = local_20 + (int)param_3 + local_60 + 0x4ac;
              puVar6 = (uint *)FUN_635fa3c0(*(int *)(*local_1c + 0x14),
                                            (int)*(char *)(iVar5 + *(int *)(local_8 + 0x1d01)));
              *(uint **)(*local_1c + 0x14) = puVar6;
              if (((puVar6 == (uint *)0x0) || (puVar6 == (uint *)0x1)) || (puVar6 == (uint *)0x2)) {
                if (*(int *)(*local_1c + 0x18) == 0) {
                  FUN_635f7ed0(param_1,(int)local_14,(int)local_48,(int)param_7,
                               (int *)((int)puVar13 << 4),(int)(local_20 + 0x481),local_28,
                               (int)param_12);
                }
                else {
                  FUN_635fcde0(local_28);
                  piVar9[0xc] = piVar9[0xc] + 1;
                }
              }
              else {
                FUN_635fcd10((int)param_7,(int)puVar13 << 4,param_1,local_28,(int)local_40);
                FUN_635fcd60((int)param_7,(int)puVar13 << 4,(int)param_1,(int)local_28,(int)param_12
                            );
                piVar9 = local_5c;
              }
              if (*(int *)(*local_1c + 0x18) == 0) {
                local_8c[8] = (int)param_4;
                FUN_635fe9f0((int *)local_28,local_8c[8],puVar6,(int)local_44);
                param_2 = FUN_635fad90((int)local_44,(int)puVar6,0x40);
                if ((param_2 == 0) && ((puVar6 == (uint *)0x0 || (puVar6 == (uint *)0x1)))) {
                  FUN_635fcde0(local_28);
                }
                else {
                  if (*(int *)(local_8 + 0x1c96) != 0) {
                    if ((puVar6 == (uint *)0x3) || (puVar6 == (uint *)0x4)) {
                      puVar1 = (undefined4 *)
                               (local_8 + 0x11 + (int)(param_3 + (int)puVar13 * 10) * 6);
                      uVar8 = CONCAT11(param_4,param_4);
                      *puVar1 = CONCAT22(uVar8,uVar8);
                      *(undefined2 *)(puVar1 + 1) = uVar8;
                    }
                    else {
                      local_2c = (int *)0x0;
                      do {
                        if ((1 << ((byte)local_2c & 0x1f) & param_2) != 0) {
                          *(byte *)((int)local_2c +
                                   local_8 + (int)(param_3 + (int)puVar13 * 10) * 6 + 0x11) =
                               param_4;
                        }
                        local_2c = (int *)((int)local_2c + 1);
                      } while ((int)local_2c < 6);
                    }
                  }
                  FUN_635feab0(local_44,local_28,local_8c[8],(int)puVar6);
                }
              }
              else {
                param_2 = 0;
              }
              local_2c = local_20 + 0x481;
              FUN_635f98f0((int)local_14,(int)local_48,(int *)local_28,(int)param_7,
                           (int)puVar13 << 4,(int)local_2c,local_20,(int)param_12);
              FUN_635fd6e0((int)local_20);
              if ((((param_2 == 0) &&
                   (bVar4 = FUN_635fb660((int *)*local_1c,local_8c),
                   CONCAT31(extraout_var,bVar4) != 0)) &&
                  (bVar4 = FUN_635fb660((int *)local_20[(int)param_3 + local_60 + 0x1e1a],local_8c),
                  CONCAT31(extraout_var_00,bVar4) != 0)) &&
                 ((puVar6 == (uint *)0x0 || (puVar6 == (uint *)0x1)))) {
                if (puVar6 == (uint *)0x1) {
                  puVar6 = (uint *)0x0;
                  *(undefined1 *)(iVar5 + *(int *)(local_8 + 0x1d01)) = 0;
                }
                FUN_635fa3f0((uint)puVar6,1,0,(int)piVar9,local_8,
                             *(char *)(iVar5 + *(int *)(local_8 + 0x1d01)),local_c);
              }
              else {
                FUN_635fa3f0((uint)puVar6,0,param_2,(int)piVar9,local_8,
                             *(char *)(iVar5 + *(int *)(local_8 + 0x1d01)),local_c);
                if ((puVar6 == (uint *)0x0) || (puVar6 == (uint *)0x1)) {
                  piVar9[9] = piVar9[9] + 1;
LAB_635fc38d:
                  FUN_635fafd0((int)local_2c,(int)param_3,(int)puVar13,(uint)puVar6,0,param_12);
                }
                else {
                  if (puVar6 == (uint *)0x2) {
                    piVar9[10] = piVar9[10] + 1;
                    goto LAB_635fc38d;
                  }
                  piVar9[0xb] = piVar9[0xb] + 1;
                }
                if (((param_2 != 0) || (puVar6 == (uint *)0x3)) || (puVar6 == (uint *)0x4)) {
                  FUN_635fa550((uint)local_44,puVar6,(byte)param_2,piVar9,0x40,local_8,local_c);
                }
              }
              local_50 = (float)param_4 + local_50;
              local_58 = local_58 + 1;
              FUN_635fce00((int)param_3,(int)puVar13,(int)local_20,param_8,(int)param_12);
              if (local_54 != 0) {
                iVar12 = FUN_635fb5e0(piVar9);
                iVar12 = iVar12 - (int)local_24;
                local_18 = local_18 + 1;
                if (local_68 < iVar12) {
                  uVar7 = FUN_635f2160(local_c);
                  piVar9[6] = piVar9[6] + uVar7;
                  local_24 = local_24 + uVar7 + iVar12;
                  param_11[*param_10 + 1] = (int)(local_24 + ((int)local_24 >> 0x1f & 7)) >> 3;
                  iVar12 = *local_c;
                  *(undefined1 *)(param_11[*param_10] + 3 + iVar12) = local_18._0_1_;
                  uVar7 = (uint)local_18 >> 8;
                  local_18 = (byte *)0x0;
                  pbVar2 = (byte *)(param_11[*param_10] + 2 + iVar12);
                  *pbVar2 = *pbVar2 | (byte)uVar7 & 0xf;
                  if ((int)local_10 < (int)local_34) {
                    bVar3 = *param_10;
                    *param_10 = bVar3 + 1;
                    if (0x80 < (byte)(bVar3 + 1)) {
                      return 2;
                    }
                    iVar12 = FUN_635fb6b0((int)local_4c,(int)local_10,local_8,param_12[8],local_c);
                    piVar9[6] = piVar9[6] + iVar12;
                  }
                  else {
                    local_30 = 1;
                  }
                }
              }
              param_3 = (int *)((int)param_3 + 1);
              iVar5 = iVar5 + 1;
              param_7 = param_7 + 4;
            } while ((int)param_3 < (int)local_38);
          }
          puVar13 = puVar13 + 1;
          piVar10 = local_c;
        } while ((int)puVar13 < (int)local_34);
      }
      if (local_54 == 0) {
        uVar7 = FUN_635f2160(piVar10);
        piVar9[6] = piVar9[6] + uVar7;
      }
      else {
        uVar7 = FUN_635f2160(piVar10);
        piVar9[6] = piVar9[6] + uVar7;
        iVar5 = *piVar10;
        if (*param_10 == 0) {
          FUN_635f2190(3,2,piVar10);
          piVar9[6] = piVar9[6] + -0x18;
        }
        else if (local_30 == 0) {
          *(char *)(param_11[*param_10] + 3 + iVar5) = (char)local_18;
          *(byte *)(param_11[*param_10] + 2 + iVar5) =
               *(byte *)(param_11[*param_10] + 2 + iVar5) | (byte)((uint)local_18 >> 8) & 0xf;
        }
      }
      *(float *)(*(int *)(local_8 + 0x1ce6) + 0xc) = local_50 / (float)local_58;
LAB_635fc5aa:
      param_4 = param_4 + 1;
      uVar7 = FUN_635fb5e0(piVar9);
      piVar10 = local_c;
    }
  }
  if (*(int *)(local_8 + 0x1c8e) != 0) {
    free(local_14);
    FUN_635f7e90(local_3c);
  }
  *(int *)(local_8 + 4) = *(int *)(local_8 + 4) + 1;
  return 0;
}


