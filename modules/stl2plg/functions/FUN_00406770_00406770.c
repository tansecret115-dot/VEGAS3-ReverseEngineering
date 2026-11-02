/* Module: stl2plg.dll
   Function: FUN_00406770
   Address: 00406770
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00406770(int *param_1,void *param_2,undefined4 param_3,void *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  short *psVar5;
  void *this;
  void *extraout_ECX;
  char *pcVar6;
  short *psVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  float fStack_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  float local_10;
  uint local_c;
  char local_7;
  char local_6;
  char local_5;
  
  if (*(int *)(*(int *)((int)param_4 + 8) + 8) == 0) {
    return -0x7ff8ffa9;
  }
  if (*param_1 != 0) {
    FUN_00405fb0((int)param_1);
  }
  iVar2 = FUN_00406270(param_1,param_4);
  if (-1 < iVar2) {
    if (*param_1 != 0) {
      local_c = *(uint *)(*(int *)((int)param_4 + 8) + 0x14) /
                *(uint *)(*(int *)((int)param_4 + 8) + 8);
      if (param_1[1] != 0) {
        iVar2 = setjmp3(param_1[1],0);
        if (iVar2 == 0) {
          uVar3 = FUN_00419af0(param_1[1],param_1[2],0x10);
          local_30 = uVar3;
          if (param_1[7] == 0) {
            if (uVar3 == 0) goto LAB_00406844;
            if (param_1[6] < 8) {
              FUN_0041ac00(param_1[1]);
            }
            iVar2 = param_1[1];
          }
          else {
            if (param_1[7] != 4) goto LAB_00406844;
            if (param_1[6] < 8) {
              FUN_0041ac00(param_1[1]);
            }
            iVar2 = param_1[1];
          }
          FUN_0041ac10(iVar2);
LAB_00406844:
          if (param_1[7] == 3) {
            if (uVar3 != 0) {
              FUN_0041ac00(param_1[1]);
            }
            if ((param_1[7] == 3) && (param_1[6] == 1)) {
              FUN_0041e5d0(param_1[1]);
            }
          }
          if (param_1[6] == 0x10) {
            FUN_0041e5b0(param_1[1]);
          }
          if ((param_1[7] == 2) || (param_1[7] == 6)) {
            FUN_0041e5a0(param_1[1]);
          }
          local_10 = 0.0;
          local_14 = FUN_0041e640(param_1[1]);
          local_2c = param_1[5];
          fStack_28 = (_DAT_00464af0 / (float)local_2c) * (_DAT_00464af0 / (float)local_14);
          if (0 < local_14) {
            do {
              iVar2 = param_1[5];
              if (-1 < iVar2 + -1) {
                iVar10 = -local_c;
                pbVar9 = (byte *)((iVar2 + -1) * local_c + (int)param_2);
                this = param_2;
                do {
                  FUN_00419130(this,(int *)param_1[1],pbVar9,(byte *)0x0);
                  local_10 = fStack_28 + local_10;
                  pbVar9 = pbVar9 + iVar10;
                  iVar2 = iVar2 + -1;
                  this = extraout_ECX;
                  uVar3 = local_30;
                } while (iVar2 != 0);
              }
              local_14 = local_14 + -1;
            } while (local_14 != 0);
            local_14 = 0;
          }
          iVar2 = param_1[6];
          if ((iVar2 == 8) && (param_1[7] == 2)) {
            uVar3 = FUN_00419af0(param_1[1],param_1[2],0x10);
            if (uVar3 != 0) {
              FUN_0041a200(param_1[1],param_1[2],(undefined4 *)0x0,&local_38,(int *)&local_34);
              local_14 = 0;
              local_5 = *(char *)(local_34 + 1);
              local_7 = *(char *)(local_34 + 3);
              local_6 = *(char *)(local_34 + 5);
              if (0 < param_1[5]) {
                do {
                  iVar2 = param_1[4];
                  iVar10 = iVar2 + -1;
                  if (-1 < iVar10) {
                    pcVar6 = (char *)((int)param_2 + iVar10 * 4 + 2);
                    pcVar4 = (char *)((int)param_2 + iVar2 + iVar10 * 2);
                    do {
                      if (((pcVar4[-1] == local_5) && (*pcVar4 == local_6)) &&
                         (pcVar4[1] == local_7)) {
                        pcVar6[1] = '\0';
                      }
                      else {
                        pcVar6[1] = -1;
                      }
                      *pcVar6 = pcVar4[1];
                      pcVar6[-1] = *pcVar4;
                      pcVar6[-2] = pcVar4[-1];
                      pcVar6 = pcVar6 + -4;
                      iVar2 = iVar2 + -1;
                      pcVar4 = pcVar4 + -3;
                    } while (iVar2 != 0);
                  }
                  local_14 = local_14 + 1;
                  param_2 = (void *)((int)param_2 + local_c);
                } while (local_14 < param_1[5]);
                FUN_00419650((int *)param_1[1],(uint *)param_1[3]);
                return 0;
              }
            }
          }
          else if (((iVar2 == 0x10) && ((param_1[7] & 4U) == 0)) &&
                  ((param_1[7] != 0 || (uVar3 != 0)))) {
            uVar3 = FUN_00419af0(param_1[1],param_1[2],0x10);
            if (uVar3 == 0) {
              local_18 = 0;
            }
            else {
              FUN_0041a200(param_1[1],param_1[2],(undefined4 *)0x0,&local_3c,&local_18);
              iVar2 = param_1[7];
              if ((iVar2 == 0) || (iVar2 == 4)) {
                local_24 = CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(local_18 + 7));
                local_18 = 1;
                local_20 = local_24;
                local_1c = local_24;
              }
              else {
                local_1c = CONCAT22(local_1c._2_2_,*(undefined2 *)(local_18 + 1));
                local_24 = CONCAT22(local_24._2_2_,*(undefined2 *)(local_18 + 3));
                local_20 = CONCAT22(local_20._2_2_,*(undefined2 *)(local_18 + 5));
                local_18 = 1;
              }
            }
            local_14 = 0;
            if (0 < param_1[5]) {
              do {
                iVar2 = param_1[4];
                iVar10 = iVar2 + -1;
                if (-1 < iVar10) {
                  psVar7 = (short *)((int)param_2 + iVar10 * 8 + 4);
                  psVar5 = (short *)((int)param_2 + iVar10 * 6 + 2);
                  do {
                    if ((((local_18 == 0) || (psVar5[-1] != (short)local_1c)) ||
                        (*psVar5 != (short)local_20)) || (psVar5[1] != (short)local_24)) {
                      psVar7[1] = -1;
                    }
                    else {
                      psVar7[1] = 0;
                    }
                    *psVar7 = psVar5[1];
                    psVar7[-1] = *psVar5;
                    psVar7[-2] = psVar5[-1];
                    psVar7 = psVar7 + -4;
                    iVar2 = iVar2 + -1;
                    psVar5 = psVar5 + -3;
                  } while (iVar2 != 0);
                }
                local_14 = local_14 + 1;
                param_2 = (void *)((int)param_2 + local_c);
              } while (local_14 < param_1[5]);
              FUN_00419650((int *)param_1[1],(uint *)param_1[3]);
              return 0;
            }
          }
          else if ((param_1[7] == 3) && (iVar2 == 2)) {
            local_24 = 0;
            if (0 < param_1[5]) {
              local_34 = (param_1[4] + 1U >> 1) - 1;
              uVar3 = local_34;
              do {
                for (; -1 < (int)uVar3; uVar3 = uVar3 - 1) {
                  uVar8 = uVar3 & 0x80000001;
                  bVar11 = uVar8 == 0;
                  bVar1 = *(byte *)((int)uVar3 / 2 + (int)param_2);
                  if ((int)uVar8 < 0) {
                    bVar11 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  if (bVar11) {
                    bVar1 = (bVar1 >> 2 & 0xc | bVar1 & 0xc3) >> 2;
                  }
                  else {
                    bVar1 = (bVar1 & 0xc) << 2 | bVar1 & 3;
                  }
                  *(byte *)((int)param_2 + uVar3) = bVar1;
                }
                local_24 = local_24 + 1;
                param_2 = (void *)((int)param_2 + local_c);
                uVar3 = local_34;
              } while (local_24 < param_1[5]);
            }
          }
          FUN_00419650((int *)param_1[1],(uint *)param_1[3]);
          return 0;
        }
        FUN_00405fb0((int)param_1);
      }
    }
    iVar2 = -0x7fffbffb;
  }
  return iVar2;
}


