/* Module: mp3plug.dll
   Function: FUN_5f6d22e0
   Address: 5f6d22e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f6d22e0(undefined4 *param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  void *pvVar7;
  undefined3 extraout_var_05;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *_Memory;
  int local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  float local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  
  _Memory = (uint *)0x0;
  if (((((param_2 == (uint *)0x0) || (param_1 == (undefined4 *)0x0)) ||
       (uVar6 = param_2[2], (int)uVar6 < 1)) ||
      (((2 < (int)uVar6 || (uVar5 = param_2[3], (int)uVar5 < 1)) ||
       ((2 < (int)uVar5 || ((int)uVar6 < (int)uVar5)))))) ||
     ((param_2[6] != 0 && (((int)param_2[7] < 0 || (100 < (int)param_2[7])))))) {
LAB_5f6d230c:
    iVar10 = 1;
  }
  else {
    if (param_2[6] == 0) {
      uVar6 = param_2[1];
      if (7999 < (int)uVar6 / (int)uVar5) {
        uVar5 = *param_2;
        if ((int)uVar5 < 32000) {
          iVar10 = 8000;
        }
        else {
          iVar10 = 32000;
        }
        if (iVar10 <= (int)uVar6) {
          if ((int)uVar5 < 32000) {
            iVar10 = 160000;
          }
          else {
            iVar10 = 320000;
          }
          if ((int)uVar6 <= iVar10) goto LAB_5f6d23e3;
        }
      }
      goto LAB_5f6d230c;
    }
    uVar5 = *param_2;
LAB_5f6d23e3:
    iVar10 = 0;
    if ((((uVar5 != 8000) && (uVar5 != 0x2b11)) && (uVar5 != 12000)) &&
       ((((uVar5 != 16000 && (uVar5 != 0x5622)) &&
         ((uVar5 != 24000 && ((uVar5 != 32000 && (uVar5 != 0xac44)))))) && (uVar5 != 48000)))) {
      iVar10 = 1;
    }
    if (iVar10 == 0) {
      _Memory = calloc(0x90,1);
      local_20 = _Memory;
      if (_Memory == (uint *)0x0) {
        iVar10 = 1;
      }
      else {
        *_Memory = *param_2;
        _Memory[1] = param_2[1];
        _Memory[2] = param_2[2];
        _Memory[3] = param_2[3];
        _Memory[4] = param_2[4];
        _Memory[5] = param_2[5];
        _Memory[6] = param_2[6];
        _Memory[7] = param_2[7];
        _Memory[8] = param_2[8];
        _Memory[9] = param_2[9];
        _Memory[10] = param_2[10];
        _Memory[0xb] = param_2[0xb];
        _Memory[0xc] = param_2[0xc];
        _Memory[0xd] = param_2[0xd];
        _Memory[0xe] = param_2[0xe];
        if (param_2[6] != 0) {
          _Memory[1] = 0;
        }
        if ((int)*param_2 < 32000) {
          uVar6 = 1;
        }
        else {
          uVar6 = 2;
        }
        _Memory[0x18] = uVar6;
        _Memory[0x1d] = 0;
        bVar4 = FUN_5f6e49d0(_Memory + 0x14);
        iVar10 = CONCAT31(extraout_var,bVar4);
        if ((iVar10 == 0) &&
           (iVar10 = FUN_5f6e4b10((undefined4 *)_Memory[0x14],param_2[1],*param_2,param_2[9]),
           iVar10 == 0)) {
          bVar4 = FUN_5f6e1cf0(_Memory + 0x15);
          iVar10 = CONCAT31(extraout_var_00,bVar4);
          if (iVar10 == 0) {
            if (param_2[3] == 1) {
              local_9c = 3;
            }
            else {
              local_9c = 1;
            }
            local_98 = param_2[1];
            local_94 = *param_2;
            local_90 = param_2[10];
            local_8c = param_2[0xb];
            local_88 = param_2[0xc];
            local_84 = param_2[0xd];
            iVar10 = FUN_5f6e2ca0((int *)_Memory[0x15],&local_9c);
            if (iVar10 == 0) {
              uVar6 = FUN_5f6e2c80(_Memory[0x15]);
              fVar1 = _DAT_5f75c530;
              _Memory[0x17] = uVar6;
              if (fVar1 == (float)param_2[4]) {
                uVar6 = param_2[1];
                if (uVar6 == 0) {
                  fVar1 = _DAT_5f75c56c;
                  if (0x46 < (int)param_2[7]) {
                    fVar1 = _DAT_5f75c568;
                  }
                  fVar2 = (float)(int)*param_2;
                  fVar1 = fVar1 * fVar2;
                }
                else if (param_2[3] == 1) {
                  fVar2 = (float)(int)*param_2;
                  local_44 = uVar6;
                  fVar1 = (float)(int)uVar6 * _DAT_5f75c53c + _DAT_5f75c538;
                }
                else if (param_2[3] == 2) {
                  if ((int)uVar6 < 32000) {
                    fVar2 = (float)(int)*param_2;
                    local_44 = uVar6;
                    fVar1 = (float)(int)uVar6 * _DAT_5f75c554 + _DAT_5f75c550;
                  }
                  else {
                    local_44 = *param_2;
                    fVar1 = _DAT_5f75c564;
                    if (31999 < (int)local_44) {
                      fVar1 = _DAT_5f75c558;
                    }
                    fVar2 = (float)(int)local_44;
                    fVar1 = ((float)(int)((int)(_Memory[1] * _Memory[0x18] * 0x240) / (int)*_Memory
                                         - _Memory[0x17]) /
                            ((float)(int)(_Memory[0x18] * 2) * fVar1)) * _DAT_5f75c560 * fVar2;
                  }
                }
                else {
                  fVar2 = (float)(int)*param_2;
                  fVar1 = _DAT_5f75c534;
                }
                if (fVar2 * _DAT_5f75c540 < fVar1) {
                  fVar1 = fVar2 * _DAT_5f75c540;
                }
                _Memory[4] = (uint)fVar1;
              }
              local_80 = *param_2;
              local_7c = param_2[1];
              local_74 = _Memory[4];
              local_78 = param_2[3];
              local_70 = param_2[5];
              bVar4 = FUN_5f6e2eb0(_Memory + 0x12);
              if (((CONCAT31(extraout_var_01,bVar4) == 0) &&
                  (bVar4 = FUN_5f6e2f10(_Memory + 0x13,(int)&local_80),
                  CONCAT31(extraout_var_02,bVar4) == 0)) &&
                 (iVar10 = FUN_5f6e3f40((int *)_Memory[0x13],(int *)&local_80), iVar10 == 0)) {
                bVar4 = FUN_5f6e4240((int *)(_Memory + 0x16),param_2[3],param_2[1],*param_2,
                                     param_2[0xe]);
                iVar10 = CONCAT31(extraout_var_03,bVar4);
                if (iVar10 == 0) {
                  local_24 = 0;
                  puVar3 = local_20;
                  if (0 < (int)_Memory[0x18]) {
                    iVar9 = 0;
                    do {
                      bVar4 = FUN_5f6e0c40(_Memory + iVar9 + 0x10);
                      iVar10 = CONCAT31(extraout_var_04,bVar4);
                      if (iVar10 == 0) {
                        iVar10 = FUN_5f6e1ce0();
                      }
                      do {
                        iVar9 = iVar9 + 1;
                        puVar3 = _Memory;
                        if ((int)_Memory[0x18] <= iVar9) goto LAB_5f6d26b5;
                      } while (iVar10 != 0);
                    } while( true );
                  }
LAB_5f6d26b5:
                  local_20 = puVar3;
                  if (iVar10 == 0) {
                    if (param_2[3] == 1) {
                      pvVar7 = malloc(0x1200);
                      local_20[0x1c] = (uint)pvVar7;
                    }
                    bVar4 = FUN_5f6e0d80(local_20 + 0xf);
                    iVar10 = CONCAT31(extraout_var_05,bVar4);
                    if (iVar10 == 0) {
                      iVar9 = (int)(local_20[1] * local_20[0x18] * 0x240) / (int)*local_20;
                      local_24 = FUN_5f6e4ac0(local_20[0x14],iVar9);
                      iVar8 = FUN_5f6e4a90(local_20[0x14],local_24);
                      iVar10 = local_24;
                      if (iVar9 < iVar8) {
                        iVar10 = local_24 + -1;
                      }
                      local_2c = FUN_5f6e4a90(local_20[0x14],iVar10);
                      local_2c = local_2c - local_20[0x17];
                      if (local_20[6] == 0) {
                        local_30 = local_20[0x18] * 0x100;
                        local_28 = local_30 + -1;
                        iVar9 = FUN_5f6e4a90(local_20[0x14],iVar10);
                        if (0x1e00 < local_30 * 8 + -8 + iVar9) {
                          iVar9 = FUN_5f6e4a90(local_20[0x14],iVar10);
                          local_28 = (int)(((uint)(-iVar9 + 0x1e00 >> 2) >> 0x1d) + 0x1e00 + -iVar9)
                                     >> 3;
                          if (local_28 < 0) {
                            local_28 = 0;
                          }
                        }
                        local_30 = (local_2c + -1 + local_28 * 8) / local_2c;
                        local_2c = FUN_5f6e4a90(local_20[0x14],iVar10);
                        iVar9 = FUN_5f6e4a90(local_20[0x14],local_24);
                        iVar8 = (local_30 + -1) * local_2c;
                        local_20[0x1a] =
                             ((int)(iVar9 + ((uint)(iVar9 >> 2) >> 0x1d)) >> 3) * 2 + 2 +
                             ((int)(iVar8 + ((uint)(iVar8 >> 2) >> 0x1d)) >> 3);
                        local_1c = _Memory;
                        iVar9 = FUN_5f6e4b00(local_20[0x14]);
                        local_20[0x19] = local_20[0x18] * iVar9;
                        iVar10 = FUN_5f6e4a90(local_20[0x14],iVar10);
                        local_64 = (iVar10 - local_20[0x17]) + local_28 * 8;
                        local_60 = ((int)(param_2[1] * 0x240) / (int)*param_2) * local_20[0x18] -
                                   local_20[0x17];
                        if (local_64 < local_60) {
                          local_60 = local_64;
                        }
                        local_5c = local_60 / (int)local_20[0x18];
                        local_18 = _Memory;
                      }
                      else {
                        iVar10 = FUN_5f6e4a90(local_20[0x14],0xe);
                        local_20[0x19] = local_20[0x18];
                        local_20[0x1a] = (int)(((uint)(iVar10 * 2 >> 2) >> 0x1d) + iVar10 * 2) >> 3;
                        iVar10 = FUN_5f6e4a90(local_20[0x14],0xe);
                        local_60 = 0;
                        local_5c = 0;
                        local_64 = (int)(iVar10 - local_20[0x17]) / (int)local_20[0x18];
                      }
                      local_50 = param_2[7];
                      local_20[0x23] = 0;
                      local_20[0x1b] = 0x4b1;
                      local_6c = param_2[3];
                      local_58 = 0;
                      if ((int)*param_2 < 32000) {
                        if ((int)*param_2 < 16000) {
                          local_68 = 2;
                        }
                        else {
                          local_68 = 1;
                        }
                      }
                      else {
                        local_68 = 0;
                      }
                      local_1c = (uint *)local_20[0xf];
                      local_54 = ((float)local_20[4] / ((float)(int)*param_2 * _DAT_5f75c548)) *
                                 _DAT_5f75c54c;
                      local_4c = (int)param_2[1] / (int)param_2[3];
                      local_48 = param_2[8];
                      iVar10 = FUN_5f6e1b60(local_1c,&local_6c);
                      if (iVar10 == 0) goto LAB_5f6d2391;
                    }
                  }
                }
              }
              else {
                iVar10 = 1;
              }
            }
          }
        }
      }
    }
  }
  if (_Memory != (uint *)0x0) {
    iVar9 = 0;
    if (0 < (int)_Memory[0x18]) {
      do {
        FUN_5f6e0d00((void *)_Memory[iVar9 + 0x10]);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)_Memory[0x18]);
    }
    FUN_5f6e0e20((void *)_Memory[0xf]);
    FUN_5f6e1d60((void *)_Memory[0x15]);
    FUN_5f6e3080((void *)_Memory[0x13]);
    FUN_5f6e2ef0((void *)_Memory[0x12]);
    FUN_5f6e4570((void *)_Memory[0x16]);
    FUN_5f6e4a20((undefined4 *)_Memory[0x14]);
    if ((void *)_Memory[0x1c] != (void *)0x0) {
      free((void *)_Memory[0x1c]);
    }
    free(_Memory);
  }
  _Memory = (uint *)0x0;
LAB_5f6d2391:
  *param_1 = _Memory;
  return iVar10;
}


