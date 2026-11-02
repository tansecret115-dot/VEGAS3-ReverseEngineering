/* Module: mpgvout.004
   Function: FUN_10023ca4
   Address: 10023ca4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10023ca4(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  FILE *_File;
  uint uVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double local_2c;
  double local_24;
  ulonglong local_14;
  
  if ((*(int *)(param_1 + 0x2dc) == 0) || (*(int *)(param_1 + 0x53c) != 0)) {
    *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_1 + 0x3fc);
    iVar6 = *(int *)(param_1 + 0x5bc);
    if (iVar6 == 2) {
      iVar6 = *(int *)(param_1 + 0x400);
LAB_10023d2a:
      *(int *)(param_1 + 0x444) = iVar6;
    }
    else if (iVar6 < 3) {
      if (iVar6 == 1) {
        iVar6 = *(int *)(param_1 + 0x3f8);
        goto LAB_10023d2a;
      }
    }
    else if (iVar6 == 3) {
      if (*(int *)(param_1 + 0x53c) == 0) {
        iVar6 = *(int *)(param_1 + 0x404);
      }
      else {
        iVar6 = *(int *)(param_1 + 0x400) - (*(int *)(param_1 + 0x400) >> 0x1f) >> 1;
      }
      goto LAB_10023d2a;
    }
    if ((uint)(*(int *)(param_1 + 0x444) << 3) < *(uint *)(param_1 + 0x440)) {
      *(uint *)(param_1 + 0x444) = *(uint *)(param_1 + 0x440) >> 3;
    }
  }
  else {
    FUN_10022948(param_1);
  }
  if ((*(int *)(param_1 + 0x80) == 0) || (*(int *)(param_1 + 0x78) == 0)) {
    uVar5 = *(uint *)(param_1 + 0x498);
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x78);
  }
  local_14 = (ulonglong)uVar5;
  dVar8 = floor((double)local_14 / *(double *)(param_1 + 0x68));
  local_14 = (ulonglong)*(uint *)(param_1 + 0x4ac);
  local_14._0_4_ = (undefined4)(longlong)ROUND((double)local_14 + dVar8);
  *(undefined4 *)(param_1 + 0x4ac) = (undefined4)local_14;
  uVar5 = *(uint *)(param_1 + 0x4ac);
  iVar6 = *(int *)(param_1 + 0x7c) * 8 - *(int *)(param_1 + 0x7c);
  if ((uint)(iVar6 * 0x800) < uVar5) {
    iVar6 = uVar5 + iVar6 * -0x800;
    *(uint *)(param_1 + 0x4ac) = uVar5 - iVar6;
    if (*(int *)(param_1 + 0x80) == 0) {
      *(double *)(param_1 + 0x380) = *(double *)(param_1 + 0x380) - (double)iVar6;
    }
  }
  if (*(int *)(param_1 + 0x80) == 1) {
    return;
  }
  local_14 = (ulonglong)*(uint *)(param_1 + 0x498);
  dVar8 = (double)local_14 / ((double)*(int *)(param_1 + 0x57c) * *(double *)(param_1 + 0x68));
  local_24 = _DAT_10023c34;
  local_2c = _DAT_10023c3c;
  if ((byte)(dVar8 < _DAT_10023c44 |
             (byte)((ushort)((ushort)(NAN(dVar8) || NAN(_DAT_10023c44)) << 10) >> 8) |
            (byte)((ushort)((ushort)(dVar8 == _DAT_10023c44) << 0xe) >> 8)) == 1) {
    local_24 = (((_DAT_10023c4c - dVar8) + 1.0) / (dVar8 + 1.0)) * _DAT_10023c34;
  }
  if ((byte)(dVar8 < _DAT_10023c54 |
             (byte)((ushort)((ushort)(NAN(dVar8) || NAN(_DAT_10023c54)) << 10) >> 8) |
            (byte)((ushort)((ushort)(dVar8 == _DAT_10023c54) << 0xe) >> 8)) == 1) {
    local_2c = (((_DAT_10023c5c - dVar8) + 1.0) / (dVar8 + 1.0)) * _DAT_10023c3c;
  }
  iVar6 = *(int *)(param_1 + 0x5bc);
  if (iVar6 == 2) {
    local_14 = (ulonglong)
               (uint)(*(int *)(param_1 + 0x3f0) +
                      *(int *)(param_1 + 0x3f8) * *(int *)(param_1 + 0x3e0) +
                     (*(int *)(param_1 + 0x3e4) + *(int *)(param_1 + 0x3d8) + -1) *
                     *(int *)(param_1 + 0x400));
    dVar8 = (double)local_14;
    local_14 = (ulonglong)
               (uint)((*(int *)(param_1 + 1000) + *(int *)(param_1 + 0x3dc)) *
                     *(int *)(param_1 + 0x404));
    dVar8 = floor(((double)*(int *)(param_1 + 0x3f0) * *(double *)(param_1 + 0x380)) /
                  (dVar8 + (double)local_14 * (local_24 / local_2c)) + _DAT_10023c64);
    *(double *)(param_1 + 0x388) = dVar8;
    iVar6 = *(int *)(param_1 + 0x410);
  }
  else if (iVar6 < 3) {
    if (iVar6 != 1) goto LAB_100240c1;
    local_14 = (ulonglong)
               (uint)(*(int *)(param_1 + 0x3ec) +
                     *(int *)(param_1 + 0x3f8) * *(int *)(param_1 + 0x3e0));
    dVar8 = (double)local_14;
    local_14 = (ulonglong)
               (uint)((*(int *)(param_1 + 0x3e4) + *(int *)(param_1 + 0x3d8)) *
                     *(int *)(param_1 + 0x400));
    dVar1 = (double)local_14;
    local_14 = (ulonglong)
               (uint)((*(int *)(param_1 + 1000) + *(int *)(param_1 + 0x3dc)) *
                     *(int *)(param_1 + 0x404));
    dVar8 = floor(((double)*(int *)(param_1 + 0x3ec) * *(double *)(param_1 + 0x380)) /
                  ((double)local_14 / local_2c + dVar1 / local_24 + dVar8) + _DAT_10023c64);
    *(double *)(param_1 + 0x388) = dVar8;
    iVar6 = *(int *)(param_1 + 0x40c);
  }
  else {
    if (iVar6 != 3) goto LAB_100240c1;
    local_14 = (ulonglong)
               (uint)(*(int *)(param_1 + 0x3f4) +
                      *(int *)(param_1 + 0x3f8) * *(int *)(param_1 + 0x3e0) +
                     (*(int *)(param_1 + 1000) + *(int *)(param_1 + 0x3dc) + -1) *
                     *(int *)(param_1 + 0x404));
    dVar8 = (double)local_14;
    local_14 = (ulonglong)
               (uint)((*(int *)(param_1 + 0x3e4) + *(int *)(param_1 + 0x3d8)) *
                     *(int *)(param_1 + 0x400));
    dVar8 = floor(((double)*(int *)(param_1 + 0x3f4) * *(double *)(param_1 + 0x380)) /
                  (dVar8 + (double)local_14 * (local_2c / local_24)) + _DAT_10023c64);
    *(double *)(param_1 + 0x388) = dVar8;
    iVar6 = *(int *)(param_1 + 0x414);
  }
  *(double *)(param_1 + 0x390) = (double)iVar6;
LAB_100240c1:
  dVar8 = (double)(*(int *)(param_1 + 0x57c) << 3);
  if (*(double *)(param_1 + 0x388) < dVar8) {
    *(double *)(param_1 + 0x388) = dVar8;
  }
  local_14 = (ulonglong)
             ((*(int *)(param_1 + 0x4ac) * 8 - *(int *)(param_1 + 0x4ac) & 0x7fffffffU) >> 3);
  dVar1 = (double)local_14;
  dVar8 = *(double *)(param_1 + 0x388);
  if ((byte)(dVar1 < dVar8 | (byte)((ushort)((ushort)(NAN(dVar1) || NAN(dVar8)) << 10) >> 8) |
            (byte)((ushort)((ushort)(dVar1 == dVar8) << 0xe) >> 8)) == 1) {
    *(double *)(param_1 + 0x388) = dVar1;
  }
  local_14 = (ulonglong)
             (uint)((*(int *)(param_1 + 0x444) + 0x1f) * 0x1f * *(int *)(param_1 + 0x57c));
  dVar8 = ((double)*(int *)(param_1 + 0x408) * *(double *)(param_1 + 0x388)) / (double)local_14;
  if (*(double *)(param_1 + 0x390) < dVar8) {
    *(double *)(param_1 + 0x390) = dVar8;
  }
  if (*(int *)(param_1 + 0x28) < 2) {
    dVar1 = *(double *)(param_1 + 0x390);
    if (((NAN(dVar8 * _DAT_10023c6c) || NAN(dVar1)) < (dVar8 * _DAT_10023c6c < dVar1)) &&
       (*(int *)(param_1 + 0x540) < 0xe)) {
      *(undefined4 *)(param_1 + 0x540) = 0xe;
      dVar3 = _DAT_10023c6c;
    }
    else if (((NAN(dVar8 * _DAT_10023c74) || NAN(dVar1)) < (dVar8 * _DAT_10023c74 < dVar1)) &&
            (*(int *)(param_1 + 0x540) < 0xd)) {
      *(undefined4 *)(param_1 + 0x540) = 0xd;
      dVar3 = _DAT_10023c6c;
    }
    else {
      dVar2 = dVar8 * _DAT_10023c7c;
      dVar1 = *(double *)(param_1 + 0x390);
      dVar3 = _DAT_10023c6c;
      if (((byte)(dVar2 < dVar1 | (byte)((ushort)((ushort)(NAN(dVar2) || NAN(dVar1)) << 10) >> 8) |
                 (byte)((ushort)((ushort)(dVar2 == dVar1) << 0xe) >> 8)) == 1) &&
         (*(int *)(param_1 + 0x540) < 0xc)) {
        *(undefined4 *)(param_1 + 0x540) = 0xc;
        dVar3 = _DAT_10023c6c;
      }
    }
  }
  else {
    dVar1 = *(double *)(param_1 + 0x390);
    if (((NAN(dVar8 * _DAT_10023c84) || NAN(dVar1)) < (dVar8 * _DAT_10023c84 < dVar1)) &&
       (*(int *)(param_1 + 0x540) < 0xe)) {
      *(undefined4 *)(param_1 + 0x540) = 0xe;
      dVar3 = _DAT_10023c94;
    }
    else if (((NAN(dVar8 * _DAT_10023c8c) || NAN(dVar1)) < (dVar8 * _DAT_10023c8c < dVar1)) &&
            (*(int *)(param_1 + 0x540) < 0xd)) {
      *(undefined4 *)(param_1 + 0x540) = 0xd;
      dVar3 = _DAT_10023c94;
    }
    else {
      dVar2 = dVar8 * _DAT_10023c4c;
      dVar1 = *(double *)(param_1 + 0x390);
      dVar3 = _DAT_10023c94;
      if (((byte)(dVar2 < dVar1 | (byte)((ushort)((ushort)(NAN(dVar2) || NAN(dVar1)) << 10) >> 8) |
                 (byte)((ushort)((ushort)(dVar2 == dVar1) << 0xe) >> 8)) == 1) &&
         (*(int *)(param_1 + 0x540) < 0xc)) {
        *(undefined4 *)(param_1 + 0x540) = 0xc;
        dVar3 = _DAT_10023c94;
      }
    }
  }
  dVar8 = dVar8 * dVar3;
  dVar1 = *(double *)(param_1 + 0x390);
  if ((byte)(dVar8 < dVar1 | (byte)((ushort)((ushort)(NAN(dVar8) || NAN(dVar1)) << 10) >> 8) |
            (byte)((ushort)((ushort)(dVar8 == dVar1) << 0xe) >> 8)) == 1) {
    *(double *)(param_1 + 0x390) = dVar8;
  }
  iVar7 = 0;
  iVar6 = *(int *)(param_1 + 0x540);
  if ((0xb < iVar6) && (1 < *(int *)(param_1 + 0x38))) {
    iVar7 = 1;
  }
  if ((0xc < iVar6) && (2 < *(int *)(param_1 + 0x38))) {
    iVar7 = 2;
  }
  if ((iVar6 == 0xe) && (3 < *(int *)(param_1 + 0x38))) {
    iVar7 = *(int *)(param_1 + 0x38) + -1;
  }
  if ((iVar7 != 0) && (*(int *)(param_1 + 0x5bc) != 3)) {
    if (*(int *)(param_1 + 0x3dc) != 0) {
      local_14 = (ulonglong)
                 (uint)(*(int *)(param_1 + 0x3f4) +
                        *(int *)(param_1 + 0x3f8) * *(int *)(param_1 + 0x3e0) +
                       (*(int *)(param_1 + 0x3dc) + *(int *)(param_1 + 1000) + -1) *
                       *(int *)(param_1 + 0x404));
      dVar8 = (double)local_14;
      local_14 = (ulonglong)
                 (uint)((*(int *)(param_1 + 0x3e4) + -1 + *(int *)(param_1 + 0x3d8)) *
                       *(int *)(param_1 + 0x400));
      dVar8 = floor(((double)*(int *)(param_1 + 0x3f4) *
                    (double)iVar7 * _DAT_10023c9c * *(double *)(param_1 + 0x380)) /
                    (dVar8 + (double)local_14 * (local_2c / local_24)) + _DAT_10023c64);
      *(double *)(param_1 + 0x388) = dVar8 + *(double *)(param_1 + 0x388);
    }
    local_14 = (ulonglong)
               ((*(int *)(param_1 + 0x4ac) * 8 - *(int *)(param_1 + 0x4ac) & 0x7fffffffU) >> 3);
    dVar1 = (double)local_14;
    dVar8 = *(double *)(param_1 + 0x388);
    if ((byte)(dVar1 < dVar8 | (byte)((ushort)((ushort)(NAN(dVar1) || NAN(dVar8)) << 10) >> 8) |
              (byte)((ushort)((ushort)(dVar1 == dVar8) << 0xe) >> 8)) == 1) {
      *(double *)(param_1 + 0x388) = dVar1;
    }
    local_14 = (ulonglong)
               (uint)((*(int *)(param_1 + 0x444) + 0x1f) * 0x1f * *(int *)(param_1 + 0x57c));
    dVar8 = ((double)*(int *)(param_1 + 0x408) * *(double *)(param_1 + 0x388)) / (double)local_14;
    if (*(double *)(param_1 + 0x390) < dVar8) {
      *(double *)(param_1 + 0x390) = dVar8;
    }
    dVar1 = _DAT_10023c94;
    if (*(int *)(param_1 + 0x28) < 2) {
      dVar1 = _DAT_10023c6c;
    }
    dVar8 = dVar8 * dVar1;
    dVar1 = *(double *)(param_1 + 0x390);
    if ((byte)(dVar8 < dVar1 | (byte)((ushort)((ushort)(NAN(dVar8) || NAN(dVar1)) << 10) >> 8) |
              (byte)((ushort)((ushort)(dVar8 == dVar1) << 0xe) >> 8)) == 1) {
      *(double *)(param_1 + 0x390) = dVar8;
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
    fprintf(DAT_10035734," target number of bits: T=%.1f\n",*(undefined8 *)(param_1 + 0x388));
  }
  return;
}


