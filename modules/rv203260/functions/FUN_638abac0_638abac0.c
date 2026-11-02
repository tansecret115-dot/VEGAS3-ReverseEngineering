/* Module: rv203260.dll
   Function: FUN_638abac0
   Address: 638abac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x638ac6f9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_638abac0(void *this,int param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  uint *puVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 local_e8;
  undefined4 *local_e4;
  undefined4 *local_e0;
  undefined4 *local_d8;
  undefined1 local_d0 [4];
  LARGE_INTEGER local_cc;
  uint local_c4;
  undefined4 uStack_c0;
  LARGE_INTEGER local_bc;
  LARGE_INTEGER local_b4;
  undefined4 local_ac;
  undefined4 *local_a8;
  undefined4 *puStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 uStack_94;
  int local_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 uStack_84;
  int local_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 local_74 [3];
  undefined4 local_68;
  uint local_64;
  uint uStack_60;
  uint *local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint uStack_48;
  undefined8 local_44;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  void *local_24;
  void *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_58 = *(uint *)(param_4 + 8);
  uVar13 = *(uint *)((int)this + 0xa2);
  local_8 = 0;
  if (local_58 < uVar13) {
    local_58 = (local_58 - uVar13) - 1;
  }
  else {
    local_58 = local_58 - uVar13;
  }
  uVar13 = *(uint *)(param_4 + 0xc);
  if ((uVar13 & 0xf) == 0) {
    uVar9 = uVar13 >> 4;
  }
  else {
    uVar9 = (uVar13 >> 4) + 1;
  }
  uVar11 = *(uint *)(param_4 + 0x10);
  if ((uVar11 & 0xf) == 0) {
    uVar12 = uVar11 >> 4;
  }
  else {
    uVar12 = (uVar11 >> 4) + 1;
  }
  local_24 = (void *)0x0;
  local_54 = uVar12 * uVar9;
  local_20 = (void *)0x0;
  local_38 = uVar9;
  if ((uVar13 == *(uint *)((int)this + 0xbe)) && (uVar11 == *(uint *)((int)this + 0xc2))) {
    iVar8 = 0;
  }
  else {
    if ((uVar13 != 0) && (uVar11 != 0)) {
      *(uint *)((int)this + 0xbe) = uVar13;
      uVar2 = *(undefined4 *)(param_4 + 0x10);
      *(undefined4 *)((int)this + 0xc2) = uVar2;
      FUN_638ad0a0(this,uVar13,uVar2);
    }
    iVar8 = -0x7fffbffb;
  }
  if ((*(int *)((int)this + 0x166) == 0) || (local_58 < 0x3c)) {
    iVar8 = -0x7fffbffb;
  }
  iVar6 = *(int *)(param_4 + 0xc);
  if (((((iVar6 == 0) || (*(int *)(param_4 + 0x10) == 0)) || (*(int *)((int)this + 0xb6) == 0)) ||
      (*(int *)((int)this + 0xba) == 0)) ||
     ((*(int *)((int)this + 0x186) != 0 &&
      ((*(int *)((int)this + 0xe2) == 0 || (*(int *)((int)this + 0xe6) == 0)))))) {
    iVar8 = -0x7fffbffb;
  }
  if (((*(int *)((int)this + 0xb6) != iVar6) ||
      (*(int *)((int)this + 0xba) != *(int *)(param_4 + 0x10))) ||
     ((*(int *)((int)this + 0x186) != 0 &&
      ((*(int *)((int)this + 0xe2) != iVar6 ||
       (*(int *)((int)this + 0xe6) != *(int *)(param_4 + 0x10))))))) {
    iVar8 = -0x7fffbffb;
  }
  if (iVar8 == 0) {
    local_30 = iVar8;
    local_2c = uVar9;
    local_28 = uVar12;
    local_24 = operator_new(local_54);
    local_20 = operator_new(local_54 * 8);
    if ((*(uint *)(param_4 + 4) & 4) == 0) {
      local_78 = ((*(uint *)(param_4 + 4) & 8) != 0) + 1;
    }
    else {
      local_78 = 0;
    }
    if (*(int *)((int)this + 0x186) == 0) {
      local_68 = 0x69;
      FUN_638a7ff0(this,&local_68);
      local_5c = *(uint **)((int)this + 0x18e);
      if (uVar12 != 0) {
        uStack_48 = uVar9 * 0x20;
        local_34 = uVar9 * 8;
        local_10 = 0;
        local_8 = 0;
        local_18 = 0;
        local_14 = uVar12;
        do {
          uVar12 = 0;
          uVar13 = local_8;
          uVar11 = local_18;
          if (uVar9 != 0) {
            do {
              bVar5 = *(byte *)(uStack_60 + uVar12 + local_10) & 0x1f;
              if ((bVar5 == 5) || (bVar5 == 6)) {
                *(undefined1 *)((int)local_24 + local_10 + uVar12) = 1;
                *(int *)((int)local_20 + uVar11) =
                     *(int *)(local_64 + 0x18 + uVar13) + *(int *)(local_64 + 0x10 + uVar13) +
                     *(int *)(local_64 + 8 + uVar13) + *(int *)(local_64 + uVar13) >> 2;
                iVar8 = *(int *)(local_64 + 0x1c + uVar13) + *(int *)(local_64 + 0x14 + uVar13) +
                        *(int *)(local_64 + 0xc + uVar13) + *(int *)(local_64 + 4 + uVar13) >> 2;
LAB_638acf8a:
                *(int *)((int)local_20 + uVar11 + 4) = iVar8;
              }
              else {
                if ((bVar5 == 3) || (bVar5 == 4)) {
                  *(undefined1 *)((int)local_24 + local_10 + uVar12) = 1;
                  *(undefined4 *)((int)local_20 + uVar11) = *(undefined4 *)(local_64 + uVar13);
                  iVar8 = *(int *)(local_64 + 4 + uVar13);
                  goto LAB_638acf8a;
                }
                if ((bVar5 == 0) || (bVar5 == 1)) {
                  *(undefined1 *)((int)local_24 + local_10 + uVar12) = 0;
                  *(undefined4 *)((int)local_20 + uVar11) = 0;
                  *(undefined4 *)((int)local_20 + uVar11 + 4) = 0;
                }
              }
              uVar12 = uVar12 + 1;
              uVar13 = uVar13 + 0x20;
              uVar11 = uVar11 + 8;
            } while (uVar12 < local_38);
          }
          local_18 = local_18 + local_34;
          local_10 = local_10 + local_38;
          local_8 = local_8 + uStack_48;
          local_14 = local_14 - 1;
          uVar9 = local_38;
        } while (local_14 != 0);
        local_14 = 0;
      }
    }
    else {
      local_5c = *(uint **)((int)this + 0xea);
      iVar8 = *(int *)((int)this + 0xb2);
      if (iVar8 == 2) {
LAB_638ac702:
        if (local_78 == 2) {
          if (iVar8 == 2) {
            local_e8 = 0x6a;
            FUN_638a7ff0(this,&local_e8);
            if (uVar12 != 0) {
              local_c = 0;
              local_18 = 0;
              local_10 = 0;
              uStack_48 = uVar9 << 5;
              local_50 = uVar9 * 8;
              local_14 = uVar12;
              do {
                local_1c = 0;
                if (uVar9 != 0) {
                  local_8 = local_18;
                  uVar13 = local_10;
                  do {
                    uVar9 = local_1c;
                    switch(*(byte *)((int)local_d8 + local_c + local_1c) & 0x1f) {
                    case 2:
                    case 3:
                    case 4:
                    case 0xd:
                    case 0xe:
                    case 0xf:
                      uVar11 = *(uint *)((int)this + 0x9e);
                      uVar12 = *(uint *)(param_4 + 8);
                      if (uVar12 < uVar11) {
                        iVar6 = uVar12 - uVar11;
                        iVar8 = iVar6 + -1;
                      }
                      else {
                        iVar6 = uVar12 - uVar11;
                        iVar8 = iVar6;
                      }
                      if (iVar8 != 0) {
                        uVar11 = *(uint *)((int)this + 0xa2);
                        if (uVar12 < uVar11) {
                          local_88 = (uVar12 - uVar11) + -1;
                        }
                        else {
                          local_88 = uVar12 - uVar11;
                        }
                        if (uVar12 < *(uint *)((int)this + 0x9e)) {
                          iVar6 = iVar6 + -1;
                        }
                        uStack_84 = 0;
                        uStack_9c = 0;
                        local_a0 = iVar6;
                      }
                      *(undefined1 *)((int)local_24 + local_c + local_1c) = 1;
                      uVar2 = ftol();
                      *(undefined4 *)((int)local_20 + uVar13) = uVar2;
                      goto LAB_638ace13;
                    default:
switchD_638acaf8_caseD_5:
                      *(undefined1 *)((int)local_24 + local_c + local_1c) = 0;
                      *(undefined4 *)((int)local_20 + uVar13) = 0;
                      *(undefined4 *)((int)local_20 + uVar13 + 4) = 0;
                      break;
                    case 10:
                    case 0xb:
                    case 0xc:
                      if ((*(byte *)(*(int *)((int)this + 0xda) + local_1c + local_c) & 0x1f) == 0xb
                         ) {
                        local_3c = *(int *)((int)this + 0x9e) + *(int *)((int)this + 0xc6);
                        uVar11 = *(uint *)((int)this + 0xa2);
                        if (local_3c < uVar11) {
                          iVar6 = local_3c - uVar11;
                          iVar8 = iVar6 + -1;
                        }
                        else {
                          iVar8 = local_3c - uVar11;
                          iVar6 = iVar8;
                        }
                        if (iVar8 != 0) {
                          uVar12 = *(uint *)(param_4 + 8);
                          if (uVar12 < uVar11) {
                            local_90 = (uVar12 - uVar11) + -1;
                          }
                          else {
                            local_90 = uVar12 - uVar11;
                          }
                          local_44 = (double)CONCAT44(local_90,(undefined4)local_44);
                          if (local_3c < uVar11) {
                            iVar6 = iVar6 + -1;
                          }
                          uStack_8c = 0;
                          uStack_94 = 0;
                          local_98 = iVar6;
                        }
                        *(undefined1 *)((int)local_24 + local_c + local_1c) = 1;
                        uVar2 = ftol();
                        *(undefined4 *)((int)local_20 + uVar13) = uVar2;
                      }
                      else {
                        local_3c = *(int *)((int)this + 0xc6) + *(int *)((int)this + 0x9e);
                        uVar11 = *(uint *)(param_4 + 8);
                        if (local_3c < uVar11) {
                          uVar7 = local_3c - uVar11;
                          uVar12 = uVar7 - 1;
                        }
                        else {
                          uVar7 = local_3c - uVar11;
                          uVar12 = uVar7;
                        }
                        if (uVar12 != 0) {
                          uVar12 = *(uint *)((int)this + 0xa2);
                          if (uVar11 < uVar12) {
                            local_80 = (uVar11 - uVar12) + -1;
                          }
                          else {
                            local_80 = uVar11 - uVar12;
                          }
                          if (local_3c < uVar11) {
                            uVar7 = uVar7 - 1;
                          }
                          uStack_7c = 0;
                          uStack_c0 = 0;
                          local_c4 = uVar7;
                        }
                        *(undefined1 *)((int)local_24 + local_c + local_1c) = 0;
                        uVar2 = ftol();
                        *(undefined4 *)((int)local_20 + uVar13) = uVar2;
                      }
LAB_638ace13:
                      uVar2 = ftol();
                      *(undefined4 *)((int)local_20 + uVar13 + 4) = uVar2;
                      break;
                    case 0x10:
                    case 0x11:
                    case 0x12:
                      if (*(uint *)((int)this + 0xc6) != 0) {
                        uVar11 = *(uint *)((int)this + 0xa2);
                        uVar12 = *(uint *)(param_4 + 8);
                        if (uVar12 < uVar11) {
                          local_a8 = (undefined4 *)((uVar12 - uVar11) + -1);
                        }
                        else {
                          local_a8 = (undefined4 *)(uVar12 - uVar11);
                        }
                        puStack_a4 = (undefined4 *)0x0;
                        uStack_60 = 0;
                        local_64 = *(uint *)((int)this + 0xc6);
                      }
                      switch(*(byte *)(*(int *)((int)this + 0xde) + local_1c + local_c) & 0x1f) {
                      case 2:
                      case 3:
                      case 4:
                        *(undefined1 *)((int)local_24 + local_c + local_1c) = 1;
                        uVar2 = ftol();
                        *(undefined4 *)((int)local_20 + uVar13) = uVar2;
                        goto LAB_638ace13;
                      case 5:
                      case 6:
                        *(undefined1 *)((int)local_24 + local_c + local_1c) = 1;
                        piVar1 = (int *)(*(int *)((int)this + 0xd6) + local_8);
                        local_34 = piVar1[4] + piVar1[6] + piVar1[2] + *piVar1 >> 2;
                        uVar2 = ftol();
                        *(undefined4 *)((int)local_20 + uVar13) = uVar2;
                        iVar8 = local_8 + *(int *)((int)this + 0xd6);
                        local_34 = *(int *)(iVar8 + 0x14) + *(int *)(iVar8 + 0x1c) +
                                   *(int *)(iVar8 + 4) + *(int *)(iVar8 + 0xc) >> 2;
                        uVar2 = ftol();
                        *(undefined4 *)((int)local_20 + uVar13 + 4) = uVar2;
                        break;
                      default:
                        goto switchD_638acaf8_caseD_5;
                      }
                    }
                    local_1c = uVar9 + 1;
                    local_8 = local_8 + 0x20;
                    uVar13 = uVar13 + 8;
                  } while (local_1c < local_38);
                }
                local_10 = local_10 + local_50;
                local_18 = local_18 + uStack_48;
                local_c = local_c + local_38;
                local_14 = local_14 - 1;
                uVar9 = local_38;
              } while (local_14 != 0);
              local_14 = 0;
            }
          }
        }
        else if (uVar12 != 0) {
          local_50 = uVar9 * 8;
          local_c = 0;
          local_18 = 0;
          local_10 = 0;
          local_14 = uVar9 << 5;
          local_1c = uVar12;
          do {
            uVar12 = 0;
            uVar13 = local_10;
            uVar11 = local_18;
            if (uVar9 != 0) {
              do {
                local_8 = uVar11;
                switch(*(byte *)(uVar12 + local_c + *(int *)((int)this + 0xda)) & 0x1f) {
                case 2:
                case 3:
                case 4:
                  uVar9 = *(uint *)((int)this + 0xa2);
                  uVar11 = *(uint *)((int)this + 0x9e);
                  if (uVar9 < uVar11) {
                    iVar6 = uVar9 - uVar11;
                    iVar8 = iVar6 + -1;
                  }
                  else {
                    iVar8 = uVar9 - uVar11;
                    iVar6 = iVar8;
                  }
                  if (iVar8 != 0) {
                    uVar11 = *(uint *)(param_4 + 8);
                    if (uVar11 < uVar9) {
                      local_90 = (uVar11 - uVar9) + -1;
                    }
                    else {
                      local_90 = uVar11 - uVar9;
                    }
                    local_44 = (double)CONCAT44(local_90,(undefined4)local_44);
                    if (uVar9 < *(uint *)((int)this + 0x9e)) {
                      iVar6 = iVar6 + -1;
                    }
                    uStack_8c = 0;
                    uStack_94 = 0;
                    local_98 = iVar6;
                  }
                  *(undefined1 *)((int)local_24 + local_c + uVar12) = 0;
                  uVar2 = ftol();
                  *(undefined4 *)((int)local_20 + uVar13) = uVar2;
                  goto LAB_638ac9d5;
                default:
                  *(undefined1 *)((int)local_24 + local_c + uVar12) = 0;
                  *(undefined4 *)((int)local_20 + uVar13) = 0;
                  *(undefined4 *)((int)local_20 + uVar13 + 4) = 0;
                  break;
                case 10:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                case 0xf:
                  local_3c = *(int *)((int)this + 0xc6) + *(int *)((int)this + 0x9e);
                  uVar9 = *(uint *)((int)this + 0xa2);
                  if (local_3c < uVar9) {
                    iVar6 = local_3c - uVar9;
                    iVar8 = iVar6 + -1;
                  }
                  else {
                    iVar8 = local_3c - uVar9;
                    iVar6 = iVar8;
                  }
                  if (iVar8 != 0) {
                    uVar11 = *(uint *)(param_4 + 8);
                    if (uVar11 < uVar9) {
                      local_88 = (uVar11 - uVar9) + -1;
                    }
                    else {
                      local_88 = uVar11 - uVar9;
                    }
                    local_44 = (double)CONCAT44(local_88,(undefined4)local_44);
                    if (local_3c < uVar9) {
                      iVar6 = iVar6 + -1;
                    }
                    uStack_84 = 0;
                    uStack_9c = 0;
                    local_a0 = iVar6;
                  }
                  *(undefined1 *)((int)local_24 + local_c + uVar12) = 1;
                  uVar2 = ftol();
                  *(undefined4 *)((int)local_20 + uVar13) = uVar2;
LAB_638ac9d5:
                  uVar2 = ftol();
                  *(undefined4 *)((int)local_20 + uVar13 + 4) = uVar2;
                  break;
                case 0x10:
                case 0x11:
                case 0x12:
                  if (*(int *)((int)this + 0xc6) != 0) {
                    uVar9 = *(uint *)((int)this + 0xa2);
                    uVar11 = *(uint *)(param_4 + 8);
                    if (uVar11 < uVar9) {
                      local_80 = (uVar11 - uVar9) + -1;
                    }
                    else {
                      local_80 = uVar11 - uVar9;
                    }
                    uStack_7c = 0;
                    uStack_48 = 0;
                    local_4c = *(int *)((int)this + 0xc6);
                  }
                  switch(*(byte *)(*(int *)((int)this + 0xde) + uVar12 + local_c) & 0x1f) {
                  case 2:
                  case 3:
                  case 4:
                    *(undefined1 *)((int)local_24 + local_c + uVar12) = 1;
                    uVar2 = ftol();
                    *(undefined4 *)((int)local_20 + uVar13) = uVar2;
                    goto LAB_638ac9d5;
                  case 5:
                  case 6:
                    *(undefined1 *)((int)local_24 + local_c + uVar12) = 1;
                    piVar1 = (int *)(*(int *)((int)this + 0xd6) + local_8);
                    local_34 = piVar1[2] + piVar1[4] + piVar1[6] + *piVar1 >> 2;
                    uVar2 = ftol();
                    *(undefined4 *)((int)local_20 + uVar13) = uVar2;
                    iVar8 = local_8 + *(int *)((int)this + 0xd6);
                    local_34 = *(int *)(iVar8 + 4) + *(int *)(iVar8 + 0xc) + *(int *)(iVar8 + 0x14)
                               + *(int *)(iVar8 + 0x1c) >> 2;
                    uVar2 = ftol();
                    *(undefined4 *)((int)local_20 + uVar13 + 4) = uVar2;
                    break;
                  default:
                    *(undefined1 *)((int)local_24 + local_c + uVar12) = 0;
                    *(undefined4 *)((int)local_20 + uVar13) = 0;
                    *(undefined4 *)((int)local_20 + uVar13 + 4) = 0;
                  }
                }
                uVar12 = uVar12 + 1;
                local_8 = local_8 + 0x20;
                uVar13 = uVar13 + 8;
                uVar11 = local_8;
              } while (uVar12 < local_38);
            }
            local_10 = local_10 + local_50;
            local_18 = local_18 + local_14;
            local_c = local_c + local_38;
            local_1c = local_1c - 1;
            uVar9 = local_38;
          } while (local_1c != 0);
          local_1c = 0;
        }
      }
      else if (local_78 == 2) {
        if (iVar8 == 2) goto LAB_638ac702;
        local_74[0] = 0x6a;
        FUN_638a7ff0(this,local_74);
        if (uVar12 != 0) {
          local_50 = uVar9 * 8;
          local_c = 0;
          local_10 = 0;
          local_18 = 0;
          local_44 = (double)CONCAT44(uVar12,(undefined4)local_44);
          local_34 = uVar9 << 5;
          do {
            local_1c = 0;
            uVar13 = local_18;
            uVar11 = local_10;
            if (uVar9 != 0) {
              do {
                local_8 = uVar11;
                uVar9 = local_1c;
                switch(*(byte *)(local_64 + local_1c + local_c) & 0x1f) {
                case 2:
                case 3:
                case 4:
                case 0xd:
                case 0xe:
                case 0xf:
                  uVar11 = *(uint *)((int)this + 0x9e);
                  uVar12 = *(uint *)(param_4 + 8);
                  if (uVar12 < uVar11) {
                    iVar6 = uVar12 - uVar11;
                    iVar8 = iVar6 + -1;
                  }
                  else {
                    iVar6 = uVar12 - uVar11;
                    iVar8 = iVar6;
                  }
                  if (iVar8 != 0) {
                    uVar11 = *(uint *)((int)this + 0xa2);
                    if (uVar12 < uVar11) {
                      local_4c = (uVar12 - uVar11) + -1;
                    }
                    else {
                      local_4c = uVar12 - uVar11;
                    }
                    if (uVar12 < *(uint *)((int)this + 0x9e)) {
                      iVar6 = iVar6 + -1;
                    }
                    uStack_48 = 0;
                    uStack_7c = 0;
                    local_80 = iVar6;
                  }
                  *(undefined1 *)((int)local_24 + local_c + local_1c) = 1;
                  uVar2 = ftol();
                  *(undefined4 *)((int)local_20 + uVar13) = uVar2;
                  goto LAB_638ac661;
                default:
                  *(undefined1 *)((int)local_24 + local_c + local_1c) = 0;
                  *(undefined4 *)((int)local_20 + uVar13) = 0;
                  *(undefined4 *)((int)local_20 + uVar13 + 4) = 0;
                  break;
                case 10:
                case 0xb:
                case 0xc:
                  local_3c = *(int *)((int)this + 0xc6) + *(int *)((int)this + 0x9e);
                  uVar11 = *(uint *)(param_4 + 8);
                  if (local_3c < uVar11) {
                    iVar6 = local_3c - uVar11;
                    iVar8 = iVar6 + -1;
                  }
                  else {
                    iVar6 = local_3c - uVar11;
                    iVar8 = iVar6;
                  }
                  if (iVar8 != 0) {
                    uVar12 = *(uint *)((int)this + 0xa2);
                    if (uVar11 < uVar12) {
                      local_98 = (uVar11 - uVar12) + -1;
                    }
                    else {
                      local_98 = uVar11 - uVar12;
                    }
                    if (local_3c < uVar11) {
                      iVar6 = iVar6 + -1;
                    }
                    uStack_94 = 0;
                    uStack_8c = 0;
                    local_90 = iVar6;
                  }
                  *(undefined1 *)((int)local_24 + local_c + local_1c) = 0;
                  uVar2 = ftol();
                  *(undefined4 *)((int)local_20 + uVar13) = uVar2;
LAB_638ac661:
                  uVar2 = ftol();
                  *(undefined4 *)((int)local_20 + uVar13 + 4) = uVar2;
                  break;
                case 0x10:
                case 0x11:
                case 0x12:
                  if (*(int *)((int)this + 0xc6) != 0) {
                    uVar11 = *(uint *)((int)this + 0xa2);
                    uVar12 = *(uint *)(param_4 + 8);
                    if (uVar12 < uVar11) {
                      local_a0 = (uVar12 - uVar11) + -1;
                    }
                    else {
                      local_a0 = uVar12 - uVar11;
                    }
                    uStack_9c = 0;
                    uStack_84 = 0;
                    local_88 = *(int *)((int)this + 0xc6);
                  }
                  switch(*(byte *)(*(int *)((int)this + 0xde) + local_1c + local_c) & 0x1f) {
                  case 2:
                  case 3:
                  case 4:
                    *(undefined1 *)((int)local_24 + local_c + local_1c) = 1;
                    uVar2 = ftol();
                    *(undefined4 *)((int)local_20 + uVar13) = uVar2;
                    goto LAB_638ac661;
                  case 5:
                  case 6:
                    *(undefined1 *)((int)local_24 + local_c + local_1c) = 1;
                    piVar1 = (int *)(*(int *)((int)this + 0xd6) + local_8);
                    local_14 = piVar1[4] + piVar1[6] + piVar1[2] + *piVar1 >> 2;
                    uVar2 = ftol();
                    *(undefined4 *)((int)local_20 + uVar13) = uVar2;
                    iVar8 = local_8 + *(int *)((int)this + 0xd6);
                    local_14 = *(int *)(iVar8 + 0x14) + *(int *)(iVar8 + 0x1c) + *(int *)(iVar8 + 4)
                               + *(int *)(iVar8 + 0xc) >> 2;
                    uVar2 = ftol();
                    *(undefined4 *)((int)local_20 + uVar13 + 4) = uVar2;
                    break;
                  default:
                    *(undefined1 *)((int)local_24 + local_c + local_1c) = 0;
                    *(undefined4 *)((int)local_20 + uVar13) = 0;
                    *(undefined4 *)((int)local_20 + uVar13 + 4) = 0;
                  }
                }
                local_1c = uVar9 + 1;
                local_8 = local_8 + 0x20;
                uVar13 = uVar13 + 8;
                uVar11 = local_8;
              } while (local_1c < local_38);
            }
            local_18 = local_18 + local_50;
            local_10 = local_10 + local_34;
            local_c = local_c + local_38;
            iVar8 = local_44._4_4_ + -1;
            local_44 = (double)CONCAT44(iVar8,(undefined4)local_44);
            uVar9 = local_38;
          } while (iVar8 != 0);
        }
      }
      else {
        if (*(int *)((int)this + 0xc6) != 0) {
          uStack_48 = 0;
          local_4c = *(int *)((int)this + 0xc6);
        }
        if (uVar12 != 0) {
          local_8 = 0;
          local_c = 0;
          local_3c = 0;
          local_18 = uVar9 << 5;
          local_44 = (double)CONCAT44(uVar9 * 8,(undefined4)local_44);
          local_10 = uVar12;
          do {
            uVar13 = 0;
            if (uVar9 != 0) {
              local_1c = local_c;
              uVar9 = local_3c;
              do {
                switch(*(byte *)(uVar13 + local_8 + *(int *)((int)this + 0xde)) & 0x1f) {
                case 2:
                case 3:
                case 4:
                  *(undefined1 *)((int)local_24 + local_8 + uVar13) = 1;
                  uVar2 = ftol();
                  *(undefined4 *)((int)local_20 + uVar9) = uVar2;
                  uVar2 = ftol();
                  *(undefined4 *)((int)local_20 + uVar9 + 4) = uVar2;
                  break;
                case 5:
                case 6:
                  *(undefined1 *)((int)local_24 + local_8 + uVar13) = 1;
                  piVar1 = (int *)(local_1c + *(int *)((int)this + 0xd6));
                  local_14 = piVar1[2] + piVar1[6] + piVar1[4] + *piVar1 >> 2;
                  uVar2 = ftol();
                  *(undefined4 *)((int)local_20 + uVar9) = uVar2;
                  iVar8 = *(int *)((int)this + 0xd6) + local_1c;
                  local_14 = *(int *)(iVar8 + 0xc) + *(int *)(iVar8 + 4) + *(int *)(iVar8 + 0x1c) +
                             *(int *)(iVar8 + 0x14) >> 2;
                  uVar2 = ftol();
                  *(undefined4 *)((int)local_20 + uVar9 + 4) = uVar2;
                  break;
                default:
                  *(undefined1 *)((int)local_24 + local_8 + uVar13) = 0;
                  *(undefined4 *)((int)local_20 + uVar9) = 0;
                  *(undefined4 *)((int)local_20 + uVar9 + 4) = 0;
                }
                uVar13 = uVar13 + 1;
                local_1c = local_1c + 0x20;
                uVar9 = uVar9 + 8;
              } while (uVar13 < local_38);
            }
            local_8 = local_8 + local_38;
            local_c = local_c + local_18;
            local_3c = local_3c + local_44._4_4_;
            local_10 = local_10 - 1;
            uVar9 = local_38;
          } while (local_10 != 0);
        }
      }
    }
    QueryPerformanceFrequency(&local_cc);
    QueryPerformanceCounter(&local_b4);
    uVar13 = local_58;
    local_8 = FUN_638ad0d0(this,*(undefined4 *)((int)this + 0x14e),*(undefined4 *)((int)this + 0xae)
                           ,param_2,local_5c,local_78,local_58,&local_30);
    QueryPerformanceCounter(&local_bc);
    local_64 = local_cc.s.LowPart;
    uStack_60 = 0;
    local_44 = ((((double)local_bc._0_4_ - (double)local_bc.s.HighPart * _DAT_638b33c8) -
                ((double)local_b4._0_4_ - (double)local_b4.s.HighPart * _DAT_638b33c8)) *
               _DAT_638b33d0) /
               ((double)local_cc._0_4_ - (double)local_cc.s.HighPart * _DAT_638b33c8);
    if (local_8 == 0) {
      local_14 = 1;
      uVar9 = ((uVar13 + 0x10) * 3) / 100;
      local_50 = uVar9;
      if (1 < uVar9) {
        local_10 = uVar13;
        param_2 = 0x100;
        do {
          uStack_48 = param_2 / uVar9;
          local_34 = local_10 / uVar9;
          puVar3 = (ulonglong *)(**(code **)(**(int **)((int)this + 0x10) + 0xc))(local_d0);
          if (puVar3 != (ulonglong *)0x0) {
            QueryPerformanceCounter(&local_b4);
            local_8 = FUN_638ad110(this,uStack_48,puVar3);
            QueryPerformanceCounter(&local_bc);
            local_64 = local_bc.s.LowPart;
            uStack_60 = 0;
            local_a8 = (undefined4 *)local_b4.s.LowPart;
            puStack_a4 = (undefined4 *)0x0;
            local_c4 = local_cc.s.LowPart;
            uStack_c0 = 0;
            local_44 = ((((double)local_bc._0_4_ - (double)local_bc.s.HighPart * _DAT_638b33c8) -
                        ((double)local_b4._0_4_ - (double)local_b4.s.HighPart * _DAT_638b33c8)) *
                       _DAT_638b33d0) /
                       ((double)local_cc._0_4_ - (double)local_cc.s.HighPart * _DAT_638b33c8) +
                       local_44;
            if (local_8 == 0) {
              puVar4 = operator_new(0x28);
              *puVar4 = *(uint *)((int)this + 0x24);
              puVar4[2] = local_34 + *(int *)((int)this + 0xa2);
              *(undefined2 *)(puVar4 + 3) = *(undefined2 *)(param_1 + 0xc);
              *(ushort *)((int)puVar4 + 0xe) = *(ushort *)(param_1 + 0xe) | 1;
              *(ushort *)((int)puVar4 + 0xe) = *(ushort *)(param_1 + 0xe) | 0x40;
              puVar4[4] = *(uint *)(param_1 + 0x10);
              puVar4[5] = 1;
              puVar4[7] = 0;
              puVar4[6] = 1;
              if ((*(int *)((int)this + 0xbce) == 0) ||
                 ((int)((uint)*(ushort *)((int)this + 0x40) * (uint)*(ushort *)((int)this + 0x3e)) <
                  0x16440)) {
                if (*(uint *)((int)this + 0x24) ==
                    (uint)(*(int *)(param_4 + 0x10) * *(int *)(param_4 + 0xc) * 3) >> 1) {
                  puVar4[1] = (uint)puVar3;
                }
                else {
                  local_5c = (uint *)(**(code **)(**(int **)((int)this + 0x10) + 0xc))(local_d0);
                  if (local_5c == (uint *)0x0) {
                    return 0x80004005;
                  }
                  FUN_638a56f0(*(void **)((int)this + 0x96),puVar3,local_5c,
                               *(uint **)(param_4 + 0xc),*(uint *)(param_4 + 0x10),
                               (uint)*(ushort *)((int)this + 0x3e),
                               (uint)*(ushort *)((int)this + 0x40),0);
                  puVar4[1] = (uint)local_5c;
                  (**(code **)(**(int **)((int)this + 0x10) + 0x1c))(puVar3);
                }
              }
              else {
                puVar4[1] = (uint)puVar3;
                puVar4[5] = 2;
                puVar4[9] = *(uint *)(param_4 + 0xc);
                puVar4[8] = *(uint *)(param_4 + 0x10);
                iVar8 = *(int *)(param_4 + 0x10);
                iVar6 = *(int *)(param_4 + 0xc);
                *(byte *)((int)puVar4 + 0xf) = *(byte *)((int)puVar4 + 0xf) | 1;
                *puVar4 = (uint)(iVar8 * iVar6 * 3) >> 1;
              }
              *(uint *)((int)this + 0xa6) = puVar4[2];
              local_44 = 0.0;
              (**(code **)((int)this + 0xc))(*(undefined4 *)((int)this + 8),this,puVar4);
              operator_delete(puVar4);
              uVar9 = local_50;
            }
          }
          local_14 = local_14 + 1;
          param_2 = param_2 + 0x100;
          local_10 = local_10 + local_58;
        } while (local_14 < uVar9);
      }
    }
  }
  else if (*(int *)((int)this + 0x186) != 0) {
    *(undefined4 *)((int)this + 0xe2) = 0;
    *(undefined4 *)((int)this + 0xe6) = 0;
  }
  if (((((*(int *)((int)this + 0x166) != 0) && (0x3b < local_58)) &&
       (*(int *)((int)this + 0x186) != 0)) &&
      ((*(int *)(param_4 + 0xc) != 0 && (*(int *)(param_4 + 0x10) != 0)))) &&
     ((*(int *)((int)this + 0xb6) != 0 && (*(int *)((int)this + 0xba) != 0)))) {
    if ((*(byte *)(param_4 + 4) & 8) == 0) {
      uStack_60 = 0;
      local_64 = 0;
      local_68 = 0x6b;
      iVar8 = FUN_638a7ff0(this,&local_68);
      if (iVar8 == 0) {
        *(uint *)((int)this + 0xe2) = local_64;
        *(uint *)((int)this + 0xe6) = uStack_60;
        if ((local_64 & 0xf) == 0) {
          uVar13 = local_64 >> 4;
        }
        else {
          uVar13 = (local_64 >> 4) + 1;
        }
        if ((uStack_60 & 0xf) == 0) {
          local_54 = uStack_60 >> 4;
        }
        else {
          local_54 = (uStack_60 >> 4) + 1;
        }
        local_54 = local_54 * uVar13;
        local_ac = 0x69;
        iVar8 = FUN_638a7ff0(this,&local_ac);
        if (iVar8 == 0) {
          puVar10 = local_a8;
          puVar14 = *(undefined4 **)((int)this + 0xd6);
          for (iVar8 = (local_54 & 0x7ffffff) << 3; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar14 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar14 = puVar14 + 1;
          }
          for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(undefined1 *)puVar14 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar14 = (undefined4 *)((int)puVar14 + 1);
          }
          puVar10 = puStack_a4;
          puVar14 = *(undefined4 **)((int)this + 0xde);
          for (uVar13 = local_54 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *puVar14 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar14 = puVar14 + 1;
          }
          for (uVar13 = local_54 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined1 *)puVar14 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar14 = (undefined4 *)((int)puVar14 + 1);
          }
          uVar13 = *(uint *)(param_3 + 0x14);
          uVar9 = *(uint *)(param_4 + 8);
          if (uVar13 < uVar9) {
            iVar8 = (uVar13 - uVar9) + -1;
          }
          else {
            iVar8 = uVar13 - uVar9;
          }
          *(int *)((int)this + 0xc6) = iVar8;
          *(undefined4 *)((int)this + 0xea) = *(undefined4 *)((int)this + 0x18e);
          goto LAB_638ac35b;
        }
      }
      *(undefined4 *)((int)this + 0xe2) = 0;
      *(undefined4 *)((int)this + 0xe6) = 0;
    }
    else {
      local_e8 = 0x6a;
      iVar8 = FUN_638a7ff0(this,&local_e8);
      if (iVar8 == 0) {
        puVar10 = *(undefined4 **)((int)this + 0xce);
        for (iVar8 = (local_54 & 0x1fffffff) << 1; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar10 = *local_e4;
          local_e4 = local_e4 + 1;
          puVar10 = puVar10 + 1;
        }
        for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined1 *)puVar10 = *(undefined1 *)local_e4;
          local_e4 = (undefined4 *)((int)local_e4 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        puVar10 = *(undefined4 **)((int)this + 0xd2);
        for (iVar8 = (local_54 & 0x1fffffff) << 1; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar10 = *local_e0;
          local_e0 = local_e0 + 1;
          puVar10 = puVar10 + 1;
        }
        for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined1 *)puVar10 = *(undefined1 *)local_e0;
          local_e0 = (undefined4 *)((int)local_e0 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        puVar10 = *(undefined4 **)((int)this + 0xda);
        for (uVar13 = local_54 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar10 = *local_d8;
          local_d8 = local_d8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar13 = local_54 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)local_d8;
          local_d8 = (undefined4 *)((int)local_d8 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
      }
    }
  }
LAB_638ac35b:
  if (local_24 != (void *)0x0) {
    operator_delete(local_24);
  }
  if (local_20 != (void *)0x0) {
    operator_delete(local_20);
  }
  return 0;
}


