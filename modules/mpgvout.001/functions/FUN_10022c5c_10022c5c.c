/* Module: mpgvout.001
   Function: FUN_10022c5c
   Address: 10022c5c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10022c5c(int param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  int local_40;
  ulonglong local_1c;
  
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x474) = 0;
  dVar8 = floor((1.0 - (double)*(int *)(param_1 + 0x344) / _DAT_10022c0c) *
                (double)*(int *)(param_1 + 0x7c) * _DAT_10022bfc * _DAT_10022c04);
  local_1c._0_4_ = (undefined4)(longlong)ROUND(dVar8);
  *(undefined4 *)(param_1 + 0x4ac) = (undefined4)local_1c;
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_1 + 0x74);
  local_1c = (ulonglong)*(uint *)(param_1 + 0x498);
  dVar8 = floor((double)local_1c / *(double *)(param_1 + 0x68) + _DAT_10022c14);
  local_1c = (ulonglong)*(uint *)(param_1 + 0x4ac);
  dVar8 = (double)local_1c + dVar8;
  dVar9 = floor((1.0 - (double)*(int *)(param_1 + 0x344) / _DAT_10022c0c) *
                (double)*(int *)(param_1 + 0x7c) * _DAT_10022bfc * _DAT_10022c04 + _DAT_10022c14);
  if ((byte)(dVar9 < dVar8 | (byte)((ushort)((ushort)(NAN(dVar9) || NAN(dVar8)) << 10) >> 8) |
            (byte)((ushort)((ushort)(dVar9 == dVar8) << 0xe) >> 8)) == 1) {
    dVar8 = floor((1.0 - (double)*(int *)(param_1 + 0x344) / _DAT_10022c0c) *
                  (double)*(int *)(param_1 + 0x7c) * _DAT_10022bfc * _DAT_10022c04 + _DAT_10022c14);
    local_1c = (ulonglong)*(uint *)(param_1 + 0x498);
    dVar9 = floor((double)local_1c / *(double *)(param_1 + 0x68) + _DAT_10022c14);
    local_1c._0_4_ = (undefined4)(longlong)ROUND(dVar8 - dVar9);
    *(undefined4 *)(param_1 + 0x4ac) = (undefined4)local_1c;
  }
  dVar3 = _DAT_10022c1c;
  local_1c = (ulonglong)*(uint *)(param_1 + 0x4ac);
  dVar9 = (double)local_1c;
  local_1c = (ulonglong)*(uint *)(param_1 + 0x498);
  dVar8 = _DAT_10022c1c / *(double *)(param_1 + 0x68);
  dVar9 = (dVar9 * _DAT_10022c1c) / (double)local_1c + dVar8;
  *(double *)(param_1 + 0x3d0) = dVar9;
  dVar4 = _DAT_10022c24;
  if ((*(int *)(param_1 + 0x80) == 0) &&
     ((byte)(_DAT_10022c24 < dVar9 |
             (byte)((ushort)((ushort)(NAN(_DAT_10022c24) || NAN(dVar9)) << 10) >> 8) |
            (byte)((ushort)((ushort)(_DAT_10022c24 == dVar9) << 0xe) >> 8)) == 1)) {
    *(double *)(param_1 + 0x3d0) = _DAT_10022c24;
    local_1c = (ulonglong)*(uint *)(param_1 + 0x498);
    local_1c._0_4_ = (undefined4)(longlong)ROUND(((double)local_1c * (dVar4 - dVar8)) / dVar3);
    *(undefined4 *)(param_1 + 0x4ac) = (undefined4)local_1c;
  }
  iVar5 = *(int *)(param_1 + 0x498);
  if (iVar5 == 0) {
    local_1c = (ulonglong)*(uint *)(param_1 + 0x78);
    iVar5 = (int)ROUND((double)local_1c * _DAT_10022c2c);
    if (iVar5 == 0) goto LAB_10023412;
  }
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined4 *)(param_1 + 0x3c4) = 0;
  if (*(int *)(param_1 + 0x58) == 0) {
    *(undefined4 *)(param_1 + 0x3c8) = 0;
    *(undefined4 *)(param_1 + 0x3cc) = 0;
  }
  else {
    dVar8 = floor(_DAT_10022c1c / *(double *)(param_1 + 0x68) + _DAT_10022c14);
    *(double *)(param_1 + 0x3c8) = (double)(int)ROUND(dVar8);
  }
  dVar8 = _DAT_10022c0c;
  *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x328);
  *(double *)(param_1 + 0x478) = (double)*(int *)(param_1 + 0x344) / dVar8;
  *(double *)(param_1 + 0x480) = (double)*(int *)(param_1 + 0x348) / dVar8;
  if (*(int *)(param_1 + 0x328) == 0) {
    dVar8 = floor(((double)iVar5 + (double)iVar5) / *(double *)(param_1 + 0x68) + _DAT_10022c14);
    *(int *)(param_1 + 0x408) = (int)ROUND(dVar8);
  }
  dVar8 = *(double *)(param_1 + 0x338);
  *(double *)(param_1 + 0x458) = dVar8;
  if ((byte)((byte)((ushort)((ushort)NAN(dVar8) << 10) >> 8) |
            (byte)((ushort)((ushort)(dVar8 == 0.0) << 0xe) >> 8)) == 0x40) {
    *(undefined8 *)(param_1 + 0x458) = _DAT_10022c34;
  }
  dVar8 = _DAT_10022c3c;
  iVar5 = *(int *)(param_1 + 0x57c);
  if (0 < iVar5) {
    iVar6 = 0;
    local_40 = iVar5;
    do {
      iVar2 = *(int *)(param_1 + 0x6a4);
      iVar1 = iVar2 + iVar6;
      local_1c._0_4_ = (undefined4)(longlong)ROUND(*(double *)(param_1 + 0x458) * dVar8);
      *(undefined4 *)(iVar1 + 0x34) = (undefined4)local_1c;
      *(undefined4 *)(iVar1 + 0x30) = (undefined4)local_1c;
      *(undefined4 *)(iVar2 + 0x28 + iVar6) = (undefined4)local_1c;
      iVar6 = iVar6 + 0x3c;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  uVar7 = FUN_10032a50(((double)iVar5 * *(double *)(param_1 + 0x458) + (double)iVar5) *
                       _DAT_10022c3c);
  *(undefined8 *)(param_1 + 0x3a0) = uVar7;
  *(undefined4 *)(param_1 + 0x3e0) = 1;
  iVar5 = (*(int *)(param_1 + 0x38) + -1 + *(int *)(param_1 + 0x34)) / *(int *)(param_1 + 0x38) + -1
  ;
  *(int *)(param_1 + 0x3e4) = iVar5;
  *(int *)(param_1 + 1000) = (*(int *)(param_1 + 0x34) - iVar5) + -1;
  local_1c = (ulonglong)*(uint *)(param_1 + 0x498);
  dVar8 = floor((double)local_1c / *(double *)(param_1 + 0x68) + _DAT_10022c14);
  local_1c = (ulonglong)
             (uint)(*(int *)(param_1 + 0x3e4) + *(int *)(param_1 + 0x3e0) + *(int *)(param_1 + 1000)
                   );
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_1 + 800);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_1 + 800);
  iVar5 = *(int *)(param_1 + 0x31c);
  *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_1 + 0x324);
  *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_1 + 0x324);
  *(int *)(param_1 + 0x3f8) = iVar5;
  *(int *)(param_1 + 0x3ec) = iVar5;
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_1 + 0x32c);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_1 + 0x330);
  *(double *)(param_1 + 0x380) = (double)local_1c * dVar8;
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_1 + 0x334);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x3fc) = 400;
    *(undefined4 *)(param_1 + 0x3f8) = 400;
    *(undefined4 *)(param_1 + 0x3ec) = 400;
  }
  if (*(int *)(param_1 + 0x3f0) == 0) {
    *(undefined4 *)(param_1 + 0x400) = 200;
    *(undefined4 *)(param_1 + 0x3f0) = 200;
  }
  if (*(int *)(param_1 + 0x3f4) == 0) {
    *(undefined4 *)(param_1 + 0x404) = 0x4b;
    *(undefined4 *)(param_1 + 0x3f4) = 0x4b;
  }
  if (*(int *)(param_1 + 0x40c) == 0) {
    dVar8 = floor(((double)*(int *)(param_1 + 0x408) * _DAT_10022c44) / _DAT_10022c4c +
                  _DAT_10022c14);
    *(int *)(param_1 + 0x40c) = (int)ROUND(dVar8);
  }
  if (*(int *)(param_1 + 0x410) == 0) {
    dVar8 = floor(((double)*(int *)(param_1 + 0x408) * _DAT_10022c44) / _DAT_10022c4c +
                  _DAT_10022c14);
    *(int *)(param_1 + 0x410) = (int)ROUND(dVar8);
  }
  if (*(int *)(param_1 + 0x414) == 0) {
    dVar8 = floor(((double)*(int *)(param_1 + 0x408) * _DAT_10022c54) / _DAT_10022c4c +
                  _DAT_10022c14);
    *(int *)(param_1 + 0x414) = (int)ROUND(dVar8);
  }
  if (DAT_10035734 != (FILE *)0x0) {
    fprintf(DAT_10035734,"\nrate control: sequence initialization\n");
    fprintf(DAT_10035734," initial global complexity measures (I,P,B): Xi=%d, Xp=%d, Xb=%d\n",
            *(undefined4 *)(param_1 + 0x3ec),*(undefined4 *)(param_1 + 0x3f0),
            *(undefined4 *)(param_1 + 0x3f4));
    fprintf(DAT_10035734," reaction parameter: r=%d\n",*(undefined4 *)(param_1 + 0x408));
    fprintf(DAT_10035734," initial virtual buffer fullness (I,P,B): d0i=%d, d0p=%d, d0b=%d\n",
            *(undefined4 *)(param_1 + 0x40c),*(undefined4 *)(param_1 + 0x410),
            *(undefined4 *)(param_1 + 0x414));
    fprintf(DAT_10035734," initial average activity: avg_act=%.1f\n",
            *(undefined8 *)(param_1 + 0x458));
  }
LAB_10023412:
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  *(undefined4 *)(param_1 + 0x4b8) = 200000000;
  *(undefined4 *)(param_1 + 0x488) = 0;
  *(undefined4 *)(param_1 + 0x48c) = 0;
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  *(undefined4 *)(param_1 + 0x4c0) = 200000000;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x49c) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4c8) = 200;
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  if (*(int *)(param_1 + 0x2c) - 1U < 2) {
    *(undefined4 *)(param_1 + 0x4a0) = 0x18;
  }
  else {
    *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(&DAT_1002522c + *(int *)(param_1 + 100) * 4);
  }
  return;
}


