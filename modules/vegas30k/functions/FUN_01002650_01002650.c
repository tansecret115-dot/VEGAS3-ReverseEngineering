/* Module: vegas30k.dll
   Function: FUN_01002650
   Address: 01002650
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_01002650(int param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  short *psVar5;
  char *pcVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  uint local_38;
  int local_34;
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
    return &DAT_80070057;
  }
  local_c = (uint)param_2[5] / (uint)param_2[2];
  iVar3 = setjmp3(*(undefined4 *)(param_1 + 4),0);
  if (iVar3 != 0) {
    FUN_01002390(param_1);
    return (undefined1 *)0x80004005;
  }
  iVar11 = *param_2 + param_2[8] * 4 + (int)param_2;
  local_14 = iVar11;
  iVar3 = FUN_01121cc0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0x10);
  local_34 = iVar3;
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (iVar3 == 0) goto LAB_0100270b;
    if (*(int *)(param_1 + 0x18) < 8) {
      FUN_011232c0(*(undefined4 *)(param_1 + 4));
    }
    uVar13 = *(undefined4 *)(param_1 + 4);
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 4) goto LAB_0100270b;
    if (*(int *)(param_1 + 0x18) < 8) {
      FUN_011232c0(*(undefined4 *)(param_1 + 4));
    }
    uVar13 = *(undefined4 *)(param_1 + 4);
  }
  FUN_011232d0(uVar13);
LAB_0100270b:
  if (*(int *)(param_1 + 0x1c) == 3) {
    if (iVar3 != 0) {
      FUN_011232c0(*(undefined4 *)(param_1 + 4));
    }
    if ((*(int *)(param_1 + 0x1c) == 3) && (*(int *)(param_1 + 0x18) == 1)) {
      FUN_01122480(*(undefined4 *)(param_1 + 4));
    }
  }
  if (*(int *)(param_1 + 0x18) == 0x10) {
    FUN_01122460(*(undefined4 *)(param_1 + 4));
  }
  if ((*(int *)(param_1 + 0x1c) == 2) || (*(int *)(param_1 + 0x1c) == 6)) {
    FUN_01122450(*(undefined4 *)(param_1 + 4));
  }
  local_10 = 0.0;
  local_18 = FUN_011224f0(*(undefined4 *)(param_1 + 4));
  local_30 = *(uint *)(param_1 + 0x14);
  fStack_2c = (_DAT_011dad68 / (float)local_30) * (_DAT_011dad68 / (float)local_18);
  if (0 < local_18) {
    do {
      uVar1 = local_c;
      iVar9 = *(int *)(param_1 + 0x14);
      if (-1 < iVar9 + -1) {
        iVar10 = (iVar9 + -1) * local_c + local_14;
        do {
          FUN_01121300(*(undefined4 *)(param_1 + 4),iVar10,0);
          local_10 = fStack_2c + local_10;
          iVar10 = iVar10 - uVar1;
          iVar9 = iVar9 + -1;
          iVar3 = local_34;
          iVar11 = local_14;
        } while (iVar9 != 0);
      }
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  iVar9 = *(int *)(param_1 + 0x18);
  if ((iVar9 == 8) && (*(int *)(param_1 + 0x1c) == 2)) {
    iVar3 = FUN_01121cc0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0x10);
    if (iVar3 != 0) {
      FUN_011223d0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0,local_3c,&local_38);
      local_18 = 0;
      local_5 = *(char *)(local_38 + 1);
      local_7 = *(char *)(local_38 + 3);
      local_6 = *(char *)(local_38 + 5);
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          iVar3 = *(int *)(param_1 + 0x10);
          iVar9 = iVar3 + -1;
          if (-1 < iVar9) {
            pcVar6 = (char *)(iVar11 + 2 + iVar9 * 4);
            pcVar4 = (char *)(iVar3 + iVar11 + iVar9 * 2);
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
              iVar3 = iVar3 + -1;
              pcVar4 = pcVar4 + -3;
            } while (iVar3 != 0);
          }
          local_18 = local_18 + 1;
          iVar11 = iVar11 + local_c;
        } while (local_18 < *(int *)(param_1 + 0x14));
      }
    }
  }
  else if (((iVar9 == 0x10) && ((*(uint *)(param_1 + 0x1c) & 4) == 0)) &&
          ((*(uint *)(param_1 + 0x1c) != 0 || (iVar3 != 0)))) {
    iVar3 = FUN_01121cc0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0x10);
    if (iVar3 == 0) {
      local_1c = 0;
    }
    else {
      FUN_011223d0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0,local_40,&local_1c);
      iVar3 = *(int *)(param_1 + 0x1c);
      if ((iVar3 == 0) || (iVar3 == 4)) {
        local_28 = CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)(local_1c + 7));
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
        iVar3 = *(int *)(param_1 + 0x10);
        iVar9 = iVar3 + -1;
        if (-1 < iVar9) {
          psVar7 = (short *)(iVar11 + 4 + iVar9 * 8);
          psVar5 = (short *)(iVar11 + 2 + iVar9 * 6);
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
            iVar3 = iVar3 + -1;
            psVar5 = psVar5 + -3;
          } while (iVar3 != 0);
        }
        local_18 = local_18 + 1;
        iVar11 = iVar11 + local_c;
      } while (local_18 < *(int *)(param_1 + 0x14));
    }
  }
  else if ((*(int *)(param_1 + 0x1c) == 3) && (iVar9 == 2)) {
    local_28 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      local_38 = (*(int *)(param_1 + 0x10) + 1U >> 1) - 1;
      uVar1 = local_38;
      do {
        for (; -1 < (int)uVar1; uVar1 = uVar1 - 1) {
          uVar8 = uVar1 & 0x80000001;
          bVar12 = uVar8 == 0;
          bVar2 = *(byte *)((int)uVar1 / 2 + iVar11);
          if ((int)uVar8 < 0) {
            bVar12 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (bVar12) {
            bVar2 = (bVar2 >> 2 & 0xc | bVar2 & 0xc3) >> 2;
          }
          else {
            bVar2 = (bVar2 & 0xc) << 2 | bVar2 & 3;
          }
          *(byte *)(uVar1 + iVar11) = bVar2;
        }
        local_28 = local_28 + 1;
        iVar11 = iVar11 + local_c;
        uVar1 = local_38;
      } while (local_28 < *(int *)(param_1 + 0x14));
    }
  }
  FUN_01121820(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
  return (undefined1 *)0x0;
}


