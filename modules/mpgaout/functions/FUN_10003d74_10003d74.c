/* Module: mpgaout.dll
   Function: FUN_10003d74
   Address: 10003d74
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10003d74(int param_1,int param_2,int param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double *local_124;
  double *local_120;
  double local_10c [33];
  
  iVar7 = 0;
  if (0 < param_3) {
    do {
      iVar1 = iVar7 + 1;
      iVar8 = 0;
      iVar6 = 0;
      local_124 = (double *)(iVar7 * 0x2400 + param_1);
      local_120 = local_124;
      do {
        iVar4 = 10;
        *(double *)((int)local_10c + iVar6) = ABS(*local_120);
        pdVar5 = local_124;
        do {
          pdVar5 = pdVar5 + 0x20;
          dVar3 = ABS(*pdVar5);
          dVar2 = *(double *)((int)local_10c + iVar6);
          if (0x3f < (byte)((dVar3 < dVar2 |
                             (byte)((ushort)((ushort)(NAN(dVar3) || NAN(dVar2)) << 10) >> 8) |
                            (byte)((ushort)((ushort)(dVar3 == dVar2) << 0xe) >> 8)) - 1)) {
            *(double *)((int)local_10c + iVar6) = dVar3;
          }
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
        local_124 = local_124 + 1;
        iVar6 = iVar6 + 8;
        local_120 = local_120 + 1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x20);
      iVar6 = 0;
      do {
        iVar8 = iVar7 * 0x180 + iVar6 * 4;
        iVar4 = 0x3e;
        *(undefined4 *)(param_2 + iVar8) = 0;
        iVar9 = iVar6 + 1;
        dVar2 = local_10c[iVar6];
        if ((byte)(_DAT_1000c2f0 < dVar2 |
                   (byte)((ushort)((ushort)(NAN(_DAT_1000c2f0) || NAN(dVar2)) << 10) >> 8) |
                  (byte)((ushort)((ushort)(_DAT_1000c2f0 == dVar2) << 0xe) >> 8)) == 1) {
          do {
            iVar4 = iVar4 + -1;
            if (iVar4 < 0) goto LAB_10003ea7;
            dVar2 = (double)(&DAT_1000c100)[iVar4];
            dVar3 = local_10c[iVar6];
          } while ((byte)(dVar2 < dVar3 |
                          (byte)((ushort)((ushort)(NAN(dVar2) || NAN(dVar3)) << 10) >> 8) |
                         (byte)((ushort)((ushort)(dVar2 == dVar3) << 0xe) >> 8)) == 1);
          *(int *)(param_2 + iVar6 * 4 + iVar7 * 0x180) = iVar4;
        }
        else {
          *(undefined4 *)(param_2 + iVar8) = 0x3e;
        }
LAB_10003ea7:
        iVar6 = iVar9;
      } while (iVar9 < 0x20);
      iVar7 = iVar1;
    } while (iVar1 < param_3);
  }
  return;
}


