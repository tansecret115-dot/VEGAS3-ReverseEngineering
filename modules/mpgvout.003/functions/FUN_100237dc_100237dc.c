/* Module: mpgvout.003
   Function: FUN_100237dc
   Address: 100237dc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100237dc(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  FILE *_File;
  int iVar5;
  uint uVar6;
  double dVar7;
  double local_2c;
  double local_24;
  ulonglong local_14;
  
  if ((*(int *)(param_1 + 0x2dc) == 0) || (*(int *)(param_1 + 0x53c) != 0)) {
    *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_1 + 0x3fc);
    iVar5 = *(int *)(param_1 + 0x5bc);
    if (iVar5 == 2) {
      iVar5 = *(int *)(param_1 + 0x400);
LAB_1002385e:
      *(int *)(param_1 + 0x444) = iVar5;
    }
    else if (iVar5 < 3) {
      if (iVar5 == 1) {
        iVar5 = *(int *)(param_1 + 0x3f8);
        goto LAB_1002385e;
      }
    }
    else if (iVar5 == 3) {
      if (*(int *)(param_1 + 0x53c) == 0) {
        iVar5 = *(int *)(param_1 + 0x404);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x400) - (*(int *)(param_1 + 0x400) >> 0x1f) >> 1;
      }
      goto LAB_1002385e;
    }
    if ((uint)(*(int *)(param_1 + 0x444) << 3) < *(uint *)(param_1 + 0x440)) {
      *(uint *)(param_1 + 0x444) = *(uint *)(param_1 + 0x440) >> 3;
    }
  }
  else {
    FUN_10022480(param_1);
  }
  if ((*(int *)(param_1 + 0x80) == 0) || (*(int *)(param_1 + 0x78) == 0)) {
    uVar6 = *(uint *)(param_1 + 0x498);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x78);
  }
  local_14 = (ulonglong)uVar6;
  dVar7 = floor((double)local_14 / *(double *)(param_1 + 0x68));
  local_14 = (ulonglong)*(uint *)(param_1 + 0x4ac);
  local_14._0_4_ = (undefined4)(longlong)ROUND((double)local_14 + dVar7);
  *(undefined4 *)(param_1 + 0x4ac) = (undefined4)local_14;
  uVar6 = *(uint *)(param_1 + 0x4ac);
  iVar5 = *(int *)(param_1 + 0x7c) * 8 - *(int *)(param_1 + 0x7c);
  if ((uint)(iVar5 * 0x800) < uVar6) {
    iVar5 = uVar6 + iVar5 * -0x800;
    *(uint *)(param_1 + 0x4ac) = uVar6 - iVar5;
    if (*(int *)(param_1 + 0x80) == 0) {
      *(double *)(param_1 + 0x380) = *(double *)(param_1 + 0x380) - (double)iVar5;
    }
  }
  if (*(int *)(param_1 + 0x80) == 1) {
    return;
  }
  local_14 = (ulonglong)*(uint *)(param_1 + 0x498);
  dVar7 = (double)local_14 / ((double)*(int *)(param_1 + 0x57c) * *(double *)(param_1 + 0x68));
  local_24 = _DAT_1002376c;
  local_2c = _DAT_10023774;
  if ((byte)(dVar7 < _DAT_1002377c |
             (byte)((ushort)((ushort)(NAN(dVar7) || NAN(_DAT_1002377c)) << 10) >> 8) |
            (byte)((ushort)((ushort)(dVar7 == _DAT_1002377c) << 0xe) >> 8)) == 1) {
    local_24 = (((_DAT_10023784 - dVar7) + 1.0) / (dVar7 + 1.0)) * _DAT_1002376c;
  }
  if ((byte)(dVar7 < _DAT_1002378c |
             (byte)((ushort)((ushort)(NAN(dVar7) || NAN(_DAT_1002378c)) << 10) >> 8) |
            (byte)((ushort)((ushort)(dVar7 == _DAT_1002378c) << 0xe) >> 8)) == 1) {
    local_2c = (((_DAT_10023794 - dVar7) + 1.0) / (dVar7 + 1.0)) * _DAT_10023774;
  }
  iVar5 = *(int *)(param_1 + 0x5bc);
  if (iVar5 == 2) {
    local_14 = (ulonglong)
               (uint)(*(int *)(param_1 + 0x3f0) +
                      *(int *)(param_1 + 0x3f8) * *(int *)(param_1 + 0x3e0) +
                     (*(int *)(param_1 + 0x3e4) + *(int *)(param_1 + 0x3d8) + -1) *
                     *(int *)(param_1 + 0x400));
    dVar7 = (double)local_14;
    local_14 = (ulonglong)
               (uint)((*(int *)(param_1 + 1000) + *(int *)(param_1 + 0x3dc)) *
                     *(int *)(param_1 + 0x404));
    dVar7 = floor(((double)*(int *)(param_1 + 0x3f0) * *(double *)(param_1 + 0x380)) /
                  (dVar7 + (double)local_14 * (local_24 / local_2c)) + _DAT_1002379c);
    *(double *)(param_1 + 0x388) = dVar7;
    iVar5 = *(int *)(param_1 + 0x410);
  }
  else if (iVar5 < 3) {
    if (iVar5 != 1) goto LAB_10023bf7;
    local_14 = (ulonglong)
               (uint)(*(int *)(param_1 + 0x3ec) +
                     *(int *)(param_1 + 0x3f8) * *(int *)(param_1 + 0x3e0));
    dVar7 = (double)local_14;
    local_14 = (ulonglong)
               (uint)((*(int *)(param_1 + 0x3e4) + *(int *)(param_1 + 0x3d8)) *
                     *(int *)(param_1 + 0x400));
    dVar1 = (double)local_14;
    local_14 = (ulonglong)
               (uint)((*(int *)(param_1 + 1000) + *(int *)(param_1 + 0x3dc)) *
                     *(int *)(param_1 + 0x404));
    dVar7 = floor(((double)*(int *)(param_1 + 0x3ec) * *(double *)(param_1 + 0x380)) /
                  ((double)local_14 / local_2c + dVar1 / local_24 + dVar7) + _DAT_1002379c);
    *(double *)(param_1 + 0x388) = dVar7;
    iVar5 = *(int *)(param_1 + 0x40c);
  }
  else {
    if (iVar5 != 3) goto LAB_10023bf7;
    local_14 = (ulonglong)
               (uint)(*(int *)(param_1 + 0x3f4) +
                      *(int *)(param_1 + 0x3f8) * *(int *)(param_1 + 0x3e0) +
                     (*(int *)(param_1 + 1000) + *(int *)(param_1 + 0x3dc) + -1) *
                     *(int *)(param_1 + 0x404));
    dVar7 = (double)local_14;
    local_14 = (ulonglong)
               (uint)((*(int *)(param_1 + 0x3e4) + *(int *)(param_1 + 0x3d8)) *
                     *(int *)(param_1 + 0x400));
    dVar7 = floor(((double)*(int *)(param_1 + 0x3f4) * *(double *)(param_1 + 0x380)) /
                  (dVar7 + (double)local_14 * (local_2c / local_24)) + _DAT_1002379c);
    *(double *)(param_1 + 0x388) = dVar7;
    iVar5 = *(int *)(param_1 + 0x414);
  }
  *(double *)(param_1 + 0x390) = (double)iVar5;
LAB_10023bf7:
  dVar7 = (double)(*(int *)(param_1 + 0x57c) << 3);
  if (*(double *)(param_1 + 0x388) < dVar7) {
    *(double *)(param_1 + 0x388) = dVar7;
  }
  local_14 = (ulonglong)
             ((*(int *)(param_1 + 0x4ac) * 8 - *(int *)(param_1 + 0x4ac) & 0x7fffffffU) >> 3);
  dVar1 = (double)local_14;
  dVar7 = *(double *)(param_1 + 0x388);
  if ((byte)(dVar1 < dVar7 | (byte)((ushort)((ushort)(NAN(dVar1) || NAN(dVar7)) << 10) >> 8) |
            (byte)((ushort)((ushort)(dVar1 == dVar7) << 0xe) >> 8)) == 1) {
    *(double *)(param_1 + 0x388) = dVar1;
  }
  local_14 = (ulonglong)
             (uint)((*(int *)(param_1 + 0x444) + 0x1f) * 0x1f * *(int *)(param_1 + 0x57c));
  dVar7 = ((double)*(int *)(param_1 + 0x408) * *(double *)(param_1 + 0x388)) / (double)local_14;
  if (*(double *)(param_1 + 0x390) < dVar7) {
    *(double *)(param_1 + 0x390) = dVar7;
  }
  if (*(int *)(param_1 + 0x28) < 2) {
    dVar1 = *(double *)(param_1 + 0x390);
    dVar2 = dVar7 * _DAT_100237a4;
    if (((byte)(dVar2 < dVar1 | (byte)((ushort)((ushort)(NAN(dVar2) || NAN(dVar1)) << 10) >> 8) |
               (byte)((ushort)((ushort)(dVar2 == dVar1) << 0xe) >> 8)) == 1) &&
       (*(int *)(param_1 + 0x540) < 0xe)) {
      *(undefined4 *)(param_1 + 0x540) = 0xe;
      dVar3 = _DAT_100237a4;
    }
    else {
      dVar2 = dVar7 * _DAT_100237ac;
      if (((byte)(dVar2 < dVar1 | (byte)((ushort)((ushort)(NAN(dVar2) || NAN(dVar1)) << 10) >> 8) |
                 (byte)((ushort)((ushort)(dVar2 == dVar1) << 0xe) >> 8)) == 1) &&
         (*(int *)(param_1 + 0x540) < 0xd)) {
        *(undefined4 *)(param_1 + 0x540) = 0xd;
        dVar3 = _DAT_100237a4;
      }
      else {
        dVar2 = dVar7 * _DAT_100237b4;
        dVar1 = *(double *)(param_1 + 0x390);
        dVar3 = _DAT_100237a4;
        if (((byte)(dVar2 < dVar1 | (byte)((ushort)((ushort)(NAN(dVar2) || NAN(dVar1)) << 10) >> 8)
                   | (byte)((ushort)((ushort)(dVar2 == dVar1) << 0xe) >> 8)) == 1) &&
           (*(int *)(param_1 + 0x540) < 0xc)) {
          *(undefined4 *)(param_1 + 0x540) = 0xc;
          dVar3 = _DAT_100237a4;
        }
      }
    }
  }
  else {
    dVar1 = *(double *)(param_1 + 0x390);
    dVar2 = dVar7 * _DAT_100237bc;
    if (((byte)(dVar2 < dVar1 | (byte)((ushort)((ushort)(NAN(dVar2) || NAN(dVar1)) << 10) >> 8) |
               (byte)((ushort)((ushort)(dVar2 == dVar1) << 0xe) >> 8)) == 1) &&
       (*(int *)(param_1 + 0x540) < 0xe)) {
      *(undefined4 *)(param_1 + 0x540) = 0xe;
      dVar3 = _DAT_100237cc;
    }
    else {
      dVar2 = dVar7 * _DAT_100237c4;
      if (((byte)(dVar2 < dVar1 | (byte)((ushort)((ushort)(NAN(dVar2) || NAN(dVar1)) << 10) >> 8) |
                 (byte)((ushort)((ushort)(dVar2 == dVar1) << 0xe) >> 8)) == 1) &&
         (*(int *)(param_1 + 0x540) < 0xd)) {
        *(undefined4 *)(param_1 + 0x540) = 0xd;
        dVar3 = _DAT_100237cc;
      }
      else {
        dVar2 = dVar7 * _DAT_10023784;
        dVar1 = *(double *)(param_1 + 0x390);
        dVar3 = _DAT_100237cc;
        if (((byte)(dVar2 < dVar1 | (byte)((ushort)((ushort)(NAN(dVar2) || NAN(dVar1)) << 10) >> 8)
                   | (byte)((ushort)((ushort)(dVar2 == dVar1) << 0xe) >> 8)) == 1) &&
           (*(int *)(param_1 + 0x540) < 0xc)) {
          *(undefined4 *)(param_1 + 0x540) = 0xc;
          dVar3 = _DAT_100237cc;
        }
      }
    }
  }
  dVar7 = dVar7 * dVar3;
  dVar1 = *(double *)(param_1 + 0x390);
  if ((byte)(dVar7 < dVar1 | (byte)((ushort)((ushort)(NAN(dVar7) || NAN(dVar1)) << 10) >> 8) |
            (byte)((ushort)((ushort)(dVar7 == dVar1) << 0xe) >> 8)) == 1) {
    *(double *)(param_1 + 0x390) = dVar7;
  }
  uVar6 = 0;
  iVar5 = *(int *)(param_1 + 0x540);
  if (0xb < iVar5) {
    uVar6 = (uint)(1 < *(int *)(param_1 + 0x38));
  }
  if ((0xc < iVar5) && (2 < *(int *)(param_1 + 0x38))) {
    uVar6 = 2;
  }
  if ((iVar5 == 0xe) && (3 < *(int *)(param_1 + 0x38))) {
    uVar6 = *(int *)(param_1 + 0x38) - 1;
  }
  if ((uVar6 != 0) && (*(int *)(param_1 + 0x5bc) != 3)) {
    if (*(int *)(param_1 + 0x3dc) != 0) {
      local_14 = (ulonglong)
                 (uint)(*(int *)(param_1 + 0x3f4) +
                        *(int *)(param_1 + 0x3f8) * *(int *)(param_1 + 0x3e0) +
                       (*(int *)(param_1 + 0x3dc) + *(int *)(param_1 + 1000) + -1) *
                       *(int *)(param_1 + 0x404));
      dVar7 = (double)local_14;
      local_14 = (ulonglong)
                 (uint)((*(int *)(param_1 + 0x3e4) + -1 + *(int *)(param_1 + 0x3d8)) *
                       *(int *)(param_1 + 0x400));
      dVar7 = floor(((double)(int)uVar6 * _DAT_100237d4 * *(double *)(param_1 + 0x380) *
                    (double)*(int *)(param_1 + 0x3f4)) /
                    (dVar7 + (double)local_14 * (local_2c / local_24)) + _DAT_1002379c);
      *(double *)(param_1 + 0x388) = dVar7 + *(double *)(param_1 + 0x388);
    }
    local_14 = (ulonglong)
               ((*(int *)(param_1 + 0x4ac) * 8 - *(int *)(param_1 + 0x4ac) & 0x7fffffffU) >> 3);
    dVar1 = (double)local_14;
    dVar7 = *(double *)(param_1 + 0x388);
    if ((byte)(dVar1 < dVar7 | (byte)((ushort)((ushort)(NAN(dVar1) || NAN(dVar7)) << 10) >> 8) |
              (byte)((ushort)((ushort)(dVar1 == dVar7) << 0xe) >> 8)) == 1) {
      *(double *)(param_1 + 0x388) = dVar1;
    }
    local_14 = (ulonglong)
               (uint)((*(int *)(param_1 + 0x444) + 0x1f) * 0x1f * *(int *)(param_1 + 0x57c));
    dVar7 = ((double)*(int *)(param_1 + 0x408) * *(double *)(param_1 + 0x388)) / (double)local_14;
    if (*(double *)(param_1 + 0x390) < dVar7) {
      *(double *)(param_1 + 0x390) = dVar7;
    }
    dVar1 = _DAT_100237cc;
    if (*(int *)(param_1 + 0x28) < 2) {
      dVar1 = _DAT_100237a4;
    }
    dVar7 = dVar7 * dVar1;
    dVar1 = *(double *)(param_1 + 0x390);
    if ((byte)(dVar7 < dVar1 | (byte)((ushort)((ushort)(NAN(dVar7) || NAN(dVar1)) << 10) >> 8) |
              (byte)((ushort)((ushort)(dVar7 == dVar1) << 0xe) >> 8)) == 1) {
      *(double *)(param_1 + 0x390) = dVar7;
    }
  }
  *(double *)(param_1 + 0x398) = *(double *)(param_1 + 0x388) / (double)*(int *)(param_1 + 0x57c);
  _File = DAT_10035734;
  lVar4 = *(longlong *)(*(int *)(param_1 + 0x24) + 0x38);
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  *(double *)(param_1 + 0x3a8) = (double)lVar4;
  if (_File != (FILE *)0x0) {
    fprintf(_File,"\nrate control: start of picture\n");
    fprintf(DAT_10035734," target number of bits: T=%.1f\n",*(undefined4 *)(param_1 + 0x388),
            *(undefined4 *)(param_1 + 0x38c));
  }
  return;
}


