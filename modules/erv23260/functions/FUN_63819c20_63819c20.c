/* Module: erv23260.dll
   Function: FUN_63819c20
   Address: 63819c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_63819c20(void *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 local_280 [66];
  undefined1 local_178 [64];
  uint local_138 [18];
  uint local_f0 [8];
  uint local_d0 [8];
  int local_b0 [2];
  int local_a8 [2];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int *local_84;
  int *local_80;
  uint local_7c;
  int local_78;
  int local_74;
  uint local_6c;
  byte *local_68;
  int local_64;
  byte *local_60;
  uint *local_5c;
  int local_58;
  int local_54;
  uint *local_50;
  uint *local_4c;
  int *local_48;
  int *local_44;
  int local_40;
  uint *local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  local_80 = (int *)0x0;
  iVar6 = *(int *)((int)param_1 + 0x358);
  local_78 = 0;
  uVar5 = (uint)(*(int *)((int)param_1 + 0x33c) != 0);
  local_74 = 0;
  if (iVar6 != 0) {
    *(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)(iVar6 + 0x30);
    *(undefined4 *)(*(int *)((int)param_1 + 0x358) + 0x4c) =
         *(undefined4 *)(*(int *)((int)param_1 + 0x358) + 0x34);
  }
  iVar6 = *(int *)((int)param_1 + 0x35c);
  if (iVar6 != 0) {
    *(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)(iVar6 + 0x30);
    *(undefined4 *)(*(int *)((int)param_1 + 0x35c) + 0x4c) =
         *(undefined4 *)(*(int *)((int)param_1 + 0x35c) + 0x34);
  }
  iVar6 = *(int *)((int)param_1 + 0x360);
  if (iVar6 != 0) {
    iVar2 = uVar5 * 0x28;
    *(undefined4 *)(iVar2 + 0x44 + iVar6) = *(undefined4 *)(iVar2 + 0x30 + iVar6);
    iVar2 = iVar2 + *(int *)((int)param_1 + 0x360);
    *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(iVar2 + 0x34);
  }
  if (*(int *)((int)param_1 + 0x334) == 0) {
    piVar8 = *(int **)((int)param_1 + 0x358);
    piVar4 = *(int **)((int)param_1 + 0x35c);
    local_14 = piVar8 + 10;
    if (piVar4 != (int *)0x0) {
      local_80 = piVar4 + 10;
    }
    piVar3 = *(int **)((int)param_1 + 0x360);
    if (piVar3 == (int *)0x0) {
      local_8 = (int *)0x0;
    }
    else {
      local_8 = piVar3 + (uVar5 + 1) * 10;
    }
  }
  else {
    piVar3 = *(int **)((int)param_1 + 0x360);
    piVar4 = *(int **)((int)param_1 + 0x35c);
    piVar8 = *(int **)((int)param_1 + 0x358);
    local_14 = piVar3 + 10;
    local_80 = piVar4 + 10;
    local_8 = piVar8 + 10;
  }
  piVar7 = local_80;
  if (*(int *)((int)param_1 + 0x338) == 0) {
    local_60 = *(byte **)((int)param_1 + 0x38c);
  }
  else {
    local_60 = *(byte **)((int)param_1 + 0x398);
  }
  local_68 = *(byte **)((int)param_1 + 0x38c);
  local_64 = *(int *)((int)param_1 + 0x398);
  local_5c = *(uint **)((int)param_1 + 0x388);
  local_58 = *(int *)((int)param_1 + 0x390);
  local_54 = *(int *)((int)param_1 + 0x394);
  local_50 = local_d0;
  local_4c = local_f0;
  local_48 = local_a8;
  local_44 = local_b0;
  local_40 = *(int *)((int)param_1 + 0x37c);
  local_3c = *(uint **)((int)param_1 + 0x380);
  if (*(int *)((int)param_1 + 0x334) == 0) {
    local_30 = *piVar8;
  }
  else {
    local_30 = *piVar3;
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = local_280;
  if (local_80 != (int *)0x0) {
    local_2c = *piVar4;
  }
  if (local_8 != (int *)0x0) {
    if (*(int *)((int)param_1 + 0x334) == 0) {
      local_28 = *piVar3;
    }
    else {
      local_28 = *piVar8;
    }
  }
  if ((*(int *)((int)param_1 + 0x338) != 0) || (*(int *)((int)param_1 + 0x334) != 0)) {
    iVar6 = **(int **)(*(int *)((int)param_1 + 0x350) + 0x1c);
    uVar5 = *(int *)((int)param_1 + 0x468) - 1;
    uVar9 = **(int **)(*(int *)((int)param_1 + 0x34c) + 0x1c) - iVar6 & uVar5;
    uVar5 = **(int **)(*(int *)((int)param_1 + 0x354) + 0x1c) - iVar6 & uVar5;
    if (uVar5 == 0) {
      uVar5 = 0x100;
    }
    local_20 = (int)(uVar9 << 8) / (int)uVar5;
    local_1c = (int)((uVar9 - uVar5) * 0x100) / (int)uVar5;
  }
  iVar6 = 0;
  puVar10 = local_280;
  for (iVar2 = 0x42; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_10 = 0;
  local_88 = 0;
  if (0 < *(int *)((int)param_1 + 0x3c4)) {
    local_84 = (int *)((int)param_1 + 0x3cc);
    do {
      if ((*(int *)((int)param_1 + 0x310) == 0) &&
         (iVar2 = *local_84, *(int *)((int)param_1 + 0x430) = iVar2, iVar2 != 0)) {
        local_74 = *(int *)((int)param_1 + 0x3b4);
      }
      local_18 = 0;
      if (0 < *(int *)((int)param_1 + 0x3bc)) {
        do {
          if (*(int *)((int)param_1 + 0x3c0) <= iVar6) break;
          local_38 = 0;
          local_34 = 0;
          if ((*(int *)((int)param_1 + 0x310) != 0) &&
             ((*(byte *)(*(int *)((int)param_1 + 0x39c) + iVar6) & 0x20) != 0)) {
            local_74 = *(int *)((int)param_1 + 0x3b4);
            local_78 = 1;
          }
          local_c = CONCAT31(local_c._1_3_,*local_60) & 0xffffff1f;
          if ((*(int *)((int)param_1 + 0x310) != 0) &&
             ((*(byte *)(*(int *)((int)param_1 + 0x39c) + 1 + iVar6) & 0x20) != 0)) {
            local_34 = 2;
          }
          iVar2 = *(int *)((int)param_1 + 0x3b4);
          iVar6 = local_18 + 1;
          if (local_18 < iVar2) {
            if (iVar6 == iVar2) {
              local_38 = 2;
            }
            if (local_18 == 0) {
              local_38 = local_38 | 1;
              local_78 = 1;
              local_7c = *(uint *)((int)param_1 + 900);
            }
          }
          else {
            if (iVar6 % iVar2 == 0) {
              local_38 = 2;
              local_34 = 2;
            }
            if (local_18 % iVar2 == 0) {
              local_7c = *(uint *)((int)param_1 + 900);
              local_38 = local_38 | 1;
              local_78 = 1;
            }
          }
          local_18 = iVar6;
          iVar6 = FUN_638194b0(param_1,(int)&local_6c,local_14 + 4,local_8 + 4,
                               *(byte *)(local_10 + *(int *)((int)param_1 + 0x39c)) & 0x1f,local_10)
          ;
          if (iVar6 == 0) {
            if (local_10 < *(int *)((int)param_1 + 0x3b4)) {
              local_38 = local_38 | 4;
            }
            if (*(int *)((int)param_1 + 0x3c0) - *(int *)((int)param_1 + 0x3b4) <= local_10) {
              local_38 = local_38 | 8;
            }
            uVar5 = local_38;
            if (*(int *)((int)param_1 + 0x310) != 0) {
              if (local_78 != 0) {
                local_34 = local_34 | 1;
              }
              uVar5 = local_34;
              if (local_74 != 0) {
                uVar5 = local_34 | 4;
              }
            }
            local_34 = uVar5;
            if ((*(int *)((int)param_1 + 0x338) == 0) || ((byte)local_c == '\0')) {
              if ((*(int *)((int)param_1 + 0x304) != 0) && ((byte)local_c == '\0')) {
                FUN_6381c380(param_1,local_74,local_78,(int)local_60,(uint)local_178,local_7c,
                             local_138);
              }
              if (*(int *)((int)param_1 + 0x334) != 0) {
                local_98 = local_30;
                local_90 = local_14[7];
                local_8c = local_14[9];
                local_9c = piVar7[7];
                local_94 = piVar7[9];
                local_a0 = local_2c;
              }
              if (*(int *)((int)param_1 + 0x338) == 0) {
                FUN_63819110(local_c & 0xff,local_5c,local_48);
              }
              local_6c = 0;
              do {
                uVar5 = *local_3c;
                if (0x40 < uVar5) {
                  uVar5 = uVar5 - 0x41;
                }
                if (*(int *)((int)param_1 + 0x304) == 0) {
LAB_6381a0fd:
                  if (((byte)local_c != '\0') ||
                     ((*(byte *)(local_10 + *(int *)((int)param_1 + 0x39c)) & 0x1f) != 0))
                  goto LAB_6381a113;
                }
                else {
                  if ((byte)local_c == '\0') {
                    (**(code **)((int)param_1 + *(int *)((int)param_1 + 700) * 4 + 0x570))
                              ((*local_60 & 0xe0) >> 4,local_138 + local_6c * 3,local_24,local_40,
                               uVar5);
                    goto LAB_6381a0fd;
                  }
LAB_6381a113:
                  FUN_638191b0(param_1,&local_6c);
                }
                local_40 = local_40 + uVar5 * 4;
                local_3c = local_3c + 1;
                local_30 = local_30 + local_14[local_6c + 4];
                if (piVar7 != (int *)0x0) {
                  local_2c = local_2c + piVar7[local_6c + 4];
                }
                if ((*(int *)((int)param_1 + 0x334) == 0) && (local_8 != (int *)0x0)) {
                  local_28 = local_28 + local_8[local_6c + 4];
                }
                iVar6 = local_28;
                local_6c = local_6c + 1;
              } while ((int)local_6c < 6);
              if (*(int *)((int)param_1 + 0x334) != 0) {
                local_14[7] = local_90;
                local_14[9] = local_8c;
                local_2c = local_a0;
                piVar7[7] = local_9c;
                piVar7[9] = local_94;
                local_28 = local_98;
                local_30 = iVar6;
                goto LAB_6381a1c8;
              }
LAB_6381a1d2:
              if ((*(int *)((int)param_1 + 0x338) == 0) || ((byte)local_c == '\0'))
              goto LAB_6381a2aa;
            }
            else {
LAB_6381a1c8:
              if (*(int *)((int)param_1 + 0x334) == 0) goto LAB_6381a1d2;
            }
            FUN_638196b0(param_1,(int)&local_6c);
            bVar1 = (byte)local_c;
            if ((byte)local_c == 0x11) {
              bVar1 = *local_68;
            }
            FUN_63819110((uint)bVar1,local_d0,local_48);
            FUN_63819110((uint)bVar1,local_f0,local_44);
            local_6c = 0;
            piVar4 = local_8;
            do {
              FUN_63819920(param_1,&local_6c);
              uVar5 = *local_3c;
              local_3c = local_3c + 1;
              local_40 = local_40 + uVar5 * 4;
              iVar6 = local_30 + local_14[local_6c + 4];
              if (piVar7 != (int *)0x0) {
                local_2c = local_2c + piVar7[local_6c + 4];
                piVar4 = local_8;
              }
              if (piVar4 != (int *)0x0) {
                local_28 = local_28 + piVar4[local_6c + 4];
                piVar7 = local_80;
              }
              local_6c = local_6c + 1;
              local_30 = iVar6;
            } while ((int)local_6c < 6);
            if (*(int *)((int)param_1 + 0x334) != 0) {
              local_30 = local_28;
              local_28 = iVar6;
            }
          }
LAB_6381a2aa:
          iVar6 = local_10 + 1;
          local_14[7] = local_14[7] + local_14[1];
          local_14[9] = local_14[9] - local_14[1];
          if (local_2c != 0) {
            piVar7[7] = piVar7[7] + piVar7[1];
            piVar7[9] = piVar7[9] - piVar7[1];
          }
          if (local_28 != 0) {
            local_8[7] = local_8[7] + local_8[1];
            local_8[9] = local_8[9] - local_8[1];
          }
          if ((local_18 == *(int *)((int)param_1 + 0x3b4)) ||
             ((*(int *)((int)param_1 + 0x3b4) < local_18 &&
              (local_18 % *(int *)((int)param_1 + 0x3b4) == 0)))) {
            local_30 = local_30 + *local_14;
            local_14[7] = local_14[7] - (*local_14 >> 1);
            local_14[9] = local_14[9] + (*local_14 >> 1);
            if (local_2c != 0) {
              local_2c = local_2c + *piVar7;
              piVar7[7] = piVar7[7] - (*piVar7 >> 1);
              piVar7[9] = piVar7[9] + (*piVar7 >> 1);
            }
            if (local_28 != 0) {
              local_28 = local_28 + *local_8;
              local_8[7] = local_8[7] - (*local_8 >> 1);
              local_8[9] = local_8[9] + (*local_8 >> 1);
            }
          }
          if (local_78 != 0) {
            local_78 = local_78 + -1;
          }
          if (local_74 != 0) {
            local_74 = local_74 + -1;
          }
          local_60 = local_60 + 1;
          local_68 = local_68 + 1;
          local_64 = local_64 + 1;
          local_5c = local_5c + 8;
          local_58 = local_58 + 8;
          local_54 = local_54 + 8;
          local_7c = local_7c + 0x40;
          local_10 = iVar6;
        } while (local_18 < *(int *)((int)param_1 + 0x3bc));
      }
      local_88 = local_88 + 1;
      local_84 = local_84 + 1;
    } while (local_88 < *(int *)((int)param_1 + 0x3c4));
  }
  return 0;
}


