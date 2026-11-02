/* Module: ednt3260.dll
   Function: FUN_630f3390
   Address: 630f3390
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f3390(int param_1)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  int local_18;
  int local_c;
  
  local_18 = 0;
  psVar6 = (short *)(param_1 + 0x6558);
  psVar10 = (short *)(param_1 + 0x63d8);
  local_c = 0x3204;
  *(short *)(param_1 + 0x3fbb8) =
       (short)((*(int *)(param_1 + 0x62fa) - *(int *)(param_1 + 0x2a) >> 1) << 4) +
       *(short *)(param_1 + 0x6300);
  do {
    uVar1 = *(ushort *)(param_1 + 0x6344);
    iVar5 = (uint)uVar1 * 2;
    iVar4 = iVar5 + 1;
    if (psVar10[-0xc] != 0) {
      iVar4 = iVar5 + 9;
    }
    iVar5 = iVar4;
    if ((*(short *)(param_1 + 0x630a) == 0) && (iVar5 = iVar4 + 1, *psVar10 != 0)) {
      iVar5 = iVar4 + 9;
    }
    iVar4 = iVar5 + 1;
    if (psVar10[0xc] == 0) {
LAB_630f343b:
      if (psVar10[0x12] != 0) {
        iVar5 = 0;
        if (0 < (short)uVar1) {
          psVar9 = psVar6 + -0xa8;
          iVar7 = iVar4;
          do {
            iVar4 = iVar7;
            if ((*psVar9 != 0) &&
               (iVar4 = iVar7 + 1, *(short *)(param_1 + 0x150 + (local_c + iVar5) * 2) != 0)) {
              iVar8 = (int)psVar10[0x3c];
              iVar4 = iVar7 + 3;
              if (iVar8 < psVar10[0x42]) {
                iVar7 = psVar10[0x42] - iVar8;
                psVar11 = (short *)(param_1 + 0x6480 + (local_18 + iVar8) * 2);
                do {
                  if (*psVar11 == 0) {
                    iVar4 = iVar4 + 8;
                  }
                  psVar11 = psVar11 + 1;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
              }
            }
            iVar5 = iVar5 + 1;
            psVar9 = psVar9 + 1;
            iVar7 = iVar4;
          } while (iVar5 < *(short *)(param_1 + 0x6344));
        }
        if ((psVar10[0x534] != 0) && ((*psVar6 != 0 || (psVar6[1] != 0)))) {
          iVar5 = (int)psVar10[0x3c];
          if (iVar5 < psVar10[0x42]) {
            iVar7 = psVar10[0x42] - iVar5;
            psVar9 = (short *)(param_1 + 0x6480 + (local_18 + iVar5) * 2);
            do {
              if (*psVar9 == 0) {
                iVar4 = iVar4 + 1;
              }
              psVar9 = psVar9 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
      }
    }
    else {
      iVar4 = iVar5 + 2;
      if (psVar10[0x12] != 0) {
        iVar4 = iVar4 + (uint)uVar1;
        if (*(short *)(param_1 + 0x630a) == 2) {
          iVar4 = iVar4 + 1;
        }
        iVar4 = iVar4 + 7 + (uint)(ushort)(psVar10[0x42] - psVar10[0x3c]);
        goto LAB_630f343b;
      }
    }
    if ((*(short *)(param_1 + 0x630a) == 2) && (iVar4 = iVar4 + 1, psVar10[0xaa8f] != 0)) {
      iVar4 = iVar4 + (uint)(ushort)psVar10[0xaa89];
    }
    if (psVar10[0x12] != 0) {
      iVar4 = iVar4 + 2;
    }
    iVar5 = (uint)*(ushort *)(param_1 + 0x6344) * 2;
    iVar4 = iVar4 + iVar5;
    if (*(short *)(param_1 + 0x6312) != 0) {
      iVar4 = iVar4 + 1;
    }
    iVar8 = (int)(short)*(ushort *)(param_1 + 0x6344);
    iVar7 = 0;
    if (0 < iVar8) {
      psVar9 = psVar6 + 0x2548;
      do {
        if ((*psVar9 != 0) && (*(short *)(param_1 + (local_c + iVar7) * 2) == 0)) {
          iVar4 = iVar4 + 6;
        }
        iVar7 = iVar7 + 1;
        psVar9 = psVar9 + 1;
      } while (iVar7 < iVar8);
    }
    if ((psVar10[0x12] != 0) && (psVar10[0x2602] != 0)) {
      iVar4 = iVar4 + 4 + (uint)(ushort)(psVar10[0x4450] * 7);
    }
    iVar7 = 0;
    if (0 < iVar8) {
      psVar9 = psVar6 + 0x2548;
      do {
        if (*psVar9 != 0) {
          iVar4 = iVar4 + 6 +
                  (uint)(ushort)(*(short *)(param_1 + 0x887c + (local_c + iVar7) * 2) * 7);
        }
        iVar7 = iVar7 + 1;
        psVar9 = psVar9 + 1;
      } while (iVar7 < iVar8);
    }
    if ((*(short *)(param_1 + 0x6312) != 0) && (psVar10[0x2626] != 0)) {
      iVar4 = iVar4 + 4 + (uint)(ushort)(psVar10[0x4474] * 7);
    }
    iVar7 = iVar4 + 1;
    if (psVar10[0x4498] != 0) {
      iVar7 = iVar4 + 0xc;
    }
    iVar4 = iVar7 + 1;
    if (psVar10[0x44bc] != 0) {
      iVar4 = iVar7 + 7;
      if (psVar10[0x12] != 0) {
        iVar4 = iVar7 + 0xe;
      }
      iVar4 = iVar4 + (uint)*(ushort *)(param_1 + 0x6344) * 7;
      if (*(short *)(param_1 + 0x6312) != 0) {
        iVar4 = iVar4 + 7;
      }
    }
    sVar3 = psVar10[0x12];
    iVar7 = iVar4;
    if ((sVar3 != 0) && (iVar7 = iVar4 + 1, psVar10[0x451c] != 0)) {
      iVar7 = iVar4 + 7;
    }
    iVar4 = iVar7 + 1;
    sVar2 = (short)iVar4;
    if (psVar10[0x456a] != 0) {
      if (sVar3 != 0) {
        iVar4 = iVar7 + 3;
      }
      iVar4 = iVar4 + iVar5;
      if ((sVar3 != 0) && (psVar10[0x4570] == 1)) {
        iVar4 = iVar4 + 3;
        if (0 < psVar10[0x4594]) {
          iVar4 = iVar4 + psVar10[0x4594] * 0xc;
        }
      }
      sVar2 = (short)iVar4;
      iVar5 = 0;
      if (0 < iVar8) {
        psVar9 = psVar6 + 0x44b6;
        do {
          if (*psVar9 == 1) {
            iVar4 = iVar4 + 3;
            iVar7 = (int)*(short *)(param_1 + 0x8c24 + (local_c + iVar5) * 2);
            if (0 < iVar7) {
              iVar4 = iVar4 + iVar7 * 0xc;
            }
          }
          sVar2 = (short)iVar4;
          iVar5 = iVar5 + 1;
          psVar9 = psVar9 + 1;
        } while (iVar5 < iVar8);
      }
    }
    psVar10[0x1cbf1] = sVar2 + 1;
    local_18 = local_18 + 0x12;
    psVar10 = psVar10 + 1;
    local_c = local_c + 5;
    psVar6 = psVar6 + 5;
    if (0x3221 < local_c) {
      sVar3 = 0;
      if (*(short *)(param_1 + 0x3fbfc) != 0) {
        sVar3 = *(short *)(param_1 + 0x3fbfe) + 0xe;
      }
      sVar2 = *(short *)(param_1 + 0x3fbb8);
      *(short *)(param_1 + 0x3fbe0) = sVar3 + 0x12;
      iVar5 = 6;
      psVar6 = (short *)(param_1 + 0x3fbba);
      do {
        sVar3 = *psVar6;
        psVar6 = psVar6 + 1;
        sVar2 = sVar2 + sVar3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      sVar3 = (*(short *)(param_1 + 0x3fbac) * 0x10 - sVar2) - *(short *)(param_1 + 0x3fbe0);
      *(short *)(param_1 + 0x3fbe2) = sVar3;
      if (sVar3 < 0) {
        *(undefined2 *)(param_1 + 0x1c) = 1;
        FUN_630f92d0();
      }
      if ((int)*(short *)(param_1 + 0x3fbb2) <
          (int)*(short *)(param_1 + 0x3fbbc) + (int)*(short *)(param_1 + 0x3fbba)) {
        *(undefined2 *)(param_1 + 0x1c) = 1;
        FUN_630f92d0();
      }
      if (*(short *)(param_1 + 0x3fbb6) < *(short *)(param_1 + 0x3fbe0)) {
        *(undefined2 *)(param_1 + 0x1c) = 1;
        FUN_630f92d0();
      }
      return;
    }
  } while( true );
}


