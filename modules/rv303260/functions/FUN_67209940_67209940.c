/* Module: rv303260.dll
   Function: FUN_67209940
   Address: 67209940
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_67209940(int param_1)

{
  uint *this;
  byte bVar1;
  void *this_00;
  float fVar2;
  double dVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  FILE *pFVar8;
  char *pcVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  bool bVar16;
  byte local_1dc [5];
  undefined1 local_1d7;
  undefined1 local_1d6;
  uint local_d8;
  uint local_d4;
  undefined4 local_d0 [16];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_54;
  int local_50;
  undefined1 local_4c;
  undefined4 local_4b [3];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  uint *puStack_c;
  float local_8;
  
  this_00 = *(void **)(param_1 + 0xd6);
  iVar5 = FUN_67201640(this_00,*(uint *)((int)this_00 + 0xf6),*(uint *)((int)this_00 + 0xfa),
                       (uint)*(ushort *)(param_1 + 0x9e),(uint)*(ushort *)(param_1 + 0xa0));
  if (iVar5 != 0) {
    return 0x80004005;
  }
  *(undefined4 *)(param_1 + 0x24f) = *(undefined4 *)(*(int *)(param_1 + 0xd6) + 0x2da);
  iVar5 = *(int *)(param_1 + 0xd6);
  if ((((*(int *)(iVar5 + 0xb4) == 0) && (*(int *)(iVar5 + 0xb8) == 0)) &&
      (*(int *)(iVar5 + 0xbc) == 0)) || (*(int *)(param_1 + 0xee) == 4)) {
    FUN_67205a30(iVar5);
  }
  else {
    FUN_67205970(iVar5);
  }
  local_10 = *(float *)(param_1 + 0xfa);
  puStack_c = (uint *)0x0;
  if (((double)(uint)local_10 * _DAT_67213340 < (double)*(uint *)(param_1 + 0xfe)) ||
     (6000 < *(uint *)(param_1 + 0x102))) {
    *(undefined4 *)(param_1 + 0x225) = 1;
  }
  if (*(int *)(param_1 + 0xea) == 2) {
    FUN_672089b0((void *)(param_1 + 0x32),0);
  }
  if ((*(int *)(param_1 + 0xea) == 3) || (*(int *)(param_1 + 0xea) == 2)) {
    uVar14 = 0;
    *(undefined4 *)(param_1 + 0xe2) = *(undefined4 *)(*(int *)(param_1 + 0xd6) + 0xf6);
    uVar6 = *(uint *)(*(int *)(param_1 + 0xd6) + 0xfa);
    *(uint *)(param_1 + 0xe6) = uVar6;
    iVar5 = *(int *)(*(int *)(param_1 + 0xd6) + 0x366);
    if ((iVar5 == 1) || (iVar5 == 2)) {
      *(uint *)(param_1 + 0xe6) = uVar6 >> 1 & 0x7ffffffc;
    }
    *(undefined4 *)(param_1 + 0x201) = 0xffffffff;
    if (*(int *)(param_1 + 0x235) == 0) {
      while ((((uVar6 = *(int *)(param_1 + 0xe2) * *(int *)(param_1 + 0xe6),
               (uint)(*(int *)(param_1 + 0xfa) * 3) <= uVar6 &&
               uVar6 + *(int *)(param_1 + 0xfa) * -3 != 0 || (0x7fffffff < uVar6)) &&
              (uVar14 < *(uint *)(param_1 + 0x24f))) &&
             (iVar5 = *(int *)(*(int *)(param_1 + 0xd6) + 0x2de + uVar14 * 4),
             (uint)(*(int *)(*(int *)(param_1 + 0xd6) + uVar14 * 4 + 0x2fe) * iVar5) < uVar6))) {
        *(int *)(param_1 + 0xe2) = iVar5;
        *(undefined4 *)(param_1 + 0xe6) =
             *(undefined4 *)(*(int *)(param_1 + 0xd6) + 0x2fe + uVar14 * 4);
        *(uint *)(param_1 + 0x201) = uVar14;
        uVar14 = uVar14 + 1;
      }
    }
    if (*(int *)(param_1 + 0x24f) != 0) {
      iVar5 = *(int *)(param_1 + 0x201);
      if (iVar5 == -1) {
        if (((uint)*(ushort *)(param_1 + 0x9e) < *(uint *)(*(int *)(param_1 + 0xd6) + 0xf6)) ||
           ((uint)*(ushort *)(param_1 + 0xa0) < *(uint *)(*(int *)(param_1 + 0xd6) + 0xfa)))
        goto LAB_67209b75;
      }
      else if (((uint)*(ushort *)(param_1 + 0x9e) <
                *(uint *)(*(int *)(param_1 + 0xd6) + 0x2de + iVar5 * 4)) ||
              ((uint)*(ushort *)(param_1 + 0xa0) <
               *(uint *)(*(int *)(param_1 + 0xd6) + iVar5 * 4 + 0x2fe))) {
LAB_67209b75:
        *(int *)(param_1 + 0x201) = *(int *)(param_1 + 0x24f) + -1;
      }
      if (*(int *)(param_1 + 0x201) != -1) {
        *(undefined4 *)(param_1 + 0xe2) =
             *(undefined4 *)(*(int *)(param_1 + 0xd6) + 0x2de + *(int *)(param_1 + 0x201) * 4);
        *(undefined4 *)(param_1 + 0xe6) =
             *(undefined4 *)(*(int *)(param_1 + 0xd6) + 0x2fe + *(int *)(param_1 + 0x201) * 4);
      }
    }
    fVar2 = (float)*(uint *)(param_1 + 0xe2) * (float)*(int *)(param_1 + 0xe6);
    if (_DAT_67213348 <= fVar2) {
      if (fVar2 <= _DAT_67213350) {
        fVar2 = ((fVar2 - _DAT_67213348) * _DAT_67213358 * _DAT_67213354 -
                (_DAT_67213350 - fVar2) * _DAT_67213358 * _DAT_6721335c) * fVar2;
      }
      else {
        fVar2 = fVar2 * _DAT_67213354;
      }
    }
    else {
      fVar2 = fVar2 * _DAT_6721334c;
    }
    fVar2 = (float)*(int *)(param_1 + 0xfa) / fVar2;
    *(double *)(param_1 + 0x19e) = (double)fVar2;
    local_10 = (float)(*(int *)(param_1 + 0x102) - 1000);
    if ((float)(uint)local_10 < (float)_DAT_67213360 / fVar2) {
      *(double *)(param_1 + 0x19e) = _DAT_67213360 / (double)(uint)local_10;
    }
    puStack_c = (uint *)0x0;
    if (*(int *)(*(int *)(param_1 + 0xd6) + 0xfe) == 1) {
      dVar3 = _DAT_67213368;
      if (_DAT_67213368 <= *(double *)(param_1 + 0x19e)) {
        dVar3 = *(double *)(param_1 + 0x19e);
      }
      *(double *)(param_1 + 0x19e) = dVar3;
    }
    if (*(int *)(param_1 + 0x235) == 0) {
      *(undefined4 *)(param_1 + 0x1e2) = 0;
      *(undefined4 *)(param_1 + 0x1e6) = 0x402e0000;
      uVar6 = *(uint *)(param_1 + 0xfa);
      if (uVar6 < 10000) {
        *(undefined1 *)(param_1 + 0x239) = 5;
        *(undefined1 *)(param_1 + 0x23b) = 5;
      }
      else if (uVar6 < 15000) {
        *(undefined1 *)(param_1 + 0x239) = 5;
        *(undefined1 *)(param_1 + 0x23b) = 5;
      }
      else if (uVar6 < 20000) {
        *(undefined1 *)(param_1 + 0x239) = 4;
        *(undefined1 *)(param_1 + 0x23b) = 4;
      }
      else if (uVar6 < 30000) {
        *(undefined1 *)(param_1 + 0x239) = 3;
        *(undefined1 *)(param_1 + 0x23b) = 3;
      }
      *(undefined4 *)(param_1 + 0x1f1) = 0;
      *(undefined4 *)(param_1 + 0x1f5) = 0x40000000;
    }
    *(undefined4 *)(param_1 + 0x243) = 0;
  }
  if (*(int *)(param_1 + 0xea) == 0) {
    uVar13 = 0;
    uVar6 = *(uint *)(*(int *)(param_1 + 0xd6) + 0xf6);
    uVar14 = (uint)*(ushort *)(param_1 + 0x9e);
    if (uVar6 <= *(ushort *)(param_1 + 0x9e)) {
      uVar14 = uVar6;
    }
    *(uint *)(param_1 + 0xe2) = uVar14;
    uVar6 = *(uint *)(*(int *)(param_1 + 0xd6) + 0xfa);
    uVar14 = (uint)*(ushort *)(param_1 + 0xa0);
    if (uVar6 <= *(ushort *)(param_1 + 0xa0)) {
      uVar14 = uVar6;
    }
    *(uint *)(param_1 + 0xe6) = uVar14;
    iVar5 = *(int *)(*(int *)(param_1 + 0xd6) + 0x366);
    if ((iVar5 == 1) || (iVar5 == 2)) {
      *(uint *)(param_1 + 0xe6) = uVar14 >> 1 & 0x7ffffffc;
    }
    *(undefined4 *)(param_1 + 0x201) = 0xffffffff;
    if ((*(int *)(param_1 + 0xee) != 4) && (*(int *)(param_1 + 0x235) == 0)) {
      while( true ) {
        local_10 = *(float *)(param_1 + 0xfa);
        uVar14 = *(int *)(param_1 + 0xe2) * *(int *)(param_1 + 0xe6);
        puStack_c = (uint *)0x0;
        uVar6 = ftol();
        if (((uVar14 < uVar6 || uVar14 - uVar6 == 0) &&
            (uVar6 = *(uint *)(*(int *)(param_1 + 0xd6) + 0x36e),
            uVar14 < uVar6 || uVar14 - uVar6 == 0)) ||
           ((*(uint *)(param_1 + 0x24f) <= uVar13 ||
            (iVar5 = *(int *)(*(int *)(param_1 + 0xd6) + 0x2de + uVar13 * 4),
            uVar14 <= (uint)(*(int *)(*(int *)(param_1 + 0xd6) + 0x2fe + uVar13 * 4) * iVar5)))))
        break;
        *(int *)(param_1 + 0xe2) = iVar5;
        *(undefined4 *)(param_1 + 0xe6) =
             *(undefined4 *)(*(int *)(param_1 + 0xd6) + 0x2fe + uVar13 * 4);
        *(uint *)(param_1 + 0x201) = uVar13;
        uVar13 = uVar13 + 1;
      }
    }
    if (*(int *)(param_1 + 0x24f) != 0) {
      iVar5 = *(int *)(param_1 + 0x201);
      if (iVar5 == -1) {
        if (((uint)*(ushort *)(param_1 + 0x9e) < *(uint *)(*(int *)(param_1 + 0xd6) + 0xf6)) ||
           ((uint)*(ushort *)(param_1 + 0xa0) < *(uint *)(*(int *)(param_1 + 0xd6) + 0xfa)))
        goto LAB_67209f09;
      }
      else if (((uint)*(ushort *)(param_1 + 0x9e) <
                *(uint *)(*(int *)(param_1 + 0xd6) + 0x2de + iVar5 * 4)) ||
              ((uint)*(ushort *)(param_1 + 0xa0) <
               *(uint *)(*(int *)(param_1 + 0xd6) + iVar5 * 4 + 0x2fe))) {
LAB_67209f09:
        *(int *)(param_1 + 0x201) = *(int *)(param_1 + 0x24f) + -1;
      }
      if (*(int *)(param_1 + 0x201) != -1) {
        *(undefined4 *)(param_1 + 0xe2) =
             *(undefined4 *)(*(int *)(param_1 + 0xd6) + 0x2de + *(int *)(param_1 + 0x201) * 4);
        *(undefined4 *)(param_1 + 0xe6) =
             *(undefined4 *)(*(int *)(param_1 + 0xd6) + 0x2fe + *(int *)(param_1 + 0x201) * 4);
      }
    }
    if (*(int *)(param_1 + 0x235) == 0) {
      *(undefined4 *)(param_1 + 0x1f1) = 0;
      if (*(int *)(param_1 + 0x229) == 0) {
        *(undefined4 *)(param_1 + 0x1f5) = 0x40100000;
      }
      else {
        *(undefined4 *)(param_1 + 0x1f5) = 0x40200000;
      }
      uVar6 = *(uint *)(param_1 + 0xfa);
      if (uVar6 < 22000) {
        *(undefined4 *)(param_1 + 0x1aa) = 0;
        *(undefined4 *)(param_1 + 0x1ae) = 0x403e0000;
        *(undefined4 *)(param_1 + 0x1b2) = 0;
        *(undefined4 *)(param_1 + 0x1b6) = 0x40000000;
        *(undefined4 *)(param_1 + 0x1e2) = 0;
        *(undefined4 *)(param_1 + 0x1e6) = 0x40340000;
        *(undefined1 *)(param_1 + 0x1ea) = 0xc;
        *(undefined1 *)(param_1 + 0x1ec) = 0xc;
        *(undefined1 *)(param_1 + 0x1eb) = 0x1a;
        if (*(uint *)(param_1 + 0x19a) < 0x32) {
          *(undefined1 *)(param_1 + 0x1eb) = 0x1d;
        }
        if (*(int *)(param_1 + 0x225) != 0) {
          *(undefined1 *)(param_1 + 0x1ec) = 10;
          *(undefined1 *)(param_1 + 0x1eb) = 0x1a;
          *(undefined1 *)(param_1 + 0x23b) = 0xc;
          goto LAB_6720a2a3;
        }
      }
      else if (uVar6 < 55000) {
        *(undefined4 *)(param_1 + 0x1aa) = 0;
        *(undefined4 *)(param_1 + 0x1ae) = 0x40418000;
        *(undefined4 *)(param_1 + 0x1b2) = 0;
        *(undefined4 *)(param_1 + 0x1b6) = 0x40080000;
        *(undefined4 *)(param_1 + 0x1e2) = 0;
        *(undefined4 *)(param_1 + 0x1e6) = 0x402e0000;
        *(undefined1 *)(param_1 + 0x1ea) = 10;
        *(undefined1 *)(param_1 + 0x1ec) = 10;
        *(undefined1 *)(param_1 + 0x1eb) = 0x1b;
        if (*(uint *)(param_1 + 0x19a) < 0x32) {
          *(undefined1 *)(param_1 + 0x1eb) = 0x1f;
        }
        if (*(int *)(param_1 + 0x225) != 0) {
          *(undefined1 *)(param_1 + 0x1ec) = 5;
          *(undefined1 *)(param_1 + 0x1eb) = 0x14;
          *(undefined1 *)(param_1 + 0x23b) = 10;
          *(undefined1 *)(param_1 + 0x23e) = *(undefined1 *)(param_1 + 0x23c);
        }
      }
      else if (uVar6 < 100000) {
        *(undefined4 *)(param_1 + 0x1aa) = 0;
        *(undefined4 *)(param_1 + 0x1ae) = 0x40440000;
        *(undefined4 *)(param_1 + 0x1b2) = 0;
        *(undefined4 *)(param_1 + 0x1b6) = 0x401c0000;
        *(undefined4 *)(param_1 + 0x1e2) = 0;
        *(undefined4 *)(param_1 + 0x1e6) = 0x401c0000;
        *(undefined1 *)(param_1 + 0x1ea) = 8;
        *(undefined1 *)(param_1 + 0x1ec) = 8;
        *(undefined1 *)(param_1 + 0x1eb) = 0x14;
        if (*(int *)(param_1 + 0x225) != 0) {
          *(undefined1 *)(param_1 + 0x1ec) = 4;
          *(undefined1 *)(param_1 + 0x1eb) = 0xf;
          *(undefined1 *)(param_1 + 0x23b) = 8;
          goto LAB_6720a2a3;
        }
      }
      else if (uVar6 < 200000) {
        *(undefined4 *)(param_1 + 0x1aa) = 0;
        *(undefined4 *)(param_1 + 0x1ae) = 0x40440000;
        *(undefined4 *)(param_1 + 0x1b2) = 0;
        *(undefined4 *)(param_1 + 0x1b6) = 0x401c0000;
        *(undefined4 *)(param_1 + 0x1e2) = 0;
        *(undefined4 *)(param_1 + 0x1e6) = 0x40140000;
        *(undefined1 *)(param_1 + 0x1ea) = 6;
        *(undefined1 *)(param_1 + 0x1ec) = 6;
        *(undefined1 *)(param_1 + 0x1eb) = 0xf;
        if (*(int *)(param_1 + 0x225) != 0) {
          *(undefined1 *)(param_1 + 0x1ec) = 4;
          *(undefined1 *)(param_1 + 0x1eb) = 0xc;
          *(undefined1 *)(param_1 + 0x23b) = 6;
          *(undefined1 *)(param_1 + 0x23e) = *(undefined1 *)(param_1 + 0x23c);
        }
      }
      else if (uVar6 < 350000) {
        *(undefined4 *)(param_1 + 0x1aa) = 0;
        *(undefined4 *)(param_1 + 0x1ae) = 0x40490000;
        *(undefined4 *)(param_1 + 0x1b2) = 0;
        *(undefined4 *)(param_1 + 0x1b6) = 0x40340000;
        *(undefined4 *)(param_1 + 0x1e2) = 0;
        *(undefined4 *)(param_1 + 0x1e6) = 0x40100000;
        *(undefined1 *)(param_1 + 0x1ea) = 5;
        *(undefined1 *)(param_1 + 0x1ec) = 5;
        *(undefined1 *)(param_1 + 0x1eb) = 0xb;
        if (*(int *)(param_1 + 0x225) != 0) {
          *(undefined1 *)(param_1 + 0x1ec) = 3;
          *(undefined1 *)(param_1 + 0x1eb) = 9;
          *(undefined1 *)(param_1 + 0x23b) = 5;
LAB_6720a2a3:
          *(undefined1 *)(param_1 + 0x23e) = *(undefined1 *)(param_1 + 0x23c);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1aa) = 0;
        *(undefined4 *)(param_1 + 0x1ae) = 0x404e0000;
        *(undefined4 *)(param_1 + 0x1b2) = 0;
        *(undefined4 *)(param_1 + 0x1b6) = 0x40468000;
        *(undefined4 *)(param_1 + 0x1e2) = 0;
        if (uVar6 < 800000) {
          *(undefined4 *)(param_1 + 0x1e6) = 0x40100000;
          *(undefined1 *)(param_1 + 0x1ea) = 4;
          *(undefined1 *)(param_1 + 0x1ec) = 4;
          *(undefined1 *)(param_1 + 0x1eb) = 9;
          if (*(int *)(param_1 + 0x225) != 0) {
            *(undefined1 *)(param_1 + 0x1ec) = 3;
            *(undefined1 *)(param_1 + 0x1eb) = 7;
            *(undefined1 *)(param_1 + 0x23b) = 4;
            *(undefined1 *)(param_1 + 0x23e) = *(undefined1 *)(param_1 + 0x23c);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x1e6) = 0x40080000;
          *(undefined1 *)(param_1 + 0x1ea) = 4;
          *(undefined1 *)(param_1 + 0x1eb) = 7;
          if (*(int *)(param_1 + 0x225) != 0) {
            *(undefined1 *)(param_1 + 0x1ec) = 2;
            *(undefined1 *)(param_1 + 0x1eb) = 6;
            *(undefined1 *)(param_1 + 0x23b) = 4;
            goto LAB_6720a2a3;
          }
        }
      }
      *(undefined4 *)(param_1 + 0x1f9) = 0x33333333;
      *(undefined4 *)(param_1 + 0x1fd) = 0x3fd33333;
      if (*(uint *)(param_1 + 0x19a) < 0x33) {
        if (*(uint *)(param_1 + 0x19a) < 0x32) {
          dVar3 = *(double *)(param_1 + 0x1aa) * _DAT_67213388;
          *(undefined4 *)(param_1 + 0x1f9) = 0x33333333;
          *(undefined4 *)(param_1 + 0x1fd) = 0x3fe33333;
          *(double *)(param_1 + 0x1aa) = dVar3;
          *(double *)(param_1 + 0x1b2) = *(double *)(param_1 + 0x1b2) * _DAT_67213390;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1f9) = 0x33333333;
        *(undefined4 *)(param_1 + 0x1fd) = 0x3fc33333;
        *(double *)(param_1 + 0x1aa) = *(double *)(param_1 + 0x1aa) + *(double *)(param_1 + 0x1aa);
      }
      dVar3 = *(double *)(param_1 + 0x1e2) * _DAT_67213398;
      *(double *)(param_1 + 0x1ca) = *(double *)(param_1 + 0x1e2);
      *(undefined4 *)(param_1 + 0x1ba) = *(undefined4 *)(param_1 + 0x1b2);
      *(undefined4 *)(param_1 + 0x1be) = *(undefined4 *)(param_1 + 0x1b6);
      *(double *)(param_1 + 0x1da) = dVar3;
    }
    else {
      uVar7 = ftol();
      *(undefined4 *)(param_1 + 0x1c6) = uVar7;
    }
    if ((((*(uint *)(param_1 + 0x32) & 0xf0000000) != 0) && (*(int *)(param_1 + 0x24b) == 0)) &&
       (*(int *)(param_1 + 0x243) == 999)) {
      if ((uint)(*(int *)(param_1 + 0xe2) * *(int *)(param_1 + 0xe6)) < 0x7801) {
        if (_DAT_672133a0 < *(double *)(param_1 + 0x19e)) {
          *(undefined4 *)(param_1 + 0x243) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x243) = 0;
        }
      }
      else if (_DAT_672133a8 < *(double *)(param_1 + 0x19e)) {
        uVar7 = 1;
        if (_DAT_672133a0 < *(double *)(param_1 + 0x19e)) {
          uVar7 = 3;
        }
        *(undefined4 *)(param_1 + 0x243) = uVar7;
      }
      else {
        *(undefined4 *)(param_1 + 0x243) = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0xee) == 4) {
    if (*(int *)(param_1 + 0x235) == 0) {
      *(undefined4 *)(param_1 + 0x1e2) = 0;
      *(undefined4 *)(param_1 + 0x1ca) = 0;
      *(undefined4 *)(param_1 + 0x1e6) = 0x40240000;
      *(undefined4 *)(param_1 + 0x1ce) = 0x40240000;
      *(undefined4 *)(param_1 + 0x1da) = 0;
      *(undefined1 *)(param_1 + 0x239) = 7;
      *(undefined4 *)(param_1 + 0x1de) = 0x402a0000;
      *(undefined1 *)(param_1 + 0x23c) = 0xe;
      *(undefined1 *)(param_1 + 0x23e) = 0xe;
      *(undefined1 *)(param_1 + 0x23d) = 0xe;
      *(undefined1 *)(param_1 + 0x23b) = 7;
      *(undefined1 *)(param_1 + 0x23a) = 7;
      *(undefined1 *)(param_1 + 0x1ec) = 2;
      *(undefined1 *)(param_1 + 0x1eb) = 0x1f;
    }
    *(undefined4 *)(param_1 + 0x253) = 0;
    *(undefined4 *)(param_1 + 0x22d) = 1;
    *(undefined4 *)(param_1 + 0x231) = 0;
    *(undefined4 *)(param_1 + 0x24b) = 1;
    *(undefined4 *)(param_1 + 0x23f) = 0;
    *(undefined4 *)(param_1 + 0x243) = 0;
    *(undefined4 *)(param_1 + 0x17e) = 0;
  }
  if (*(int *)(param_1 + 0xee) != 5) goto LAB_6720af2a;
  lVar15 = 0;
  if (*(int *)(param_1 + 0x263) == 0) {
    pFVar8 = fopen((char *)(*(int *)(param_1 + 0xd6) + 0x1d2),&DAT_672144dc);
    *(FILE **)(param_1 + 0x263) = pFVar8;
    if (pFVar8 == (FILE *)0x0) {
      *(undefined4 *)(param_1 + 0xee) = 6;
    }
  }
  if (*(FILE **)(param_1 + 0x263) != (FILE *)0x0) {
    rewind(*(FILE **)(param_1 + 0x263));
    do {
      pcVar9 = fgets((char *)local_1dc,0x104,*(FILE **)(param_1 + 0x263));
      while (pcVar9 != (char *)0x0) {
        local_1d6 = 0;
        pcVar9 = s_Stream_672145c8;
        pbVar10 = local_1dc;
        do {
          bVar1 = *pbVar10;
          bVar16 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_6720a579:
            iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_6720a57e;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar16 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_6720a579;
          pbVar10 = pbVar10 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_6720a57e:
        if (iVar5 == 0) break;
        pcVar9 = s_stream_672145c0;
        pbVar10 = local_1dc;
        do {
          bVar1 = *pbVar10;
          bVar16 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_6720a5b1:
            iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_6720a5b6;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar16 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_6720a5b1;
          pbVar10 = pbVar10 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_6720a5b6:
        if (iVar5 == 0) break;
        pcVar9 = fgets((char *)local_1dc,0x104,*(FILE **)(param_1 + 0x263));
      }
      lVar15 = ftell(*(FILE **)(param_1 + 0x263));
      iVar5 = FUN_67205dc0((byte *)s_AvgBitrate_67214ca4,(int *)&local_18,
                           *(FILE **)(param_1 + 0x263));
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0xee) = 6;
        fclose(*(FILE **)(param_1 + 0x263));
        *(undefined4 *)(param_1 + 0x263) = 0;
        break;
      }
      if (*(int *)(param_1 + 0x235) != 0) {
        *(float *)(param_1 + 0xfa) = local_18;
        break;
      }
    } while (local_18 != *(float *)(param_1 + 0xfa));
  }
  if (*(FILE **)(param_1 + 0x263) != (FILE *)0x0) {
    fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
    FUN_67205dc0((byte *)s_CodingMode_67214c98,(int *)&local_18,*(FILE **)(param_1 + 0x263));
    if (local_18 == 0.0) {
      fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
      FUN_67205dc0((byte *)s_Codec_67214c90,(int *)&local_18,*(FILE **)(param_1 + 0x263));
      if (local_18 == 4.2039e-44) goto LAB_6720a6f5;
      pFVar8 = *(FILE **)(param_1 + 0x263);
      *(undefined4 *)(param_1 + 0xee) = 6;
    }
    else {
      pFVar8 = *(FILE **)(param_1 + 0x263);
      *(undefined4 *)(param_1 + 0xee) = 6;
    }
    fclose(pFVar8);
    *(undefined4 *)(param_1 + 0x263) = 0;
  }
LAB_6720a6f5:
  if (*(FILE **)(param_1 + 0x263) != (FILE *)0x0) {
    fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
    iVar5 = FUN_67205dc0((byte *)s_MaxBitrate_67214c84,(int *)&local_18,*(FILE **)(param_1 + 0x263))
    ;
    uVar6 = -(uint)(iVar5 != 0) & (uint)local_18;
    *(uint *)(param_1 + 0xfe) = uVar6;
    local_10 = *(float *)(param_1 + 0xfa);
    puStack_c = (uint *)0x0;
    if ((double)uVar6 < (double)(uint)local_10 * _DAT_67213340) {
      *(undefined4 *)(param_1 + 0xfe) = 0;
    }
    fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
    iVar5 = FUN_67205dc0((byte *)s_MinQP_6721458c,(int *)&local_18,*(FILE **)(param_1 + 0x263));
    if (iVar5 != 0) {
      *(char *)(param_1 + 0x239) = SUB41(local_18,0);
      *(char *)(param_1 + 0x23b) = SUB41(local_18,0);
      local_10 = local_18;
      puStack_c = (uint *)0x0;
      local_8 = (float)(uint)local_18 * _DAT_672133b0;
      uVar4 = ftol();
      *(undefined1 *)(param_1 + 0x23a) = uVar4;
    }
    fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
    iVar5 = FUN_67205dc0((byte *)s_MaxQP_67214584,(int *)&local_18,*(FILE **)(param_1 + 0x263));
    if (iVar5 != 0) {
      *(char *)(param_1 + 0x23c) = SUB41(local_18,0);
      *(char *)(param_1 + 0x23e) = SUB41(local_18,0);
      local_10 = local_18;
      puStack_c = (uint *)0x0;
      local_8 = (float)(uint)local_18 * _DAT_672133b0;
      uVar4 = ftol();
      *(undefined1 *)(param_1 + 0x23d) = uVar4;
    }
    if (((*(uint *)(param_1 + 0x32) & 0xf0000000) != 0) && (*(int *)(param_1 + 0x24b) == 0)) {
      fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
      iVar5 = FUN_67205dc0((byte *)s_MaxBFrames_67214c78,(int *)&local_18,
                           *(FILE **)(param_1 + 0x263));
      if (iVar5 != 0) {
        *(float *)(param_1 + 0x243) = local_18;
      }
    }
    fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
    iVar5 = FUN_67205dc0((byte *)s_KeyFrameRate_6721451c,(int *)&local_18,
                         *(FILE **)(param_1 + 0x263));
    if (iVar5 != 0) {
      if (local_18 == 0.0) {
        *(undefined4 *)(param_1 + 0x17a) = 0x7fffffff;
        *(undefined4 *)(param_1 + 0x17e) = 0;
      }
      else {
        *(float *)(param_1 + 0x17a) = local_18;
        *(undefined4 *)(param_1 + 0x17e) = 1;
      }
    }
    fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
    do {
      pcVar9 = fgets((char *)local_1dc,0x104,*(FILE **)(param_1 + 0x263));
      if (pcVar9 == (char *)0x0) {
        pFVar8 = *(FILE **)(param_1 + 0x263);
        *(undefined4 *)(param_1 + 0xee) = 6;
LAB_6720aa8d:
        fclose(pFVar8);
        *(undefined4 *)(param_1 + 0x263) = 0;
        break;
      }
      local_1d6 = 0;
      pcVar9 = s_Stream_672145c8;
      pbVar10 = local_1dc;
      do {
        bVar1 = *pbVar10;
        bVar16 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_6720a9a8:
          iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_6720a9ad;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar16 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_6720a9a8;
        pbVar10 = pbVar10 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_6720a9ad:
      if (iVar5 == 0) {
LAB_6720aa69:
        pFVar8 = *(FILE **)(param_1 + 0x263);
        *(undefined4 *)(param_1 + 0xee) = 6;
        goto LAB_6720aa8d;
      }
      pcVar9 = s_stream_672145c0;
      pbVar10 = local_1dc;
      do {
        bVar1 = *pbVar10;
        bVar16 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_6720a9e4:
          iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_6720a9e9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar16 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_6720a9e4;
        pbVar10 = pbVar10 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_6720a9e9:
      if (iVar5 == 0) goto LAB_6720aa69;
      local_1d7 = 0;
      pcVar9 = s_Scene_672145b8;
      pbVar10 = local_1dc;
      do {
        bVar1 = *pbVar10;
        bVar16 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_6720aa23:
          iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_6720aa28;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar16 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_6720aa23;
        pbVar10 = pbVar10 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_6720aa28:
      if (iVar5 == 0) break;
      pcVar9 = s_scene_672145b0;
      pbVar10 = local_1dc;
      do {
        bVar1 = *pbVar10;
        bVar16 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_6720aa5b:
          iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_6720aa60;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar16 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_6720aa5b;
        pbVar10 = pbVar10 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_6720aa60:
    } while (iVar5 != 0);
    if (*(int *)(param_1 + 0xee) == 5) {
      lVar15 = ftell(*(FILE **)(param_1 + 0x263));
      iVar5 = FUN_67205dc0((byte *)s_StartTime_672145a4,(int *)&local_8,*(FILE **)(param_1 + 0x263))
      ;
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0x26b) = 0x7fffffff;
      }
      else {
        *(float *)(param_1 + 0x26b) = local_8;
      }
      fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
      iVar5 = FUN_67205dc0((byte *)s_EndTime_6721459c,(int *)&local_8,*(FILE **)(param_1 + 0x263));
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0x267) = 0x7fffffff;
      }
      else {
        *(float *)(param_1 + 0x267) = local_8;
      }
      fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
      iVar5 = FUN_67205dc0((byte *)s_KeyQP_67214594,(int *)&local_8,*(FILE **)(param_1 + 0x263));
      if (iVar5 != 0) {
        puStack_c = (uint *)0x0;
        local_10 = local_8;
        *(double *)(param_1 + 0x1e2) = (double)(uint)local_8;
      }
      fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
      iVar5 = FUN_67205dc0((byte *)s_MinQP_6721458c,(int *)&local_8,*(FILE **)(param_1 + 0x263));
      if (iVar5 != 0) {
        *(char *)(param_1 + 0x239) = SUB41(local_8,0);
        *(char *)(param_1 + 0x23b) = SUB41(local_8,0);
        local_10 = local_8;
        puStack_c = (uint *)((float)(uint)local_8 * _DAT_672133b0);
        uVar4 = ftol();
        *(undefined1 *)(param_1 + 0x23a) = uVar4;
      }
      fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
      iVar5 = FUN_67205dc0((byte *)s_MaxQP_67214584,(int *)&local_8,*(FILE **)(param_1 + 0x263));
      if (iVar5 != 0) {
        *(char *)(param_1 + 0x23c) = SUB41(local_8,0);
        *(char *)(param_1 + 0x23e) = SUB41(local_8,0);
        local_10 = local_8;
        puStack_c = (uint *)((float)(uint)local_8 * _DAT_672133b0);
        uVar4 = ftol();
        *(undefined1 *)(param_1 + 0x23d) = uVar4;
      }
      fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
      iVar5 = FUN_67205dc0((byte *)s_MinKeyQP_67214578,(int *)&local_8,*(FILE **)(param_1 + 0x263));
      if (iVar5 != 0) {
        *(undefined1 *)(param_1 + 0x23b) = local_8._0_1_;
      }
      fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
      iVar5 = FUN_67205dc0((byte *)s_MaxKeyQP_6721456c,(int *)&local_8,*(FILE **)(param_1 + 0x263));
      if (iVar5 != 0) {
        *(undefined1 *)(param_1 + 0x23e) = local_8._0_1_;
      }
      fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
      iVar5 = FUN_67205dc0((byte *)s_MaxSuggestedQP_6721455c,(int *)&local_8,
                           *(FILE **)(param_1 + 0x263));
      if (iVar5 != 0) {
        *(undefined1 *)(param_1 + 0x1eb) = local_8._0_1_;
      }
      fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
      iVar5 = FUN_67205dc0((byte *)s_MinSuggestedQP_6721454c,(int *)&local_8,
                           *(FILE **)(param_1 + 0x263));
      if (iVar5 != 0) {
        *(undefined1 *)(param_1 + 0x1ec) = local_8._0_1_;
      }
      fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
      iVar5 = FUN_67205dc0((byte *)s_NumBFrames_67214540,(int *)&local_8,*(FILE **)(param_1 + 0x263)
                          );
      if (iVar5 != 0) {
        *(undefined4 *)(param_1 + 0x24b) = 1;
        *(float *)(param_1 + 0x23f) = local_8;
      }
      fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
      iVar5 = FUN_67205dc0((byte *)s_RPRSize_67214538,(int *)&local_8,*(FILE **)(param_1 + 0x263));
      if (iVar5 != 0) {
        if ((local_8 == 0.0) &&
           (((uint)*(ushort *)(param_1 + 0x9e) < *(uint *)(*(int *)(param_1 + 0xd6) + 0xf6) ||
            ((uint)*(ushort *)(param_1 + 0xa0) < *(uint *)(*(int *)(param_1 + 0xd6) + 0xfa))))) {
          *(int *)(param_1 + 0x201) = *(int *)(param_1 + 0x24f) + -1;
        }
        else {
          *(int *)(param_1 + 0x201) = (int)local_8 + -1;
        }
        if (*(int *)(param_1 + 0x201) == -1) {
          *(undefined4 *)(param_1 + 0xe2) = *(undefined4 *)(*(int *)(param_1 + 0xd6) + 0xf6);
          *(undefined4 *)(param_1 + 0xe6) = *(undefined4 *)(*(int *)(param_1 + 0xd6) + 0xfa);
        }
        else {
          *(undefined4 *)(param_1 + 0xe2) =
               *(undefined4 *)(*(int *)(param_1 + 0xd6) + 0x2de + *(int *)(param_1 + 0x201) * 4);
          *(undefined4 *)(param_1 + 0xe6) =
               *(undefined4 *)(*(int *)(param_1 + 0xd6) + 0x2fe + *(int *)(param_1 + 0x201) * 4);
        }
      }
      fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
      iVar5 = FUN_67205dc0((byte *)s_ForceKeys_6721452c,(int *)&local_8,*(FILE **)(param_1 + 0x263))
      ;
      if (iVar5 != 0) {
        *(uint *)(param_1 + 0x17e) = (uint)(local_8 != 0.0);
      }
      fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
      iVar5 = FUN_67205dc0((byte *)s_KeyFrameRate_6721451c,(int *)&local_8,
                           *(FILE **)(param_1 + 0x263));
      if (iVar5 != 0) {
        if (local_8 == 0.0) {
          *(undefined4 *)(param_1 + 0x17a) = 0x7fffffff;
          *(undefined4 *)(param_1 + 0x17e) = 0;
        }
        else {
          *(float *)(param_1 + 0x17a) = local_8;
          *(undefined4 *)(param_1 + 0x17e) = 1;
        }
      }
      fseek(*(FILE **)(param_1 + 0x263),lVar15,0);
    }
  }
LAB_6720af2a:
  if (*(int *)(param_1 + 0x26f) != 0) {
    local_30 = 4;
    local_2c = 1;
    local_28 = 0;
    iVar5 = FUN_672088e0((void *)(param_1 + 0x32),&local_30);
    if (iVar5 != 0) {
      return 0x80004005;
    }
  }
  this = (uint *)(param_1 + 0x32);
  local_30 = 0x23;
  local_2c = 3;
  local_28 = 1;
  FUN_672088e0(this,&local_30);
  if (*(int *)(param_1 + 0x196) == 0) {
    local_d8 = (uint)*(ushort *)(param_1 + 0x9e);
    local_d4 = (uint)*(ushort *)(param_1 + 0xa0);
    iVar5 = *(int *)(param_1 + 0x24f);
    if (iVar5 != 0) {
      puVar12 = local_d0 + 1;
      puVar11 = (undefined4 *)(*(int *)(param_1 + 0xd6) + 0x2fe);
      do {
        puVar12[-1] = puVar11[-8];
        *puVar12 = *puVar11;
        puVar12 = puVar12 + 2;
        iVar5 = iVar5 + -1;
        puVar11 = puVar11 + 1;
      } while (iVar5 != 0);
    }
    local_24 = 8;
    local_20 = 1;
    local_1c = *(undefined4 *)(*(int *)(param_1 + 0xd6) + 0xf6);
    local_18 = *(float *)(*(int *)(param_1 + 0xd6) + 0xfa);
    iVar5 = FUN_672088e0(this,&local_24);
    if (iVar5 != 0) {
      return 0x80004005;
    }
    local_10 = (float)(*(int *)(param_1 + 0x24f) + 1);
    puStack_c = &local_d8;
    local_14 = 0x24;
    iVar5 = FUN_672088e0(this,&local_14);
    if (iVar5 != 0) {
      return 0x80004005;
    }
  }
  local_90 = 0;
  local_8c = *(undefined4 *)(*(int *)(param_1 + 0xd6) + 0xf6);
  uVar6 = *(uint *)(param_1 + 0x243);
  local_88 = *(undefined4 *)(*(int *)(param_1 + 0xd6) + 0xfa);
  local_50 = uVar6 + 1;
  local_84 = 2;
  local_80 = 5000;
  local_70 = 0;
  local_68 = 3;
  local_54 = 0;
  local_4c = 2;
  if (uVar6 != 0) {
    puVar12 = local_4b;
    for (uVar14 = uVar6 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar12 = 0x1010101;
      puVar12 = puVar12 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar12 = 1;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
  }
  local_34 = &local_90;
  local_3c = 0x3ed;
  local_38 = 1;
  iVar5 = FUN_67208900(this,&local_3c);
  if (iVar5 != 0) {
    return 0x80004005;
  }
  if ((*this & 0xf0000000) != 0) {
    local_1c = 0x3fd;
    local_18 = (float)((*(uint *)(param_1 + 0x10a) | *(int *)(param_1 + 0x10e) << 8) << 0x14 |
                      *(uint *)(param_1 + 0x106));
    *(float *)(param_1 + 0x2e) = local_18;
    iVar5 = FUN_67208900(this,&local_1c);
    if (iVar5 != 0) {
      return 0x80004005;
    }
    puStack_c = (uint *)0x3e9;
    iVar5 = FUN_67208900(this,&puStack_c);
    if (iVar5 != 0) {
      return 0x80004005;
    }
  }
  *(undefined4 *)(param_1 + 0x196) = 1;
  pFVar8 = *(FILE **)(*(int *)(param_1 + 0xd6) + 0x372);
  if (pFVar8 != (FILE *)0x0) {
    iVar5 = *(int *)(param_1 + 0x235);
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0xfa);
      uVar7 = *(undefined4 *)(param_1 + 0xde);
      pcVar9 = s_CODEC_DEBUG_SUMMARY____d___d_bps_67214c00;
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 0xde);
      pcVar9 = s_CODEC_DEBUG_SUMMARY____d__qualit_67214c38;
    }
    fprintf(pFVar8,pcVar9,uVar7,iVar5);
    if (*(int *)(param_1 + 0xee) == 4) {
      pcVar9 = s_Analysis_Pass__67214bf0;
      pFVar8 = *(FILE **)(*(int *)(param_1 + 0xd6) + 0x372);
    }
    else if (*(int *)(param_1 + 0xee) == 5) {
      pcVar9 = s_2nd_Pass__67214be4;
      pFVar8 = *(FILE **)(*(int *)(param_1 + 0xd6) + 0x372);
    }
    else {
      pcVar9 = s_Single_Pass__67214bd4;
      pFVar8 = *(FILE **)(*(int *)(param_1 + 0xd6) + 0x372);
    }
    fprintf(pFVar8,pcVar9);
    if (*(int *)(param_1 + 0x229) == 0) {
      if (*(int *)(param_1 + 0x225) == 0) {
        pcVar9 = s_CBR_Mode__67214bac;
        pFVar8 = *(FILE **)(*(int *)(param_1 + 0xd6) + 0x372);
      }
      else {
        pcVar9 = s_VBR_Mode__67214bb8;
        pFVar8 = *(FILE **)(*(int *)(param_1 + 0xd6) + 0x372);
      }
    }
    else {
      pcVar9 = s_Download_Mode__67214bc4;
      pFVar8 = *(FILE **)(*(int *)(param_1 + 0xd6) + 0x372);
    }
    fprintf(pFVar8,pcVar9);
    fprintf(*(FILE **)(*(int *)(param_1 + 0xd6) + 0x372),s_Max_B_Frames____d_67214b98,
            *(undefined4 *)(param_1 + 0x243));
  }
  return 0;
}


