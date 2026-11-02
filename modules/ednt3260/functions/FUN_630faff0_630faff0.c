/* Module: ednt3260.dll
   Function: FUN_630faff0
   Address: 630faff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630faff0(void *this,short *param_1)

{
  ushort *puVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar6;
  short sVar7;
  int iVar8;
  short *psVar9;
  short local_1c [2];
  undefined4 local_18;
  short *local_14;
  short *local_10;
  int local_c;
  short *local_8;
  
  psVar5 = param_1;
  local_1c[0] = 0;
  local_1c[1] = 0;
  FUN_630fba10(this,param_1);
  iVar4 = *(int *)((int)this + 0x62fa);
  sVar2 = *(short *)((int)this + 0x6300);
  psVar9 = (short *)((int)this + (int)param_1 * 10);
  local_8 = psVar9;
  FUN_630f7350(this,psVar9 + 0x31a4,*(short *)((int)this + 0x6344),1);
  FUN_630f7350(this,psVar9 + 0x31c2,*(short *)((int)this + 0x6344),1);
  psVar9 = (short *)((int)this + (int)param_1 * 2 + 0x63c0);
  FUN_630f7350(this,psVar9,1,1);
  if (*psVar9 != 0) {
    FUN_630f72a0(this,(ushort *)((int)this + (int)param_1 * 2 + 0x63cc),1,8);
  }
  if ((*(short *)((int)this + 0x630a) == 0) &&
     (psVar9 = (short *)((int)this + (int)param_1 * 2 + 0x63d8), FUN_630f7350(this,psVar9,1,1),
     *psVar9 != 0)) {
    FUN_630f72a0(this,(ushort *)((int)this + (int)param_1 * 2 + 0x63e4),1,8);
  }
  psVar9 = (short *)((int)this + (int)param_1 * 2 + 0x63f0);
  FUN_630f7350(this,psVar9,1,1);
  if ((*psVar9 != 0) &&
     (psVar9 = (short *)((int)this + (int)param_1 * 2 + 0x63fc), FUN_630f7350(this,psVar9,1,1),
     *psVar9 != 0)) {
    FUN_630f7350(this,local_8 + 0x3204,*(short *)((int)this + 0x6344),1);
    if (*(short *)((int)this + 0x630a) == 2) {
      FUN_630f7350(this,(short *)((int)this + (int)param_1 * 2 + 0x6e40),1,1);
    }
    FUN_630f7350(this,(short *)((int)this + (int)param_1 * 2 + 0x6450),1,4);
    psVar9 = (short *)((int)this + (int)param_1 * 2 + 0x645c);
    *psVar9 = *psVar9 + -3;
    psVar9 = (short *)((int)this + (int)param_1 * 2 + 0x645c);
    FUN_630f7350(this,psVar9,1,4);
    *psVar9 = *psVar9 + 3;
    sVar3 = *(short *)((int)this + (int)param_1 * 2 + 0x6450);
    sVar7 = (*psVar9 - sVar3) + -1;
    if (0 < sVar7) {
      FUN_630f7350(this,(short *)((int)this + ((int)sVar3 + (int)param_1 * 0x12) * 2 + 0x6482),sVar7
                   ,1);
    }
  }
  if (*(short *)((int)this + (int)param_1 * 2 + 0x63fc) != 0) {
    param_1 = (short *)0x0;
    if (0 < *(short *)((int)this + 0x6344)) {
      local_c = (int)psVar5 * 0x5a + 0x32e8;
      local_14 = local_8 + 0x3204;
      do {
        if (*local_14 != 0) {
          local_10 = (short *)((int)this + ((int)param_1 + (int)psVar5 * 5) * 2 + 0x6558);
          FUN_630f7350(this,local_10,1,1);
          if (*local_10 != 0) {
            FUN_630f7350(this,(short *)((int)this + ((int)psVar5 * 5 + (int)param_1) * 2 + 0x6594),1
                         ,2);
            iVar8 = (int)*(short *)((int)this + (int)psVar5 * 2 + 0x6450);
            if (iVar8 < *(short *)((int)this + (int)psVar5 * 2 + 0x645c)) {
              local_10 = (short *)((int)this + (iVar8 + (int)psVar5 * 0x12) * 2 + 0x6480);
              do {
                if (*local_10 == 0) {
                  FUN_630f7350(this,(short *)((int)this + (local_c + iVar8) * 2 + 0x438),1,4);
                  FUN_630f72a0(this,(ushort *)((int)this + (local_c + iVar8) * 2),1,4);
                }
                iVar8 = iVar8 + 1;
                local_10 = local_10 + 1;
              } while (iVar8 < *(short *)((int)this + (int)psVar5 * 2 + 0x645c));
            }
          }
        }
        local_c = local_c + 0x12;
        param_1 = (short *)((int)param_1 + 1);
        local_14 = local_14 + 1;
      } while ((int)param_1 < (int)*(short *)((int)this + 0x6344));
    }
    if ((*(short *)((int)this + (int)psVar5 * 2 + 0x6e40) != 0) &&
       (((local_8[0x32ac] != 0 || (local_8[0x32ad] != 0)) &&
        (iVar8 = (int)*(short *)((int)this + (int)psVar5 * 2 + 0x6450),
        iVar8 < *(short *)((int)this + (int)psVar5 * 2 + 0x645c))))) {
      local_14 = (short *)((int)psVar5 * 0x12);
      param_1 = (short *)((int)this + ((int)local_14 + iVar8) * 2 + 0x6480);
      do {
        if (*param_1 == 0) {
          FUN_630f7350(this,(short *)((int)this + ((int)local_14 + iVar8) * 2 + 0x6e4c),1,1);
        }
        iVar8 = iVar8 + 1;
        param_1 = param_1 + 1;
      } while (iVar8 < *(short *)((int)this + (int)psVar5 * 2 + 0x645c));
    }
  }
  if ((*(short *)((int)this + 0x630a) == 2) &&
     (psVar9 = (short *)((int)this + (int)psVar5 * 2 + 0x1b8f6), FUN_630f7350(this,psVar9,1,1),
     *psVar9 != 0)) {
    FUN_630f7350(this,(short *)((int)this + (int)psVar5 * 8 + 0x1b902),
                 *(short *)((int)this + (int)psVar5 * 2 + 0x1b8ea),1);
  }
  if (*(short *)((int)this + (int)psVar5 * 2 + 0x63fc) != 0) {
    FUN_630f7350(this,(short *)((int)this + (int)psVar5 * 2 + 0xafdc),1,2);
  }
  iVar8 = 0;
  if (0 < *(short *)((int)this + 0x6344)) {
    param_1 = local_8 + 0x57f4;
    do {
      FUN_630f7350(this,param_1,1,2);
      iVar8 = iVar8 + 1;
      param_1 = param_1 + 1;
    } while (iVar8 < *(short *)((int)this + 0x6344));
  }
  if (*(short *)((int)this + 0x6312) != 0) {
    FUN_630f7350(this,(short *)((int)this + (int)psVar5 * 2 + 0xb024),1,1);
  }
  iVar8 = 0;
  if (0 < *(short *)((int)this + 0x6344)) {
    param_1 = local_8 + 0x57f4;
    do {
      if ((*param_1 != 0) && (*(short *)((int)this + ((int)psVar5 * 5 + iVar8) * 2 + 0x6408) == 0))
      {
        FUN_630f7350(this,(short *)((int)this + ((int)psVar5 * 5 + iVar8) * 2 + 0xb030),1,6);
      }
      iVar8 = iVar8 + 1;
      param_1 = param_1 + 1;
    } while (iVar8 < *(short *)((int)this + 0x6344));
  }
  if ((*(short *)((int)this + (int)psVar5 * 2 + 0x63fc) != 0) &&
     (*(short *)((int)this + (int)psVar5 * 2 + 0xafdc) != 0)) {
    FUN_630f7350(this,(short *)((int)this + (int)psVar5 * 2 + 0xb0b4),1,4);
    FUN_630f7350(this,(short *)(*(int *)((int)this + (int)psVar5 * 4 + 0xb0c0) +
                               *(short *)((int)this + (int)psVar5 * 2 + 0x6468) * 2),
                 *(short *)((int)this + (int)psVar5 * 2 + 0xec78),7);
  }
  iVar8 = 0;
  if (0 < *(short *)((int)this + 0x6344)) {
    local_14 = local_8 + 0x57f4;
    param_1 = (short *)((int)this + (int)psVar5 * 0x9e2 + 0xb0da);
    do {
      if (*local_14 != 0) {
        FUN_630f7350(this,param_1 + -1,1,4);
        FUN_630f7350(this,param_1,*(short *)((int)this + (iVar8 + (int)psVar5 * 5) * 2 + 0xec84),7);
        FUN_630f7350(this,(short *)((int)this + (iVar8 + (int)(psVar5 + 0xbd7) * 5) * 2),1,2);
      }
      local_14 = local_14 + 1;
      iVar8 = iVar8 + 1;
      param_1 = param_1 + 0xfd;
    } while (iVar8 < *(short *)((int)this + 0x6344));
  }
  if ((*(short *)((int)this + 0x6312) != 0) &&
     (*(short *)((int)this + (int)psVar5 * 2 + 0xb024) != 0)) {
    FUN_630f7350(this,(short *)((int)this + (int)(psVar5 + 0x86f) * 0xe),1,4);
    FUN_630f7350(this,(short *)((int)this + (int)psVar5 * 0xe + 0xec26),
                 *(short *)((int)this + (int)psVar5 * 2 + 0xecc0),7);
  }
  psVar9 = (short *)((int)this + (int)psVar5 * 2 + 0xed08);
  FUN_630f7350(this,psVar9,1,1);
  if (*psVar9 != 0) {
    FUN_630f7350(this,(short *)((int)this + (int)psVar5 * 2 + 0xed14),1,2);
    FUN_630f7350(this,(short *)((int)this + (int)psVar5 * 2 + 0xed20),1,2);
    FUN_630f7350(this,(short *)((int)this + (int)psVar5 * 2 + 0xed2c),1,2);
    FUN_630f7350(this,(short *)((int)this + (int)psVar5 * 2 + 0xed38),1,2);
    FUN_630f7350(this,(short *)((int)this + (int)psVar5 * 2 + 0xed44),1,3);
  }
  psVar9 = (short *)((int)this + (int)psVar5 * 2 + 0xed50);
  FUN_630f7350(this,psVar9,1,1);
  if (*psVar9 != 0) {
    FUN_630f7350(this,(short *)((int)this + (int)psVar5 * 2 + 0xed5c),1,6);
    if (*(short *)((int)this + (int)psVar5 * 2 + 0x63fc) != 0) {
      FUN_630f7350(this,(short *)((int)this + (int)psVar5 * 2 + 0xed68),1,4);
      FUN_630f7350(this,(short *)((int)this + (int)psVar5 * 2 + 0xedbc),1,3);
    }
    param_1 = (short *)0x0;
    if (0 < *(short *)((int)this + 0x6344)) {
      psVar9 = local_8 + 0x76e4;
      do {
        FUN_630f7350(this,psVar9 + -0x2a,1,4);
        FUN_630f7350(this,psVar9,1,3);
        psVar9 = psVar9 + 1;
        param_1 = (short *)((int)param_1 + 1);
      } while ((int)param_1 < (int)*(short *)((int)this + 0x6344));
    }
    if (*(short *)((int)this + 0x6312) != 0) {
      FUN_630f7350(this,(short *)((int)this + (int)psVar5 * 2 + 0xedb0),1,4);
      FUN_630f7350(this,(short *)((int)this + (int)psVar5 * 2 + 0xee04),1,3);
    }
  }
  if ((*(short *)((int)this + (int)psVar5 * 2 + 0x63fc) != 0) &&
     (psVar9 = (short *)((int)this + (int)psVar5 * 2 + 0xee10), FUN_630f7350(this,psVar9,1,1),
     *psVar9 != 0)) {
    psVar9 = (short *)((int)this + (int)psVar5 * 2 + 0xee1c);
    *psVar9 = (short)(*(short *)((int)this + (int)psVar5 * 2 + 0xee1c) + -0x300) >> 8;
    FUN_630f7350(this,psVar9,1,3);
    psVar9 = (short *)((int)this + (int)psVar5 * 2 + 0xee28);
    *psVar9 = (short)(*(short *)((int)this + (int)psVar5 * 2 + 0xee28) + -0x300) >> 8;
    FUN_630f7350(this,psVar9,1,3);
  }
  psVar9 = (short *)((int)this + (int)psVar5 * 2 + 0xeeac);
  FUN_630f7350(this,psVar9,1,1);
  if (*psVar9 != 0) {
    uVar6 = extraout_var;
    if (*(short *)((int)this + (int)psVar5 * 2 + 0x63fc) != 0) {
      FUN_630f7350(this,(short *)((int)this + (int)psVar5 * 2 + 0xeeb8),1,2);
      uVar6 = extraout_var_00;
    }
    iVar8 = 0;
    if (0 < *(short *)((int)this + 0x6344)) {
      param_1 = local_8 + 0x7762;
      do {
        FUN_630f7350(this,param_1,1,2);
        iVar8 = iVar8 + 1;
        param_1 = param_1 + 1;
        uVar6 = extraout_var_01;
      } while (iVar8 < *(short *)((int)this + 0x6344));
    }
    if ((*(short *)((int)this + (int)psVar5 * 2 + 0x63fc) != 0) &&
       (*(short *)((int)this + (int)psVar5 * 2 + 0xeeb8) == 1)) {
      local_18 = CONCAT22(uVar6,*(short *)((int)this + (int)psVar5 * 2 + 0xef00) + -1);
      FUN_630f7350(this,(short *)&local_18,1,3);
      local_c = 0;
      if (0 < *(short *)((int)this + (int)psVar5 * 2 + 0xef00)) {
        psVar9 = (short *)((int)psVar5 * 0x10 + 0xef6c + (int)this);
        do {
          FUN_630f7350(this,psVar9 + -0x30,1,5);
          FUN_630f7350(this,psVar9,1,4);
          FUN_630f7350(this,psVar9 + 0x30,1,3);
          psVar9 = psVar9 + 1;
          local_c = local_c + 1;
        } while (local_c < *(short *)((int)this + (int)psVar5 * 2 + 0xef00));
      }
    }
    param_1 = (short *)0x0;
    if (0 < *(short *)((int)this + 0x6344)) {
      local_8 = local_8 + 0x7762;
      local_14 = (short *)((int)psVar5 * 0x50 + 0xf248 + (int)this);
      do {
        if (*local_8 == 1) {
          local_18 = CONCAT22((short)((uint)param_1 >> 0x10),
                              *(short *)((int)this +
                                        ((int)psVar5 + (int)(param_1 + (int)psVar5 * 2)) * 2 +
                                        0xf02c) + -1);
          FUN_630f7350(this,(short *)&local_18,1,3);
          local_c = 0;
          psVar9 = local_14;
          if (0 < *(short *)((int)this +
                            ((int)psVar5 + (int)(param_1 + (int)psVar5 * 2)) * 2 + 0xf02c)) {
            do {
              FUN_630f7350(this,psVar9 + -0xf0,1,5);
              FUN_630f7350(this,psVar9,1,4);
              FUN_630f7350(this,psVar9 + 0xf0,1,3);
              local_c = local_c + 1;
              psVar9 = psVar9 + 1;
            } while (local_c < local_8[0xb4]);
          }
        }
        local_8 = local_8 + 1;
        param_1 = (short *)((int)param_1 + 1);
        local_14 = local_14 + 8;
      } while ((int)param_1 < (int)*(short *)((int)this + 0x6344));
    }
  }
  psVar9 = (short *)((int)this + (int)psVar5 * 2 + 0x3fbe4);
  FUN_630f7350(this,psVar9,1,1);
  if (*psVar9 != 0) {
    psVar9 = (short *)((int)this + (int)psVar5 * 2 + 0x3fbf0);
    FUN_630f7350(this,psVar9,1,9);
    if (0 < *psVar9) {
      FUN_630f7350(this,local_1c,1,8);
    }
    local_c = 1;
    if (1 < *psVar9) {
      puVar1 = (ushort *)((int)this + 0x3fc02);
      do {
        *puVar1 = *puVar1 * -0x448b;
        FUN_630f72a0(this,puVar1,1,8);
        local_c = local_c + 1;
      } while (local_c < *(short *)((int)this + (int)psVar5 * 2 + 0x3fbf0));
    }
  }
  if ((int)(short)(((short)((*(int *)((int)this + 0x62fa) - iVar4 >> 1) << 4) +
                   *(short *)((int)this + 0x6300)) - sVar2) !=
      (int)*(short *)((int)this + (int)psVar5 * 2 + 0x3fbba) +
      (int)*(short *)((int)this + (int)psVar5 * 2 + 0x3fbc6)) {
    FUN_630f92d0();
  }
  return;
}


