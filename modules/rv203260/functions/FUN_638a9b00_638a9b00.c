/* Module: rv203260.dll
   Function: FUN_638a9b00
   Address: 638a9b00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_638a9b00(void *param_1)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  FILE *pFVar8;
  char *pcVar9;
  byte *pbVar10;
  int iVar11;
  long _Offset;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  float _Offset_00;
  uint *this;
  uint uVar15;
  code *pcVar16;
  bool bVar17;
  byte local_19c [5];
  undefined1 local_197;
  undefined1 local_196;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  undefined4 local_84 [5];
  undefined4 local_70;
  undefined4 local_5c;
  int local_58;
  undefined1 local_54;
  undefined4 local_53 [3];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  float local_30;
  float fStack_2c;
  undefined4 local_28;
  undefined8 local_24;
  uint local_1c [5];
  float fStack_8;
  
  FUN_638a9950(param_1,2);
  iVar11 = *(int *)((int)param_1 + 0xd6);
  if ((((*(int *)(iVar11 + 0xb4) == 0) && (*(int *)(iVar11 + 0xb8) == 0)) &&
      (*(int *)(iVar11 + 0xbc) == 0)) || (*(int *)((int)param_1 + 0xee) == 4)) {
    FUN_638a5660(iVar11);
  }
  else {
    FUN_638a55a0(iVar11);
  }
  iVar11 = *(int *)(*(int *)((int)param_1 + 0xd6) + 0x35e);
  if (((iVar11 == 1) || (iVar11 == 2)) &&
     ((*(int *)((int)param_1 + 0x10a) == 1 || (*(int *)((int)param_1 + 0x2a8) == 0)))) {
    *(undefined4 *)(*(int *)((int)param_1 + 0xd6) + 0x35e) = 3;
    iVar11 = *(int *)((int)param_1 + 0xd6);
    if (*(int *)(iVar11 + 0x1ba) == 0) {
      pvVar5 = malloc((uint)(*(int *)(iVar11 + 0xfa) * *(int *)(iVar11 + 0xf6) * 3) >> 1);
      *(void **)(*(int *)((int)param_1 + 0xd6) + 0x1ba) = pvVar5;
    }
  }
  local_24 = (ulonglong)*(uint *)((int)param_1 + 0xfe);
  dVar2 = (double)local_24;
  local_24 = (ulonglong)*(uint *)((int)param_1 + 0xfa);
  if (((double)local_24 * _DAT_638b3340 < dVar2) || (6000 < *(uint *)((int)param_1 + 0x102))) {
    *(undefined4 *)((int)param_1 + 0x235) = 1;
  }
  if (*(int *)((int)param_1 + 0xea) == 2) {
    FUN_638a8960((void *)((int)param_1 + 0x32),0);
  }
  if ((*(int *)((int)param_1 + 0xea) == 3) || (*(int *)((int)param_1 + 0xea) == 2)) {
    if (*(int *)((int)param_1 + 599) != 0) {
      if (*(int *)((int)param_1 + 0x209) == -1) {
        if (((uint)*(ushort *)((int)param_1 + 0x9e) <
             *(uint *)(*(int *)((int)param_1 + 0xd6) + 0xf6)) ||
           ((uint)*(ushort *)((int)param_1 + 0xa0) < *(uint *)(*(int *)((int)param_1 + 0xd6) + 0xfa)
           )) goto LAB_638a9c87;
      }
      else {
        iVar11 = *(int *)((int)param_1 + 0xd6) + *(int *)((int)param_1 + 0x209) * 4;
        if (((uint)*(ushort *)((int)param_1 + 0x9e) < *(uint *)(iVar11 + 0x2d6)) ||
           ((uint)*(ushort *)((int)param_1 + 0xa0) < *(uint *)(iVar11 + 0x2f6))) {
LAB_638a9c87:
          *(int *)((int)param_1 + 0x209) = *(int *)((int)param_1 + 599) + -1;
        }
      }
      if (*(int *)((int)param_1 + 0x209) != -1) {
        *(undefined4 *)((int)param_1 + 0xe2) =
             *(undefined4 *)
              (*(int *)((int)param_1 + 0xd6) + 0x2d6 + *(int *)((int)param_1 + 0x209) * 4);
        *(undefined4 *)((int)param_1 + 0xe6) =
             *(undefined4 *)
              (*(int *)((int)param_1 + 0xd6) + 0x2f6 + *(int *)((int)param_1 + 0x209) * 4);
      }
    }
    local_24 = (ulonglong)*(uint *)((int)param_1 + 0xe6);
    dVar2 = (double)local_24 * (double)*(int *)((int)param_1 + 0xe2);
    if ((double)_DAT_638b3348 <= dVar2) {
      if (dVar2 <= (double)_DAT_638b3350) {
        dVar2 = ((dVar2 - (double)_DAT_638b3348) * (double)_DAT_638b3358 * (double)_DAT_638b3354 -
                ((double)_DAT_638b3350 - dVar2) * (double)_DAT_638b3358 * (double)_DAT_638b335c) *
                dVar2;
      }
      else {
        dVar2 = dVar2 * (double)_DAT_638b3354;
      }
    }
    else {
      dVar2 = dVar2 * (double)_DAT_638b334c;
    }
    local_24 = (ulonglong)*(uint *)((int)param_1 + 0xfa);
    dVar3 = (double)local_24 / dVar2;
    *(double *)((int)param_1 + 0x1a6) = dVar3;
    if (*(int *)(*(int *)((int)param_1 + 0xd6) + 0xfe) == 1) {
      if (dVar3 < _DAT_638b3360) {
        dVar3 = _DAT_638b3360;
      }
      *(double *)((int)param_1 + 0x1a6) = dVar3;
      local_24 = (ulonglong)*(uint *)((int)param_1 + 0xfa);
      dVar2 = (double)local_24 / dVar3;
    }
    if (*(uint *)((int)param_1 + 0xfa) < 22000) {
      *(undefined4 *)((int)param_1 + 0x1ea) = 0;
      *(undefined4 *)((int)param_1 + 0x1ee) = 0x40240000;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x1ea) = 0;
      if (*(uint *)((int)param_1 + 0xfa) < 55000) {
        *(undefined4 *)((int)param_1 + 0x1ee) = 0x401c0000;
      }
      else {
        *(undefined4 *)((int)param_1 + 0x1ee) = 0x40140000;
      }
    }
    local_24 = (ulonglong)*(uint *)((int)param_1 + 0xfa);
    *(double *)((int)param_1 + 0x1a6) = (double)local_24 / dVar2;
    uVar6 = ftol();
    *(undefined4 *)((int)param_1 + 0x1ae) = uVar6;
    *(undefined4 *)((int)param_1 + 0x24b) = 0;
  }
  if (*(int *)((int)param_1 + 0xea) == 0) {
    if ((*(int *)((int)param_1 + 0x10a) != 1) && (*(int *)((int)param_1 + 0x2a8) != 0)) {
      uVar14 = 0;
      uVar7 = *(uint *)(*(int *)((int)param_1 + 0xd6) + 0xf6);
      uVar15 = (uint)*(ushort *)((int)param_1 + 0x9e);
      if (uVar7 <= *(ushort *)((int)param_1 + 0x9e)) {
        uVar15 = uVar7;
      }
      *(uint *)((int)param_1 + 0xe2) = uVar15;
      uVar7 = *(uint *)(*(int *)((int)param_1 + 0xd6) + 0xfa);
      uVar15 = (uint)*(ushort *)((int)param_1 + 0xa0);
      if (uVar7 <= *(ushort *)((int)param_1 + 0xa0)) {
        uVar15 = uVar7;
      }
      *(uint *)((int)param_1 + 0xe6) = uVar15;
      iVar11 = *(int *)(*(int *)((int)param_1 + 0xd6) + 0x35e);
      if ((iVar11 == 1) || (iVar11 == 2)) {
        *(uint *)((int)param_1 + 0xe6) = uVar15 >> 1 & 0x7ffffffc;
      }
      *(undefined4 *)((int)param_1 + 0x209) = 0xffffffff;
      while( true ) {
        uVar15 = *(int *)((int)param_1 + 0xe2) * *(int *)((int)param_1 + 0xe6);
        local_24 = (ulonglong)*(uint *)((int)param_1 + 0xfa);
        uVar7 = ftol();
        if ((((uVar15 < uVar7 || uVar15 - uVar7 == 0) && (uVar15 < 0x32001)) ||
            (*(uint *)((int)param_1 + 599) <= uVar14)) ||
           (iVar11 = *(int *)(*(int *)((int)param_1 + 0xd6) + 0x2d6 + uVar14 * 4),
           uVar15 <= (uint)(*(int *)(*(int *)((int)param_1 + 0xd6) + 0x2f6 + uVar14 * 4) * iVar11)))
        break;
        *(int *)((int)param_1 + 0xe2) = iVar11;
        *(undefined4 *)((int)param_1 + 0xe6) =
             *(undefined4 *)(*(int *)((int)param_1 + 0xd6) + 0x2f6 + uVar14 * 4);
        *(uint *)((int)param_1 + 0x209) = uVar14;
        uVar14 = uVar14 + 1;
      }
      if (*(int *)((int)param_1 + 599) != 0) {
        iVar11 = *(int *)((int)param_1 + 0x209);
        if (iVar11 == -1) {
          if (((uint)*(ushort *)((int)param_1 + 0x9e) <
               *(uint *)(*(int *)((int)param_1 + 0xd6) + 0xf6)) ||
             ((uint)*(ushort *)((int)param_1 + 0xa0) <
              *(uint *)(*(int *)((int)param_1 + 0xd6) + 0xfa))) goto LAB_638a9fd3;
        }
        else if (((uint)*(ushort *)((int)param_1 + 0x9e) <
                  *(uint *)(*(int *)((int)param_1 + 0xd6) + 0x2d6 + iVar11 * 4)) ||
                ((uint)*(ushort *)((int)param_1 + 0xa0) <
                 *(uint *)(*(int *)((int)param_1 + 0xd6) + iVar11 * 4 + 0x2f6))) {
LAB_638a9fd3:
          *(int *)((int)param_1 + 0x209) = *(int *)((int)param_1 + 599) + -1;
        }
        if (*(int *)((int)param_1 + 0x209) != -1) {
          *(undefined4 *)((int)param_1 + 0xe2) =
               *(undefined4 *)
                (*(int *)((int)param_1 + 0xd6) + 0x2d6 + *(int *)((int)param_1 + 0x209) * 4);
          *(undefined4 *)((int)param_1 + 0xe6) =
               *(undefined4 *)
                (*(int *)((int)param_1 + 0xd6) + 0x2f6 + *(int *)((int)param_1 + 0x209) * 4);
        }
      }
    }
    uVar6 = 0;
    *(undefined4 *)((int)param_1 + 0x1f9) = 0;
    *(undefined4 *)((int)param_1 + 0x1fd) = 0x40100000;
    uVar7 = *(uint *)((int)param_1 + 0xfa);
    if (uVar7 < 22000) {
      *(undefined4 *)((int)param_1 + 0x1b2) = 0;
      *(undefined4 *)((int)param_1 + 0x1b6) = 0x403e0000;
      *(undefined4 *)((int)param_1 + 0x1ba) = 0;
      *(undefined4 *)((int)param_1 + 0x1be) = 0x40000000;
      *(undefined4 *)((int)param_1 + 0x1ea) = 0;
      *(undefined4 *)((int)param_1 + 0x1ee) = 0x40340000;
      *(undefined1 *)((int)param_1 + 0x1f2) = 10;
      *(undefined1 *)((int)param_1 + 500) = 7;
      *(undefined1 *)((int)param_1 + 499) = 0x1a;
      if (*(uint *)((int)param_1 + 0x1a2) < 0x32) {
        *(undefined1 *)((int)param_1 + 499) = 0x1d;
      }
      if (*(int *)((int)param_1 + 0x235) != 0) {
        *(undefined1 *)((int)param_1 + 500) = 10;
        *(undefined1 *)((int)param_1 + 499) = 0x1a;
        goto LAB_638aa2f0;
      }
    }
    else if (uVar7 < 55000) {
      *(undefined4 *)((int)param_1 + 0x1b2) = 0;
      *(undefined4 *)((int)param_1 + 0x1b6) = 0x40418000;
      *(undefined4 *)((int)param_1 + 0x1ba) = 0;
      *(undefined4 *)((int)param_1 + 0x1be) = 0x40080000;
      *(undefined4 *)((int)param_1 + 0x1ea) = 0;
      *(undefined4 *)((int)param_1 + 0x1ee) = 0x402e0000;
      *(undefined1 *)((int)param_1 + 0x1f2) = 7;
      *(undefined1 *)((int)param_1 + 500) = 5;
      *(undefined1 *)((int)param_1 + 499) = 0x1b;
      if (*(uint *)((int)param_1 + 0x1a2) < 0x32) {
        *(undefined1 *)((int)param_1 + 499) = 0x1f;
      }
      if (*(int *)((int)param_1 + 0x235) != 0) {
        *(undefined1 *)((int)param_1 + 500) = 5;
        *(undefined1 *)((int)param_1 + 499) = 0x14;
        goto LAB_638aa2f0;
      }
    }
    else if (uVar7 < 100000) {
      *(undefined4 *)((int)param_1 + 0x1b2) = 0;
      *(undefined4 *)((int)param_1 + 0x1b6) = 0x40440000;
      *(undefined4 *)((int)param_1 + 0x1ba) = 0;
      *(undefined4 *)((int)param_1 + 0x1be) = 0x401c0000;
      *(undefined4 *)((int)param_1 + 0x1ea) = 0;
      *(undefined4 *)((int)param_1 + 0x1ee) = 0x401c0000;
      *(undefined1 *)((int)param_1 + 0x1f2) = 6;
      *(undefined1 *)((int)param_1 + 500) = 4;
      *(undefined1 *)((int)param_1 + 499) = 0x14;
      if (*(int *)((int)param_1 + 0x235) != 0) {
        *(undefined1 *)((int)param_1 + 500) = 4;
        *(undefined1 *)((int)param_1 + 499) = 0xf;
        goto LAB_638aa2f0;
      }
    }
    else if (uVar7 < 200000) {
      *(undefined4 *)((int)param_1 + 0x1b2) = 0;
      *(undefined4 *)((int)param_1 + 0x1b6) = 0x40440000;
      *(undefined4 *)((int)param_1 + 0x1ba) = 0;
      *(undefined4 *)((int)param_1 + 0x1be) = 0x401c0000;
      *(undefined4 *)((int)param_1 + 0x1ea) = 0;
      *(undefined4 *)((int)param_1 + 0x1ee) = 0x40140000;
      *(undefined1 *)((int)param_1 + 0x1f2) = 3;
      *(undefined1 *)((int)param_1 + 500) = 4;
      *(undefined1 *)((int)param_1 + 499) = 0xf;
      if (*(int *)((int)param_1 + 0x235) != 0) {
        *(undefined1 *)((int)param_1 + 500) = 4;
        *(undefined1 *)((int)param_1 + 499) = 0xc;
        goto LAB_638aa2f0;
      }
    }
    else if (uVar7 < 350000) {
      *(undefined4 *)((int)param_1 + 0x1b2) = 0;
      *(undefined4 *)((int)param_1 + 0x1b6) = 0x40490000;
      *(undefined4 *)((int)param_1 + 0x1ba) = 0;
      *(undefined4 *)((int)param_1 + 0x1be) = 0x40340000;
      *(undefined4 *)((int)param_1 + 0x1ea) = 0;
      *(undefined4 *)((int)param_1 + 0x1ee) = 0x40100000;
      *(undefined1 *)((int)param_1 + 0x1f2) = 2;
      *(undefined1 *)((int)param_1 + 500) = 3;
      *(undefined1 *)((int)param_1 + 499) = 0xb;
      if (*(int *)((int)param_1 + 0x235) != 0) {
        *(undefined1 *)((int)param_1 + 500) = 3;
        *(undefined1 *)((int)param_1 + 499) = 9;
        goto LAB_638aa2f0;
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x1b2) = 0;
      *(undefined4 *)((int)param_1 + 0x1b6) = 0x404e0000;
      *(undefined4 *)((int)param_1 + 0x1ba) = 0;
      *(undefined4 *)((int)param_1 + 0x1be) = 0x40468000;
      *(undefined4 *)((int)param_1 + 0x1ea) = 0;
      if (uVar7 < 800000) {
        *(undefined4 *)((int)param_1 + 0x1ee) = 0x40100000;
        *(undefined1 *)((int)param_1 + 0x1f2) = 2;
        *(undefined1 *)((int)param_1 + 500) = 3;
        *(undefined1 *)((int)param_1 + 499) = 9;
        if (*(int *)((int)param_1 + 0x235) != 0) {
          *(undefined1 *)((int)param_1 + 500) = 3;
          *(undefined1 *)((int)param_1 + 499) = 7;
LAB_638aa2f0:
          *(undefined1 *)((int)param_1 + 0x243) = *(undefined1 *)((int)param_1 + 0x1f2);
          *(undefined1 *)((int)param_1 + 0x246) = *(undefined1 *)((int)param_1 + 0x244);
        }
      }
      else {
        *(undefined4 *)((int)param_1 + 0x1ee) = 0x40080000;
        *(undefined1 *)((int)param_1 + 0x1f2) = 2;
        *(undefined1 *)((int)param_1 + 499) = 7;
        if (*(int *)((int)param_1 + 0x235) != 0) {
          *(undefined1 *)((int)param_1 + 500) = 2;
          *(undefined1 *)((int)param_1 + 499) = 6;
          goto LAB_638aa2f0;
        }
      }
    }
    *(undefined4 *)((int)param_1 + 0x201) = 0x33333333;
    *(undefined4 *)((int)param_1 + 0x205) = 0x3fd33333;
    if (*(uint *)((int)param_1 + 0x1a2) < 0x33) {
      if (*(uint *)((int)param_1 + 0x1a2) < 0x32) {
        *(double *)((int)param_1 + 0x1b2) = *(double *)((int)param_1 + 0x1b2) * _DAT_638b3388;
        *(double *)((int)param_1 + 0x1ba) = *(double *)((int)param_1 + 0x1ba) * _DAT_638b3390;
        dVar2 = *(double *)((int)param_1 + 0x201) + *(double *)((int)param_1 + 0x201);
        goto LAB_638aa371;
      }
    }
    else {
      *(double *)((int)param_1 + 0x1b2) =
           *(double *)((int)param_1 + 0x1b2) + *(double *)((int)param_1 + 0x1b2);
      dVar2 = *(double *)((int)param_1 + 0x201) * _DAT_638b3388;
LAB_638aa371:
      *(double *)((int)param_1 + 0x201) = dVar2;
    }
    *(undefined4 *)((int)param_1 + 0x1c2) = *(undefined4 *)((int)param_1 + 0x1ba);
    *(undefined4 *)((int)param_1 + 0x1c6) = *(undefined4 *)((int)param_1 + 0x1be);
    dVar2 = *(double *)((int)param_1 + 0x1ea) * _DAT_638b3398;
    *(double *)((int)param_1 + 0x1d2) = *(double *)((int)param_1 + 0x1ea);
    *(double *)((int)param_1 + 0x1e2) = dVar2;
    if ((((*(uint *)((int)param_1 + 0x32) & 0xf0000000) != 0) &&
        (*(int *)((int)param_1 + 0x253) == 0)) && (*(int *)((int)param_1 + 0x24b) == 999)) {
      if ((uint)(*(int *)((int)param_1 + 0xe2) * *(int *)((int)param_1 + 0xe6)) < 0x7801) {
        if (_DAT_638b33a0 < *(double *)((int)param_1 + 0x1a6)) {
          uVar6 = 1;
        }
      }
      else if ((_DAT_638b33a8 < *(double *)((int)param_1 + 0x1a6)) &&
              (uVar6 = 1, _DAT_638b33a0 < *(double *)((int)param_1 + 0x1a6))) {
        uVar6 = 3;
      }
      *(undefined4 *)((int)param_1 + 0x24b) = uVar6;
    }
  }
  if (*(int *)((int)param_1 + 0xee) == 4) {
    *(undefined4 *)((int)param_1 + 0x1ea) = 0;
    *(undefined4 *)((int)param_1 + 0x1ee) = 0x40240000;
    *(undefined4 *)((int)param_1 + 0x1d2) = 0;
    *(undefined4 *)((int)param_1 + 0x1d6) = 0x40240000;
    dVar2 = *(double *)((int)param_1 + 0x1ea) * _DAT_638b33b0;
    *(undefined1 *)((int)param_1 + 0x245) = 0xe;
    *(undefined1 *)((int)param_1 + 0x241) = 7;
    *(undefined1 *)((int)param_1 + 0x242) = 7;
    *(undefined4 *)((int)param_1 + 0x27f) = 0;
    *(undefined4 *)((int)param_1 + 0x25b) = 0;
    *(double *)((int)param_1 + 0x1e2) = dVar2;
    *(undefined1 *)((int)param_1 + 0x244) = 0xe;
    *(undefined1 *)((int)param_1 + 0x246) = 0xe;
    *(undefined1 *)((int)param_1 + 0x243) = 7;
    *(undefined1 *)((int)param_1 + 500) = 2;
    *(undefined1 *)((int)param_1 + 499) = 0x1f;
    *(undefined4 *)((int)param_1 + 0x239) = 1;
    *(undefined4 *)((int)param_1 + 0x23d) = 0;
    *(undefined4 *)((int)param_1 + 0x253) = 1;
    *(undefined4 *)((int)param_1 + 0x247) = 0;
    *(undefined4 *)((int)param_1 + 0x24b) = 0;
    *(undefined4 *)((int)param_1 + 0x186) = 0;
  }
  if (*(int *)((int)param_1 + 0xee) == 5) {
    _Offset_00 = 0.0;
    fStack_2c = 0.0;
    local_34 = 0;
    local_38 = 0xb0;
    local_24 = CONCAT44(0x90,(undefined4)local_24);
    if (*(int *)((int)param_1 + 0x26b) == 0) {
      pFVar8 = fopen((char *)(*(int *)((int)param_1 + 0xd6) + 0x1ca),&DAT_638b43e0);
      *(FILE **)((int)param_1 + 0x26b) = pFVar8;
      if (pFVar8 == (FILE *)0x0) {
        *(undefined4 *)((int)param_1 + 0xee) = 6;
      }
    }
    if (*(int *)((int)param_1 + 0x26b) != 0) {
      do {
        pcVar9 = fgets((char *)local_19c,0x104,*(FILE **)((int)param_1 + 0x26b));
        while (pcVar9 != (char *)0x0) {
          local_196 = 0;
          pcVar9 = s_Stream_638b44cc;
          pbVar10 = local_19c;
          do {
            bVar1 = *pbVar10;
            bVar17 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_638aa59a:
              iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
              goto LAB_638aa59f;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar10[1];
            bVar17 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_638aa59a;
            pbVar10 = pbVar10 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          iVar11 = 0;
LAB_638aa59f:
          if (iVar11 == 0) break;
          pcVar9 = s_stream_638b44c4;
          pbVar10 = local_19c;
          do {
            bVar1 = *pbVar10;
            bVar17 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_638aa5d6:
              iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
              goto LAB_638aa5db;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar10[1];
            bVar17 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_638aa5d6;
            pbVar10 = pbVar10 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          iVar11 = 0;
LAB_638aa5db:
          if (iVar11 == 0) break;
          pcVar9 = fgets((char *)local_19c,0x104,*(FILE **)((int)param_1 + 0x26b));
        }
        _Offset_00 = (float)ftell(*(FILE **)((int)param_1 + 0x26b));
        fStack_2c = _Offset_00;
        iVar11 = FUN_638a59f0((byte *)s_AvgBitrate_638b4cc8,(int *)local_1c,
                              *(FILE **)((int)param_1 + 0x26b));
        if (iVar11 == 0) {
          *(undefined4 *)((int)param_1 + 0xee) = 6;
          fclose(*(FILE **)((int)param_1 + 0x26b));
          *(undefined4 *)((int)param_1 + 0x26b) = 0;
          break;
        }
      } while (local_1c[0] != *(uint *)((int)param_1 + 0xfa));
    }
    pcVar16 = fseek_exref;
    if (*(FILE **)((int)param_1 + 0x26b) != (FILE *)0x0) {
      fseek(*(FILE **)((int)param_1 + 0x26b),(long)_Offset_00,0);
      FUN_638a59f0((byte *)s_CodingMode_638b4cbc,(int *)local_1c,*(FILE **)((int)param_1 + 0x26b));
      if (local_1c[0] == 0) {
        fseek(*(FILE **)((int)param_1 + 0x26b),(long)_Offset_00,0);
        FUN_638a59f0((byte *)s_Codec_638b4cb4,(int *)local_1c,*(FILE **)((int)param_1 + 0x26b));
        if (local_1c[0] == 200) {
          FUN_638a9950(param_1,1);
        }
        else if (local_1c[0] != 0xc9) {
          pFVar8 = *(FILE **)((int)param_1 + 0x26b);
          *(undefined4 *)((int)param_1 + 0xee) = 6;
          goto LAB_638aa70e;
        }
      }
      else {
        pFVar8 = *(FILE **)((int)param_1 + 0x26b);
        *(undefined4 *)((int)param_1 + 0xee) = 6;
LAB_638aa70e:
        fclose(pFVar8);
        *(undefined4 *)((int)param_1 + 0x26b) = 0;
      }
    }
    if (*(FILE **)((int)param_1 + 0x26b) != (FILE *)0x0) {
      fseek(*(FILE **)((int)param_1 + 0x26b),(long)_Offset_00,0);
      iVar11 = FUN_638a59f0((byte *)s_MaxBitrate_638b4ca8,(int *)local_1c,
                            *(FILE **)((int)param_1 + 0x26b));
      uVar7 = -(uint)(iVar11 != 0) & local_1c[0];
      *(uint *)((int)param_1 + 0xfe) = uVar7;
      local_1c[4] = *(uint *)((int)param_1 + 0xfa);
      fStack_8 = 0.0;
      if ((double)uVar7 < (double)local_1c[4] * _DAT_638b3340) {
        *(undefined4 *)((int)param_1 + 0xfe) = 0;
      }
      fseek(*(FILE **)((int)param_1 + 0x26b),(long)_Offset_00,0);
      iVar11 = FUN_638a59f0((byte *)s_MinQP_638b4490,(int *)local_1c,
                            *(FILE **)((int)param_1 + 0x26b));
      if (iVar11 != 0) {
        *(char *)((int)param_1 + 0x241) = (char)local_1c[0];
        *(char *)((int)param_1 + 0x243) = (char)local_1c[0];
        local_1c[4] = local_1c[0];
        fStack_8 = (float)local_1c[0] * _DAT_638b33b8;
        uVar4 = ftol();
        *(undefined1 *)((int)param_1 + 0x242) = uVar4;
      }
      fseek(*(FILE **)((int)param_1 + 0x26b),(long)_Offset_00,0);
      iVar11 = FUN_638a59f0((byte *)s_MaxQP_638b4488,(int *)local_1c,
                            *(FILE **)((int)param_1 + 0x26b));
      if (iVar11 != 0) {
        *(char *)((int)param_1 + 0x244) = (char)local_1c[0];
        *(char *)((int)param_1 + 0x246) = (char)local_1c[0];
        local_1c[4] = local_1c[0];
        fStack_8 = (float)local_1c[0] * _DAT_638b33b8;
        uVar4 = ftol();
        *(undefined1 *)((int)param_1 + 0x245) = uVar4;
      }
      if (((*(uint *)((int)param_1 + 0x32) & 0xf0000000) != 0) &&
         (*(int *)((int)param_1 + 0x253) == 0)) {
        fseek(*(FILE **)((int)param_1 + 0x26b),(long)_Offset_00,0);
        iVar11 = FUN_638a59f0((byte *)s_MaxBFrames_638b4c9c,(int *)local_1c,
                              *(FILE **)((int)param_1 + 0x26b));
        if (iVar11 != 0) {
          *(uint *)((int)param_1 + 0x24b) = local_1c[0];
        }
      }
      fseek(*(FILE **)((int)param_1 + 0x26b),(long)_Offset_00,0);
      iVar11 = FUN_638a59f0((byte *)s_KeyFrameRate_638b4420,(int *)local_1c,
                            *(FILE **)((int)param_1 + 0x26b));
      if (iVar11 != 0) {
        if (local_1c[0] == 0) {
          *(undefined4 *)((int)param_1 + 0x182) = 0x7fffffff;
          *(undefined4 *)((int)param_1 + 0x186) = 0;
        }
        else {
          *(uint *)((int)param_1 + 0x182) = local_1c[0];
          *(undefined4 *)((int)param_1 + 0x186) = 1;
        }
      }
      fseek(*(FILE **)((int)param_1 + 0x26b),(long)_Offset_00,0);
      iVar11 = FUN_638a59f0((byte *)s_NumberRPRSizes_638b4c8c,(int *)&local_34,
                            *(FILE **)((int)param_1 + 0x26b));
      if (((iVar11 != 0) && (*(int *)((int)param_1 + 0x10a) != 1)) &&
         (*(int *)((int)param_1 + 0x2a8) != 0)) {
        FUN_638a19b0(*(int *)((int)param_1 + 0xd6));
        uVar7 = 0;
        if (local_34 != 0) {
          do {
            FUN_638a5b50((int *)&local_38,*(FILE **)((int)param_1 + 0x26b));
            FUN_638a5b50((int *)((int)&local_24 + 4),*(FILE **)((int)param_1 + 0x26b));
            *(uint *)(*(int *)((int)param_1 + 0xd6) + 0x2d6 + uVar7 * 4) =
                 local_38 + 0xf & 0xfffffff0;
            *(uint *)(*(int *)((int)param_1 + 0xd6) + 0x2f6 + uVar7 * 4) =
                 local_24._4_4_ + 0xfU & 0xfffffff0;
            pvVar5 = malloc((uint)(*(int *)(*(int *)((int)param_1 + 0xd6) + 0x2d6 + uVar7 * 4) *
                                   *(int *)(*(int *)((int)param_1 + 0xd6) + uVar7 * 4 + 0x2f6) * 3)
                            >> 1);
            *(void **)(*(int *)((int)param_1 + 0xd6) + 0x316 + uVar7 * 4) = pvVar5;
            uVar7 = uVar7 + 1;
            _Offset_00 = fStack_2c;
          } while (uVar7 < local_34);
        }
        *(uint *)((int)param_1 + 599) = local_34;
        *(uint *)(*(int *)((int)param_1 + 0xd6) + 0x2d2) = local_34;
        pcVar16 = fseek_exref;
        *(uint *)((int)param_1 + 0x2a8) = (uint)(local_34 != 0);
      }
      (*pcVar16)(*(undefined4 *)((int)param_1 + 0x26b),_Offset_00,0);
      do {
        pcVar9 = fgets((char *)local_19c,0x104,*(FILE **)((int)param_1 + 0x26b));
        if (pcVar9 == (char *)0x0) {
          pFVar8 = *(FILE **)((int)param_1 + 0x26b);
          *(undefined4 *)((int)param_1 + 0xee) = 6;
LAB_638aabee:
          fclose(pFVar8);
          *(undefined4 *)((int)param_1 + 0x26b) = 0;
          break;
        }
        local_196 = 0;
        pcVar9 = s_Stream_638b44cc;
        pbVar10 = local_19c;
        do {
          bVar1 = *pbVar10;
          bVar17 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_638aaaf9:
            iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_638aaafe;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar17 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_638aaaf9;
          pbVar10 = pbVar10 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar11 = 0;
LAB_638aaafe:
        if (iVar11 == 0) {
LAB_638aabca:
          pFVar8 = *(FILE **)((int)param_1 + 0x26b);
          *(undefined4 *)((int)param_1 + 0xee) = 6;
          goto LAB_638aabee;
        }
        pcVar9 = s_stream_638b44c4;
        pbVar10 = local_19c;
        do {
          bVar1 = *pbVar10;
          bVar17 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_638aab39:
            iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_638aab3e;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar17 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_638aab39;
          pbVar10 = pbVar10 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar11 = 0;
LAB_638aab3e:
        if (iVar11 == 0) goto LAB_638aabca;
        local_197 = 0;
        pcVar9 = s_Scene_638b44bc;
        pbVar10 = local_19c;
        do {
          bVar1 = *pbVar10;
          bVar17 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_638aab80:
            iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_638aab85;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar17 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_638aab80;
          pbVar10 = pbVar10 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar11 = 0;
LAB_638aab85:
        if (iVar11 == 0) break;
        pcVar9 = s_scene_638b44b4;
        pbVar10 = local_19c;
        do {
          bVar1 = *pbVar10;
          bVar17 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_638aabbc:
            iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_638aabc1;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar17 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_638aabbc;
          pbVar10 = pbVar10 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar11 = 0;
LAB_638aabc1:
      } while (iVar11 != 0);
      if (*(int *)((int)param_1 + 0xee) == 5) {
        _Offset = ftell(*(FILE **)((int)param_1 + 0x26b));
        iVar11 = FUN_638a59f0((byte *)s_StartTime_638b44a8,(int *)&fStack_8,
                              *(FILE **)((int)param_1 + 0x26b));
        if (iVar11 == 0) {
          *(undefined4 *)((int)param_1 + 0x273) = 0x7fffffff;
        }
        else {
          *(float *)((int)param_1 + 0x273) = fStack_8;
        }
        fseek(*(FILE **)((int)param_1 + 0x26b),_Offset,0);
        iVar11 = FUN_638a59f0((byte *)s_EndTime_638b44a0,(int *)&fStack_8,
                              *(FILE **)((int)param_1 + 0x26b));
        if (iVar11 == 0) {
          *(undefined4 *)((int)param_1 + 0x26f) = 0x7fffffff;
        }
        else {
          *(float *)((int)param_1 + 0x26f) = fStack_8;
        }
        fseek(*(FILE **)((int)param_1 + 0x26b),_Offset,0);
        iVar11 = FUN_638a59f0((byte *)s_KeyQP_638b4498,(int *)&fStack_8,
                              *(FILE **)((int)param_1 + 0x26b));
        if (iVar11 != 0) {
          fStack_2c = 0.0;
          local_30 = fStack_8;
          *(double *)((int)param_1 + 0x1ea) = (double)(uint)fStack_8;
        }
        fseek(*(FILE **)((int)param_1 + 0x26b),_Offset,0);
        iVar11 = FUN_638a59f0((byte *)s_MinQP_638b4490,(int *)&fStack_8,
                              *(FILE **)((int)param_1 + 0x26b));
        if (iVar11 != 0) {
          *(char *)((int)param_1 + 0x241) = SUB41(fStack_8,0);
          *(char *)((int)param_1 + 0x243) = SUB41(fStack_8,0);
          local_30 = fStack_8;
          fStack_2c = (float)(uint)fStack_8 * _DAT_638b33b8;
          uVar4 = ftol();
          *(undefined1 *)((int)param_1 + 0x242) = uVar4;
        }
        fseek(*(FILE **)((int)param_1 + 0x26b),_Offset,0);
        iVar11 = FUN_638a59f0((byte *)s_MaxQP_638b4488,(int *)&fStack_8,
                              *(FILE **)((int)param_1 + 0x26b));
        if (iVar11 != 0) {
          *(char *)((int)param_1 + 0x244) = SUB41(fStack_8,0);
          *(char *)((int)param_1 + 0x246) = SUB41(fStack_8,0);
          local_30 = fStack_8;
          fStack_2c = (float)(uint)fStack_8 * _DAT_638b33b8;
          uVar4 = ftol();
          *(undefined1 *)((int)param_1 + 0x245) = uVar4;
        }
        fseek(*(FILE **)((int)param_1 + 0x26b),_Offset,0);
        iVar11 = FUN_638a59f0((byte *)s_MinKeyQP_638b447c,(int *)&fStack_8,
                              *(FILE **)((int)param_1 + 0x26b));
        if (iVar11 != 0) {
          *(undefined1 *)((int)param_1 + 0x243) = fStack_8._0_1_;
        }
        fseek(*(FILE **)((int)param_1 + 0x26b),_Offset,0);
        iVar11 = FUN_638a59f0((byte *)s_MaxKeyQP_638b4470,(int *)&fStack_8,
                              *(FILE **)((int)param_1 + 0x26b));
        if (iVar11 != 0) {
          *(undefined1 *)((int)param_1 + 0x246) = fStack_8._0_1_;
        }
        fseek(*(FILE **)((int)param_1 + 0x26b),_Offset,0);
        iVar11 = FUN_638a59f0((byte *)s_MaxSuggestedQP_638b4460,(int *)&fStack_8,
                              *(FILE **)((int)param_1 + 0x26b));
        if (iVar11 != 0) {
          *(undefined1 *)((int)param_1 + 499) = fStack_8._0_1_;
        }
        fseek(*(FILE **)((int)param_1 + 0x26b),_Offset,0);
        iVar11 = FUN_638a59f0((byte *)s_MinSuggestedQP_638b4450,(int *)&fStack_8,
                              *(FILE **)((int)param_1 + 0x26b));
        if (iVar11 != 0) {
          *(undefined1 *)((int)param_1 + 500) = fStack_8._0_1_;
        }
        fseek(*(FILE **)((int)param_1 + 0x26b),_Offset,0);
        iVar11 = FUN_638a59f0((byte *)s_NumBFrames_638b4444,(int *)&fStack_8,
                              *(FILE **)((int)param_1 + 0x26b));
        if (iVar11 != 0) {
          *(undefined4 *)((int)param_1 + 0x253) = 1;
          *(float *)((int)param_1 + 0x247) = fStack_8;
        }
        fseek(*(FILE **)((int)param_1 + 0x26b),_Offset,0);
        iVar11 = FUN_638a59f0((byte *)s_RPRSize_638b443c,(int *)&fStack_8,
                              *(FILE **)((int)param_1 + 0x26b));
        if (iVar11 != 0) {
          if ((fStack_8 == 0.0) &&
             (((uint)*(ushort *)((int)param_1 + 0x9e) <
               *(uint *)(*(int *)((int)param_1 + 0xd6) + 0xf6) ||
              ((uint)*(ushort *)((int)param_1 + 0xa0) <
               *(uint *)(*(int *)((int)param_1 + 0xd6) + 0xfa))))) {
            *(int *)((int)param_1 + 0x209) = *(int *)((int)param_1 + 599) + -1;
          }
          else {
            *(int *)((int)param_1 + 0x209) = (int)fStack_8 + -1;
          }
          if (*(int *)((int)param_1 + 0x209) == -1) {
            *(undefined4 *)((int)param_1 + 0xe2) =
                 *(undefined4 *)(*(int *)((int)param_1 + 0xd6) + 0xf6);
            *(undefined4 *)((int)param_1 + 0xe6) =
                 *(undefined4 *)(*(int *)((int)param_1 + 0xd6) + 0xfa);
          }
          else {
            *(undefined4 *)((int)param_1 + 0xe2) =
                 *(undefined4 *)
                  (*(int *)((int)param_1 + 0xd6) + 0x2d6 + *(int *)((int)param_1 + 0x209) * 4);
            *(undefined4 *)((int)param_1 + 0xe6) =
                 *(undefined4 *)
                  (*(int *)((int)param_1 + 0xd6) + 0x2f6 + *(int *)((int)param_1 + 0x209) * 4);
          }
        }
        fseek(*(FILE **)((int)param_1 + 0x26b),_Offset,0);
        iVar11 = FUN_638a59f0((byte *)s_ForceKeys_638b4430,(int *)&fStack_8,
                              *(FILE **)((int)param_1 + 0x26b));
        if (iVar11 != 0) {
          *(uint *)((int)param_1 + 0x186) = (uint)(fStack_8 != 0.0);
        }
        fseek(*(FILE **)((int)param_1 + 0x26b),_Offset,0);
        iVar11 = FUN_638a59f0((byte *)s_KeyFrameRate_638b4420,(int *)&fStack_8,
                              *(FILE **)((int)param_1 + 0x26b));
        if (iVar11 != 0) {
          if (fStack_8 == 0.0) {
            *(undefined4 *)((int)param_1 + 0x182) = 0x7fffffff;
            *(undefined4 *)((int)param_1 + 0x186) = 0;
          }
          else {
            *(float *)((int)param_1 + 0x182) = fStack_8;
            *(undefined4 *)((int)param_1 + 0x186) = 1;
          }
        }
        fseek(*(FILE **)((int)param_1 + 0x26b),_Offset,0);
      }
    }
  }
  local_1c[1] = 0xc;
  if (*(int *)((int)param_1 + 0x2a0) == 0) {
    local_1c[2] = 0;
    local_1c[3] = 0;
    iVar11 = FUN_638a8890((void *)((int)param_1 + 0x32),local_1c + 1);
    if (iVar11 != 0) {
      return 0x80004005;
    }
  }
  else {
    local_1c[2] = 1;
    local_1c[3] = 0;
    iVar11 = FUN_638a8890((void *)((int)param_1 + 0x32),local_1c + 1);
    if (iVar11 != 0) {
      return 0x80004005;
    }
  }
  this = (uint *)((int)param_1 + 0x32);
  local_1c[1] = 0xd;
  if (*(int *)((int)param_1 + 0x277) == 0) {
    local_1c[2] = 0;
    local_1c[3] = 0;
    iVar11 = FUN_638a8890(this,local_1c + 1);
    if (iVar11 != 0) {
      return 0x80004005;
    }
  }
  else {
    local_1c[2] = 1;
    local_1c[3] = 0;
    iVar11 = FUN_638a8890(this,local_1c + 1);
    if (iVar11 != 0) {
      return 0x80004005;
    }
  }
  if ((*(int *)((int)param_1 + 0x2a4) == 0) || (*(int *)((int)param_1 + 0x2a0) == 0)) {
    local_1c[1] = 2;
    local_1c[2] = 0;
    local_1c[3] = 0;
    iVar11 = FUN_638a8890(this,local_1c + 1);
    if (iVar11 != 0) {
      return 0x80004005;
    }
    if (*(int *)((int)param_1 + 0x2a4) == 1) {
      *(undefined4 *)((int)param_1 + 0x2a4) = 0;
    }
  }
  else {
    local_1c[1] = 2;
    local_1c[2] = 1;
    local_1c[3] = 0;
    iVar11 = FUN_638a8890(this,local_1c + 1);
    if (iVar11 != 0) {
      return 0x80004005;
    }
  }
  local_1c[1] = 0xe;
  if (*(int *)((int)param_1 + 0x284) == 0) {
    local_1c[2] = 0;
    local_1c[3] = 0;
    iVar11 = FUN_638a8890(this,local_1c + 1);
    if (iVar11 != 0) {
      return 0x80004005;
    }
  }
  else {
    local_1c[2] = 1;
    local_1c[3] = 0;
    iVar11 = FUN_638a8890(this,local_1c + 1);
    if (iVar11 != 0) {
      return 0x80004005;
    }
  }
  if ((*(int *)((int)param_1 + 0x288) == 0) || (*(int *)((int)param_1 + 0x284) != 0)) {
    if (*(int *)((int)param_1 + 0x288) == 1) {
      *(undefined4 *)((int)param_1 + 0x288) = 0;
    }
  }
  else {
    local_1c[1] = 4;
    local_1c[2] = 1;
    local_1c[3] = 0;
    iVar11 = FUN_638a8890(this,local_1c + 1);
    if (iVar11 != 0) {
      return 0x80004005;
    }
  }
  local_1c[1] = 3;
  if (*(int *)((int)param_1 + 0x27f) == 0) {
    local_1c[2] = 0;
    local_1c[3] = 0;
    iVar11 = FUN_638a8890(this,local_1c + 1);
    if (iVar11 != 0) {
      return 0x80004005;
    }
  }
  else {
    local_1c[2] = 1;
    local_1c[3] = 0;
    iVar11 = FUN_638a8890(this,local_1c + 1);
    if (iVar11 != 0) {
      return 0x80004005;
    }
    local_1c[3] = (uint)*(byte *)((int)param_1 + 0x283);
    local_1c[1] = 0x20;
    local_1c[2] = 3;
    iVar11 = FUN_638a8890(this,local_1c + 1);
    if (iVar11 != 0) {
      return 0x80004005;
    }
  }
  if (*(int *)((int)param_1 + 0x294) != 0) {
    local_1c[1] = 7;
    local_1c[2] = 1;
    local_1c[3] = 0;
    iVar11 = FUN_638a8890(this,local_1c + 1);
    if (iVar11 != 0) {
      return 0x80004005;
    }
  }
  if (*(int *)((int)param_1 + 0x298) != 0) {
    local_1c[1] = 10;
    local_1c[2] = 1;
    local_1c[3] = 0;
    iVar11 = FUN_638a8890(this,local_1c + 1);
    if (iVar11 != 0) {
      return 0x80004005;
    }
  }
  if (*(int *)((int)param_1 + 0x29c) != 0) {
    local_1c[1] = 0xb;
    local_1c[2] = 1;
    local_1c[3] = 0;
    iVar11 = FUN_638a8890(this,local_1c + 1);
    if (iVar11 != 0) {
      return 0x80004005;
    }
  }
  local_1c[1] = 0x23;
  local_1c[2] = 3;
  local_1c[3] = 1;
  FUN_638a8890(this,local_1c + 1);
  if (*(int *)((int)param_1 + 0x10a) != 1) {
    if (*(int *)((int)param_1 + 0x2a8) != 0) {
      local_8c = (uint)*(ushort *)((int)param_1 + 0x9e);
      local_88 = (uint)*(ushort *)((int)param_1 + 0xa0);
      if (*(int *)((int)param_1 + 599) != 0) {
        puVar13 = local_84 + 1;
        local_24 = CONCAT44(*(int *)((int)param_1 + 599),(undefined4)local_24);
        puVar12 = (undefined4 *)(*(int *)((int)param_1 + 0xd6) + 0x2f6);
        do {
          puVar13[-1] = puVar12[-8];
          *puVar13 = *puVar12;
          puVar13 = puVar13 + 2;
          iVar11 = local_24._4_4_ + -1;
          local_24 = CONCAT44(iVar11,(undefined4)local_24);
          puVar12 = puVar12 + 1;
        } while (iVar11 != 0);
      }
      local_44 = 8;
      local_40 = 1;
      local_3c = *(undefined4 *)(*(int *)((int)param_1 + 0xd6) + 0xf6);
      local_38 = *(uint *)(*(int *)((int)param_1 + 0xd6) + 0xfa);
      iVar11 = FUN_638a8890(this,&local_44);
      if (iVar11 != 0) {
        return 0x80004005;
      }
      local_28 = 0x24;
      local_24 = CONCAT44(&local_8c,*(int *)((int)param_1 + 599) + 1);
      iVar11 = FUN_638a8890(this,&local_28);
      if (iVar11 != 0) {
        return 0x80004005;
      }
    }
    if (*(int *)((int)param_1 + 0x10a) != 1) goto LAB_638ab4c2;
  }
  local_8c = 0;
  local_88 = 0;
  local_28 = 0x24;
  local_24 = ZEXT48(&local_8c) << 0x20;
  FUN_638a8890(this,&local_28);
LAB_638ab4c2:
  uVar7 = *(uint *)((int)param_1 + 0x24b);
  if (uVar7 != 0) {
    local_98 = 0;
    local_94 = *(undefined4 *)(*(int *)((int)param_1 + 0xd6) + 0xf6);
    local_90 = *(undefined4 *)(*(int *)((int)param_1 + 0xd6) + 0xfa);
    local_58 = uVar7 + 1;
    local_8c = 2;
    local_88 = 5000;
    local_84[3] = 0;
    local_70 = 3;
    local_5c = 0;
    local_54 = 2;
    if (uVar7 != 0) {
      puVar13 = local_53;
      for (uVar15 = uVar7 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *puVar13 = 0x1010101;
        puVar13 = puVar13 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar13 = 1;
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
    }
    local_28 = 0x3ed;
    local_24 = CONCAT44(&local_98,1);
    iVar11 = FUN_638a88b0(this,&local_28);
    if (iVar11 != 0) {
      return 0x80004005;
    }
  }
  if ((*this & 0xf0000000) != 0) {
    local_38 = (*(int *)((int)param_1 + 0x10e) << 8 | *(uint *)((int)param_1 + 0x10a)) << 0x14 |
               *(uint *)((int)param_1 + 0x106);
    *(uint *)((int)param_1 + 0x2e) = local_38;
    local_3c = 0x3fd;
    iVar11 = FUN_638a88b0(this,&local_3c);
    if (iVar11 != 0) {
      return 0x80004005;
    }
    local_24 = CONCAT44(0x3e9,(undefined4)local_24);
    iVar11 = FUN_638a88b0(this,(int)&local_24 + 4);
    if (iVar11 != 0) {
      return 0x80004005;
    }
  }
  *(undefined4 *)((int)param_1 + 0x19e) = 1;
  pFVar8 = *(FILE **)(*(int *)((int)param_1 + 0xd6) + 0x366);
  if (pFVar8 != (FILE *)0x0) {
    if (*(int *)((int)param_1 + 0xee) == 4) {
      fprintf(pFVar8,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b4c28,
              *(undefined4 *)((int)param_1 + 0xde),*(undefined4 *)((int)param_1 + 0xfa),
              *(undefined4 *)((int)param_1 + 0x235),*(undefined4 *)((int)param_1 + 0x24b));
      return 0;
    }
    if (*(int *)((int)param_1 + 0xee) == 5) {
      fprintf(pFVar8,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b4bc8,
              *(undefined4 *)((int)param_1 + 0xde),*(undefined4 *)((int)param_1 + 0xfa),
              *(undefined4 *)((int)param_1 + 0x235),*(undefined4 *)((int)param_1 + 0x24b));
      return 0;
    }
    fprintf(pFVar8,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b4b68,*(undefined4 *)((int)param_1 + 0xde),
            *(undefined4 *)((int)param_1 + 0xfa),*(undefined4 *)((int)param_1 + 0x235),
            *(undefined4 *)((int)param_1 + 0x24b));
  }
  return 0;
}


