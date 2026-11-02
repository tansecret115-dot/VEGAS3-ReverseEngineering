/* Module: mpgaout.dll
   Function: FUN_10003ec8
   Address: 10003ec8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10003ec8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  double *local_30;
  
  while (param_3 = param_3 + -1, param_3 != -1) {
    iVar6 = 2;
    do {
      iVar1 = iVar6 + -1;
      if (param_4 + -1 != -1) {
        iVar8 = param_4 + -1;
        do {
          iVar7 = iVar6 * 0xc00 + iVar8 * 8;
          iVar2 = iVar8 + -1;
          dVar4 = ABS(*(double *)(param_1 + 0xb00 + param_3 * 0x2400 + iVar7));
          local_30 = (double *)(param_1 + 0xa00 + iVar7 + param_3 * 0x2400);
          iVar7 = 10;
          do {
            dVar3 = ABS(*local_30);
            if (0x3f < (byte)((dVar3 < dVar4 |
                               (byte)((ushort)((ushort)(NAN(dVar3) || NAN(dVar4)) << 10) >> 8) |
                              (byte)((ushort)((ushort)(dVar3 == dVar4) << 0xe) >> 8)) - 1)) {
              dVar4 = dVar3;
            }
            local_30 = local_30 + -0x20;
            bVar9 = iVar7 != 0;
            iVar7 = iVar7 + -1;
          } while (bVar9);
          local_30 = (double *)0x10;
          iVar7 = 0x20;
          do {
            pdVar5 = local_30;
            if ((double)(&DAT_1000c100)[iVar7] < dVar4) {
              pdVar5 = (double *)-(int)local_30;
            }
            iVar7 = iVar7 + (int)pdVar5;
            local_30 = (double *)((uint)local_30 >> 1);
          } while (local_30 != (double *)0x0);
          dVar3 = (double)(&DAT_1000c100)[iVar7];
          if (0x3f < (byte)((dVar4 < dVar3 |
                             (byte)((ushort)((ushort)(NAN(dVar4) || NAN(dVar3)) << 10) >> 8) |
                            (byte)((ushort)((ushort)(dVar4 == dVar3) << 0xe) >> 8)) - 1)) {
            iVar7 = iVar7 + -1;
          }
          *(int *)(param_3 * 0x180 + param_2 + iVar6 * 0x80 + iVar8 * 4) = iVar7;
          iVar8 = iVar2;
        } while (iVar2 != -1);
      }
      iVar6 = iVar1;
    } while (iVar1 != -1);
  }
  return;
}


