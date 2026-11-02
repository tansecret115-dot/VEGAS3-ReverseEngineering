/* Module: mpgaout.dll
   Function: FUN_10007330
   Address: 10007330
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007330(void)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  double *pdVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  short in_FPUControlWord;
  double dVar18;
  double dVar19;
  int iStack00000008;
  int iStack00000034;
  int iStack00000038;
  int iStack0000003c;
  int iStack00000040;
  int iStack00000044;
  int iStack00000048;
  int iStack0000004c;
  int iStack00000050;
  int iStack00000054;
  int iStack00000058;
  int iStack0000005c;
  int iStack00000060;
  int iStack00000064;
  int iStack00000068;
  int iStack0000006c;
  int iStack00000070;
  undefined1 *puStack00000074;
  int iStack00000078;
  int iStack0000007c;
  int iStack00000080;
  int iStack00000084;
  int iStack00000088;
  int iStack0000008c;
  int iStack00000090;
  short sStack000000de;
  int in_stack_000020f0;
  short *in_stack_000020f4;
  int in_stack_000020f8;
  int in_stack_000020fc;
  int in_stack_00002100;
  int in_stack_00002104;
  
  FUN_1000b5f8();
  iStack00000050 = 0;
  if (0 < in_stack_00002100) {
    do {
      if ((in_stack_00002100 == 2) || ((in_stack_00002100 == 1 && (in_stack_000020fc == 0)))) {
        if (*(int *)(in_stack_000020f0 + 0x312d0) == 0) {
          *(undefined4 *)(in_stack_000020f0 + 0x312d0) = 1;
          *(undefined4 *)(in_stack_000020f0 + 0x312d8) = 1;
        }
        else {
          *(undefined4 *)(in_stack_000020f0 + 0x312d0) = 0;
          *(undefined4 *)(in_stack_000020f0 + 0x312d8) = 0;
        }
        if (*(int *)(in_stack_000020f0 + 0x312d4) == 0) {
          *(undefined4 *)(in_stack_000020f0 + 0x312d4) = 1;
        }
        else {
          *(undefined4 *)(in_stack_000020f0 + 0x312d4) = 0;
        }
      }
      puStack00000074 = &stack0x000000e0;
      iStack0000007c = in_stack_000020f0 + 0x21250;
      iStack0000005c = in_stack_000020f0 + 0x2d2b0;
      iStack00000088 = in_stack_000020f0 + 0x10348;
      iStack0000006c = in_stack_000020f0 + 0x12348;
      iStack00000048 = in_stack_000020f0 + 0x29290;
      iStack00000054 = in_stack_000020f0 + 0xd970;
      iStack0000008c = in_stack_000020f0 + 0xd778;
      iStack00000070 = in_stack_000020f0 + 0x14654;
      iStack00000080 = in_stack_000020f0 + 0x1f048;
      iStack00000090 = in_stack_000020f0 + 0x1f144;
      iStack00000060 = in_stack_000020f0 + 0xdf58;
      iStack00000064 = in_stack_000020f0 + 0x15050;
      iStack00000034 = in_stack_000020f0 + 0xdd60;
      iStack00000068 = in_stack_000020f0 + 0x17248;
      iStack00000038 = in_stack_000020f0 + 0x14e58;
      iStack0000004c = in_stack_000020fc << 9;
      iStack00000058 = in_stack_000020f0 + 0x13350;
      iStack00000078 = in_stack_000020f0 + 0xdb68;
      iStack0000003c = in_stack_000020f0 + 0x14358;
      iStack00000084 = in_stack_000020f0 + 0xe150;
      iStack00000040 = in_stack_000020f0 + 0x1f240;
      iStack00000044 = iStack00000050 << 8;
      iVar13 = 0;
      iVar17 = 0;
      do {
        if (iVar17 < *(int *)(in_stack_000020f0 + 0x312e0)) {
          sStack000000de =
               *(short *)(in_stack_000020f8 + (iVar17 + *(int *)(in_stack_000020f0 + 0x312dc)) * 2);
        }
        else {
          sStack000000de = *in_stack_000020f4;
          in_stack_000020f4 = in_stack_000020f4 + 1;
        }
        *(short *)(in_stack_000020f8 + iVar17 * 2) = sStack000000de;
        iVar17 = iVar17 + 1;
        *(double *)(puStack00000074 + iVar13) =
             (double)sStack000000de * *(double *)(in_stack_000020f0 + 0x15248 + iVar13);
        iVar13 = iVar13 + 8;
      } while (iVar17 < 0x400);
      for (iVar13 = 0x400; iVar13 < *(int *)(in_stack_000020f0 + 0x312e4); iVar13 = iVar13 + 1) {
        if (iVar13 < *(int *)(in_stack_000020f0 + 0x312e0)) {
          sVar9 = *(short *)(in_stack_000020f8 +
                            (iVar13 + *(int *)(in_stack_000020f0 + 0x312dc)) * 2);
        }
        else {
          sVar9 = *in_stack_000020f4;
          in_stack_000020f4 = in_stack_000020f4 + 1;
        }
        *(short *)(in_stack_000020f8 + iVar13 * 2) = sVar9;
      }
      iStack00000050 = iStack00000050 + 1;
      FUN_10006a94((int)puStack00000074,0x400);
      iVar13 = 0;
      iVar17 = 0;
      do {
        iVar10 = (iStack0000004c + in_stack_000020fc) * 0x10 +
                 iVar13 + (*(int *)(in_stack_000020f0 + 0x312d4) * 0x200 +
                          *(int *)(in_stack_000020f0 + 0x312d4)) * 8;
        dVar18 = *(double *)(iVar10 + iStack0000007c);
        if ((byte)(dVar18 < 0.0 | (byte)((ushort)((ushort)NAN(dVar18) << 10) >> 8) |
                  (byte)((ushort)((ushort)(dVar18 == 0.0) << 0xe) >> 8)) == 0x40) {
          dVar3 = 1.0;
          dVar19 = 0.0;
          dVar5 = dVar3;
        }
        else {
          dVar19 = *(double *)(iVar10 + iStack0000005c);
          dVar19 = dVar19 * dVar19;
          dVar3 = dVar18 * dVar18 + dVar18 * dVar18;
          dVar5 = 0.0;
        }
        dVar18 = dVar18 + dVar18;
        iVar14 = (iStack0000004c + in_stack_000020fc) * 0x10;
        iVar10 = iVar13 + (*(int *)(in_stack_000020f0 + 0x312d8) * 0x200 +
                          *(int *)(in_stack_000020f0 + 0x312d8)) * 8 + iVar14;
        dVar2 = *(double *)(iVar10 + iStack0000007c);
        if ((byte)(dVar2 < 0.0 | (byte)((ushort)((ushort)NAN(dVar2) << 10) >> 8) |
                  (byte)((ushort)((ushort)(dVar2 == 0.0) << 0xe) >> 8)) != 0x40) {
          dVar3 = dVar3 * dVar2;
          dVar18 = dVar18 - dVar2;
          dVar2 = *(double *)(iVar10 + iStack0000005c);
          dVar4 = -dVar2 * dVar5;
          dVar5 = (dVar19 + dVar5) * dVar2 * _DAT_100072e0;
          dVar19 = dVar4 + dVar5;
        }
        dVar2 = *(double *)(puStack00000074 + iVar13);
        *(double *)
         (iVar13 + (*(int *)(in_stack_000020f0 + 0x312d0) * 0x200 +
                   *(int *)(in_stack_000020f0 + 0x312d0)) * 8 + iVar14 + iStack0000005c) = dVar2;
        *(double *)(iVar13 + iStack00000088) = dVar2 * dVar2;
        dVar4 = SQRT(dVar2 * dVar2);
        *(double *)
         (iVar13 + (*(int *)(in_stack_000020f0 + 0x312d0) * 0x200 +
                   *(int *)(in_stack_000020f0 + 0x312d0)) * 8 + iVar14 + iStack0000007c) = dVar4;
        dVar4 = dVar4 + ABS(dVar18);
        dVar3 = (dVar18 + dVar18) / dVar3;
        if ((byte)(0.0 < dVar4 | (byte)((ushort)((ushort)NAN(dVar4) << 10) >> 8) |
                  (byte)((ushort)((ushort)(dVar4 == 0.0) << 0xe) >> 8)) == 0x40) {
          *(double *)(iVar13 + iStack0000006c) = dVar4;
        }
        else {
          dVar18 = dVar5 * dVar3 - dVar2;
          dVar2 = dVar19 * dVar3 - dVar2;
          *(double *)(iVar13 + iStack0000006c) =
               SQRT(dVar2 * dVar2 + dVar18 * dVar18) / (dVar4 + dVar4);
        }
        iVar13 = iVar13 + 0x1000;
        iVar17 = iVar17 + 0x200;
      } while (iVar17 < 0x201);
      iVar13 = (iStack0000004c + in_stack_000020fc) * 0x10;
      iVar10 = 8;
      iVar17 = 1;
      do {
        iVar14 = iVar10 + (*(int *)(in_stack_000020f0 + 0x312d4) * 0x200 +
                          *(int *)(in_stack_000020f0 + 0x312d4)) * 8;
        iVar11 = iVar13 + iVar14;
        dVar18 = *(double *)(iVar11 + iStack0000007c);
        if (*(int *)(in_stack_000020f0 + 0x21250 + iVar13 + iVar14) == 0) {
          dVar5 = 1.0;
          dVar3 = 0.0;
          dVar19 = dVar5;
        }
        else {
          dVar19 = *(double *)(iVar11 + iStack00000048);
          dVar3 = *(double *)(iVar11 + iStack0000005c);
          dVar5 = dVar3 * dVar19 + dVar3 * dVar19;
          dVar3 = dVar3 * dVar3 - dVar19 * dVar19;
          dVar19 = dVar18 * dVar18 + dVar18 * dVar18;
        }
        dVar18 = dVar18 + dVar18;
        iVar15 = (iStack0000004c + in_stack_000020fc) * 0x10;
        iVar14 = iVar10 + (*(int *)(in_stack_000020f0 + 0x312d8) * 0x200 +
                          *(int *)(in_stack_000020f0 + 0x312d8)) * 8;
        iVar11 = iVar15 + iVar14;
        if (*(int *)(in_stack_000020f0 + 0x21250 + iVar15 + iVar14) != 0) {
          dVar19 = dVar19 * *(double *)(iVar11 + iStack0000007c);
          dVar18 = dVar18 - *(double *)(iVar11 + iStack0000007c);
          dVar4 = (dVar3 + dVar5) *
                  (*(double *)(iVar11 + iStack0000005c) + *(double *)(iVar11 + iStack00000048)) *
                  _DAT_100072e0;
          dVar2 = -*(double *)(iVar11 + iStack00000048) * dVar3;
          dVar3 = -*(double *)(iVar11 + iStack0000005c) * dVar5 + dVar4;
          dVar5 = dVar4 + dVar2;
        }
        dVar2 = *(double *)(puStack00000074 + (0x400 - iVar17) * 8);
        *(double *)
         (iVar10 + (*(int *)(in_stack_000020f0 + 0x312d0) * 0x200 +
                   *(int *)(in_stack_000020f0 + 0x312d0)) * 8 + iVar15 + iStack0000005c) = dVar2;
        dVar4 = *(double *)(puStack00000074 + iVar10);
        *(double *)
         (iVar10 + (*(int *)(in_stack_000020f0 + 0x312d0) * 0x200 +
                   *(int *)(in_stack_000020f0 + 0x312d0)) * 8 + iVar15 + iStack00000048) = dVar4;
        dVar6 = (dVar4 * dVar4 + dVar2 * dVar2) * _DAT_100072e0;
        dVar19 = (dVar18 + dVar18) / dVar19;
        *(double *)(iVar10 + iStack00000088) = dVar6;
        dVar6 = SQRT(dVar6);
        *(double *)
         (iVar10 + (*(int *)(in_stack_000020f0 + 0x312d0) * 0x200 +
                   *(int *)(in_stack_000020f0 + 0x312d0)) * 8 + iVar15 + iStack0000007c) = dVar6;
        dVar6 = ABS(dVar18) + dVar6;
        if ((byte)(0.0 < dVar6 | (byte)((ushort)((ushort)NAN(dVar6) << 10) >> 8) |
                  (byte)((ushort)((ushort)(dVar6 == 0.0) << 0xe) >> 8)) == 0x40) {
          *(double *)(iVar10 + iStack0000006c) = dVar6;
        }
        else {
          dVar18 = dVar3 * dVar19 - (dVar2 - dVar4);
          dVar19 = dVar5 * dVar19 - (dVar2 + dVar4);
          *(double *)(iVar10 + iStack0000006c) =
               SQRT(dVar19 * dVar19 + dVar18 * dVar18) / (dVar6 + dVar6);
        }
        iVar10 = iVar10 + 8;
        iVar17 = iVar17 + 1;
      } while (iVar17 < 0x200);
      iVar13 = 8;
      iVar17 = 0x3d;
      do {
        *(undefined4 *)(iStack00000054 + iVar13) = 0;
        *(undefined4 *)(iStack00000054 + 4 + iVar13) = 0;
        *(undefined4 *)(iStack0000008c + iVar13) = 0;
        *(undefined4 *)(iStack0000008c + 4 + iVar13) = 0;
        iVar13 = iVar13 + 8;
        iVar17 = iVar17 + -1;
      } while (-1 < iVar17);
      iVar13 = 4;
      *(double *)(in_stack_000020f0 + 0xd970) = *(double *)(in_stack_000020f0 + 0x10348);
      *(double *)(in_stack_000020f0 + 0xd778) =
           *(double *)(in_stack_000020f0 + 0x10348) * *(double *)(in_stack_000020f0 + 0x12348);
      iVar17 = 0x1ff;
      do {
        iVar10 = *(int *)(iStack00000070 + iVar13) * 8;
        *(double *)(iVar10 + iStack00000054) =
             *(double *)(iVar10 + iStack00000054) + *(double *)(iStack00000088 + iVar13 * 2);
        iVar11 = *(int *)(iStack00000070 + iVar13) * 8;
        iVar10 = iVar13 * 2;
        iVar14 = iVar13 * 2;
        iVar13 = iVar13 + 4;
        *(double *)(iVar11 + iStack0000008c) =
             *(double *)(iStack00000088 + iVar10) * *(double *)(iStack0000006c + iVar14) +
             *(double *)(iVar11 + iStack0000008c);
        iVar17 = iVar17 + -1;
      } while (-1 < iVar17);
      iVar17 = 0;
      iVar10 = 0;
      iVar13 = in_stack_000020f0 + 0x17440;
      do {
        dVar18 = 0.0;
        iVar11 = *(int *)(iVar17 * 4 + iStack00000080);
        iVar14 = iVar11 * 8;
        dVar19 = dVar18;
        do {
          pdVar12 = (double *)(iVar13 + iVar14);
          iVar11 = iVar11 + 1;
          pdVar1 = (double *)(iStack0000008c + iVar14);
          dVar19 = dVar19 + *pdVar12 * *(double *)(iStack00000054 + iVar14);
          iVar14 = iVar14 + 8;
          dVar18 = dVar18 + *pdVar12 * *pdVar1;
        } while (iVar11 < *(int *)(iVar17 * 4 + iStack00000090));
        *(double *)(iStack00000060 + iVar10) = dVar19 / *(double *)(iVar10 + iStack00000064);
        if ((byte)(0.0 < dVar19 | (byte)((ushort)((ushort)NAN(dVar19) << 10) >> 8) |
                  (byte)((ushort)((ushort)(dVar19 == 0.0) << 0xe) >> 8)) == 0x40) {
          dVar18 = 0.0;
        }
        else {
          dVar18 = dVar18 / dVar19;
        }
        iVar13 = iVar13 + 0x1f8;
        *(double *)(iVar10 + iStack00000034) = dVar18;
        iVar17 = iVar17 + 1;
        iVar10 = iVar10 + 8;
      } while (iVar17 < 0x3f);
      iVar17 = 0;
      iVar13 = 0;
      do {
        dVar18 = *(double *)(iStack00000034 + iVar13);
        dVar19 = _DAT_100072e8;
        if ((_DAT_100072e8 <= dVar18) && (dVar19 = dVar18, _DAT_100072e0 < dVar18)) {
          dVar19 = _DAT_100072e0;
        }
        dVar18 = log(dVar19);
        dVar18 = dVar18 * _DAT_100072f0 - _DAT_100072f8;
        dVar19 = *(double *)(iStack00000068 + iVar13) * dVar18 + (1.0 - dVar18) * _DAT_1001e440;
        dVar18 = *(double *)
                  (&DAT_1001e540 +
                  (int)ROUND(*(double *)(iStack00000038 + iVar13) + _DAT_100072e0) * 8);
        if (dVar18 < dVar19) {
          dVar18 = dVar19;
        }
        iVar17 = iVar17 + 1;
        sStack000000de = in_FPUControlWord;
        dVar18 = exp(-dVar18 * _DAT_10007300);
        iVar11 = iStack00000088;
        iVar14 = iStack00000058;
        iVar10 = iStack0000003c;
        *(double *)(iVar13 + iStack00000084) = dVar18;
        *(double *)(iVar13 + iStack00000078) = dVar18 * *(double *)(iVar13 + iStack00000060);
        iVar13 = iVar13 + 8;
      } while (iVar17 < 0x3f);
      iVar13 = *(int *)(in_stack_000020f0 + 0x312e8);
      if (iVar13 == 1) {
        puVar16 = &DAT_10015320;
      }
      else if ((iVar13 < 2) && (iVar13 == 0)) {
        puVar16 = &DAT_10014300;
      }
      else {
        puVar16 = &DAT_10016340;
      }
      iVar17 = 0;
      iVar13 = (iStack0000004c + in_stack_000020fc) * 8;
      pdVar12 = (double *)(iVar13 + iStack00000040);
      iVar15 = 0;
      do {
        dVar18 = *(double *)(*(int *)(iStack00000070 + iVar15 * 4) * 8 + iStack00000078);
        if (dVar18 < *(double *)((int)puVar16 + iVar17)) {
          dVar18 = *(double *)((int)puVar16 + iVar17);
        }
        if (in_stack_00002100 == 1) {
          dVar19 = *pdVar12;
          if (0x3f < (byte)((dVar19 < dVar18 |
                             (byte)((ushort)((ushort)(NAN(dVar19) || NAN(dVar18)) << 10) >> 8) |
                            (byte)((ushort)((ushort)(dVar19 == dVar18) << 0xe) >> 8)) - 1)) {
            dVar19 = dVar18;
          }
          *(double *)(iVar17 + iStack00000058) = dVar19;
          dVar3 = dVar18 * _DAT_10007308;
          if (0x3f < (byte)((dVar3 < dVar19 |
                             (byte)((ushort)((ushort)(NAN(dVar3) || NAN(dVar19)) << 10) >> 8) |
                            (byte)((ushort)((ushort)(dVar3 == dVar19) << 0xe) >> 8)) - 1)) {
            dVar19 = dVar3;
          }
          *(double *)(iVar17 + iStack00000058) = dVar19;
        }
        else {
          *(double *)(iStack00000058 + iVar17) = dVar18;
        }
        iStack00000008 = iVar15 * 8;
        pdVar12 = pdVar12 + 1;
        iVar17 = iVar17 + 8;
        iVar15 = iVar15 + 1;
        *(double *)(iStack00000008 + iVar13 + iStack00000040) = dVar18 * _DAT_10007310;
        dVar18 = _DAT_10007320;
      } while (iVar15 < 0x201);
      iVar13 = 0;
      do {
        dVar5 = _DAT_100072e0;
        iVar17 = iVar13 * 8;
        dVar19 = 0.0;
        iVar15 = 0x10;
        dVar3 = _DAT_10007318;
        do {
          if (*(double *)(iVar14 + iVar17) < dVar3) {
            dVar3 = *(double *)(iVar14 + iVar17);
          }
          dVar19 = dVar19 + *(double *)(iVar11 + iVar17);
          iVar17 = iVar17 + 8;
          iVar15 = iVar15 + -1;
        } while (-1 < iVar15);
        if (0x3f < (byte)((_DAT_100072e0 < dVar19 |
                           (byte)((ushort)((ushort)(NAN(_DAT_100072e0) || NAN(dVar19)) << 10) >> 8)
                          | (byte)((ushort)((ushort)(_DAT_100072e0 == dVar19) << 0xe) >> 8)) - 1)) {
          dVar19 = _DAT_100072e0;
        }
        iVar17 = iStack00000044 + (iVar13 >> 4) * 8;
        iVar13 = iVar13 + 0x10;
        dVar19 = dVar19 / (dVar3 * dVar18);
        *(double *)(iVar17 + iVar10) = dVar19;
        dVar19 = log(dVar19);
        iVar8 = iStack00000088;
        iVar7 = iStack00000058;
        iVar15 = iStack0000003c;
        *(double *)(iVar17 + iVar10) = dVar19 * _DAT_10007328;
      } while (iVar13 < 0xc1);
      iVar13 = 0xd0;
      do {
        dVar19 = 0.0;
        iVar17 = iVar13 + 0x10;
        iVar10 = iVar13 * 8;
        iVar14 = 0x10;
        dVar18 = dVar19;
        do {
          dVar19 = dVar19 + *(double *)(iVar7 + iVar10);
          dVar18 = dVar18 + *(double *)(iVar8 + iVar10);
          iVar10 = iVar10 + 8;
          iVar14 = iVar14 + -1;
        } while (-1 < iVar14);
        if (dVar18 < dVar5) {
          dVar18 = dVar5;
        }
        iVar13 = iStack00000044 + (iVar13 >> 4) * 8;
        *(double *)(iVar13 + iVar15) = dVar18 / dVar19;
        dVar18 = log(dVar18 / dVar19);
        *(double *)(iVar13 + iVar15) = dVar18 * _DAT_10007328;
        iVar13 = iVar17;
      } while (iVar17 < 0x200);
    } while (iStack00000050 < in_stack_00002100);
  }
  if (in_stack_00002100 == 2) {
    iVar17 = 0;
    iVar13 = 0x1f;
    do {
      dVar18 = *(double *)(in_stack_000020f0 + 0x14458 + iVar17);
      dVar19 = *(double *)(in_stack_000020f0 + 0x14358 + iVar17);
      if (0x3f < (byte)((dVar19 < dVar18 |
                         (byte)((ushort)((ushort)(NAN(dVar19) || NAN(dVar18)) << 10) >> 8) |
                        (byte)((ushort)((ushort)(dVar19 == dVar18) << 0xe) >> 8)) - 1)) {
        dVar18 = dVar19;
      }
      *(double *)(in_stack_00002104 + iVar17) = dVar18;
      iVar17 = iVar17 + 8;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  else {
    iVar13 = 0;
    do {
      *(undefined8 *)(in_stack_00002104 + iVar13 * 8) =
           *(undefined8 *)(in_stack_000020f0 + 0x14358 + iVar13 * 8);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 0x20);
  }
  return;
}


