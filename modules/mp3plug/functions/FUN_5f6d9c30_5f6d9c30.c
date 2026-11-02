/* Module: mp3plug.dll
   Function: FUN_5f6d9c30
   Address: 5f6d9c30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_5f6d9c30(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  double dVar1;
  undefined4 uVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  uint local_5c;
  uint uStack_58;
  uint local_4c;
  uint uStack_48;
  int local_3c;
  int local_38;
  
  fVar3 = _DAT_5f75cb00;
  iVar5 = param_2[6];
  if (iVar5 == 0) {
    *(int *)(param_1 + 0xa0) = param_3 * 8;
  }
  if (*param_2 <= *(int *)(param_1 + 0x28)) {
    iVar8 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      local_38 = 0;
      do {
        iVar6 = local_38 + iVar5 * 8;
        *(int *)(param_1 + 0x40 + iVar6) = param_2[iVar8 + 0x13];
        uVar4 = FUN_5f6e6f20((int *)param_2[iVar8 + 0xd],param_2[iVar8 + 0xf]);
        *(uint *)(param_1 + 0x50 + iVar6) = uVar4;
        *(undefined4 *)(param_1 + 0x60 + iVar6) = *(undefined4 *)(param_2[iVar8 + 0xf] + 0x908);
        if (*(int *)(param_2[iVar8 + 0xf] + 0x90c) == 0) {
          *(undefined4 *)(param_1 + 0x70 + iVar6) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x70 + iVar6) = 1;
        }
        iVar8 = iVar8 + 1;
        local_38 = local_38 + 4;
      } while (iVar8 < *(int *)(param_1 + 0x28));
    }
    if (iVar5 == *(int *)(param_1 + 0x2c) + -1) {
      iVar8 = 0;
      iVar5 = *(int *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x80) = 0;
      if (0 < iVar5) {
        iVar6 = *(int *)(param_1 + 0x28);
        do {
          iVar9 = 0;
          if (0 < iVar6) {
            iVar5 = 0;
            do {
              iVar6 = iVar5 + iVar8 * 8;
              if (*(int *)(param_1 + 0x60 + iVar6) != 0) {
                *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 2;
              }
              if (*(int *)(param_1 + 0x70 + iVar6) != 0) {
                *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 1;
              }
              iVar9 = iVar9 + 1;
              iVar5 = iVar5 + 4;
              iVar6 = *(int *)(param_1 + 0x28);
            } while (iVar9 < iVar6);
            iVar5 = *(int *)(param_1 + 0x2c);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar5);
      }
      iVar5 = FUN_5f6e6740((int *)(param_1 + 0xbc));
      iVar5 = iVar5 - *(int *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0xbc) * 8;
      *(int *)(param_1 + 0x98) = iVar5;
      iVar8 = 0;
      *(int *)(param_1 + 0x9c) = (iVar5 - *(int *)(param_1 + 0xa0)) - *(int *)(param_1 + 0x24);
      iVar5 = *(int *)(param_1 + 0x2c);
      if (0 < iVar5) {
        iVar6 = *(int *)(param_1 + 0x28);
        do {
          local_3c = 0;
          if (0 < iVar6) {
            iVar9 = 0;
            iVar5 = 0;
            local_3c = 0;
            do {
              iVar7 = iVar9 + iVar8 * 8;
              if ((*(int *)(param_1 + 0x60 + iVar7) != 0) || (*(int *)(param_1 + 0x70 + iVar7) != 0)
                 ) {
                iVar5 = iVar5 + *(int *)(param_1 + 0x50 + iVar7);
                local_3c = local_3c + 1;
              }
              iVar9 = iVar9 + 4;
            } while (iVar9 < iVar6 * 4);
            if (0 < local_3c) {
              uVar2 = *(undefined4 *)(*(int *)(param_2[8] + 8) + 0x24);
              fVar11 = FUN_5f6e7710(uVar2,*(undefined4 *)(param_1 + 0xcc),*(int *)(param_1 + 0xd0),
                                    iVar5 / local_3c,*(int *)(*(int *)(param_2[8] + 4) + 0x24),uVar2
                                    ,*(int *)(param_1 + 0x40 + iVar8 * 8));
              fVar3 = (float)fVar11;
            }
          }
          if (0 < local_3c) {
            iVar5 = 0;
            uVar4 = local_3c * 4 & 0xfffffff8;
            if (0 < (int)uVar4) {
              do {
                *(float *)(param_1 + 0x84 + iVar5 + iVar8 * 8) = fVar3;
                iVar6 = iVar5 + 0x88;
                iVar5 = iVar5 + 8;
                *(float *)(param_1 + iVar6 + iVar8 * 8) = fVar3;
              } while (iVar5 < (int)uVar4);
            }
            for (; iVar5 < local_3c * 4; iVar5 = iVar5 + 4) {
              *(float *)(param_1 + 0x84 + iVar5 + iVar8 * 8) = fVar3;
            }
          }
          iVar6 = *(int *)(param_1 + 0x28);
          if (local_3c < iVar6) {
            iVar5 = local_3c * 4;
            do {
              iVar6 = iVar5 + iVar8 * 8;
              fVar11 = FUN_5f6e7710(iVar8,*(undefined4 *)(param_1 + 0xcc),*(int *)(param_1 + 0xd0),
                                    *(int *)(param_1 + 0x50 + iVar6),
                                    *(int *)(*(int *)(param_2[8] + 4) + 0x24),
                                    *(int *)(*(int *)(param_2[8] + 8) + 0x24),
                                    *(int *)(param_1 + 0x40 + iVar6));
              iVar5 = iVar5 + 4;
              *(float *)(param_1 + 0x84 + iVar6) = (float)fVar11;
              local_3c = local_3c + 1;
              iVar6 = *(int *)(param_1 + 0x28);
            } while (local_3c < iVar6);
          }
          iVar8 = iVar8 + 1;
          iVar5 = *(int *)(param_1 + 0x2c);
        } while (iVar8 < iVar5);
      }
      iVar8 = 0;
      if (0 < iVar5) {
        iVar6 = *(int *)(param_1 + 0x28);
        iVar9 = 0;
        do {
          local_3c = 0;
          if (0 < iVar6) {
            iVar5 = 0;
            do {
              iVar7 = iVar5 + iVar9 * 8;
              fVar3 = (float)*(int *)(param_1 + 0x98) * *(float *)(param_1 + 0x84 + iVar7) +
                      (float)*(int *)(param_1 + 0x9c);
              if (fVar3 <= _DAT_5f75cb04) {
                fVar3 = _DAT_5f75cb10;
              }
              dVar1 = (double)(fVar3 / (float)(*(int *)(param_1 + 0x2c) * iVar6));
              uStack_58 = (uint)((ulonglong)dVar1 >> 0x20);
              local_5c = SUB84(dVar1,0);
              uVar4 = uStack_58 >> 0x14 & 0x7ff;
              if (uVar4 < 0x3ff) {
                uVar4 = 0;
              }
              else {
                uVar4 = (uStack_58 << 0xb | local_5c >> 0x15 | 0x80000000) >>
                        (0x1eU - (char)uVar4 & 0x1f);
                if ((longlong)dVar1 < 0) {
                  uVar4 = -uVar4;
                }
              }
              iVar8 = iVar8 + uVar4;
              local_3c = local_3c + 1;
              *(uint *)(param_1 + 0xac + iVar7) = uVar4;
              iVar6 = *(int *)(param_1 + 0x28);
              iVar5 = iVar5 + 4;
            } while (local_3c < iVar6);
            iVar5 = *(int *)(param_1 + 0x2c);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar5);
      }
      iVar6 = *(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0xcc);
      if (iVar6 < iVar8) {
        iVar9 = 0;
        if (0 < iVar5) {
          iVar7 = *(int *)(param_1 + 0x28);
          do {
            if (0 < iVar7) {
              iVar5 = 0;
              iVar10 = 0;
              do {
                iVar7 = iVar5 + iVar9 * 8;
                dVar1 = (double)*(int *)(param_1 + 0xac + iVar7) * ((double)iVar6 / (double)iVar8);
                uStack_48 = (uint)((ulonglong)dVar1 >> 0x20);
                local_4c = SUB84(dVar1,0);
                uVar4 = uStack_48 >> 0x14 & 0x7ff;
                if (uVar4 < 0x3ff) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = (uStack_48 << 0xb | local_4c >> 0x15 | 0x80000000) >>
                          (0x1eU - (char)uVar4 & 0x1f);
                  if ((longlong)dVar1 < 0) {
                    uVar4 = -uVar4;
                  }
                }
                *(uint *)(param_1 + 0xac + iVar7) = uVar4;
                iVar7 = *(int *)(param_1 + 0x28);
                iVar10 = iVar10 + 1;
                iVar5 = iVar5 + 4;
              } while (iVar10 < iVar7);
              iVar5 = *(int *)(param_1 + 0x2c);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar5);
        }
      }
    }
    FUN_5f6d5b90((undefined4 *)(param_1 + 0xac),param_4,4);
    return 1;
  }
  return 0;
}


