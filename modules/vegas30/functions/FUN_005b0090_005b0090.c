/* Module: vegas30.exe
   Function: FUN_005b0090
   Address: 005b0090
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005b0090(byte *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
                undefined4 param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int **ppiVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  int *local_28;
  int local_24;
  undefined *local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  iVar2 = (int)param_2;
  if (*(int **)(param_1 + 0x20) == (int *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = **(int **)(param_1 + 0x20);
  }
  local_1c = *(undefined4 *)((int)param_2 + 0xc0);
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  local_10 = 0;
  local_18 = iVar9;
  FUN_005abb50(param_4,param_5);
  local_14 = *(uint *)(iVar2 + 0xc0);
  param_2 = (int *)(*(uint *)(iVar2 + 0xb0) >> 2 & 8);
  if (local_14 == 1) {
    local_14 = 2;
  }
  else if (local_14 == 2) {
    local_14 = 3;
  }
  else if (local_14 == 4) {
    local_14 = 0x6000004;
  }
  local_14 = local_14 | 0x1000000;
  *param_3 = 0;
  if ((*param_1 & 1) == 0) {
    if (1 < iVar9) {
      param_6 = 1;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      local_28 = (int *)0x0;
      if (0 < iVar9) {
        do {
          param_2 = (int *)0x0;
          local_20 = (undefined *)0x0;
          puVar10 = (uint *)(*(int *)(*(int *)(param_1 + 0x20) + 4) * (int)local_28 +
                            *(int *)(*(int *)(param_1 + 0x20) + 8));
          if ((puVar10[2] == 0) ||
             (param_2 = (int *)FUN_005aedd0(puVar10 + 2,iVar2,*(undefined4 *)(param_1 + 0x90),
                                            iVar2 + 0x108,iVar2 + 0x2b8,iVar2 + 0x1e0,param_4,
                                            param_5,param_6), param_2 == (int *)0x0)) {
            local_20 = &DAT_00629e10;
          }
          if ((*puVar10 & 2) == 0) {
            if ((param_2 == (int *)0x0) &&
               ((puVar10[0x4e2] != 0 || (_DAT_00610f20 != (float)puVar10[0x4ec])))) {
              param_2 = (int *)FUN_005a5bd0(iVar2 + 0x108,1,iVar2 + 0x9c0);
              _SfDibFillRect_24(*param_2,param_2[0x10b],0,param_2[0x10c],local_20,3);
              param_2[0x10d] = param_2[0x10d] | 2;
            }
            if (puVar10[0x4e2] != 0) {
              local_10 = FUN_005ac880(*(undefined4 *)(param_1 + 0x90),&param_2,param_2,param_5,
                                      param_4,iVar2 + 0x108,puVar10[0x4e3],puVar10[0x4e2],0,local_1c
                                      ,iVar2 + 0x9c0);
            }
            if (_DAT_00610f20 != (float)puVar10[0x4ec]) {
              if ((*(byte *)(param_2 + 0x10d) & 1) != 0) {
                param_2 = (int *)FUN_005a5de0(iVar2 + 0x108,param_2,0,iVar2 + 0x9c0);
              }
              _SfDibFadeToColor_32
                        (*param_2,param_2[0x10b],0,param_2[0x10c],puVar10 + 0x4ed,puVar10[0x4ec],0,3
                        );
              if ((float)puVar10[0x4f0] < _DAT_00619ab0) {
                param_2[0x10d] = param_2[0x10d] | 2;
              }
            }
          }
          if (local_10 < 0) {
            local_10 = 0;
          }
          iVar9 = *(int *)(iVar2 + 0x88) << 0xe;
          iVar8 = *(int *)(iVar2 + 0x8c) * 0x4000;
          if (((puVar10[0x4e4] == 0x3f800000) && (puVar10[0x4e5] == 4)) &&
             ((param_2 == (int *)0x0 || ((*(byte *)(param_2 + 0x10d) & 2) == 0)))) {
            local_24 = 1;
          }
          else {
            local_24 = 0;
          }
          local_2c = *puVar10;
          if (((((((local_2c & 1) == 0) &&
                 (uVar7 = puVar10[0x4f2], uVar7 == 3 || (int)(uVar7 - 3) < 0)) &&
                (-1 < (int)(uVar7 + 3))) &&
               ((uVar7 = puVar10[0x4f1], uVar7 == 3 || (int)(uVar7 - 3) < 0 &&
                (-1 < (int)(uVar7 + 3))))) &&
              (((int)(puVar10[0x4f4] - 3) <= iVar8 &&
               ((iVar8 <= (int)(puVar10[0x4f4] + 3) && ((int)(puVar10[0x4f3] - 3) <= iVar9)))))) &&
             (iVar9 <= (int)(puVar10[0x4f3] + 3))) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((local_2c & 8) == 0) {
            piVar4 = local_8;
            if ((local_2c & 4) == 0) {
              if ((local_2c & 2) == 0) {
                if (((local_c != (int *)0x0) || (!bVar1)) || (piVar3 = param_2, local_24 == 0)) {
                  if (param_2 == (int *)0x0) {
                    param_2 = (int *)FUN_005a5bd0(iVar2 + 0x108,1,iVar2 + 0x9c0);
                    _SfDibFillRect_24(*param_2,param_2[0x10b],0,param_2[0x10c],&DAT_00629e10,3);
                    piVar3 = local_c;
                    piVar4 = local_8;
                    if (param_2 == (int *)0x0) goto LAB_005b0970;
                  }
                  ppiVar6 = &local_c;
                  goto LAB_005b0968;
                }
              }
              else {
                if (param_2 != (int *)0x0) {
                  if (puVar10[0x4ea] != 0) {
                    FUN_005ac880(*(undefined4 *)(param_1 + 0x90),&param_2,param_2,param_5,param_4,
                                 iVar2 + 0x108,puVar10[0x4eb],puVar10[0x4ea],0,local_1c,
                                 iVar2 + 0x9c0);
                  }
                  uVar7 = puVar10[2];
                  if (0 < (int)uVar7) {
                    do {
                      uVar7 = uVar7 - 1;
                    } while (uVar7 != 0);
                  }
                  local_3c = 0x10;
                  local_38 = 3;
                  local_30 = 0;
                  local_34 = 0x3f800000;
                  _SfDibComposite_40(*local_8,local_8[0x10b],0,local_8[0x10c],*param_2,
                                     param_2[0x10b],0,param_2[0x10c],&local_3c,0x1000003);
                  (*(code *)param_2[0x114])(param_2,param_2[0x115],param_2[0x116]);
                  param_2 = (int *)0x0;
                  local_8[0x10d] = local_8[0x10d] | 2;
                }
                if (puVar10[0x4e2] != 0) {
                  local_10 = FUN_005ac880(*(undefined4 *)(param_1 + 0x90),&local_8,local_8,param_5,
                                          param_4,iVar2 + 0x108,puVar10[0x4e3],puVar10[0x4e2],0,
                                          local_1c,iVar2 + 0x9c0);
                }
                if (local_10 < 0) {
                  local_10 = 0;
                }
                if (_DAT_00610f20 != (float)puVar10[0x4ec]) {
                  if ((*(byte *)(local_8 + 0x10d) & 1) != 0) {
                    local_8 = (int *)FUN_005a5de0(iVar2 + 0x108,local_8,0,iVar2 + 0x9c0);
                  }
                  _SfDibFadeToColor_32
                            (*local_8,local_8[0x10b],0,local_8[0x10c],puVar10 + 0x4ed,puVar10[0x4ec]
                             ,0,3);
                  if ((float)puVar10[0x4f0] < _DAT_00619ab0) {
                    local_8[0x10d] = local_8[0x10d] | 2;
                  }
                }
                FUN_005af700(iVar2,puVar10,&local_c,&DAT_00629e10,local_8,local_14);
                local_8 = (int *)0x0;
                piVar3 = local_c;
                piVar4 = local_8;
              }
            }
            else {
              piVar3 = local_c;
              if (param_2 != (int *)0x0) goto LAB_005b06eb;
            }
          }
          else {
            if (param_2 == (int *)0x0) {
              param_2 = (int *)FUN_005a5bd0(iVar2 + 0x108,1,iVar2 + 0x9c0);
              _SfDibFillRect_24(*param_2,param_2[0x10b],0,param_2[0x10c],local_20,3);
              param_2[0x10d] = param_2[0x10d] | 2;
            }
            if ((!bVar1) || (piVar3 = local_c, piVar4 = param_2, local_24 == 0)) {
LAB_005b06eb:
              ppiVar6 = &local_8;
LAB_005b0968:
              FUN_005af700(iVar2,puVar10,ppiVar6,&DAT_00629e10,param_2,local_14);
              piVar3 = local_c;
              piVar4 = local_8;
            }
          }
LAB_005b0970:
          local_8 = piVar4;
          local_c = piVar3;
          local_28 = (int *)((int)local_28 + 1);
        } while ((int)local_28 < local_18);
      }
    }
    else {
      FUN_0060ac30();
      iVar8 = 0;
      piVar4 = (int *)&stack0xffffffa8;
      local_28 = (int *)&stack0xffffffa8;
      piVar3 = (int *)&stack0xffffffa8;
      if (0 < iVar9) {
        do {
          param_2 = piVar4;
          piVar4 = (int *)(*(int *)(*(int *)(param_1 + 0x20) + 4) * iVar8 +
                           *(int *)(*(int *)(param_1 + 0x20) + 8) + 8);
          if ((*piVar4 == 0) ||
             (puVar5 = (undefined4 *)
                       FUN_005aedd0(piVar4,iVar2,*(undefined4 *)(param_1 + 0x90),iVar2 + 0x108,
                                    iVar2 + 0x2b8,iVar2 + 0x1e0,param_4,param_5,param_6),
             puVar5 == (undefined4 *)0x0)) {
            puVar5 = (undefined4 *)FUN_005a5bd0(iVar2 + 0x108,1,iVar2 + 0x9c0);
            _SfDibFillRect_24(*puVar5,puVar5[0x10b],0,puVar5[0x10c],&DAT_00629e10,3);
          }
          *param_2 = (int)puVar5;
          param_2 = param_2 + 1;
          puVar5[0x117] = iVar8;
          iVar8 = iVar8 + 1;
          iVar9 = local_18;
          piVar4 = param_2;
          piVar3 = local_28;
        } while (iVar8 < local_18);
      }
      local_28 = piVar3;
      local_c = (int *)FUN_005a5bd0(iVar2 + 0x108,1,iVar2 + 0x9c0);
      local_c[0x117] = -1;
      _SfDibFillRect_24(*local_c,local_c[0x10b],0,local_c[0x10c],&DAT_00629e10,3);
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      FUN_005b16c0(*(undefined4 *)(param_1 + 0x24),&local_38,&LAB_005afbc0,local_c,iVar2,1,0,1);
      piVar4 = local_28;
      if (0 < iVar9) {
        do {
          iVar8 = *piVar4;
          (**(code **)(iVar8 + 0x450))
                    (iVar8,*(undefined4 *)(iVar8 + 0x454),*(undefined4 *)(iVar8 + 0x458));
          iVar9 = iVar9 + -1;
          piVar4 = piVar4 + 1;
        } while (iVar9 != 0);
      }
    }
    piVar4 = local_c;
    if (*(int *)(param_1 + 0x30) != 0) {
      if (local_c == (int *)0x0) {
        local_c = (int *)FUN_005a5bd0(iVar2 + 0x108,1,iVar2 + 0x9c0);
        _SfDibFillRect_24(*local_c,local_c[0x10b],0,local_c[0x10c],&DAT_00629e10,3);
      }
      local_10 = FUN_005ac880(*(undefined4 *)(param_1 + 0x90),&local_c,local_c,param_5,param_4,
                              iVar2 + 0x108,*(undefined4 *)(param_1 + 0x34),
                              *(undefined4 *)(param_1 + 0x30),0,local_1c,iVar2 + 0x9c0);
      if (local_10 < 0) {
        local_10 = 0;
      }
      goto LAB_005b0205;
    }
  }
  else {
    piVar3 = (int *)FUN_005a5bd0(iVar2 + 0x2b8,0,iVar2 + 0x9c0);
    piVar4 = piVar3;
    for (iVar9 = 0x118; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    piVar3[0x10b] = 0;
    piVar3[0x114] = (int)&LAB_005ac450;
    *piVar3 = (int)(piVar3 + 1);
    local_10 = FUN_005ace00(*(undefined4 *)(param_1 + 0xc),piVar3,0,*(undefined4 *)(param_1 + 0x10),
                            *(undefined4 *)(param_1 + 0x14),param_2,0);
    if ((local_10 < 0) || (local_10 == 1)) {
      for (iVar9 = 0x118; piVar4 = local_c, iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar3 = 0;
        piVar3 = piVar3 + 1;
      }
    }
    else {
      piVar3[0x115] = piVar3[0x10b];
      if (piVar3[0x10c] < 0) {
        piVar3[0x10b] = piVar3[0x10b] - (*(int *)(*piVar3 + 8) + -1) * piVar3[0x10c];
      }
      piVar3[0x116] = *(int *)(param_1 + 0xc);
      piVar3[0x10d] = piVar3[0x10d] | 1;
      piVar3[0x10e] = piVar3[0x10e] + 1;
      piVar4 = piVar3;
      if (param_6 != 0) {
        piVar4 = (int *)FUN_005a5de0(iVar2 + 0x108,piVar3,0,iVar2 + 0x9c0);
      }
    }
  }
  local_c = piVar4;
  if (local_10 < 0) {
    return local_10;
  }
LAB_005b0205:
  if (local_c == (int *)0x0) {
    local_c = (int *)FUN_005a5bd0(iVar2 + 0x108,1,iVar2 + 0x9c0);
    _SfDibFillRect_24(*local_c,local_c[0x10b],0,local_c[0x10c],&DAT_00629e10,3);
  }
  if (local_c[0x10c] < 0) {
    local_c = (int *)FUN_005a5de0(iVar2 + 0x108,local_c,0,iVar2 + 0x9c0);
  }
  *param_3 = local_c;
  return local_10;
}


