/* Module: vidcap30.exe
   Function: FUN_004503d0
   Address: 004503d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00450700) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004503d0(HANDLE param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  double *pdVar12;
  bool bVar13;
  undefined8 uVar14;
  longlong lVar15;
  int local_80;
  int local_78;
  undefined8 local_74;
  uint local_6c;
  int local_68;
  DWORD local_64;
  undefined8 local_60;
  uint local_58;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  uint local_30;
  int local_2c;
  double local_28 [2];
  int local_18 [5];
  
  local_50 = 0;
  uStack_4c = 0x40240000;
  if (DAT_005bb794 == 0) {
    uStack_4c = 0x40590000;
  }
  iVar1 = FUN_0042e540(param_1,&local_30);
  if (iVar1 == 0) {
    return -0x7ffb1ff8;
  }
  if ((*(byte *)(param_5 + 0x18) & 1) == 0) {
    local_58 = local_30;
    local_54 = local_2c;
    FUN_00416b00(param_5,0);
    riff64_SaveLocation(param_1,&local_40);
    iVar1 = riff64_FindChunkHeader
                      (param_1,DAT_0058bd58,DAT_0058bd5c,DAT_0058bd60,DAT_0058bd64,&local_60,
                       &local_58);
    if (iVar1 < 0) {
      return iVar1;
    }
    local_58 = local_30;
    local_54 = local_2c;
    riff64_SaveLocation(param_1,&local_48);
    FUN_004454d0(1,1,local_48,local_44,(uint)local_60,local_60._4_4_);
    local_80 = FUN_00450970(param_2,0,param_3);
    FUN_004454d0(0,0,0,0,0,0);
    riff64_RestoreLocation(param_1,local_48,local_44);
    local_60 = riff64_SkipChunk(param_1,(uint)local_60,local_60._4_4_);
    if (local_80 < 0) {
      return local_80;
    }
    if ((*(byte *)(param_5 + 0x18) & 1) == 0) {
      uVar14 = __allmul(local_58 - local_30,(local_54 - local_2c) - (uint)(local_58 < local_30),100,
                        0);
      local_38 = (double)__alldiv(uVar14,local_58,local_54);
      uVar2 = ftol();
      FUN_00416b00(param_5,uVar2);
      riff64_RestoreLocation(param_1,local_40,local_3c);
      if (-1 < local_2c) {
        iVar1 = local_2c;
        uVar10 = local_30;
        local_74 = CONCAT44(local_74._4_4_,(int)local_74);
        if (0 < local_2c) goto LAB_00450594;
        do {
          if (uVar10 < 0x18) break;
LAB_00450594:
          do {
            local_80 = riff64_ReadChunkHeader(param_1,local_18,&local_60);
            if (local_80 < 0) {
              return local_80;
            }
            local_6c = uVar10 - 0x18;
            iVar6 = 4;
            local_68 = iVar1 + -1 + (uint)(0x17 < uVar10);
            bVar13 = true;
            piVar8 = &DAT_0058bd48;
            piVar11 = local_18;
            do {
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              bVar13 = *piVar8 == *piVar11;
              piVar8 = piVar8 + 1;
              piVar11 = piVar11 + 1;
            } while (bVar13);
            if (bVar13) {
              BVar3 = ReadFile(param_1,local_28,0x10,&local_64,(LPOVERLAPPED)0x0);
              if (BVar3 == 0) {
                return -0x7ffb1ff8;
              }
              riff64_SaveLocation(param_1,&local_38);
              iVar1 = 4;
              bVar13 = true;
              piVar8 = &DAT_0058bcd8;
              pdVar12 = local_28;
              do {
                if (iVar1 == 0) break;
                iVar1 = iVar1 + -1;
                bVar13 = *piVar8 == *(int *)pdVar12;
                piVar8 = piVar8 + 1;
                pdVar12 = (double *)((int)pdVar12 + 4);
              } while (bVar13);
              if (bVar13) {
                local_80 = FUN_00450e30(param_1,param_2,param_3,(uint)local_60 - 0x10,
                                        local_60._4_4_ - (uint)((uint)local_60 < 0x10));
              }
              else {
                iVar1 = 4;
                bVar13 = true;
                piVar8 = &DAT_0058bd18;
                pdVar12 = local_28;
                do {
                  if (iVar1 == 0) break;
                  iVar1 = iVar1 + -1;
                  bVar13 = *piVar8 == *(int *)pdVar12;
                  piVar8 = piVar8 + 1;
                  pdVar12 = (double *)((int)pdVar12 + 4);
                } while (bVar13);
                if (bVar13) {
                  local_80 = FUN_00450cc0(param_1,param_2,param_3,*(undefined4 *)(param_3 + 0x1d0),
                                          (uint)local_60 - 0x10,
                                          local_60._4_4_ - (uint)((uint)local_60 < 0x10));
                }
                else {
                  iVar1 = 4;
                  bVar13 = true;
                  piVar8 = &DAT_0058bd68;
                  pdVar12 = local_28;
                  do {
                    if (iVar1 == 0) break;
                    iVar1 = iVar1 + -1;
                    bVar13 = *piVar8 == *(int *)pdVar12;
                    piVar8 = piVar8 + 1;
                    pdVar12 = (double *)((int)pdVar12 + 4);
                  } while (bVar13);
                  if (bVar13) {
                    local_80 = FUN_004523d0(param_1,param_2,param_3 + 0x1c0,(uint)local_60 - 0x10,
                                            local_60._4_4_ - (uint)((uint)local_60 < 0x10));
                  }
                }
              }
              if (local_80 < 0) {
                return local_80;
              }
              riff64_RestoreLocation(param_1,(undefined4)local_38,local_38._4_4_);
              SetFilePointer(param_1,-0x10,(PLONG)0x0,1);
            }
            lVar15 = riff64_SkipChunk(param_1,local_60);
            uVar10 = local_58;
            if (CONCAT44(local_68,local_6c) < lVar15) {
              bVar13 = local_6c < (local_6c & 7);
              uVar7 = local_6c - (local_6c & 7);
              local_6c = uVar7 + 8;
              local_68 = (local_68 - (uint)bVar13) + (uint)(0xfffffff7 < uVar7);
              if (lVar15 != CONCAT44(local_68,local_6c)) {
                return -0x7fffbffb;
              }
            }
            bVar13 = local_6c < (uint)lVar15;
            local_6c = local_6c - (uint)lVar15;
            iVar6 = (local_68 - (int)((ulonglong)lVar15 >> 0x20)) - (uint)bVar13;
            if ((*(byte *)(param_5 + 0x18) & 1) != 0) {
              return -0x7ffb1ff4;
            }
            local_68 = iVar6;
            local_60 = lVar15;
            uVar14 = __allmul(local_58 - local_6c,(local_54 - iVar6) - (uint)(local_58 < local_6c),
                              100,0);
            uVar14 = __alldiv(uVar14,uVar10,local_54);
            local_74 = uVar14;
            uVar2 = ftol();
            FUN_00416b00(param_5,uVar2);
            iVar1 = local_68;
            uVar10 = local_6c;
          } while (0 < iVar6);
        } while (-1 < iVar6);
      }
      if (-1 < local_80) {
        local_38 = (double)CONCAT44(uStack_4c,local_50);
        riff64_RestoreLocation(param_1,local_40,local_3c);
        if (DAT_005bb794 != 0) {
          iVar1 = FUN_0042e510(param_3);
          iVar6 = 0;
          local_78 = 0;
          FUN_0046ed20();
          iVar9 = 0;
          if (0 < iVar1) {
            do {
              uVar2 = FUN_00443740(param_3,iVar9);
              iVar4 = FUN_00443780(uVar2);
              iVar6 = iVar6 + iVar4;
              iVar9 = iVar9 + 1;
              local_78 = iVar6;
            } while (iVar9 < iVar1);
          }
          local_6c = 0;
          if (0 < iVar1) {
            do {
              uVar10 = local_6c;
              uVar2 = FUN_00443740(param_3,local_6c);
              local_64 = FUN_00443780(uVar2);
              iVar6 = 0;
              if (0 < (int)local_64) {
                local_28[0] = (_DAT_00587ae0 - (double)CONCAT44(uStack_4c,local_50)) /
                              (double)local_78;
                do {
                  iVar9 = FUN_004437e0(uVar2,iVar6);
                  if (iVar9 != 0) {
                    FUN_0046fdd0(*(undefined4 *)(iVar9 + 0x14),&local_74,0,0);
                    if ((int)local_74 != 0) {
                      iVar4 = FUN_004715a0(2);
                      FUN_00443b20(iVar9,-(iVar4 != 0) & 0x40,0x40);
                      iVar4 = FUN_004715a0(1);
                      FUN_00443b20(iVar9,-(iVar4 != 0) & 0x80,0x80);
                      FUN_00443b20(iVar9,0x100,0x100);
                    }
                  }
                  local_38 = local_28[0] + local_38;
                  uVar5 = ftol();
                  FUN_00416b00(param_5,uVar5);
                  iVar6 = iVar6 + 1;
                  uVar10 = local_6c;
                } while (iVar6 < (int)local_64);
              }
              local_6c = uVar10 + 1;
            } while ((int)local_6c < iVar1);
          }
        }
        FUN_00416b00(param_5,100);
        return local_80;
      }
      return local_80;
    }
  }
  return -0x7ffb1ff4;
}


