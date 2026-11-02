/* Module: erv13260.dll
   Function: FUN_635f2750
   Address: 635f2750
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x635f3e99) */

void FUN_635f2750(int *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int *param_6,
                 int param_7,int param_8)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int in_stack_00000064;
  int in_stack_00000068;
  byte *in_stack_0000006c;
  undefined4 *in_stack_00000070;
  byte *in_stack_00000074;
  undefined8 *in_stack_0000007c;
  int *in_stack_00000080;
  int *in_stack_00000084;
  uint in_stack_00000088;
  byte local_248 [256];
  int *local_148;
  int local_144 [39];
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  byte *local_8c;
  int local_88 [5];
  int local_74 [5];
  int *local_60;
  int local_5c;
  int local_58;
  undefined4 *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  iVar1 = in_stack_00000088;
  local_28 = *(int **)(in_stack_00000088 + 0x23cb);
  iVar9 = *(int *)(in_stack_00000088 + 0x1ce8);
  local_88[4] = *(int *)(in_stack_00000088 + 0x1cec);
  in_stack_00000088 = iVar9;
  local_90 = *(int *)(iVar1 + 0x1ce4);
  local_a0 = (int)in_stack_00000080 / 2;
  local_a8 = in_stack_00000064 * 0x60 - (int)in_stack_00000080 / 2;
  local_10 = (int *)(&DAT_63605d80 + (local_a8 + (int)param_6) * 4);
  local_a4 = in_stack_00000064 * 0x60 - (int)in_stack_00000084 / 2;
  local_98 = (int)in_stack_00000084 / 2;
  local_18 = (int *)(&DAT_63605d80 + (local_a4 + param_7) * 4);
  in_stack_00000080 = (int *)*param_1;
  local_14 = *(int **)(iVar1 + 0x23cf);
  iVar1 = 0;
  local_5c = *param_3;
  if (0 < param_8) {
    piVar5 = (int *)&stack0x00000034;
    iVar7 = param_8;
    do {
      iVar3 = *piVar5;
      piVar5 = piVar5 + 1;
      iVar1 = iVar1 + iVar3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (local_88[4] == 0) {
    if (0xf < iVar1) {
      iVar1 = 0xf;
    }
  }
  else {
    if (0xe < iVar1) {
      iVar1 = 0xe;
    }
    piVar5 = (int *)0xfffffff0;
    if (-0x11 < (int)param_6) {
      piVar5 = param_6;
    }
    if ((int)piVar5 < 0x11) {
      if ((int)param_6 < -0x10) {
        param_6 = (int *)0xfffffff0;
      }
    }
    else {
      param_6 = (int *)0x10;
    }
    iVar7 = -0x10;
    if (-0x11 < param_7) {
      iVar7 = param_7;
    }
    if (iVar7 < 0x11) {
      if (param_7 < -0x10) {
        param_7 = -0x10;
      }
    }
    else {
      param_7 = 0x10;
    }
  }
  local_50 = local_28;
  if (iVar9 != 0) {
    local_50 = (int *)((-(uint)(local_88[4] != 0) & 0x20) + 0x20 + (int)local_28);
  }
  local_44 = (int)param_6 + (param_4 - iVar1);
  in_stack_00000084 = (int *)((int)param_6 + param_4 + iVar1);
  param_1 = (int *)((param_7 - iVar1) + param_5);
  param_3 = (int *)(iVar1 + param_7 + param_5);
  if (iVar9 == 0) {
    if (local_44 < 0) {
      local_44 = 0;
    }
    if ((int)(local_28 + -4) < (int)in_stack_00000084) {
      in_stack_00000084 = local_28 + -4;
    }
    if ((int)param_1 < 0) {
      param_1 = (int *)0x0;
    }
    piVar5 = local_14 + -4;
    if ((int)piVar5 < (int)param_3) {
      param_3 = piVar5;
    }
  }
  iVar9 = local_44;
  iVar1 = (int)param_3 + (0x10 - (int)param_1);
  uVar8 = (int)in_stack_00000084 + (0x10 - local_44);
  in_stack_00000088 = uVar8;
  local_54 = malloc(iVar1 * uVar8);
  FUN_635f40f0((int)in_stack_00000080,param_4,param_5,(int)local_28,(undefined4 *)in_stack_0000007c)
  ;
  if ((uVar8 == 0x16) && (iVar1 == 0x16)) {
    FUN_635f42c0(local_5c,iVar9,(int)param_1,(int)local_50,local_54);
  }
  else {
    FUN_635f4070(local_5c,iVar9,(int)param_1,uVar8,iVar1,(int)local_50,local_54);
  }
  FUN_635f40f0(local_5c,param_4,param_5,(int)local_50,(undefined4 *)in_stack_00000074);
  if (DAT_63606d24 == 0) {
    FUN_635f1000((int)in_stack_00000080,param_4,param_5,(int)local_28,local_248);
  }
  piVar5 = local_144;
  local_8c = (byte *)0x7fffffff;
  iVar7 = 5;
  local_88[0] = 0x7fffffff;
  local_88[1] = 0x7fffffff;
  local_88[2] = 0x7fffffff;
  local_88[3] = 0x7fffffff;
  do {
    piVar5[-1] = 0;
    *piVar5 = 0;
    piVar5[5] = 0;
    piVar5[1] = 0;
    piVar5[2] = 0;
    piVar5[6] = 0;
    piVar5 = piVar5 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if ((((param_4 - iVar9 < 0) || (iVar7 = param_5 - (int)param_1, iVar7 < 0)) ||
      ((int)uVar8 < (param_4 - iVar9) + 0x10)) || (iVar1 < iVar7 + 0x10)) {
    if (DAT_63606d24 == 0) {
      in_stack_00000074 = (byte *)FUN_635f10b0(in_stack_00000074,local_248,0x10,(int)local_8c);
    }
    else {
      in_stack_00000074 =
           (byte *)FUN_635f14d0((undefined8 *)in_stack_00000074,in_stack_0000007c,0x10,(int)local_8c
                               );
    }
    *(byte **)in_stack_0000006c = in_stack_00000074;
    iVar1 = local_18[-param_7] + local_10[-(int)param_6];
  }
  else {
    pbVar2 = (byte *)((int)local_54 + param_4 + (iVar7 * uVar8 - iVar9));
    if (DAT_63606d24 == 0) {
      in_stack_00000074 = (byte *)FUN_635f10b0(pbVar2,local_248,uVar8,(int)local_8c);
    }
    else {
      in_stack_00000074 =
           (byte *)FUN_635f14d0((undefined8 *)pbVar2,in_stack_0000007c,uVar8,(int)local_8c);
    }
    *(byte **)in_stack_0000006c = in_stack_00000074;
    iVar1 = local_18[-param_7] + local_10[-(int)param_6];
  }
  pbVar2 = in_stack_00000074 + iVar1;
  *(byte **)in_stack_0000006c = in_stack_00000074 + -100;
  if ((param_6 == (int *)0x0) && (param_7 == 0)) {
    local_74[0] = *(int *)in_stack_0000006c;
    local_8c = pbVar2;
    local_148 = (int *)0x0;
    local_144[0] = 0;
  }
  else {
    pbVar2 = (byte *)((int)param_6 +
                     (int)local_54 +
                     param_4 + (((param_7 - (int)param_1) + param_5) * uVar8 - iVar9));
    if (DAT_63606d24 == 0) {
      local_74[0] = FUN_635f10b0(pbVar2,local_248,uVar8,(int)local_8c);
    }
    else {
      local_74[0] = FUN_635f14d0((undefined8 *)pbVar2,in_stack_0000007c,uVar8,(int)local_8c);
    }
    local_148 = param_6;
    pbVar2 = (byte *)(*local_18 + *local_10 + local_74[0]);
    local_144[0] = param_7;
    local_8c = pbVar2;
  }
  local_8c = pbVar2;
  if (in_stack_00000064 == 0) {
    local_8c = pbVar2 + -100;
  }
  if (0 < local_74[0]) {
    iVar1 = 0;
    iVar9 = 0;
    local_58 = 0;
    if (0 < param_8) {
      local_94 = (int)in_stack_00000084 - param_4;
      local_9c = (int)param_3 - param_5;
      pbVar2 = local_8c;
      do {
        piVar5 = *(int **)(&stack0x00000024 + local_58 * 4);
        in_stack_00000084 = piVar5;
        local_2c = (int)piVar5 * in_stack_00000088;
        local_60 = *(int **)(&stack0x00000034 + local_58 * 4);
        iVar7 = local_a0 - (int)param_6;
        if (iVar7 == 0) {
          local_38 = 0;
        }
        else {
          local_38 = ((-1 < iVar7) - 1 & 0xfffffffe) + 1;
        }
        in_stack_0000006c = (byte *)(local_98 - param_7);
        if (in_stack_0000006c == (byte *)0x0) {
          local_34 = 0;
        }
        else {
          local_34 = ((-1 < (int)in_stack_0000006c) - 1 & 0xfffffffe) + 1;
        }
        if ((local_38 == 0) && (local_34 == 0)) {
          local_34 = 1;
        }
        else if ((int)in_stack_0000006c * local_34 < iVar7 * local_38) {
          local_34 = 0;
        }
        else {
          local_38 = 0;
        }
        iVar9 = iVar9 - (int)piVar5;
        in_stack_00000074 =
             (byte *)((int)param_6 +
                     (int)local_54 +
                     param_4 + (((iVar9 - (int)param_1) + param_7 + param_5) * in_stack_00000088 -
                               local_44) + iVar1);
        local_48 = (int *)(local_94 - (int)param_6);
        piVar4 = (int *)((int)param_6 + (param_4 - local_44));
        param_3 = local_48;
        if ((int)piVar4 <= (int)local_48) {
          param_3 = piVar4;
        }
        local_28 = (int *)(local_9c - param_7);
        if ((int)local_28 <= (int)param_3) {
          param_3 = local_28;
        }
        piVar4 = (int *)(param_5 + (param_7 - (int)param_1));
        if ((int)piVar4 <= (int)param_3) {
          param_3 = piVar4;
        }
        if ((int)local_60 <= (int)param_3) {
          param_3 = local_60;
        }
        in_stack_00000080 = piVar5;
        if (*(int *)(&stack0x00000054 + local_58 * 4) == 0) {
          if ((int)piVar5 <= (int)param_3) {
            local_40 = (int *)-(int)piVar5;
            local_c = (int *)-(int)piVar5;
            local_24 = (int *)((int)piVar5 * local_34 * 4);
            local_30 = (int *)((int)piVar5 * local_38 * 4);
            local_1c = (int *)((int)local_24 + (int)local_18);
            local_20 = (int *)((int)local_30 + (int)local_10);
            do {
              if ((int)pbVar2 < *local_1c + *local_20) break;
              if (iVar1 < (int)in_stack_00000080) {
                local_14 = (int *)((int)piVar5 * 4);
                local_8 = local_10 + iVar1;
                do {
                  in_stack_0000006c = (byte *)(*local_8 + local_18[iVar9]);
                  if ((int)in_stack_0000006c < (int)pbVar2) {
                    if (DAT_63606d24 == 0) {
                      iVar7 = FUN_635f10b0(in_stack_00000074,local_248,in_stack_00000088,
                                           (int)pbVar2 - (int)in_stack_0000006c);
                    }
                    else {
                      iVar7 = FUN_635f14d0((undefined8 *)in_stack_00000074,in_stack_0000007c,
                                           in_stack_00000088,(int)pbVar2 - (int)in_stack_0000006c);
                    }
                    if ((int)(in_stack_0000006c + iVar7) < (int)pbVar2) {
                      local_74[0] = iVar7;
                      local_148 = (int *)((int)param_6 + iVar1);
                      local_144[0] = param_7 + iVar9;
                      pbVar2 = in_stack_0000006c + iVar7;
                    }
                  }
                  iVar1 = iVar1 + (int)in_stack_00000084;
                  local_8 = (int *)((int)local_8 + (int)local_14);
                  in_stack_00000074 = in_stack_00000074 + (int)in_stack_00000084;
                  piVar5 = in_stack_00000084;
                } while (iVar1 < (int)in_stack_00000080);
              }
              if (iVar9 < (int)in_stack_00000080) {
                local_14 = (int *)((int)piVar5 * 4);
                local_8 = local_18 + iVar9;
                do {
                  in_stack_0000006c = (byte *)(*local_8 + local_10[iVar1]);
                  if ((int)in_stack_0000006c < (int)pbVar2) {
                    if (DAT_63606d24 == 0) {
                      iVar7 = FUN_635f10b0(in_stack_00000074,local_248,in_stack_00000088,
                                           (int)pbVar2 - (int)in_stack_0000006c);
                    }
                    else {
                      iVar7 = FUN_635f14d0((undefined8 *)in_stack_00000074,in_stack_0000007c,
                                           in_stack_00000088,(int)pbVar2 - (int)in_stack_0000006c);
                    }
                    if ((int)(in_stack_0000006c + iVar7) < (int)pbVar2) {
                      local_74[0] = iVar7;
                      local_148 = (int *)((int)param_6 + iVar1);
                      local_144[0] = param_7 + iVar9;
                      pbVar2 = in_stack_0000006c + iVar7;
                    }
                  }
                  iVar9 = iVar9 + (int)in_stack_00000084;
                  local_8 = (int *)((int)local_8 + (int)local_14);
                  in_stack_00000074 = in_stack_00000074 + local_2c;
                  piVar5 = in_stack_00000084;
                } while (iVar9 < (int)in_stack_00000080);
              }
              if ((int)local_c < iVar1) {
                local_14 = (int *)((int)piVar5 * 4);
                local_8 = local_10 + iVar1;
                do {
                  in_stack_0000006c = (byte *)(*local_8 + local_18[iVar9]);
                  if ((int)in_stack_0000006c < (int)pbVar2) {
                    if (DAT_63606d24 == 0) {
                      iVar7 = FUN_635f10b0(in_stack_00000074,local_248,in_stack_00000088,
                                           (int)pbVar2 - (int)in_stack_0000006c);
                    }
                    else {
                      iVar7 = FUN_635f14d0((undefined8 *)in_stack_00000074,in_stack_0000007c,
                                           in_stack_00000088,(int)pbVar2 - (int)in_stack_0000006c);
                    }
                    if ((int)(in_stack_0000006c + iVar7) < (int)pbVar2) {
                      local_74[0] = iVar7;
                      local_148 = (int *)((int)param_6 + iVar1);
                      local_144[0] = param_7 + iVar9;
                      pbVar2 = in_stack_0000006c + iVar7;
                    }
                  }
                  iVar1 = iVar1 - (int)in_stack_00000084;
                  local_8 = (int *)((int)local_8 - (int)local_14);
                  in_stack_00000074 = in_stack_00000074 + -(int)in_stack_00000084;
                  piVar5 = in_stack_00000084;
                } while ((int)local_c < iVar1);
              }
              if ((int)local_c <= iVar9) {
                local_14 = (int *)((int)piVar5 * 4);
                local_8 = local_18 + iVar9;
                do {
                  in_stack_0000006c = (byte *)(*local_8 + local_10[iVar1]);
                  if ((int)in_stack_0000006c < (int)pbVar2) {
                    if (DAT_63606d24 == 0) {
                      iVar7 = FUN_635f10b0(in_stack_00000074,local_248,in_stack_00000088,
                                           (int)pbVar2 - (int)in_stack_0000006c);
                    }
                    else {
                      iVar7 = FUN_635f14d0((undefined8 *)in_stack_00000074,in_stack_0000007c,
                                           in_stack_00000088,(int)pbVar2 - (int)in_stack_0000006c);
                    }
                    if ((int)(in_stack_0000006c + iVar7) < (int)pbVar2) {
                      local_74[0] = iVar7;
                      local_148 = (int *)((int)param_6 + iVar1);
                      local_144[0] = param_7 + iVar9;
                      pbVar2 = in_stack_0000006c + iVar7;
                    }
                  }
                  iVar9 = iVar9 - (int)in_stack_00000084;
                  local_8 = (int *)((int)local_8 - (int)local_14);
                  in_stack_00000074 = in_stack_00000074 + -local_2c;
                  piVar5 = in_stack_00000084;
                } while ((int)local_c <= iVar9);
              }
              in_stack_00000080 = (int *)((int)in_stack_00000080 + (int)piVar5);
              local_20 = (int *)((int)local_20 + (int)local_30);
              local_1c = (int *)((int)local_1c + (int)local_24);
              local_c = (int *)((int)local_c + (int)local_40);
            } while ((int)in_stack_00000080 <= (int)param_3);
          }
          if ((int)in_stack_00000080 <= (int)local_60) {
            local_c = (int *)-(int)in_stack_00000080;
            local_4c = (int *)-(int)piVar5;
            local_3c = (int *)((int)piVar5 * local_34 * 4);
            local_40 = (int *)((int)piVar5 * local_38 * 4);
            local_30 = local_18 + local_34 * (int)in_stack_00000080;
            local_24 = local_10 + local_38 * (int)in_stack_00000080;
            do {
              if ((int)pbVar2 < *local_30 + *local_24) break;
              if (iVar1 < (int)in_stack_00000080) {
                iVar7 = local_44 - param_4;
                local_14 = (int *)((int)piVar5 << 2);
                local_8 = local_10 + iVar1;
                do {
                  if (((iVar7 - (int)param_6 <= iVar1) && (iVar1 <= (int)local_48)) &&
                     (((int)param_1 + (-param_7 - param_5) <= iVar9 && (iVar9 <= (int)local_28)))) {
                    in_stack_0000006c = (byte *)(local_18[iVar9] + *local_8);
                    if ((int)in_stack_0000006c < (int)pbVar2) {
                      if (DAT_63606d24 == 0) {
                        iVar3 = FUN_635f10b0(in_stack_00000074,local_248,in_stack_00000088,
                                             (int)pbVar2 - (int)in_stack_0000006c);
                      }
                      else {
                        iVar3 = FUN_635f14d0((undefined8 *)in_stack_00000074,in_stack_0000007c,
                                             in_stack_00000088,(int)pbVar2 - (int)in_stack_0000006c)
                        ;
                      }
                      if ((int)(in_stack_0000006c + iVar3) < (int)pbVar2) {
                        local_74[0] = iVar3;
                        local_148 = (int *)((int)param_6 + iVar1);
                        local_144[0] = param_7 + iVar9;
                        pbVar2 = in_stack_0000006c + iVar3;
                      }
                    }
                  }
                  iVar1 = iVar1 + (int)in_stack_00000084;
                  local_8 = (int *)((int)local_8 + (int)local_14);
                  in_stack_00000074 = in_stack_00000074 + (int)in_stack_00000084;
                  piVar5 = in_stack_00000084;
                } while (iVar1 < (int)in_stack_00000080);
              }
              if (iVar9 < (int)in_stack_00000080) {
                iVar7 = local_44 - param_4;
                local_14 = (int *)((int)piVar5 * 4);
                local_8 = local_18 + iVar9;
                do {
                  if (((iVar7 - (int)param_6 <= iVar1) && (iVar1 <= (int)local_48)) &&
                     (((int)param_1 + (-param_7 - param_5) <= iVar9 && (iVar9 <= (int)local_28)))) {
                    in_stack_0000006c = (byte *)(local_10[iVar1] + *local_8);
                    if ((int)in_stack_0000006c < (int)pbVar2) {
                      if (DAT_63606d24 == 0) {
                        iVar3 = FUN_635f10b0(in_stack_00000074,local_248,in_stack_00000088,
                                             (int)pbVar2 - (int)in_stack_0000006c);
                      }
                      else {
                        iVar3 = FUN_635f14d0((undefined8 *)in_stack_00000074,in_stack_0000007c,
                                             in_stack_00000088,(int)pbVar2 - (int)in_stack_0000006c)
                        ;
                      }
                      if ((int)(in_stack_0000006c + iVar3) < (int)pbVar2) {
                        local_74[0] = iVar3;
                        local_148 = (int *)((int)param_6 + iVar1);
                        local_144[0] = param_7 + iVar9;
                        pbVar2 = in_stack_0000006c + iVar3;
                      }
                    }
                  }
                  iVar9 = iVar9 + (int)in_stack_00000084;
                  local_8 = (int *)((int)local_8 + (int)local_14);
                  in_stack_00000074 = in_stack_00000074 + local_2c;
                  piVar5 = in_stack_00000084;
                } while (iVar9 < (int)in_stack_00000080);
              }
              if ((int)local_c < iVar1) {
                iVar7 = local_44 - param_4;
                local_14 = (int *)((int)piVar5 * 4);
                local_8 = local_10 + iVar1;
                do {
                  if ((((iVar7 - (int)param_6 <= iVar1) && (iVar1 <= (int)local_48)) &&
                      ((int)param_1 + (-param_7 - param_5) <= iVar9)) && (iVar9 <= (int)local_28)) {
                    in_stack_0000006c = (byte *)(local_18[iVar9] + *local_8);
                    if ((int)in_stack_0000006c < (int)pbVar2) {
                      if (DAT_63606d24 == 0) {
                        iVar3 = FUN_635f10b0(in_stack_00000074,local_248,in_stack_00000088,
                                             (int)pbVar2 - (int)in_stack_0000006c);
                      }
                      else {
                        iVar3 = FUN_635f14d0((undefined8 *)in_stack_00000074,in_stack_0000007c,
                                             in_stack_00000088,(int)pbVar2 - (int)in_stack_0000006c)
                        ;
                      }
                      if ((int)(in_stack_0000006c + iVar3) < (int)pbVar2) {
                        local_74[0] = iVar3;
                        local_148 = (int *)((int)param_6 + iVar1);
                        local_144[0] = param_7 + iVar9;
                        pbVar2 = in_stack_0000006c + iVar3;
                      }
                    }
                  }
                  iVar1 = iVar1 - (int)in_stack_00000084;
                  local_8 = (int *)((int)local_8 - (int)local_14);
                  in_stack_00000074 = in_stack_00000074 + -(int)in_stack_00000084;
                  piVar5 = in_stack_00000084;
                } while ((int)local_c < iVar1);
              }
              if ((int)local_c <= iVar9) {
                iVar7 = local_44 - param_4;
                local_14 = (int *)((int)piVar5 * 4);
                local_8 = local_18 + iVar9;
                do {
                  if (((iVar7 - (int)param_6 <= iVar1) && (iVar1 <= (int)local_48)) &&
                     (((int)param_1 + (-param_7 - param_5) <= iVar9 && (iVar9 <= (int)local_28)))) {
                    in_stack_0000006c = (byte *)(local_10[iVar1] + *local_8);
                    if ((int)in_stack_0000006c < (int)pbVar2) {
                      if (DAT_63606d24 == 0) {
                        iVar3 = FUN_635f10b0(in_stack_00000074,local_248,in_stack_00000088,
                                             (int)pbVar2 - (int)in_stack_0000006c);
                      }
                      else {
                        iVar3 = FUN_635f14d0((undefined8 *)in_stack_00000074,in_stack_0000007c,
                                             in_stack_00000088,(int)pbVar2 - (int)in_stack_0000006c)
                        ;
                      }
                      if ((int)(in_stack_0000006c + iVar3) < (int)pbVar2) {
                        local_74[0] = iVar3;
                        local_148 = (int *)((int)param_6 + iVar1);
                        local_144[0] = param_7 + iVar9;
                        pbVar2 = in_stack_0000006c + iVar3;
                      }
                    }
                  }
                  iVar9 = iVar9 - (int)in_stack_00000084;
                  local_8 = (int *)((int)local_8 - (int)local_14);
                  in_stack_00000074 = in_stack_00000074 + -local_2c;
                  piVar5 = in_stack_00000084;
                } while ((int)local_c <= iVar9);
              }
              in_stack_00000080 = (int *)((int)in_stack_00000080 + (int)piVar5);
              local_24 = (int *)((int)local_24 + (int)local_40);
              local_30 = (int *)((int)local_30 + (int)local_3c);
              local_c = (int *)((int)local_c + (int)local_4c);
            } while ((int)in_stack_00000080 <= (int)local_60);
          }
        }
        else {
          if ((int)piVar5 <= (int)param_3) {
            local_40 = (int *)-(int)piVar5;
            local_8 = (int *)-(int)piVar5;
            local_24 = (int *)((int)piVar5 * local_34 * 4);
            local_30 = (int *)((int)piVar5 * local_38 * 4);
            local_3c = (int *)((int)local_24 + (int)local_18);
            local_4c = (int *)((int)local_30 + (int)local_10);
            do {
              if ((int)pbVar2 < *local_4c + *local_3c) break;
              local_20 = local_18 + iVar9;
              local_c = (int *)((int)in_stack_00000084 << 2);
              local_1c = local_10 + iVar1;
              do {
                in_stack_0000006c = (byte *)(*local_1c + *local_20);
                if ((int)in_stack_0000006c < (int)pbVar2) {
                  if (DAT_63606d24 == 0) {
                    iVar7 = FUN_635f10b0(in_stack_00000074,local_248,in_stack_00000088,
                                         (int)pbVar2 - (int)in_stack_0000006c);
                  }
                  else {
                    iVar7 = FUN_635f14d0((undefined8 *)in_stack_00000074,in_stack_0000007c,
                                         in_stack_00000088,(int)pbVar2 - (int)in_stack_0000006c);
                  }
                  if ((int)in_stack_0000006c + iVar7 < (int)pbVar2) {
                    local_74[0] = iVar7;
                    local_148 = (int *)((int)param_6 + iVar1);
                    local_144[0] = param_7 + iVar9;
                    pbVar2 = (byte *)((int)in_stack_0000006c + iVar7);
                  }
                }
                local_1c = (int *)((int)local_1c + (int)local_c * 2);
                in_stack_00000074 = in_stack_00000074 + (int)in_stack_00000084;
                iVar1 = iVar1 + (int)in_stack_00000084;
                if ((int)in_stack_00000080 <= iVar1) break;
                iVar1 = iVar1 + (int)in_stack_00000084;
                in_stack_00000074 = in_stack_00000074 + (int)in_stack_00000084;
              } while (iVar1 < (int)in_stack_00000080);
              local_1c = local_20;
              local_14 = local_10 + iVar1;
              do {
                in_stack_0000006c = (byte *)(*local_1c + *local_14);
                if ((int)in_stack_0000006c < (int)pbVar2) {
                  if (DAT_63606d24 == 0) {
                    iVar7 = FUN_635f10b0(in_stack_00000074,local_248,in_stack_00000088,
                                         (int)pbVar2 - (int)in_stack_0000006c);
                  }
                  else {
                    iVar7 = FUN_635f14d0((undefined8 *)in_stack_00000074,in_stack_0000007c,
                                         in_stack_00000088,(int)pbVar2 - (int)in_stack_0000006c);
                  }
                  if ((int)in_stack_0000006c + iVar7 < (int)pbVar2) {
                    local_74[0] = iVar7;
                    local_148 = (int *)((int)param_6 + iVar1);
                    local_144[0] = param_7 + iVar9;
                    pbVar2 = (byte *)((int)in_stack_0000006c + iVar7);
                  }
                }
                local_1c = (int *)((int)local_1c + (int)local_c * 2);
                in_stack_00000074 = in_stack_00000074 + local_2c;
                iVar9 = iVar9 + (int)in_stack_00000084;
                if ((int)in_stack_00000080 <= iVar9) break;
                iVar9 = iVar9 + (int)in_stack_00000084;
                in_stack_00000074 = in_stack_00000074 + local_2c;
              } while (iVar9 < (int)in_stack_00000080);
              local_1c = local_14;
              local_20 = local_18 + iVar9;
              do {
                in_stack_0000006c = (byte *)(*local_1c + *local_20);
                if ((int)in_stack_0000006c < (int)pbVar2) {
                  if (DAT_63606d24 == 0) {
                    iVar7 = FUN_635f10b0(in_stack_00000074,local_248,in_stack_00000088,
                                         (int)pbVar2 - (int)in_stack_0000006c);
                  }
                  else {
                    iVar7 = FUN_635f14d0((undefined8 *)in_stack_00000074,in_stack_0000007c,
                                         in_stack_00000088,(int)pbVar2 - (int)in_stack_0000006c);
                  }
                  if ((int)in_stack_0000006c + iVar7 < (int)pbVar2) {
                    local_74[0] = iVar7;
                    local_148 = (int *)((int)param_6 + iVar1);
                    local_144[0] = param_7 + iVar9;
                    pbVar2 = (byte *)((int)in_stack_0000006c + iVar7);
                  }
                }
                local_1c = (int *)((int)local_1c - (int)local_c);
                in_stack_00000074 = in_stack_00000074 + -(int)in_stack_00000084;
                iVar1 = iVar1 - (int)in_stack_00000084;
                if (iVar1 <= (int)local_8) break;
                iVar1 = iVar1 - (int)in_stack_00000084;
                in_stack_00000074 = in_stack_00000074 + -(int)in_stack_00000084;
                local_1c = (int *)((int)local_1c - (int)local_c);
              } while ((int)local_8 < iVar1);
              do {
                in_stack_0000006c = (byte *)(*local_20 + local_10[iVar1]);
                if ((int)in_stack_0000006c < (int)pbVar2) {
                  if (DAT_63606d24 == 0) {
                    iVar7 = FUN_635f10b0(in_stack_00000074,local_248,in_stack_00000088,
                                         (int)pbVar2 - (int)in_stack_0000006c);
                  }
                  else {
                    iVar7 = FUN_635f14d0((undefined8 *)in_stack_00000074,in_stack_0000007c,
                                         in_stack_00000088,(int)pbVar2 - (int)in_stack_0000006c);
                  }
                  in_stack_0000006c = in_stack_0000006c + iVar7;
                  if ((int)in_stack_0000006c < (int)pbVar2) {
                    local_74[0] = iVar7;
                    local_148 = (int *)((int)param_6 + iVar1);
                    local_144[0] = param_7 + iVar9;
                    pbVar2 = in_stack_0000006c;
                  }
                }
                local_20 = (int *)((int)local_20 - (int)local_c);
                in_stack_00000074 = in_stack_00000074 + -local_2c;
                iVar9 = iVar9 - (int)in_stack_00000084;
                if (iVar9 < (int)local_8) break;
                iVar9 = iVar9 - (int)in_stack_00000084;
                local_20 = (int *)((int)local_20 - (int)local_c);
                in_stack_00000074 = in_stack_00000074 + -local_2c;
              } while ((int)local_8 <= iVar9);
              in_stack_00000080 = (int *)((int)in_stack_00000080 + (int)in_stack_00000084);
              local_4c = (int *)((int)local_4c + (int)local_30);
              local_3c = (int *)((int)local_3c + (int)local_24);
              local_8 = (int *)((int)local_8 + (int)local_40);
            } while ((int)in_stack_00000080 <= (int)param_3);
          }
          piVar5 = in_stack_00000084;
          if ((int)in_stack_00000080 <= (int)local_60) {
            local_24 = (int *)-(int)in_stack_00000080;
            local_30 = (int *)-(int)in_stack_00000084;
            local_4c = (int *)((int)in_stack_00000084 * local_34 * 4);
            local_14 = (int *)((int)in_stack_00000084 * local_38 * 4);
            local_3c = local_18 + local_34 * (int)in_stack_00000080;
            local_40 = local_10 + local_38 * (int)in_stack_00000080;
            do {
              piVar5 = in_stack_00000084;
              if ((int)pbVar2 < *local_3c + *local_40) break;
              iVar7 = (local_44 - param_4) - (int)param_6;
              local_8 = local_10 + iVar1;
              local_c = (int *)((int)in_stack_00000084 << 2);
              do {
                if ((((iVar7 <= iVar1) && (iVar1 <= (int)local_48)) &&
                    ((int)param_1 + (-param_7 - param_5) <= iVar9)) && (iVar9 <= (int)local_28)) {
                  in_stack_0000006c = (byte *)(local_18[iVar9] + *local_8);
                  if ((int)in_stack_0000006c < (int)pbVar2) {
                    if (DAT_63606d24 == 0) {
                      iVar3 = FUN_635f10b0(in_stack_00000074,local_248,in_stack_00000088,
                                           (int)pbVar2 - (int)in_stack_0000006c);
                    }
                    else {
                      iVar3 = FUN_635f14d0((undefined8 *)in_stack_00000074,in_stack_0000007c,
                                           in_stack_00000088,(int)pbVar2 - (int)in_stack_0000006c);
                    }
                    if ((int)(in_stack_0000006c + iVar3) < (int)pbVar2) {
                      local_74[0] = iVar3;
                      local_148 = (int *)((int)param_6 + iVar1);
                      local_144[0] = param_7 + iVar9;
                      pbVar2 = in_stack_0000006c + iVar3;
                    }
                  }
                }
                local_8 = (int *)((int)local_8 + (int)local_c * 2);
                in_stack_00000074 = in_stack_00000074 + (int)in_stack_00000084;
                iVar1 = iVar1 + (int)in_stack_00000084;
                if ((int)in_stack_00000080 <= iVar1) break;
                iVar1 = iVar1 + (int)in_stack_00000084;
                in_stack_00000074 = in_stack_00000074 + (int)in_stack_00000084;
              } while (iVar1 < (int)in_stack_00000080);
              local_8 = local_18 + iVar9;
              do {
                if (((iVar7 <= iVar1) && (iVar1 <= (int)local_48)) &&
                   (((int)param_1 + (-param_7 - param_5) <= iVar9 && (iVar9 <= (int)local_28)))) {
                  in_stack_0000006c = (byte *)(local_10[iVar1] + *local_8);
                  if ((int)in_stack_0000006c < (int)pbVar2) {
                    if (DAT_63606d24 == 0) {
                      iVar3 = FUN_635f10b0(in_stack_00000074,local_248,in_stack_00000088,
                                           (int)pbVar2 - (int)in_stack_0000006c);
                    }
                    else {
                      iVar3 = FUN_635f14d0((undefined8 *)in_stack_00000074,in_stack_0000007c,
                                           in_stack_00000088,(int)pbVar2 - (int)in_stack_0000006c);
                    }
                    if ((int)(in_stack_0000006c + iVar3) < (int)pbVar2) {
                      local_74[0] = iVar3;
                      local_148 = (int *)((int)param_6 + iVar1);
                      local_144[0] = param_7 + iVar9;
                      pbVar2 = in_stack_0000006c + iVar3;
                    }
                  }
                }
                local_8 = (int *)((int)local_8 + (int)local_c * 2);
                in_stack_00000074 = in_stack_00000074 + local_2c;
                iVar9 = iVar9 + (int)in_stack_00000084;
                if ((int)in_stack_00000080 <= iVar9) break;
                iVar9 = iVar9 + (int)in_stack_00000084;
                in_stack_00000074 = in_stack_00000074 + local_2c;
              } while (iVar9 < (int)in_stack_00000080);
              local_8 = local_10 + iVar1;
              do {
                if (((iVar7 <= iVar1) && (iVar1 <= (int)local_48)) &&
                   (((int)param_1 + (-param_7 - param_5) <= iVar9 && (iVar9 <= (int)local_28)))) {
                  in_stack_0000006c = (byte *)(local_18[iVar9] + *local_8);
                  if ((int)in_stack_0000006c < (int)pbVar2) {
                    if (DAT_63606d24 == 0) {
                      iVar3 = FUN_635f10b0(in_stack_00000074,local_248,in_stack_00000088,
                                           (int)pbVar2 - (int)in_stack_0000006c);
                    }
                    else {
                      iVar3 = FUN_635f14d0((undefined8 *)in_stack_00000074,in_stack_0000007c,
                                           in_stack_00000088,(int)pbVar2 - (int)in_stack_0000006c);
                    }
                    if ((int)(in_stack_0000006c + iVar3) < (int)pbVar2) {
                      local_74[0] = iVar3;
                      local_148 = (int *)((int)param_6 + iVar1);
                      local_144[0] = param_7 + iVar9;
                      pbVar2 = in_stack_0000006c + iVar3;
                    }
                  }
                }
                local_8 = (int *)((int)local_8 + (int)local_c * -2);
                in_stack_00000074 = in_stack_00000074 + -(int)in_stack_00000084;
                iVar1 = iVar1 - (int)in_stack_00000084;
                if (iVar1 <= (int)local_24) break;
                iVar1 = iVar1 - (int)in_stack_00000084;
                in_stack_00000074 = in_stack_00000074 + -(int)in_stack_00000084;
              } while ((int)local_24 < iVar1);
              local_8 = local_18 + iVar9;
              do {
                if ((((iVar7 <= iVar1) && (iVar1 <= (int)local_48)) &&
                    ((int)param_1 + (-param_7 - param_5) <= iVar9)) && (iVar9 <= (int)local_28)) {
                  in_stack_0000006c = (byte *)(local_10[iVar1] + *local_8);
                  if ((int)in_stack_0000006c < (int)pbVar2) {
                    if (DAT_63606d24 == 0) {
                      iVar3 = FUN_635f10b0(in_stack_00000074,local_248,in_stack_00000088,
                                           (int)pbVar2 - (int)in_stack_0000006c);
                    }
                    else {
                      iVar3 = FUN_635f14d0((undefined8 *)in_stack_00000074,in_stack_0000007c,
                                           in_stack_00000088,(int)pbVar2 - (int)in_stack_0000006c);
                    }
                    if ((int)(in_stack_0000006c + iVar3) < (int)pbVar2) {
                      local_74[0] = iVar3;
                      local_148 = (int *)((int)param_6 + iVar1);
                      local_144[0] = param_7 + iVar9;
                      pbVar2 = in_stack_0000006c + iVar3;
                    }
                  }
                }
                local_8 = (int *)((int)local_8 - (int)local_c);
                in_stack_00000074 = in_stack_00000074 + -local_2c;
                iVar9 = iVar9 - (int)in_stack_00000084;
                if (iVar9 < (int)local_24) break;
                iVar9 = iVar9 - (int)in_stack_00000084;
                local_8 = (int *)((int)local_8 - (int)local_c);
                in_stack_00000074 = in_stack_00000074 + -local_2c;
              } while ((int)local_24 <= iVar9);
              in_stack_00000080 = (int *)((int)in_stack_00000080 + (int)in_stack_00000084);
              local_40 = (int *)((int)local_40 + (int)local_14);
              local_3c = (int *)((int)local_3c + (int)local_4c);
              local_24 = (int *)((int)local_24 + (int)local_30);
              piVar5 = in_stack_00000084;
            } while ((int)in_stack_00000080 <= (int)local_60);
          }
        }
        if (*(int *)(&stack0x00000044 + local_58 * 4) == 1) {
          param_6 = local_148;
          iVar1 = 0;
          iVar9 = 0;
          param_7 = local_144[0];
          local_10 = (int *)(&DAT_63605d80 + (local_a8 + (int)local_148) * 4);
          local_18 = (int *)(&DAT_63605d80 + (local_a4 + local_144[0]) * 4);
        }
        else {
          iVar9 = iVar9 - (int)piVar5;
        }
        local_58 = local_58 + 1;
      } while (local_58 < param_8);
      local_8c = pbVar2;
    }
  }
  if (local_90 != 0) {
    iVar9 = local_144[0];
    piVar5 = local_148;
    if (local_88[4] == 0) {
      if (0xf < (int)local_148) {
        piVar5 = (int *)0xf;
      }
      if (0xf < local_144[0]) {
        iVar9 = 0xf;
      }
      if ((int)piVar5 < -0xf) {
        piVar5 = (int *)0xfffffff1;
      }
      if (iVar9 < -0xf) {
        iVar9 = -0xf;
      }
    }
    in_stack_0000006c = (byte *)(param_4 + (int)piVar5);
    in_stack_00000074 = (byte *)(iVar9 + param_5);
    FUN_635f40f0(local_5c,(int)in_stack_0000006c,(int)in_stack_00000074,(int)local_50,
                 in_stack_00000070);
    param_6 = local_144;
    uVar8 = 0;
    iVar9 = 0;
    do {
      param_6 = param_6 + 8;
      iVar1 = (uVar8 & 1) + (uVar8 & 2) * 8;
      if (DAT_63606d24 == 0) {
        iVar1 = FUN_635f11f0((byte *)(in_stack_00000070 + (uVar8 & 1) * 2 + (uVar8 & 2) * 0x10),
                             local_248 + iVar1 * 8,0x10,*(int *)((int)local_88 + iVar9));
      }
      else {
        iVar1 = FUN_635f15c0((undefined8 *)
                             (in_stack_00000070 + (uVar8 & 1) * 2 + (uVar8 & 2) * 0x10),
                             in_stack_0000007c + iVar1,0x10,*(int *)((int)local_88 + iVar9));
      }
      *(int *)((int)local_88 + iVar9) = iVar1;
      *(int *)((int)local_74 + iVar9 + 4) = iVar1;
      iVar9 = iVar9 + 4;
      param_6[-1] = (int)local_148;
      *param_6 = local_144[0];
      uVar8 = uVar8 + 1;
    } while (iVar9 < 0x10);
  }
  iVar1 = ((int)(param_4 + (param_4 >> 0x1f & 0xfU)) >> 4) + 1;
  iVar9 = ((int)(param_5 + (param_5 >> 0x1f & 0xfU)) >> 4) + 1;
  if (local_90 != 0) {
    iVar7 = 5;
    piVar5 = (int *)(in_stack_00000068 + (iVar1 + iVar9 * 0x2a) * 4);
    piVar4 = local_144;
    piVar6 = local_74;
    do {
      *(int *)*piVar5 = piVar4[-1];
      *(int *)(*piVar5 + 4) = *piVar4;
      iVar7 = iVar7 + -1;
      *(int *)(*piVar5 + 0x10) = *piVar6;
      *(int *)(*piVar5 + 0x18) = piVar4[5];
      *(int *)(*piVar5 + 8) = piVar4[1];
      *(int *)(*piVar5 + 0xc) = piVar4[2];
      *(undefined4 *)(*piVar5 + 0x1c) = 0;
      piVar5 = piVar5 + 0x516;
      piVar4 = piVar4 + 8;
      piVar6 = piVar6 + 1;
    } while (iVar7 != 0);
    free(local_54);
    return;
  }
  piVar5 = (int *)(in_stack_00000068 + (iVar1 + iVar9 * 0x2a) * 4);
  *(int **)*piVar5 = local_148;
  *(int *)(*piVar5 + 4) = local_144[0];
  *(int *)(*piVar5 + 0x10) = local_74[0];
  *(undefined4 *)(*piVar5 + 0x18) = 0;
  *(undefined4 *)(*piVar5 + 0x1c) = 0;
  free(local_54);
  return;
}


