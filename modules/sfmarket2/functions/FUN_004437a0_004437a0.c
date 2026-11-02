/* Module: sfmarket2.dll
   Function: FUN_004437a0
   Address: 004437a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004437a0(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  short *psVar5;
  char *pcVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  bool bVar12;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  float fStack_2c;
  int local_28;
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
  
  if (param_2[2] == 0) {
    return 0x80070057;
  }
  local_c = (uint)param_2[5] / (uint)param_2[2];
  iVar2 = setjmp3(*(undefined4 *)(param_1 + 4),0);
  if (iVar2 != 0) {
    FUN_004434e0(param_1);
    return 0x80004005;
  }
  iVar2 = *param_2 + param_2[8] * 4 + (int)param_2;
  local_14 = iVar2;
  uVar3 = FUN_0044fad0(*(int *)(param_1 + 4),*(int *)(param_1 + 8),0x10);
  local_34 = uVar3;
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (uVar3 == 0) goto LAB_0044385b;
    if (*(int *)(param_1 + 0x18) < 8) {
      FUN_004510d0(*(int *)(param_1 + 4));
    }
    iVar9 = *(int *)(param_1 + 4);
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 4) goto LAB_0044385b;
    if (*(int *)(param_1 + 0x18) < 8) {
      FUN_004510d0(*(int *)(param_1 + 4));
    }
    iVar9 = *(int *)(param_1 + 4);
  }
  FUN_004510e0(iVar9);
LAB_0044385b:
  if (*(int *)(param_1 + 0x1c) == 3) {
    if (uVar3 != 0) {
      FUN_004510d0(*(int *)(param_1 + 4));
    }
    if ((*(int *)(param_1 + 0x1c) == 3) && (*(int *)(param_1 + 0x18) == 1)) {
      FUN_00450290(*(int *)(param_1 + 4));
    }
  }
  if (*(int *)(param_1 + 0x18) == 0x10) {
    FUN_00450270(*(int *)(param_1 + 4));
  }
  if ((*(int *)(param_1 + 0x1c) == 2) || (*(int *)(param_1 + 0x1c) == 6)) {
    FUN_00450260(*(int *)(param_1 + 4));
  }
  local_10 = 0.0;
  local_18 = FUN_00450300(*(int *)(param_1 + 4));
  local_30 = *(uint *)(param_1 + 0x14);
  fStack_2c = (_DAT_0049e758 / (float)local_30) * (_DAT_0049e758 / (float)local_18);
  if (0 < local_18) {
    do {
      iVar9 = *(int *)(param_1 + 0x14);
      if (-1 < iVar9 + -1) {
        iVar11 = -local_c;
        pbVar10 = (byte *)((iVar9 + -1) * local_c + local_14);
        do {
          FUN_0044f110(*(void **)(param_1 + 4),*(void **)(param_1 + 4),pbVar10,(byte *)0x0);
          local_10 = fStack_2c + local_10;
          pbVar10 = pbVar10 + iVar11;
          iVar9 = iVar9 + -1;
          uVar3 = local_34;
          iVar2 = local_14;
        } while (iVar9 != 0);
      }
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  iVar9 = *(int *)(param_1 + 0x18);
  if ((iVar9 == 8) && (*(int *)(param_1 + 0x1c) == 2)) {
    uVar3 = FUN_0044fad0(*(int *)(param_1 + 4),*(int *)(param_1 + 8),0x10);
    if (uVar3 != 0) {
      FUN_004501e0(*(int *)(param_1 + 4),*(int *)(param_1 + 8),(undefined4 *)0x0,&local_3c,
                   (int *)&local_38);
      local_18 = 0;
      local_5 = *(char *)(local_38 + 1);
      local_7 = *(char *)(local_38 + 3);
      local_6 = *(char *)(local_38 + 5);
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          iVar9 = *(int *)(param_1 + 0x10);
          iVar11 = iVar9 + -1;
          if (-1 < iVar11) {
            pcVar6 = (char *)(iVar2 + 2 + iVar11 * 4);
            pcVar4 = (char *)(iVar9 + iVar2 + iVar11 * 2);
            do {
              if (((pcVar4[-1] == local_5) && (*pcVar4 == local_6)) && (pcVar4[1] == local_7)) {
                pcVar6[1] = '\0';
              }
              else {
                pcVar6[1] = -1;
              }
              *pcVar6 = pcVar4[1];
              pcVar6[-1] = *pcVar4;
              pcVar6[-2] = pcVar4[-1];
              pcVar6 = pcVar6 + -4;
              iVar9 = iVar9 + -1;
              pcVar4 = pcVar4 + -3;
            } while (iVar9 != 0);
          }
          local_18 = local_18 + 1;
          iVar2 = iVar2 + local_c;
        } while (local_18 < *(int *)(param_1 + 0x14));
      }
    }
  }
  else if (((iVar9 == 0x10) && ((*(uint *)(param_1 + 0x1c) & 4) == 0)) &&
          ((*(uint *)(param_1 + 0x1c) != 0 || (uVar3 != 0)))) {
    uVar3 = FUN_0044fad0(*(int *)(param_1 + 4),*(int *)(param_1 + 8),0x10);
    if (uVar3 == 0) {
      local_1c = 0;
    }
    else {
      FUN_004501e0(*(int *)(param_1 + 4),*(int *)(param_1 + 8),(undefined4 *)0x0,&local_40,&local_1c
                  );
      iVar9 = *(int *)(param_1 + 0x1c);
      if ((iVar9 == 0) || (iVar9 == 4)) {
        local_28 = CONCAT22((short)((uint)iVar9 >> 0x10),*(undefined2 *)(local_1c + 7));
        local_1c = 1;
        local_24 = local_28;
        local_20 = local_28;
      }
      else {
        local_20 = CONCAT22(local_20._2_2_,*(undefined2 *)(local_1c + 1));
        local_28 = CONCAT22(local_28._2_2_,*(undefined2 *)(local_1c + 3));
        local_24 = CONCAT22(local_24._2_2_,*(undefined2 *)(local_1c + 5));
        local_1c = 1;
      }
    }
    local_18 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        iVar9 = *(int *)(param_1 + 0x10);
        iVar11 = iVar9 + -1;
        if (-1 < iVar11) {
          psVar7 = (short *)(iVar2 + 4 + iVar11 * 8);
          psVar5 = (short *)(iVar2 + 2 + iVar11 * 6);
          do {
            if ((((local_1c == 0) || (psVar5[-1] != (short)local_20)) ||
                (*psVar5 != (short)local_24)) || (psVar5[1] != (short)local_28)) {
              psVar7[1] = -1;
            }
            else {
              psVar7[1] = 0;
            }
            *psVar7 = psVar5[1];
            psVar7[-1] = *psVar5;
            psVar7[-2] = psVar5[-1];
            psVar7 = psVar7 + -4;
            iVar9 = iVar9 + -1;
            psVar5 = psVar5 + -3;
          } while (iVar9 != 0);
        }
        local_18 = local_18 + 1;
        iVar2 = iVar2 + local_c;
      } while (local_18 < *(int *)(param_1 + 0x14));
    }
  }
  else if ((*(int *)(param_1 + 0x1c) == 3) && (iVar9 == 2)) {
    local_28 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      local_38 = (*(int *)(param_1 + 0x10) + 1U >> 1) - 1;
      uVar3 = local_38;
      do {
        for (; -1 < (int)uVar3; uVar3 = uVar3 - 1) {
          uVar8 = uVar3 & 0x80000001;
          bVar12 = uVar8 == 0;
          bVar1 = *(byte *)((int)uVar3 / 2 + iVar2);
          if ((int)uVar8 < 0) {
            bVar12 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (bVar12) {
            bVar1 = (bVar1 >> 2 & 0xc | bVar1 & 0xc3) >> 2;
          }
          else {
            bVar1 = (bVar1 & 0xc) << 2 | bVar1 & 3;
          }
          *(byte *)(uVar3 + iVar2) = bVar1;
        }
        local_28 = local_28 + 1;
        iVar2 = iVar2 + local_c;
        uVar3 = local_38;
      } while (local_28 < *(int *)(param_1 + 0x14));
    }
  }
  FUN_0044f630(*(int **)(param_1 + 4),*(uint **)(param_1 + 0xc));
  return 0;
}


