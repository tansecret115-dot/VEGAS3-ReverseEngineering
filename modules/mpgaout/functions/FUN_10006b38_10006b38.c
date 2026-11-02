/* Module: mpgaout.dll
   Function: FUN_10006b38
   Address: 10006b38
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10006b38(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  int iVar6;
  double dVar7;
  undefined8 uVar8;
  int *piVar9;
  double *pdVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  double dVar18;
  int local_88;
  
  *(undefined4 *)(param_1 + 0x312d0) = 0;
  *(undefined4 *)(param_1 + 0x312d4) = 1;
  *(undefined4 *)(param_1 + 0x312d8) = 0;
  iVar6 = *(int *)(param_1 + 0x2c);
  if (iVar6 == 0xac44) {
    *(undefined4 *)(param_1 + 0x312e8) = 1;
  }
  else if (iVar6 < 0xac45) {
    if (iVar6 == 32000) {
      *(undefined4 *)(param_1 + 0x312e8) = 0;
    }
  }
  else if (iVar6 == 48000) {
    *(undefined4 *)(param_1 + 0x312e8) = 2;
  }
  if (*(int *)(param_1 + 4) == 1) {
    *(undefined4 *)(param_1 + 0x312dc) = 0x180;
    *(undefined4 *)(param_1 + 0x312e4) = 0x400;
    *(undefined4 *)(param_1 + 0x312e0) = 0x240;
  }
  else {
    *(undefined4 *)(param_1 + 0x312dc) = 0x240;
    *(undefined4 *)(param_1 + 0x312e4) = 0x420;
    *(undefined4 *)(param_1 + 0x312e0) = 0x1e0;
  }
  piVar1 = (int *)(param_1 + 0x14654);
  iVar6 = param_1 + 0x14e58;
  iVar2 = param_1 + 0x14558;
  iVar3 = param_1 + 0x17440;
  fVar15 = (float10)_DAT_10006ab8;
  fVar16 = (float10)_DAT_10006ac0;
  iVar4 = param_1 + 0x15050;
  iVar11 = 0;
  do {
    fVar17 = (float10)fcos(((float10)iVar11 - fVar15) * fVar16);
    *(double *)(param_1 + 0x15248 + iVar11 * 8) = (double)(((float10)1 - fVar17) * fVar15);
    uVar8 = _DAT_10006ac8;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x400);
  iVar11 = 0;
  iVar12 = 0x200;
  do {
    *(undefined4 *)(iVar11 + param_1 + 0x24268) = 0;
    *(undefined4 *)(iVar11 + 4 + param_1 + 0x24268) = 0;
    *(undefined4 *)(iVar11 + param_1 + 0x22258) = 0;
    *(undefined4 *)(iVar11 + 4 + param_1 + 0x22258) = 0;
    *(undefined4 *)(iVar11 + param_1 + 0x23260) = 0;
    *(undefined4 *)(iVar11 + 4 + param_1 + 0x23260) = 0;
    *(undefined4 *)(param_1 + 0x21250 + iVar11) = 0;
    *(undefined4 *)(param_1 + 0x21254 + iVar11) = 0;
    *(undefined4 *)(iVar11 + param_1 + 0x28288) = 0;
    *(undefined4 *)(iVar11 + 4 + param_1 + 0x28288) = 0;
    *(undefined4 *)(iVar11 + param_1 + 0x26278) = 0;
    *(undefined4 *)(iVar11 + 4 + param_1 + 0x26278) = 0;
    *(undefined4 *)(iVar11 + param_1 + 0x27280) = 0;
    *(undefined4 *)(iVar11 + 4 + param_1 + 0x27280) = 0;
    *(undefined4 *)(param_1 + 0x25270 + iVar11) = 0;
    *(undefined4 *)(param_1 + 0x25274 + iVar11) = 0;
    *(undefined4 *)(iVar11 + param_1 + 0x302c8) = 0;
    *(undefined4 *)(iVar11 + 4 + param_1 + 0x302c8) = 0;
    *(undefined4 *)(iVar11 + param_1 + 0x2e2b8) = 0;
    *(undefined4 *)(iVar11 + 4 + param_1 + 0x2e2b8) = 0;
    *(undefined4 *)(iVar11 + param_1 + 0x2f2c0) = 0;
    *(undefined4 *)(iVar11 + 4 + param_1 + 0x2f2c0) = 0;
    *(undefined4 *)(param_1 + 0x2d2b0 + iVar11) = 0;
    *(undefined4 *)(param_1 + 0x2d2b4 + iVar11) = 0;
    *(undefined4 *)(iVar11 + param_1 + 0x2c2a8) = 0;
    *(undefined4 *)(iVar11 + 4 + param_1 + 0x2c2a8) = 0;
    *(undefined4 *)(iVar11 + param_1 + 0x2a298) = 0;
    *(undefined4 *)(iVar11 + 4 + param_1 + 0x2a298) = 0;
    *(undefined4 *)(iVar11 + param_1 + 0x2b2a0) = 0;
    *(undefined4 *)(iVar11 + 4 + param_1 + 0x2b2a0) = 0;
    *(undefined4 *)(param_1 + 0x29290 + iVar11) = 0;
    *(undefined4 *)(param_1 + 0x29294 + iVar11) = 0;
    *(undefined8 *)(iVar11 + param_1 + 0x1f240) = uVar8;
    *(undefined8 *)(iVar11 + param_1 + 0x20248) = uVar8;
    iVar11 = iVar11 + 8;
    iVar12 = iVar12 + -1;
  } while (-1 < iVar12);
  dVar18 = (double)*(int *)(param_1 + 0x2c) * _DAT_10006ad0;
  iVar11 = 0;
  do {
    iVar12 = 1;
    dVar5 = (double)iVar11 * dVar18;
    if (0x3f < (byte)((dVar5 < DAT_1001e468 |
                       (byte)((ushort)((ushort)(NAN(dVar5) || NAN(DAT_1001e468)) << 10) >> 8) |
                      (byte)((ushort)((ushort)(dVar5 == DAT_1001e468) << 0xe) >> 8)) - 1)) {
      do {
        iVar12 = iVar12 + 1;
      } while ((double)(&DAT_1001e460)[iVar12] < dVar5);
    }
    *(double *)(param_1 + 0x13350 + iVar11 * 8) =
         (dVar5 - (double)(&DAT_1001e460)[iVar12 + -1]) /
         ((double)(&DAT_1001e460)[iVar12] - (double)(&DAT_1001e460)[iVar12 + -1]) +
         (double)(iVar12 + -1);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x201);
  dVar18 = *(double *)(param_1 + 0x13350);
  *(undefined4 *)(param_1 + 0x14654) = 0;
  *(double *)(param_1 + 0x14e58) = dVar18;
  iVar14 = 1;
  iVar12 = 0;
  piVar9 = piVar1;
  iVar11 = 1;
  do {
    iVar13 = iVar11;
    dVar5 = *(double *)(param_1 + 0x13350 + iVar13 * 8) - dVar18;
    if ((byte)((dVar5 < _DAT_10006ad8 |
                (byte)((ushort)((ushort)(NAN(dVar5) || NAN(_DAT_10006ad8)) << 10) >> 8) |
               (byte)((ushort)((ushort)(dVar5 == _DAT_10006ad8) << 0xe) >> 8)) - 1) < 0x40) {
      iVar14 = iVar14 + 1;
      piVar9[1] = *piVar9;
      iVar11 = *piVar9 * 8;
      *(double *)(iVar11 + iVar6) =
           *(double *)(iVar11 + iVar6) + *(double *)(param_1 + 0x13358 + iVar12 * 2);
    }
    else {
      piVar9[1] = *piVar9 + 1;
      *(double *)(*piVar9 * 8 + iVar6) = *(double *)(*piVar9 * 8 + iVar6) / (double)iVar14;
      *(undefined8 *)(piVar9[1] * 8 + iVar6) = *(undefined8 *)(param_1 + 0x13358 + iVar12 * 2);
      dVar18 = *(double *)(param_1 + 0x13358 + iVar12 * 2);
      *(int *)(*piVar9 * 4 + iVar2) = iVar14;
      iVar14 = 1;
    }
    dVar5 = _DAT_10006ab8;
    piVar9 = piVar9 + 1;
    iVar12 = iVar12 + 4;
    iVar11 = iVar13 + 1;
  } while (iVar13 + 1 < 0x201);
  *(int *)(piVar1[iVar13] * 4 + iVar2) = iVar14;
  *(double *)(piVar1[iVar13] * 8 + iVar6) = *(double *)(piVar1[iVar13] * 8 + iVar6) / (double)iVar14
  ;
  iVar12 = 0;
  iVar11 = 0;
  do {
    pdVar10 = (double *)(iVar3 + iVar11);
    iVar14 = 0;
    do {
      dVar18 = (*(double *)(iVar6 + iVar14 * 8) - *(double *)(iVar6 + iVar11)) * _DAT_10006ae0;
      if (((byte)(dVar18 < dVar5 | (byte)((ushort)((ushort)(NAN(dVar18) || NAN(dVar5)) << 10) >> 8)
                 | (byte)((ushort)((ushort)(dVar18 == dVar5) << 0xe) >> 8)) == 1) ||
         (_DAT_10006ae8 < dVar18)) {
        dVar7 = 0.0;
      }
      else {
        dVar7 = dVar18 - dVar5;
        dVar7 = (dVar7 * dVar7 - (dVar7 + dVar7)) * _DAT_10006af0;
      }
      dVar18 = dVar18 + _DAT_10006af8;
      dVar18 = (dVar18 * _DAT_10006b00 + _DAT_10006b08) -
               SQRT(dVar18 * dVar18 + 1.0) * _DAT_10006b10;
      if (_DAT_10006b18 < dVar18) {
        dVar18 = exp((dVar18 + dVar7) * _DAT_10006b20);
        *pdVar10 = dVar18;
      }
      else {
        *(undefined4 *)pdVar10 = 0;
        *(undefined4 *)((int)pdVar10 + 4) = 0;
      }
      pdVar10 = pdVar10 + 0x3f;
      iVar14 = iVar14 + 1;
    } while (iVar14 < 0x3f);
    iVar11 = iVar11 + 8;
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x3f);
  iVar12 = 0;
  iVar11 = 0;
  local_88 = 0;
  do {
    iVar14 = 0;
    dVar18 = *(double *)(iVar3 + iVar11 * 8);
    if ((byte)((byte)((ushort)((ushort)NAN(dVar18) << 10) >> 8) |
              (byte)((ushort)((ushort)(dVar18 == 0.0) << 0xe) >> 8)) == 0x40) {
      pdVar10 = (double *)(iVar3 + iVar11 * 8);
      iVar14 = 0;
      do {
        pdVar10 = pdVar10 + 1;
        iVar14 = iVar14 + 1;
        if (0x3e < iVar14) break;
        dVar18 = *pdVar10;
      } while ((byte)(dVar18 < 0.0 | (byte)((ushort)((ushort)NAN(dVar18) << 10) >> 8) |
                     (byte)((ushort)((ushort)(dVar18 == 0.0) << 0xe) >> 8)) == 0x40);
    }
    *(int *)(iVar12 * 4 + param_1 + 0x1f048) = iVar14;
    if (iVar14 < 0x3f) {
      dVar18 = *(double *)(local_88 + iVar14 * 8 + iVar3);
      if ((byte)(dVar18 < 0.0 | (byte)((ushort)((ushort)NAN(dVar18) << 10) >> 8) |
                (byte)((ushort)((ushort)(dVar18 == 0.0) << 0xe) >> 8)) != 0x40) {
        pdVar10 = (double *)(iVar14 * 8 + iVar3 + iVar11 * 8);
        do {
          pdVar10 = pdVar10 + 1;
          iVar14 = iVar14 + 1;
          if (0x3e < iVar14) break;
        } while ((byte)((byte)((ushort)((ushort)NAN(*pdVar10) << 10) >> 8) |
                       (byte)((ushort)((ushort)(*pdVar10 == 0.0) << 0xe) >> 8)) != 0x40);
      }
    }
    iVar11 = iVar11 + 0x3f;
    *(int *)(param_1 + 0x1f144 + iVar12 * 4) = iVar14;
    dVar18 = _DAT_10006b30;
    local_88 = local_88 + 0x1f8;
    iVar12 = iVar12 + 1;
    if (0x3e < iVar12) {
      iVar11 = 0;
      do {
        iVar12 = iVar11 * 8;
        dVar5 = *(double *)(iVar12 + iVar6) + _DAT_10006b28;
        if (dVar5 < dVar18) {
          dVar5 = dVar18;
        }
        *(double *)(iVar12 + param_1 + 0x17248) = dVar5;
        iVar14 = iVar11 + 1;
        *(undefined4 *)(iVar12 + iVar4) = 0;
        *(undefined4 *)(iVar12 + 4 + iVar4) = 0;
        pdVar10 = (double *)(iVar3 + iVar11 * 0x1f8);
        iVar13 = 0x3e;
        do {
          dVar5 = *pdVar10;
          pdVar10 = pdVar10 + 1;
          *(double *)(iVar12 + iVar4) = *(double *)(iVar12 + iVar4) + dVar5;
          iVar13 = iVar13 + -1;
        } while (-1 < iVar13);
        *(double *)(iVar12 + iVar4) =
             (double)*(int *)(iVar11 * 4 + iVar2) * *(double *)(iVar12 + iVar4);
        iVar11 = iVar14;
      } while (iVar14 < 0x3f);
      return;
    }
  } while( true );
}


