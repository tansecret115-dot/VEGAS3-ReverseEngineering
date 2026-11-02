/* Module: ednt3260.dll
   Function: FUN_630f9bd0
   Address: 630f9bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f9bd0(int param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  short sVar8;
  short *psVar9;
  undefined2 *puVar10;
  int *piVar11;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  short *local_14;
  int local_10;
  int local_c;
  short *local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = (short *)(param_1 + 0x6408);
  local_1c = param_1 + 0xec24;
  local_20 = param_1 + 0xb0d8;
  local_18 = (int *)(param_1 + 0x3fae2);
  piVar11 = (int *)(param_1 + 0x2da0a);
  psVar4 = (short *)(param_1 + 0x63fc);
  do {
    if (*(short *)(param_1 + 0x630a) == 0) {
      *psVar4 = 0;
    }
    else {
      *psVar4 = *(short *)(param_1 + 0x24);
    }
    if (*psVar4 != 0) {
      iVar7 = 0;
      psVar3 = local_8;
      if (0 < *(short *)(param_1 + 0x6344)) {
        do {
          *psVar3 = 0;
          if (psVar3[-0x42] != 0) {
            *psVar3 = 1;
          }
          if (((*(short *)(param_1 + 0x6308) == 7) && (1 < *(short *)(param_1 + 0x630a))) &&
             ((sVar1 = *(short *)(&DAT_630ff8c8 + (iVar7 + *(short *)(param_1 + 0x630a) * 6) * 2),
              sVar1 == 3 || ((sVar1 == 4 || (sVar1 == 1)))))) {
            *psVar3 = 0;
          }
          iVar7 = iVar7 + 1;
          psVar3 = psVar3 + 1;
        } while (iVar7 < *(short *)(param_1 + 0x6344));
      }
      iVar7 = (int)*(short *)(param_1 + 0x6344);
      sVar8 = 0;
      psVar3 = local_8;
      sVar1 = 0;
      if (0 < iVar7) {
        do {
          sVar8 = sVar1;
          if (*psVar3 != 0) {
            sVar8 = sVar8 + 1;
          }
          iVar7 = iVar7 + -1;
          psVar3 = psVar3 + 1;
          sVar1 = sVar8;
        } while (iVar7 != 0);
      }
      if (sVar8 < 2) {
        *psVar4 = 0;
      }
      if (*psVar4 != 0) {
        psVar3 = psVar4 + 0x24;
        sVar1 = 0;
        local_14 = local_8;
        *psVar3 = -1;
        do {
          if (*local_14 != 0) {
            *psVar3 = sVar1;
          }
          sVar1 = sVar1 + 1;
          local_14 = local_14 + 1;
        } while (*psVar3 < 0);
        iVar2 = *psVar3 + local_c;
        iVar7 = iVar2 * 0x800 + param_1;
        piVar11[-0x4836] = iVar7 + 0x1e8ba;
        *piVar11 = iVar7 + 0x30992;
        iVar7 = param_1 + iVar2 * 0x1fa;
        *(int *)((int)piVar11 + -0x2294a) = iVar7 + 0xb0d8;
        *(int *)((int)piVar11 + -0x1d53a) = param_1 + (iVar2 + 0x84) * 0x1fa;
        piVar11[-0x486e] = iVar7 + 0x17cea;
        piVar11[-0x4874] = iVar7 + 0x1419e;
      }
    }
    iVar7 = 5;
    do {
      *local_18 = local_20;
      local_20 = local_20 + 0x1fa;
      local_18 = local_18 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    piVar11[0x485a] = local_1c;
    if (*psVar4 == 0) {
      iVar7 = 0;
      psVar3 = local_8;
      if (0 < *(short *)(param_1 + 0x6344)) {
        do {
          *psVar3 = 0;
          iVar7 = iVar7 + 1;
          psVar3 = psVar3 + 1;
        } while (iVar7 < *(short *)(param_1 + 0x6344));
      }
      psVar4[0x24] = 0;
    }
    else {
      piVar11[0x4854] = *(int *)(param_1 + 0x3fae2 + (local_c + psVar4[0x24]) * 4);
      psVar4[0x522] = 0;
      psVar4[0x2a] = *(short *)(param_1 + 0x26);
      psVar4[0x30] = *(short *)(param_1 + 0x28);
      psVar4[0x36] = psVar4[0x2a] * 0xc + 0x25;
      psVar4[0x3c] = psVar4[0x30] * 0xc + 0x25;
      *(undefined2 *)(param_1 + 0x6480 + (psVar4[0x2a] + local_10) * 2) = 0;
      iVar7 = psVar4[0x2a] + 1;
      if (iVar7 < psVar4[0x30]) {
        puVar6 = (undefined2 *)(&DAT_63101a70 + iVar7 * 2);
        puVar10 = (undefined2 *)(param_1 + 0x6480 + (local_10 + iVar7) * 2);
        do {
          iVar7 = iVar7 + 1;
          *puVar10 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar7 < psVar4[0x30]);
      }
    }
    iVar7 = 0;
    if (0 < *(short *)(param_1 + 0x6344)) {
      local_14 = local_8;
      do {
        if (*local_14 == 0) {
          sVar1 = *(short *)(param_1 + 0x28) + -3;
          *(short *)(param_1 + -0x3c + (local_c + 0x5836 + iVar7) * 2) = sVar1 * 4;
          *(short *)(param_1 + (local_c + 0x5836 + iVar7) * 2) = sVar1 * 0xc + 0x49;
        }
        else {
          *(short *)(param_1 + 0xb06c + (local_c + iVar7) * 2) = psVar4[0x36];
        }
        iVar7 = iVar7 + 1;
        local_14 = local_14 + 1;
      } while (iVar7 < *(short *)(param_1 + 0x6344));
    }
    if (*(short *)(param_1 + 0x6312) != 0) {
      psVar4[0x2656] = 7;
    }
    local_1c = local_1c + 0xe;
    local_10 = local_10 + 0x12;
    psVar4 = psVar4 + 1;
    piVar11 = piVar11 + 1;
    local_8 = local_8 + 5;
    local_c = local_c + 5;
  } while (local_10 < 0x6c);
  psVar4 = (short *)(param_1 + 0x6412);
  *(undefined2 *)(param_1 + 0x63f0) = 1;
  iVar7 = 0x12;
  psVar3 = (short *)(param_1 + 0x63fe);
  do {
    psVar3[-6] = 0;
    if (*psVar3 != psVar3[-1]) {
      psVar3[-6] = 1;
    }
    if (*psVar3 != 0) {
      iVar2 = 0;
      psVar9 = psVar4;
      if (0 < *(short *)(param_1 + 0x6344)) {
        do {
          if (*psVar9 != psVar9[-5]) {
            psVar3[-6] = 1;
          }
          iVar2 = iVar2 + 1;
          psVar9 = psVar9 + 1;
        } while (iVar2 < *(short *)(param_1 + 0x6344));
      }
      if (psVar3[0x522] != psVar3[0x521]) {
        psVar3[-6] = 1;
      }
      if (psVar3[0x2a] != psVar3[0x29]) {
        psVar3[-6] = 1;
      }
      if (psVar3[0x30] != psVar3[0x2f]) {
        psVar3[-6] = 1;
      }
      iVar2 = (int)psVar3[0x2a];
      if (iVar2 < psVar3[0x30]) {
        psVar9 = (short *)(param_1 + 0x6480 + (iVar7 + iVar2) * 2);
        do {
          if (*psVar9 != psVar9[-0x12]) {
            psVar3[-6] = 1;
          }
          iVar2 = iVar2 + 1;
          psVar9 = psVar9 + 1;
        } while (iVar2 < psVar3[0x30]);
      }
    }
    iVar7 = iVar7 + 0x12;
    psVar3 = psVar3 + 1;
    psVar4 = psVar4 + 5;
  } while (iVar7 < 0x6c);
  *(int *)(param_1 + 0x1b836) = param_1 + 0x1419e;
  *(int *)(param_1 + 0x1b86a) = param_1 + 0x1b83a;
  if (*(short *)(param_1 + 0x630a) == 2) {
    psVar4 = (short *)(param_1 + 0x1b8ea);
    iVar7 = 6;
    do {
      if (psVar4[-0xaa77] == 0) {
        *psVar4 = 4;
      }
      else if (psVar4[-0xaa4d] < 3) {
        *psVar4 = (0 < psVar4[-0xaa4d]) + 2;
      }
      else {
        *psVar4 = 4;
      }
      psVar4 = psVar4 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  puVar6 = (undefined2 *)(param_1 + 0xed20);
  iVar7 = 6;
  do {
    puVar6[-6] = 2;
    *puVar6 = 1;
    puVar6[6] = 1;
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  *(undefined2 *)(param_1 + 0xed08) = 1;
  psVar4 = (short *)(param_1 + 0xed16);
  iVar7 = 5;
  do {
    if (psVar4[-1] == *psVar4) {
      if (psVar4[5] == psVar4[6]) {
        if (psVar4[0xb] == psVar4[0xc]) {
          if (psVar4[0x11] == psVar4[0x12]) {
            psVar4[-6] = 0;
          }
          else {
            psVar4[-6] = 1;
          }
        }
        else {
          psVar4[-6] = 1;
        }
      }
      else {
        psVar4[-6] = 1;
      }
    }
    else {
      psVar4[-6] = 1;
    }
    psVar4 = psVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar6 = (undefined2 *)(param_1 + 0xedc8);
  puVar10 = (undefined2 *)(param_1 + 0xedbc);
  local_24 = 6;
  do {
    if (puVar10[-0x44e0] != 0) {
      *puVar10 = 4;
    }
    iVar7 = 0;
    puVar5 = puVar6;
    if (0 < *(short *)(param_1 + 0x6344)) {
      do {
        *puVar5 = 4;
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar7 < *(short *)(param_1 + 0x6344));
    }
    if (*(short *)(param_1 + 0x6312) != 0) {
      puVar10[0x24] = 4;
    }
    puVar10 = puVar10 + 1;
    puVar6 = puVar6 + 5;
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  puVar6 = (undefined2 *)(param_1 + 0xef00);
  puVar10 = (undefined2 *)(param_1 + 0xf02c);
  local_24 = 6;
  do {
    iVar7 = 0;
    puVar5 = puVar10;
    if (0 < *(short *)(param_1 + 0x6344)) {
      do {
        puVar5[-0xb4] = 2;
        *puVar5 = 0;
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar7 < *(short *)(param_1 + 0x6344));
    }
    puVar6[-0x24] = 2;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 5;
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  *(undefined2 *)(param_1 + 0xeeac) = 0;
  puVar6 = (undefined2 *)(param_1 + 0xeeae);
  iVar7 = 5;
  do {
    if ((puVar6[-0x4558] == 0) || (puVar6[-0x4559] != 0)) {
      *puVar6 = 0;
    }
    else {
      *puVar6 = 1;
    }
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return;
}


