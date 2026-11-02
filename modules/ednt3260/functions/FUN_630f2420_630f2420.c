/* Module: ednt3260.dll
   Function: FUN_630f2420
   Address: 630f2420
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_630f2420(int param_1)

{
  int iVar1;
  short *psVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  int iVar12;
  short sVar13;
  short local_30;
  
  sVar8 = 0;
  do {
    iVar12 = (int)sVar8;
    sVar3 = *(short *)(param_1 + 0x90e4 + iVar12 * 2);
    if ((*(short *)(param_1 + 0x63fc + iVar12 * 2) != 0) &&
       (sVar7 = 0, 0 < *(short *)(param_1 + 0x6344))) {
      do {
        iVar1 = iVar12 * 5 + (int)sVar7;
        if (*(short *)(param_1 + 0x6408 + iVar1 * 2) != 0) {
          psVar2 = (short *)(param_1 + (iVar1 * 9 + 0x1a82) * 4);
          FUN_630f8ab0((double *)(iVar1 * 0x90 + 0x6f24 + param_1),psVar2,
                       *(short *)(param_1 + 0x91ca + iVar12 * 2),0x18);
          sVar6 = 0;
          if (0 < *(short *)(param_1 + 0x91ca + iVar12 * 2)) {
            do {
              iVar9 = (iVar1 * 9 + 0x1a82) * 2 + (int)sVar6;
              sVar13 = *(short *)(param_1 + iVar9 * 2);
              sVar4 = ftol();
              if ((0x7dff < sVar4) && (0 < sVar13)) {
                sVar13 = sVar13 + -1;
                *(short *)(param_1 + iVar9 * 2) = sVar13;
                *(double *)(param_1 + 0x6f24 + (iVar1 * 0x12 + (int)sVar6) * 8) =
                     *(double *)(&DAT_631016e8 + sVar13 * 8) * _DAT_630fe068;
              }
              sVar6 = sVar6 + 1;
            } while (sVar6 < *(short *)(param_1 + 0x91ca + iVar12 * 2));
          }
          FUN_630f2850(psVar2,(short *)(param_1 + 0x6594 + iVar1 * 2),
                       *(short *)(param_1 + 0x91ca + iVar12 * 2));
          sVar6 = *(short *)(param_1 + 0x6594 + iVar1 * 2);
          sVar13 = 0;
          local_30 = sVar6 * 3 + 0xf;
          if (0 < *(short *)(param_1 + 0x91ca + iVar12 * 2)) {
            do {
              iVar9 = (iVar1 * 9 + 0x1a82) * 2 + (int)sVar13;
              sVar4 = *(short *)(param_1 + iVar9 * 2);
              psVar2 = (short *)(param_1 + iVar9 * 2);
              sVar5 = ftol();
              if (sVar4 == local_30) {
                iVar9 = FUN_630f9590(sVar5,DAT_63101a1a);
                uVar11 = (short)iVar9 * 2;
              }
              else {
                iVar9 = FUN_630f9590(sVar5,DAT_63101a1c);
                uVar11 = (short)iVar9 * 4;
              }
              *(ushort *)(param_1 + ((int)sVar13 + (iVar1 + 0x2d4) * 0x12) * 2) =
                   uVar11 & (ushort)DAT_631019f0;
              *psVar2 = *psVar2 + sVar6 * -3;
              sVar13 = sVar13 + 1;
            } while (sVar13 < *(short *)(param_1 + 0x91ca + iVar12 * 2));
          }
          sVar6 = 0;
          if (0 < *(short *)(param_1 + 0x91ca + iVar12 * 2)) {
            do {
              iVar9 = (int)sVar6;
              sVar6 = sVar6 + 1;
              *(undefined2 *)(param_1 + 0xa34e + iVar9 * 2) =
                   *(undefined2 *)(param_1 + ((iVar1 + 0x2d4) * 0x12 + iVar9) * 2);
            } while (sVar6 < *(short *)(param_1 + 0x91ca + iVar12 * 2));
          }
          sVar6 = *(short *)(param_1 + 0x6450 + iVar12 * 2);
          sVar13 = 0;
          if (0 < *(short *)(param_1 + 0x91ca + iVar12 * 2)) {
            do {
              iVar9 = (int)sVar6;
              sVar4 = *(short *)(param_1 + 0x90f2 + (iVar12 * 0x12 + iVar9) * 2);
              iVar10 = sVar4 + iVar9;
              if (iVar9 < iVar10) {
                sVar5 = sVar6;
                do {
                  sVar5 = sVar5 + 1;
                  *(undefined2 *)(param_1 + (iVar9 + (iVar1 + 0x2d4) * 0x12) * 2) =
                       *(undefined2 *)(param_1 + 0xa34e + sVar13 * 2);
                  iVar9 = (int)sVar5;
                } while (iVar9 < iVar10);
              }
              sVar6 = sVar6 + sVar4;
              sVar13 = sVar13 + 1;
            } while (sVar13 < *(short *)(param_1 + 0x91ca + iVar12 * 2));
          }
          sVar6 = 0;
          if (0 < *(short *)(param_1 + 0x91ca + iVar12 * 2)) {
            do {
              iVar9 = (int)sVar6;
              sVar6 = sVar6 + 1;
              *(undefined2 *)(param_1 + 0xa34e + iVar9 * 2) =
                   *(undefined2 *)(param_1 + (iVar9 + (iVar1 * 9 + 0x1a82) * 2) * 2);
            } while (sVar6 < *(short *)(param_1 + 0x91ca + iVar12 * 2));
          }
          sVar6 = *(short *)(param_1 + 0x6450 + iVar12 * 2);
          sVar13 = 0;
          if (0 < *(short *)(param_1 + 0x91ca + iVar12 * 2)) {
            do {
              iVar10 = (int)sVar6;
              sVar4 = *(short *)(param_1 + 0x90f2 + (iVar12 * 0x12 + iVar10) * 2);
              iVar9 = iVar10 + sVar4;
              if (iVar10 < iVar9) {
                sVar5 = sVar6;
                do {
                  sVar5 = sVar5 + 1;
                  *(undefined2 *)(param_1 + (iVar10 + (iVar1 * 9 + 0x1a82) * 2) * 2) =
                       *(undefined2 *)(param_1 + 0xa34e + sVar13 * 2);
                  iVar10 = (int)sVar5;
                } while (iVar10 < iVar9);
              }
              sVar6 = sVar6 + sVar4;
              sVar13 = sVar13 + 1;
            } while (sVar13 < *(short *)(param_1 + 0x91ca + iVar12 * 2));
          }
        }
        sVar7 = sVar7 + 1;
      } while (sVar7 < *(short *)(param_1 + 0x6344));
    }
    sVar8 = sVar8 + sVar3;
  } while (sVar8 < 6);
  return;
}


