/* Module: mpgvout.001
   Function: FUN_100225c0
   Address: 100225c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100225c0(int param_1)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  float10 local_4c;
  float10 local_3c;
  ulonglong local_14;
  
  local_3c = (float10)*(longlong *)(param_1 + 0x3a0);
  iVar4 = FUN_10032578(*(uint *)(param_1 + 0x3a0),*(int *)(param_1 + 0x3a4),0,0);
  if (iVar4 < 1) {
    local_3c = _DAT_1002256c + local_3c;
  }
  dVar2 = (double)local_3c / (double)*(int *)(param_1 + 0x57c) + 1.0;
  dVar9 = SQRT(dVar2);
  if ((byte)(NAN(dVar9) | (byte)((ushort)((ushort)NAN(dVar9) << 10) >> 8) | 0x40) != 0x40) {
    dVar9 = sqrt(dVar2);
  }
  uVar5 = *(uint *)(param_1 + 0x57c);
  *(int *)(param_1 + 0x440) = (int)ROUND(dVar9);
  lVar8 = FUN_100326b0(*(uint *)(param_1 + 0x3a0) >> 8 | *(uint *)(param_1 + 0x3a4) << 0x18,
                       *(uint *)(param_1 + 0x3a4) >> 8,uVar5,(int)uVar5 >> 0x1f);
  local_4c = (float10)lVar8;
  iVar4 = FUN_10032578((uint)lVar8,(int)((ulonglong)lVar8 >> 0x20),0,0);
  if (iVar4 < 1) {
    local_4c = _DAT_1002256c + local_4c;
  }
  *(double *)(param_1 + 0x458) = (double)local_4c + 1.0;
  local_14 = (ulonglong)*(uint *)(param_1 + 0x498);
  dVar2 = (double)local_14 / ((double)(int)uVar5 * *(double *)(param_1 + 0x68));
  if (*(int *)(param_1 + 0x5bc) == 2) {
    dVar9 = _DAT_100225a4;
    if ((byte)(dVar2 < _DAT_100225ac |
               (byte)((ushort)((ushort)(NAN(dVar2) || NAN(_DAT_100225ac)) << 10) >> 8) |
              (byte)((ushort)((ushort)(dVar2 == _DAT_100225ac) << 0xe) >> 8)) == 1) {
      dVar9 = (dVar2 / (_DAT_100225b4 - dVar2)) * _DAT_100225a4;
    }
  }
  else {
    if (*(int *)(param_1 + 0x5bc) == 3) {
      dVar9 = _DAT_1002257c;
      dVar3 = _DAT_10022584;
      if ((byte)(dVar2 < _DAT_1002258c |
                 (byte)((ushort)((ushort)(NAN(dVar2) || NAN(_DAT_1002258c)) << 10) >> 8) |
                (byte)((ushort)((ushort)(dVar2 == _DAT_1002258c) << 0xe) >> 8)) == 1) {
        dVar9 = (dVar2 / (_DAT_10022594 - dVar2)) * _DAT_1002257c;
        dVar3 = ((dVar2 * _DAT_10022584) / (_DAT_1002259c - dVar2)) * _DAT_10022584;
      }
      goto LAB_10022799;
    }
    dVar9 = 1.0;
  }
  dVar3 = 1.0;
LAB_10022799:
  dVar2 = ((double)*(longlong *)(param_1 + 0x438) * dVar3 +
          (double)*(longlong *)(param_1 + 0x430) * dVar9 +
          (double)*(longlong *)(param_1 + 0x428) * 1.0) / (double)*(int *)(param_1 + 0x57c) + 1.0;
  dVar9 = SQRT(dVar2);
  if ((byte)(NAN(dVar9) | (byte)((ushort)((ushort)NAN(dVar9) << 10) >> 8) | 0x40) != 0x40) {
    dVar9 = sqrt(dVar2);
  }
  *(int *)(param_1 + 0x444) = (int)ROUND(dVar9);
  if (*(int *)(param_1 + 0x5bc) - 1U < 2) {
    uVar5 = *(uint *)(param_1 + 0x440);
    uVar7 = uVar5 >> 1;
    if (*(uint *)(param_1 + 0x3fc) < uVar7) {
      *(undefined4 *)(param_1 + 0x468) = 0;
      *(undefined4 *)(param_1 + 0x46c) = 0;
      uVar1 = (ulonglong)DAT_100225bc;
      *(undefined4 *)(param_1 + 0x470) = 0;
      *(undefined4 *)(param_1 + 0x474) = 0;
      *(uint *)(param_1 + 0x3ec) = uVar5;
      *(uint *)(param_1 + 0x3f8) = uVar5;
      *(uint *)(param_1 + 0x3fc) = uVar5;
      *(uint *)(param_1 + 0x3f0) = uVar7;
      *(uint *)(param_1 + 0x400) = uVar7;
      *(uint *)(param_1 + 0x450) = uVar5;
      *(uint *)(param_1 + 0x454) = uVar7;
      uVar5 = (uint)(uVar5 * uVar1 >> 0x22);
      *(uint *)(param_1 + 0x3f4) = uVar5;
      *(uint *)(param_1 + 0x404) = uVar5;
    }
    uVar5 = *(uint *)(param_1 + 0x440);
    if (uVar5 * 2 < *(uint *)(param_1 + 0x3fc)) {
      *(undefined4 *)(param_1 + 0x468) = 0;
      *(undefined4 *)(param_1 + 0x46c) = 0;
      uVar7 = uVar5 + *(uint *)(param_1 + 0x3fc) >> 1;
      *(uint *)(param_1 + 0x3ec) = uVar7;
      uVar6 = (uVar5 >> 1) + *(int *)(param_1 + 0x400) >> 1;
      *(uint *)(param_1 + 0x3f8) = uVar7;
      *(uint *)(param_1 + 0x3fc) = uVar7;
      *(uint *)(param_1 + 0x3f0) = uVar6;
      *(uint *)(param_1 + 0x400) = uVar6;
      uVar5 = (uVar5 >> 2) + *(int *)(param_1 + 0x404) >> 1;
      *(undefined4 *)(param_1 + 0x470) = 0;
      *(undefined4 *)(param_1 + 0x474) = 0;
      *(uint *)(param_1 + 0x3f4) = uVar5;
      *(uint *)(param_1 + 0x404) = uVar5;
      *(uint *)(param_1 + 0x450) = uVar7 + *(int *)(param_1 + 0x450) >> 1;
      *(uint *)(param_1 + 0x454) = uVar6 + *(int *)(param_1 + 0x454) >> 1;
    }
  }
  if (*(int *)(param_1 + 0x5bc) == 2) {
    uVar5 = *(uint *)(param_1 + 0x430) + 0xf >> 5 |
            (*(int *)(param_1 + 0x434) + (uint)(0xfffffff0 < *(uint *)(param_1 + 0x430))) *
            0x8000000;
    if ((int)(uVar5 + ((int)uVar5 >> 2)) <
        (int)(*(uint *)(param_1 + 0x428) + 0xf >> 5 |
             (*(int *)(param_1 + 0x42c) + (uint)(0xfffffff0 < *(uint *)(param_1 + 0x428))) *
             0x8000000) >> 1) {
      uVar5 = (uint)(*(int *)(param_1 + 0x400) * 3 + *(int *)(param_1 + 0x444)) >> 2;
    }
    else {
      uVar5 = (uint)(*(int *)(param_1 + 0x444) + *(int *)(param_1 + 0x400)) >> 1;
    }
    *(uint *)(param_1 + 0x400) = uVar5;
  }
  if (*(int *)(param_1 + 0x5bc) - 1U < 2) {
    iVar4 = *(int *)(param_1 + 0x450);
    *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_1 + 0x454);
    *(int *)(param_1 + 0x448) = iVar4;
    *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x440);
    *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x444);
    uVar5 = *(int *)(param_1 + 0x3fc) * 3 + iVar4;
  }
  else {
    *(uint *)(param_1 + 0x404) = (uint)(*(int *)(param_1 + 0x444) + *(int *)(param_1 + 0x404)) >> 1;
    uVar5 = *(int *)(param_1 + 0x3fc) * 3 + *(int *)(param_1 + 0x440);
  }
  *(uint *)(param_1 + 0x3fc) = uVar5 >> 2;
  *(uint *)(param_1 + 0x3f8) =
       (uint)(*(int *)(param_1 + 0x3fc) * 3 + *(int *)(param_1 + 0x450)) >> 2;
  local_14 = (ulonglong)*(uint *)(param_1 + 0x444);
  iVar4 = *(int *)(param_1 + 0x5bc);
  *(double *)(param_1 + 0x460) = (double)local_14 + *(double *)(param_1 + 0x460);
  if (iVar4 == 2) {
    *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_1 + 0x444);
  }
  else if (iVar4 < 3) {
    if (iVar4 == 1) {
      *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_1 + 0x440);
    }
  }
  else if (iVar4 == 3) {
    *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_1 + 0x444);
  }
  return;
}


