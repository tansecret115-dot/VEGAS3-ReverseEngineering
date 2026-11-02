/* Module: erv33260.dll
   Function: FUN_67083490
   Address: 67083490
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_67083490(byte *param_1,char *param_2,int *param_3,uint param_4,int param_5,int param_6)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  longlong lVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  char *pcVar12;
  uint *puVar13;
  char cVar14;
  char *pcVar15;
  int *piVar16;
  bool bVar17;
  uint local_180 [16];
  char local_140;
  char local_13f [31];
  char local_120 [2];
  char local_11e [10];
  uint local_114 [20];
  int local_c4;
  int *local_c0;
  int local_bc [5];
  int local_a8;
  int local_a4;
  int local_a0;
  char *local_9c;
  uint local_98;
  int local_94;
  char *local_90;
  int local_8c;
  char *local_88;
  char *local_84;
  uint local_80;
  int local_7c;
  uint *local_78;
  uint *local_74;
  undefined2 local_6e;
  uint *local_6c;
  int local_68;
  char *local_64;
  int local_60;
  int local_5c;
  int local_58;
  char *local_54;
  int *local_50;
  char *local_4c;
  int *local_48;
  int *local_44;
  undefined2 *local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  int *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  undefined4 local_20;
  char *local_1c;
  int *local_18;
  undefined4 local_14;
  int *local_10;
  char *local_c;
  char *local_8;
  
  local_c0 = (int *)(*(int *)(param_1 + 0x34) + (int)param_2 * 0x10);
  iVar11 = *(int *)(param_1 + 0x40);
  local_6e = 0;
  local_9c = (char *)(*(int *)(param_1 + 0x1c) + local_c0[2] * 2);
  local_bc[4] = iVar11;
  uVar2 = *(undefined2 *)local_9c;
  local_78 = (uint *)CONCAT22(local_78._2_2_,uVar2);
  local_68 = *(int *)(*(int *)param_1 + 4) + *local_c0;
  local_94 = *(int *)(param_1 + 0x4c);
  local_8c = *(int *)(param_5 + 4) + *local_c0;
  local_c4 = (int)param_2 * 0xc;
  local_44 = (int *)((int)param_2 * 0xc + *(int *)(param_1 + 0x30));
  local_98 = (uint)(*(byte *)((int)local_44 + 5) >> 4);
  local_80 = (uint)*(byte *)(local_44 + 1);
  local_18 = (int *)0x7fffffff;
  local_bc[0] = 0x7fffffff;
  local_bc[1] = 0x7fffffff;
  local_bc[2] = 0x7fffffff;
  local_bc[3] = 0x7fffffff;
  local_60 = 0x7fffffff;
  local_40 = &DAT_6718d938 + (uint)*(byte *)(local_44 + 1) * 0x27;
  local_114[0] = 0x7fffffff;
  local_114[1] = 0x7fffffff;
  local_114[2] = 0x7fffffff;
  local_114[3] = 0x7fffffff;
  local_114[4] = 0x7fffffff;
  local_114[5] = 0x7fffffff;
  local_114[6] = 0x7fffffff;
  local_114[7] = 0x7fffffff;
  local_114[8] = 0x7fffffff;
  local_114[9] = 0x7fffffff;
  local_114[10] = 0x7fffffff;
  local_114[0xb] = 0x7fffffff;
  local_114[0xc] = 0x7fffffff;
  local_114[0xd] = 0x7fffffff;
  local_114[0xe] = 0x7fffffff;
  local_114[0xf] = 0x7fffffff;
  if ((*(int *)(param_4 + 0xc) == 0) || (local_50 = (int *)0x1, param_6 != 0)) {
    local_50 = (int *)0x0;
  }
  if ((*(int *)(param_4 + 0x10) == 0) || (local_48 = (int *)0x1, param_6 != 0)) {
    local_48 = (int *)0x0;
  }
  local_a0 = 0;
  switch(*(undefined4 *)(param_4 + 0x28)) {
  case 0:
    local_8 = *(char **)(param_4 + 0x24);
    local_7c = (int)local_8 / 2;
    if (local_7c < 5) goto LAB_67084a7d;
    local_7c = 4;
    local_a4 = 1;
    local_54 = (char *)0x1;
    break;
  case 1:
    local_8 = (char *)0x2;
    local_7c = 3;
LAB_67084a7d:
    local_a4 = 1;
    local_54 = (char *)0x1;
    break;
  case 2:
    local_8 = (char *)0x2;
    local_7c = 1;
    local_a4 = 1;
    local_54 = (char *)0x0;
    local_a0 = 1;
    break;
  case 3:
    local_8 = (char *)0x2;
    local_7c = 1;
    local_a4 = 0;
    local_54 = (char *)0x0;
    local_a0 = 1;
    break;
  case 4:
    local_c = (char *)0x0;
    local_84 = (char *)0x7fffffff;
    param_4 = 0;
    goto LAB_670847c2;
  }
  param_4 = local_c0[3];
  local_88 = (char *)(param_4 >> 8 & 0xff);
  local_90 = (char *)(param_4 >> 0x18);
  *(undefined1 *)((int)local_44 + 6) = 2;
  local_a8 = -(param_4 >> 0x10 & 0xff);
  local_64 = (char *)-(param_4 & 0xff);
  local_34 = (int *)FUN_67084b10(param_1,(int)param_2,uVar2,local_120,&local_58,&local_5c,
                                 (int)local_64,(int)local_88,local_a8,(int)local_90);
  param_4 = CONCAT22(local_6e,(undefined2)param_4);
  local_84 = (char *)(**(code **)(param_1 + 0x7c))(iVar11);
  local_c = local_84 +
            (int)(short)local_40[(int)(char)(&DAT_67091a17)[-local_5c] +
                                 (int)(char)(&DAT_67091a17)[-local_58]] +
            (uint)(byte)(&DAT_67091278)[local_80] * -6;
  if (*(int *)(&DAT_67091d88 + local_80 * 4) < (int)local_c) {
    local_10 = (int *)0x1;
    if (1 < local_34) {
      param_2 = local_11e;
      do {
        sVar3 = local_40[(int)(char)(&DAT_67091a17)[*param_2 * 3 - local_58] +
                         (int)(char)(&DAT_67091a17)[param_2[1] * 3 - local_5c]];
        if ((int)sVar3 < (int)local_c) {
          pcVar6 = (char *)(**(code **)(param_1 + 0x7c))(iVar11);
          pcVar15 = pcVar6 + sVar3;
          if ((int)pcVar15 < (int)local_c) {
            local_84 = pcVar6;
            local_c = pcVar15;
            uVar2 = *(undefined2 *)param_2;
            param_4 = CONCAT22(uVar2,(undefined2)param_4);
            if ((int)pcVar15 <= *(int *)(&DAT_67091d88 + local_80 * 4)) {
              param_4._2_1_ = (char)uVar2;
              param_4._3_1_ = (char)((ushort)uVar2 >> 8);
              param_4._0_3_ = (uint3)CONCAT11(param_4._3_1_,param_4._2_1_ * '\x03') << 0x10;
              param_4 = CONCAT13(param_4._3_1_ * '\x03',(int3)param_4);
              goto LAB_670847c2;
            }
          }
        }
        local_10 = (int *)((int)local_10 + 1);
        param_2 = param_2 + 2;
      } while (local_10 < local_34);
    }
    local_14 = (char *)((int)param_4._2_1_ - (int)local_8);
    if ((int)local_14 < (int)local_64) {
      local_14 = local_64;
    }
    if ((int)local_14 < -0x29) {
      local_14 = (char *)0xffffffd6;
    }
    param_2 = local_8 + param_4._2_1_;
    if ((int)local_88 < (int)(local_8 + param_4._2_1_)) {
      param_2 = local_88;
    }
    if (0x28 < (int)param_2) {
      param_2 = (char *)0x29;
    }
    local_20 = (int)param_4._3_1_ - (int)local_8;
    if (local_20 < local_a8) {
      local_20 = local_a8;
    }
    if (local_20 < -0x29) {
      local_20 = -0x2a;
    }
    local_1c = local_90;
    if ((int)(local_8 + param_4._3_1_) <= (int)local_90) {
      local_1c = local_8 + param_4._3_1_;
    }
    if (0x28 < (int)local_1c) {
      local_1c = (char *)0x29;
    }
    if (local_50 == (int *)0x0) {
      if (local_20 <= (int)local_1c) {
        local_18 = (int *)(&DAT_67091a17 + (local_20 * 3 - local_5c));
        local_8 = local_14 + local_8c + local_20 * iVar11;
        local_4c = (char *)((int)local_14 * 3);
        do {
          if ((int)local_14 <= (int)param_2) {
            local_24 = &DAT_67091a17 + ((int)local_4c - local_58);
            local_28 = local_8;
            pcVar6 = local_14;
            do {
              sVar3 = local_40[(int)(char)*local_18 + (int)*local_24];
              if ((int)sVar3 < (int)local_c) {
                pcVar15 = (char *)(**(code **)(param_1 + 0x7c))(iVar11);
                if ((int)(pcVar15 + sVar3) < (int)local_c) {
                  local_c = pcVar15 + sVar3;
                  local_84 = pcVar15;
                  param_4._0_3_ = CONCAT12((char)pcVar6,(undefined2)param_4);
                  param_4 = CONCAT13((char)local_20,(int3)param_4);
                }
              }
              pcVar6 = pcVar6 + 2;
              local_28 = local_28 + 2;
              local_24 = local_24 + 6;
            } while ((int)pcVar6 <= (int)param_2);
          }
          local_20 = local_20 + 2;
          local_18 = (int *)((int)local_18 + 6);
          local_8 = local_8 + iVar11 * 2;
        } while (local_20 <= (int)local_1c);
      }
    }
    else if (local_20 <= (int)local_1c) {
      local_30 = &DAT_67091a17 + (local_20 * 3 - local_5c);
      local_4c = (char *)((int)local_14 * 3);
      do {
        local_8 = local_14;
        if ((int)local_14 <= (int)param_2) {
          local_2c = &DAT_67091a17 + ((int)local_4c - local_58);
          do {
            local_24 = (char *)((int)&local_3c + 1);
            local_18 = local_bc;
            local_28 = (char *)0x0;
            local_10 = (int *)0x4;
            do {
              iVar7 = (**(code **)(param_1 + 0x80))(iVar11);
              local_28 = local_28 + iVar7;
              if (iVar7 + (short)local_40[(int)*local_30 + (int)*local_2c] < *local_18) {
                cVar14 = (char)local_8;
                *local_18 = iVar7 + (short)local_40[(int)*local_30 + (int)*local_2c];
                pcVar6 = local_24;
                cVar10 = (char)local_20;
                local_24[-1] = cVar14;
                *pcVar6 = cVar10;
              }
              local_18 = local_18 + 1;
              local_10 = (int *)((int)local_10 + -1);
              local_24 = local_24 + 2;
            } while (local_10 != (int *)0x0);
            if ((int)(local_28 + (short)local_40[(int)*local_30 + (int)*local_2c]) < (int)local_c) {
              local_c = local_28 + (short)local_40[(int)*local_30 + (int)*local_2c];
              local_84 = local_28;
              param_4._0_3_ = CONCAT12((char)local_8,(undefined2)param_4);
              param_4 = CONCAT13((char)local_20,(int3)param_4);
            }
            local_8 = local_8 + 2;
            local_2c = local_2c + 6;
            local_10 = (int *)0x0;
          } while ((int)local_8 <= (int)param_2);
        }
        local_20 = local_20 + 2;
        local_30 = local_30 + 6;
      } while (local_20 <= (int)local_1c);
    }
    if (local_50 == (int *)0x0) {
      local_18 = (int *)0x7fffffff;
    }
    else {
      local_18 = (int *)(local_bc[1] + local_bc[0] + local_bc[2] + local_bc[3]);
    }
    if ((int)local_c < (int)local_18) {
      local_14 = (char *)(param_4._2_1_ + -1);
      if ((int)local_14 < (int)local_64) {
        local_14 = local_64;
      }
      if ((int)local_14 < -0x29) {
        local_14 = (char *)0xffffffd6;
      }
      param_2 = (char *)(param_4._2_1_ + 1);
      if ((int)local_88 < (int)param_2) {
        param_2 = local_88;
      }
      if (0x28 < (int)param_2) {
        param_2 = (char *)0x29;
      }
      local_20 = param_4._3_1_ + -1;
      if (local_20 < local_a8) {
        local_20 = local_a8;
      }
      if (local_20 < -0x29) {
        local_20 = -0x2a;
      }
      local_1c = (char *)(param_4._3_1_ + 1);
      if ((int)local_90 < (int)local_1c) {
        local_1c = local_90;
      }
      if (0x28 < (int)local_1c) {
        local_1c = (char *)0x29;
      }
      if (local_20 <= (int)local_1c) {
        local_2c = &DAT_67091a17 + (local_20 * 3 - local_5c);
        local_74 = (uint *)(local_14 + local_20 * iVar11);
        local_8 = local_14 + local_20 * iVar11 + local_8c;
        local_4c = (char *)((int)local_14 * 3);
        pcVar6 = local_1c;
        pcVar15 = local_14;
        do {
          pcVar12 = pcVar15;
          if ((int)pcVar15 <= (int)param_2) {
            local_24 = &DAT_67091a17 + ((int)local_4c - local_58);
            local_28 = local_8;
            do {
              sVar3 = local_40[(int)*local_2c + (int)*local_24];
              if ((int)sVar3 < (int)local_c) {
                pcVar6 = (char *)(**(code **)(param_1 + 0x7c))(iVar11);
                if ((int)(pcVar6 + sVar3) < (int)local_c) {
                  local_c = pcVar6 + sVar3;
                  local_84 = pcVar6;
                  param_4._0_3_ = CONCAT12((char)pcVar15,(undefined2)param_4);
                  param_4 = CONCAT13((char)local_20,(int3)param_4);
                }
              }
              pcVar15 = pcVar15 + 1;
              local_28 = local_28 + 1;
              local_24 = local_24 + 3;
              pcVar6 = local_1c;
              pcVar12 = local_14;
            } while ((int)pcVar15 <= (int)param_2);
          }
          local_20 = local_20 + 1;
          local_8 = local_8 + iVar11;
          local_2c = local_2c + 3;
          pcVar15 = pcVar12;
        } while (local_20 <= (int)pcVar6);
      }
    }
    else {
      local_10 = (int *)((int)&local_3c + 1);
      local_24 = "";
      local_18 = local_bc;
      local_6c = (uint *)0x4;
      do {
        local_30 = (char *)(int)*(char *)((int)local_10 + -1);
        local_2c = (char *)(int)*(char *)local_10;
        local_14 = local_64;
        if ((int)local_64 <= (int)(local_30 + -1)) {
          local_14 = local_30 + -1;
        }
        if ((int)local_14 < -0x29) {
          local_14 = (char *)0xffffffd6;
        }
        param_2 = local_30 + 1;
        if ((int)local_88 < (int)(local_30 + 1)) {
          param_2 = local_88;
        }
        if (0x28 < (int)param_2) {
          param_2 = (char *)0x29;
        }
        iVar7 = (int)local_2c + -1;
        if ((int)local_2c + -1 < local_a8) {
          iVar7 = local_a8;
        }
        if (iVar7 < -0x29) {
          iVar7 = -0x2a;
        }
        local_1c = local_90;
        if ((int)local_2c + 1 <= (int)local_90) {
          local_1c = (char *)((int)local_2c + 1);
        }
        if (0x28 < (int)local_1c) {
          local_1c = (char *)0x29;
        }
        local_8 = (char *)((int)*local_24 + local_68 + local_24[-2] * iVar11);
        local_20 = iVar7;
        if (iVar7 <= (int)local_1c) {
          local_34 = (int *)(&DAT_67091a17 + (iVar7 * 3 - local_5c));
          local_4c = (char *)((int)local_14 * 3);
          do {
            if ((int)local_14 <= (int)param_2) {
              local_28 = &DAT_67091a17 + ((int)local_4c - local_58);
              pcVar6 = local_14;
              local_20 = iVar7;
              do {
                if ((((char *)iVar7 != local_2c) || (pcVar6 != local_30)) &&
                   (sVar3 = local_40[(int)*local_28 + (int)(char)*local_34], (int)sVar3 <= *local_18
                   )) {
                  iVar9 = (**(code **)(param_1 + 0x80))(iVar11);
                  piVar5 = local_10;
                  piVar16 = local_18;
                  iVar9 = sVar3 + iVar9;
                  iVar7 = local_20;
                  if (iVar9 < *local_18) {
                    cVar10 = (char)local_20;
                    *(char *)((int)local_10 + -1) = (char)pcVar6;
                    *piVar16 = iVar9;
                    *(char *)piVar5 = cVar10;
                    iVar7 = local_20;
                  }
                }
                pcVar6 = pcVar6 + 1;
                local_28 = local_28 + 3;
              } while ((int)pcVar6 <= (int)param_2);
            }
            iVar7 = iVar7 + 1;
            local_20 = iVar7;
            local_34 = (int *)((int)local_34 + 3);
          } while (iVar7 <= (int)local_1c);
        }
        local_10 = (int *)((int)local_10 + 2);
        local_6c = (uint *)((int)local_6c + -1);
        local_24 = local_24 + 4;
        local_18 = local_18 + 1;
      } while (local_6c != (uint *)0x0);
      local_18 = (int *)(local_bc[1] + local_bc[0] + local_bc[2] + local_bc[3]);
    }
    if (local_48 == (int *)0x1) {
      local_4c = &local_140;
      local_60 = (int)(short)local_40[2];
      local_1c = "\f";
      local_28 = &DAT_67091788;
      local_44 = (int *)(local_94 * 2);
      local_74 = (uint *)(local_98 & 4);
      local_6c = local_114;
      local_34 = (int *)local_9c;
      local_98 = local_98 & 1;
      do {
        local_78 = local_6c;
        local_6c = local_6c + 4;
        local_10 = (int *)0x0;
        piVar16 = local_34;
        do {
          bVar1 = local_28[(int)local_10];
          uVar2 = *(undefined2 *)((int)piVar16 + -2);
          param_2._2_2_ = *(undefined2 *)((char *)((int)piVar16 + -(int)local_44) + 2);
          local_20 = CONCAT22(*(undefined2 *)((int)piVar16 + -(int)local_44),(undefined2)local_20);
          if ((local_98 == 0) && ((bVar1 & 1) == 0)) {
            uVar2 = local_6e;
          }
          local_14._3_1_ = (char)((ushort)uVar2 >> 8);
          if ((local_74 == (uint *)0x0) && ((bVar1 & 4) == 0)) {
            local_20 = CONCAT22(local_6e,(undefined2)local_20);
            param_2._2_2_ = local_6e;
          }
          else if ((bVar1 & 2) == 0) {
            param_2._2_2_ = *(undefined2 *)((int)piVar16 + -(local_94 * 2 + 2));
          }
          local_14._2_1_ = (char)uVar2;
          lVar4 = (longlong)((int)local_20._2_1_ + (int)param_2._2_1_ + (int)local_14._2_1_) *
                  0x55555556;
          cVar14 = (char)((ulonglong)lVar4 >> 0x20) - (char)(lVar4 >> 0x3f);
          iVar7 = (int)local_20._3_1_;
          *local_4c = cVar14;
          lVar4 = (longlong)(iVar7 + param_2._3_1_ + (int)local_14._3_1_) * 0x55555556;
          cVar10 = (char)((ulonglong)lVar4 >> 0x20) - (char)(lVar4 >> 0x3f);
          local_4c[1] = cVar10;
          pcVar6 = local_1c;
          local_30 = (char *)((int)cVar14 / 3);
          local_2c = (char *)((int)cVar10 / 3);
          pcVar15 = (char *)((int)local_30 - local_7c);
          param_2 = local_64 + -(int)local_1c[3];
          local_14 = param_2;
          if (((int)param_2 <= (int)pcVar15) &&
             (local_14 = pcVar15, (int)(local_88 + local_1c[2]) < (int)pcVar15)) {
            local_14 = local_88 + local_1c[2];
          }
          if ((int)local_14 < -0x29) {
            local_14 = (char *)0xffffffd6;
          }
          pcVar15 = (char *)(local_7c + (int)local_30);
          if (((int)param_2 <= (int)pcVar15) &&
             (param_2 = local_88 + local_1c[2], (int)pcVar15 <= (int)(local_88 + local_1c[2]))) {
            param_2 = pcVar15;
          }
          if (0x28 < (int)param_2) {
            param_2 = (char *)0x29;
          }
          pcVar12 = (char *)((int)local_2c - local_7c);
          pcVar15 = (char *)(local_a8 - local_1c[1]);
          local_24 = pcVar15;
          if (((int)pcVar15 <= (int)pcVar12) &&
             (local_24 = pcVar12, (int)(local_90 + *local_1c) < (int)pcVar12)) {
            local_24 = local_90 + *local_1c;
          }
          if ((int)local_24 < -0x29) {
            local_24 = (char *)0xffffffd6;
          }
          pcVar12 = (char *)(local_7c + (int)local_2c);
          if (((int)pcVar12 < (int)pcVar15) ||
             (pcVar15 = local_90 + *local_1c, (int)pcVar15 < (int)pcVar12)) {
            pcVar12 = pcVar15;
          }
          if (0x28 < (int)pcVar12) {
            pcVar12 = (char *)0x29;
          }
          local_8 = (char *)(iVar11 * local_1c[1]);
          uVar8 = FUN_67084db0(local_8 + local_68 + local_1c[3],local_8 + local_8c + local_1c[3],
                               iVar11,*(undefined **)(param_1 + 0x84),(int)local_14,(int)param_2,
                               (int)local_24,(int)pcVar12,(int)local_40,(undefined1 *)piVar16,
                               (int)*local_4c,(int)local_4c[1],3);
          *local_78 = uVar8;
          local_60 = local_60 + uVar8;
          *(char *)piVar16 = *(char *)piVar16 * '\x03';
          *(char *)((int)piVar16 + 1) = *(char *)((int)piVar16 + 1) * '\x03';
          local_10 = (int *)((int)local_10 + 1);
          piVar16 = (int *)((int)piVar16 + 2);
          local_1c = pcVar6 + 4;
          local_4c = local_4c + 2;
          local_78 = local_78 + 1;
        } while ((int)local_10 < 4);
        local_34 = (int *)((int)local_34 + (int)local_44);
        local_28 = local_28 + 4;
      } while ((int)local_28 < 0x67091798);
    }
    bVar17 = false;
    local_34 = (int *)0x0;
    local_10 = (int *)0x0;
    if (local_a4 != 0) {
      if (local_54 == (char *)0x1) {
        bVar17 = true;
        local_10 = local_50;
        local_34 = local_48;
      }
      else if (((int)local_18 < (int)local_c) || (local_60 < (int)local_c)) {
        if (local_60 < (int)local_18) {
          local_34 = (int *)0x1;
          local_c = (char *)0x7fffffff;
          local_18 = (int *)0x7fffffff;
        }
        else {
          local_10 = (int *)0x1;
          local_c = (char *)0x7fffffff;
          local_60 = 0x7fffffff;
        }
      }
      else {
        bVar17 = true;
        local_18 = (int *)0x7fffffff;
        local_60 = 0x7fffffff;
      }
    }
    if (bVar17) {
      local_2c = (char *)(param_4._3_1_ * 3);
      local_64 = (char *)(param_4._3_1_ * iVar11 + (int)param_4._2_1_ + *local_c0);
      local_30 = (char *)(param_4._2_1_ * 3);
      param_4._0_3_ = CONCAT12((char)local_30,(undefined2)param_4);
      param_4 = CONCAT13((char)local_2c,(int3)param_4);
      local_c = local_c + -(int)(short)local_40[(int)(char)(&DAT_67091a17)[(int)local_2c - local_5c]
                                                + (int)(char)(&DAT_67091a17)
                                                             [(int)local_30 - local_58]];
      if (local_a0 == 0) {
        local_48 = &DAT_67091bec;
        local_44 = (int *)0x18;
        do {
          local_74 = *(uint **)(param_1 + 0x94);
          (**(code **)((int)local_74 + (*local_48 + local_48[1] * 4) * 4))(iVar11,0x10);
          iVar11 = local_bc[4];
          pcVar6 = (char *)(**(code **)(param_1 + 0x88))(local_bc[4]);
          if ((int)pcVar6 < (int)local_c) {
            cVar14 = (char)local_48[-1] + (char)local_30;
            cVar10 = *(char *)((int)local_48 + -3) + (char)local_2c;
            param_4._0_3_ = CONCAT12(cVar14,(undefined2)param_4);
            param_4 = CONCAT13(cVar10,(int3)param_4);
            local_c = pcVar6;
          }
          else {
            cVar10 = param_4._3_1_;
            cVar14 = param_4._2_1_;
          }
          local_44 = (int *)((int)local_44 + -1);
          local_48 = local_48 + 3;
        } while (local_44 != (int *)0x0);
      }
      else {
        (**(code **)(param_1 + 0x98))
                  (local_68,(int)local_64 + *(int *)(param_5 + 4),iVar11,&local_c,(int)&param_4 + 2,
                   0x10,*(undefined4 *)(param_1 + 0x88));
        cVar10 = param_4._3_1_;
        cVar14 = param_4._2_1_;
      }
      local_84 = local_c;
      local_c = local_c + (short)local_40[(int)(char)(&DAT_67091a17)[cVar14 - local_58] +
                                          (int)(char)(&DAT_67091a17)[cVar10 - local_5c]];
    }
    else {
      param_4._0_3_ = CONCAT12(param_4._2_1_ * '\x03',(undefined2)param_4);
      param_4 = CONCAT13(param_4._3_1_ * '\x03',(int3)param_4);
    }
    if (local_10 == (int *)0x0) {
      local_3c = CONCAT11(local_3c._1_1_ * '\x03',(char)local_3c * '\x03');
      local_3a = CONCAT11(local_3a._1_1_ * '\x03',(char)local_3a * '\x03');
      local_38 = CONCAT11(local_38._1_1_ * '\x03',(char)local_38 * '\x03');
      local_36 = CONCAT11(local_36._1_1_ * '\x03',(char)local_36 * '\x03');
    }
    else {
      local_48 = (int *)&DAT_67091b9b;
      local_10 = (int *)&local_3c;
      local_54 = (char *)0x0;
      piVar16 = (int *)&local_3c;
      do {
        cVar10 = *(char *)((int)local_48 + -2);
        local_44 = (int *)(int)(char)*local_48;
        local_30 = (char *)(*(char *)piVar16 * 3);
        iVar9 = (int)local_44 +
                *local_c0 +
                (int)*(char *)piVar16 + ((int)cVar10 + (int)*(char *)((int)piVar16 + 1)) * iVar11;
        *(char *)piVar16 = (char)local_30;
        iVar7 = *(char *)((int)piVar16 + 1) * 3;
        local_8 = (char *)((int)local_44 + local_68 + cVar10 * iVar11);
        local_2c = (char *)iVar7;
        *(char *)((int)piVar16 + 1) = (char)iVar7;
        puVar13 = (uint *)((int)local_bc + (int)local_54);
        local_64 = (char *)iVar9;
        local_78 = puVar13;
        bVar17 = local_a0 == 0;
        *puVar13 = *puVar13 -
                   (int)(short)local_40[(int)(char)(&DAT_67091a17)[iVar7 - local_5c] +
                                        (int)(char)(&DAT_67091a17)[(int)local_30 - local_58]];
        if (bVar17) {
          local_50 = &DAT_67091bec;
          local_6c = (uint *)0x18;
          local_44 = (int *)puVar13;
          do {
            local_74 = (uint *)(*local_50 + local_50[1] * 4);
            (**(code **)(*(int *)(param_1 + 0x94) + (int)local_74 * 4))(iVar11,8);
            iVar11 = local_bc[4];
            iVar7 = (**(code **)(param_1 + 0x8c))(local_bc[4]);
            piVar16 = local_10;
            puVar13 = local_78;
            if (iVar7 < *local_44) {
              local_44 = (int *)local_78;
              iVar9 = local_50[-1];
              *local_78 = iVar7;
              cVar10 = *(char *)((int)local_50 + -3);
              *(char *)piVar16 = (char)iVar9 + (char)local_30;
              *(char *)((int)piVar16 + 1) = cVar10 + (char)local_2c;
            }
            local_6c = (uint *)((int)local_6c + -1);
            local_50 = local_50 + 3;
          } while (local_6c != (uint *)0x0);
        }
        else {
          (**(code **)(param_1 + 0x98))
                    (local_8,iVar9 + *(int *)(param_5 + 4),iVar11,puVar13,piVar16,8,
                     *(undefined4 *)(param_1 + 0x8c));
        }
        iVar7 = *puVar13;
        local_48 = local_48 + 1;
        *(int *)((int)local_114 + (int)local_54 + 0x40) = iVar7;
        local_10 = (int *)((int)piVar16 + 2);
        iVar9 = (int)local_54 + 4;
        *puVar13 = (short)local_40[(int)(char)(&DAT_67091a17)
                                              [*(char *)((int)piVar16 + 1) - local_5c] +
                                   (int)(char)(&DAT_67091a17)[*(char *)piVar16 - local_58]] + iVar7;
        local_54 = (char *)iVar9;
        piVar16 = (int *)((int)piVar16 + 2);
      } while (iVar9 < 0x10);
      local_18 = (int *)(local_bc[1] + local_bc[0] + local_bc[2] + local_bc[3]);
    }
    if (local_34 != (int *)0x0) {
      local_50 = (int *)0x0;
      local_60 = (int)(short)local_40[2];
      local_1c = "\f";
      local_6c = (uint *)local_9c;
      local_34 = (int *)0x4;
      local_28 = (char *)(local_94 * 2);
      pcVar6 = local_9c;
      do {
        local_54 = pcVar6;
        local_78 = (uint *)0x4;
        local_10 = (int *)(local_13f + (int)local_50 * 2);
        local_6c = (uint *)pcVar6;
        do {
          local_30 = (char *)(int)*pcVar6;
          local_2c = (char *)(int)pcVar6[1];
          iVar7 = (int)local_30 / 3 + ((int)local_2c / 3 + (int)local_1c[1]) * iVar11 + *local_c0 +
                  (int)local_1c[3];
          iVar9 = iVar11 * local_1c[1] + local_68 + (int)local_1c[3];
          local_64 = (char *)iVar7;
          local_5c = (int)(char)*local_10;
          local_58 = (int)*(char *)((int)local_10 + -1);
          local_8 = (char *)iVar9;
          local_98 = (int)local_50 * 4;
          puVar13 = local_114 + (int)local_50;
          local_74 = puVar13;
          bVar17 = local_a0 == 0;
          *puVar13 = *puVar13 -
                     (int)(short)local_40[(int)(char)(&DAT_67091a17)
                                                     [(int)local_2c - (int)(char)*local_10] +
                                          (int)(char)(&DAT_67091a17)
                                                     [(int)local_30 -
                                                      (int)*(char *)((int)local_10 + -1)]];
          pcVar15 = local_54;
          if (bVar17) {
            local_44 = (int *)0x18;
            local_48 = &DAT_67091bec;
            do {
              (**(code **)(*(int *)(param_1 + 0x94) + (*local_48 + local_48[1] * 4) * 4))(iVar11,4);
              iVar11 = local_bc[4];
              uVar8 = (**(code **)(param_1 + 0x90))(local_bc[4]);
              puVar13 = local_74;
              if ((int)uVar8 < (int)*local_74) {
                cVar10 = (char)local_30;
                *local_74 = uVar8;
                *local_54 = (char)local_48[-1] + cVar10;
                local_54[1] = *(char *)((int)local_48 + -3) + (char)local_2c;
              }
              local_44 = (int *)((int)local_44 + -1);
              local_48 = local_48 + 3;
              pcVar15 = local_54;
            } while (local_44 != (int *)0x0);
          }
          else {
            (**(code **)(param_1 + 0x98))
                      (iVar9,iVar7 + *(int *)(param_5 + 4),iVar11,puVar13,local_54,4,
                       *(undefined4 *)(param_1 + 0x90));
          }
          cVar10 = *pcVar15;
          *(uint *)((int)local_180 + local_98) = *puVar13;
          pcVar6 = pcVar15 + 2;
          local_54 = pcVar6;
          sVar3 = local_40[(int)(char)(&DAT_67091a17)[cVar10 - local_58] +
                           (int)(char)(&DAT_67091a17)[pcVar15[1] - local_5c]];
          uVar8 = *puVar13;
          *puVar13 = uVar8 + (int)sVar3;
          local_60 = local_60 + uVar8 + (int)sVar3;
          local_50 = (int *)((int)local_50 + 1);
          local_78 = (uint *)((int)local_78 + -1);
          local_1c = local_1c + 4;
          local_10 = (int *)((int)local_10 + 2);
        } while (local_78 != (uint *)0x0);
        pcVar6 = (char *)((int)local_6c + (int)local_28);
        local_34 = (int *)((int)local_34 + -1);
        local_6c = (uint *)pcVar6;
      } while (local_34 != (int *)0x0);
    }
  }
  else if ((int)local_c < 0) {
    local_c = (char *)0x0;
  }
LAB_670847c2:
  *(undefined4 *)(local_c4 + *(int *)(param_1 + 0x30)) = 0xffffff;
  if (param_6 == 0) {
    if (((int)local_18 < (int)local_c) || (local_60 < (int)local_c)) {
      if (((int)local_c < (int)local_18) || (local_60 < (int)local_18)) {
        *(undefined1 *)(local_c4 + 6 + *(int *)(param_1 + 0x30)) = 4;
        *param_3 = local_60;
        iVar11 = 0;
        puVar13 = local_180;
        do {
          if ((int)*puVar13 < *(int *)(&DAT_67091408 + local_80 * 4)) {
            *(uint *)(*(int *)(param_1 + 0x30) + local_c4) =
                 *(uint *)(*(int *)(param_1 + 0x30) + local_c4) & ~(1 << ((byte)iVar11 & 0x1f));
          }
          iVar11 = iVar11 + 1;
          puVar13 = puVar13 + 1;
        } while (iVar11 < 0x10);
      }
      else {
        *(undefined1 *)(local_c4 + 6 + *(int *)(param_1 + 0x30)) = 3;
        *param_3 = (int)local_18;
        *(undefined2 *)local_9c = local_3c;
        *(undefined2 *)(local_9c + 2) = local_3c;
        *(undefined2 *)(local_9c + 4) = local_3a;
        *(undefined2 *)(local_9c + 6) = local_3a;
        if ((int)local_114[0x10] < *(int *)(&DAT_67091388 + local_80 * 4)) {
          *(uint *)(local_c4 + *(int *)(param_1 + 0x30)) =
               *(uint *)(local_c4 + *(int *)(param_1 + 0x30)) & 0xffffffcc;
        }
        *(undefined2 *)(local_9c + local_94 * 2) = local_3c;
        *(undefined2 *)(local_9c + local_94 * 2 + 2) = local_3c;
        *(undefined2 *)(local_9c + local_94 * 2 + 4) = local_3a;
        *(undefined2 *)(local_9c + local_94 * 2 + 6) = local_3a;
        if ((int)local_114[0x11] < *(int *)(&DAT_67091388 + local_80 * 4)) {
          *(byte *)(*(int *)(param_1 + 0x30) + local_c4) =
               *(byte *)(*(int *)(param_1 + 0x30) + local_c4) & 0x33;
        }
        *(undefined2 *)(local_9c + local_94 * 4) = local_38;
        *(undefined2 *)(local_9c + local_94 * 4 + 2) = local_38;
        *(undefined2 *)(local_9c + local_94 * 4 + 4) = local_36;
        *(undefined2 *)(local_9c + local_94 * 4 + 6) = local_36;
        if ((int)local_114[0x12] < *(int *)(&DAT_67091388 + local_80 * 4)) {
          *(uint *)(*(int *)(param_1 + 0x30) + local_c4) =
               *(uint *)(*(int *)(param_1 + 0x30) + local_c4) & 0xffffccff;
        }
        pcVar6 = local_9c + local_94 * 6;
        *(undefined2 *)pcVar6 = local_38;
        *(undefined2 *)(pcVar6 + 2) = local_38;
        *(undefined2 *)(pcVar6 + 4) = local_36;
        *(undefined2 *)(local_9c + (local_94 * 3 + 3) * 2) = local_36;
        if ((int)local_114[0x13] < *(int *)(&DAT_67091388 + local_80 * 4)) {
          *(uint *)(local_c4 + *(int *)(param_1 + 0x30)) =
               *(uint *)(local_c4 + *(int *)(param_1 + 0x30)) & 0xffff33ff;
          return;
        }
      }
    }
    else {
      *(undefined1 *)(local_c4 + 6 + *(int *)(param_1 + 0x30)) = 2;
      *param_3 = (int)local_c;
      *(undefined2 *)local_9c = param_4._2_2_;
      *(undefined2 *)(local_9c + 2) = param_4._2_2_;
      *(undefined2 *)(local_9c + 4) = param_4._2_2_;
      *(undefined2 *)(local_9c + 6) = param_4._2_2_;
      *(undefined2 *)(local_9c + local_94 * 2) = param_4._2_2_;
      *(undefined2 *)(local_9c + local_94 * 2 + 2) = param_4._2_2_;
      *(undefined2 *)(local_9c + local_94 * 2 + 4) = param_4._2_2_;
      *(undefined2 *)(local_9c + local_94 * 2 + 6) = param_4._2_2_;
      *(undefined2 *)(local_9c + local_94 * 4) = param_4._2_2_;
      *(undefined2 *)(local_9c + local_94 * 4 + 2) = param_4._2_2_;
      *(undefined2 *)(local_9c + local_94 * 4 + 4) = param_4._2_2_;
      *(undefined2 *)(local_9c + local_94 * 4 + 6) = param_4._2_2_;
      pcVar6 = local_9c + local_94 * 6;
      *(undefined2 *)pcVar6 = param_4._2_2_;
      *(undefined2 *)(pcVar6 + 2) = param_4._2_2_;
      *(undefined2 *)(pcVar6 + 4) = param_4._2_2_;
      *(undefined2 *)(local_9c + (local_94 * 3 + 3) * 2) = param_4._2_2_;
      if ((int)local_84 < *(int *)(&DAT_67091308 + local_80 * 4)) {
        *(undefined4 *)(local_c4 + *(int *)(param_1 + 0x30)) = 0xff0000;
        return;
      }
    }
  }
  else {
    *(undefined2 *)local_9c = param_4._2_2_;
    *param_3 = (int)local_c;
    if ((int)local_84 < *(int *)(&DAT_67091308 + local_80 * 4)) {
      *(undefined4 *)(local_c4 + *(int *)(param_1 + 0x30)) = 0xff0000;
      return;
    }
  }
  return;
}


