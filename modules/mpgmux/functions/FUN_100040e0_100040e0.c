/* Module: mpgmux.dll
   Function: FUN_100040e0
   Address: 100040e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_100040e0(int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 0x2dc4) != 0) {
    if ((*(int *)(param_1 + 0x2de8) != 0x107ac0) || (uVar7 = 0x19, *(int *)(param_1 + 0x2dec) != 0))
    {
      uVar7 = 0x1e;
    }
    uVar8 = __alldiv(*(uint *)(param_1 + 0x2dd0),*(uint *)(param_1 + 0x2dd4),300,0);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x39) = (char)((ulonglong)uVar8 >> 0x18);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x3a) = (char)((ulonglong)uVar8 >> 0x10);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x3b) = (char)((ulonglong)uVar8 >> 8);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x3c) = (char)uVar8;
    uVar8 = __alldiv(*(uint *)(param_1 + 0x2dd8) + *(uint *)(param_1 + 0x2de8),
                     *(int *)(param_1 + 0x2ddc) + *(int *)(param_1 + 0x2dec) +
                     (uint)CARRY4(*(uint *)(param_1 + 0x2dd8),*(uint *)(param_1 + 0x2de8)),300,0);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x3d) = (char)((ulonglong)uVar8 >> 0x18);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x3e) = (char)((ulonglong)uVar8 >> 0x10);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x3f) = (char)((ulonglong)uVar8 >> 8);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x40) = (char)uVar8;
    if (*(int *)(param_1 + 0x2e5c) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x41) =
           *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x3d);
      *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x42) =
           *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x3e);
      *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x43) =
           *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x3f);
      *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x44) =
           *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x40);
    }
    uVar9 = __alldiv(*(uint *)(param_1 + 0x2dd0) - *(uint *)(param_1 + 0x2dc8),
                     (*(int *)(param_1 + 0x2dd4) - *(int *)(param_1 + 0x2dcc)) -
                     (uint)(*(uint *)(param_1 + 0x2dd0) < *(uint *)(param_1 + 0x2dc8)),
                     *(uint *)(param_1 + 0x2de8),*(uint *)(param_1 + 0x2dec));
    uVar1 = (uVar9 & 0xffffffff) / (ulonglong)(uVar7 * 0xe10);
    uVar5 = (int)uVar9 + (int)uVar1 * uVar7 * -0xe10;
    uVar9 = (ulonglong)uVar5 / (ulonglong)(uVar7 * 0x3c);
    uVar5 = uVar5 + (int)uVar9 * uVar7 * -0x3c;
    uVar2 = uVar5 / uVar7;
    uVar5 = uVar5 - uVar2 * uVar7;
    *(byte *)(*(int *)(param_1 + 0x262c) + 0x45) = (char)(uVar1 / 10) << 4 | (byte)(uVar1 % 10);
    *(byte *)(*(int *)(param_1 + 0x262c) + 0x46) = (char)(uVar9 / 10) << 4 | (byte)(uVar9 % 10);
    *(byte *)(*(int *)(param_1 + 0x262c) + 0x47) =
         (char)(uVar2 / 10) << 4 | (byte)((ulonglong)uVar2 % 10);
    if (uVar7 == 0x19) {
      bVar6 = (byte)(uVar5 / 10) | 4;
    }
    else {
      bVar6 = (byte)(uVar5 / 10) | 0xfc;
    }
    *(byte *)(*(int *)(param_1 + 0x262c) + 0x48) = bVar6 << 4 | (byte)((ulonglong)uVar5 % 10);
    iVar4 = *(int *)(param_1 + 0x262c);
    iVar3 = *(int *)(param_1 + 0x11cc) -
            CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar4 + 0x2d),*(undefined1 *)(iVar4 + 0x2e)),
                              *(undefined1 *)(iVar4 + 0x2f)),*(undefined1 *)(iVar4 + 0x30));
    *(char *)(iVar4 + 0x40f) = (char)((uint)iVar3 >> 0x18);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x410) = (char)((uint)iVar3 >> 0x10);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x411) = (char)((uint)iVar3 >> 8);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x412) = (char)iVar3;
    iVar4 = *(int *)(param_1 + 0x2e8c) - *(int *)(param_1 + 0x2e84);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x413) = (char)((uint)iVar4 >> 0x18);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x414) = (char)((uint)iVar4 >> 0x10);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x415) = (char)((uint)iVar4 >> 8);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x416) = (char)iVar4;
    iVar4 = *(int *)(param_1 + 0x2e90) - *(int *)(param_1 + 0x2e84);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x417) = (char)((uint)iVar4 >> 0x18);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x418) = (char)((uint)iVar4 >> 0x10);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x419) = (char)((uint)iVar4 >> 8);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x41a) = (char)iVar4;
    iVar4 = *(int *)(param_1 + 0x2e94) - *(int *)(param_1 + 0x2e84);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x41b) = (char)((uint)iVar4 >> 0x18);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x41c) = (char)((uint)iVar4 >> 0x10);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x41d) = (char)((uint)iVar4 >> 8);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x41e) = (char)iVar4;
    *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x420) = *(undefined1 *)(param_1 + 0x2e78);
    *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x422) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x423) =
         *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x45);
    *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x424) =
         *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x46);
    *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x425) =
         *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x47);
    *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x426) =
         *(undefined1 *)(*(int *)(param_1 + 0x262c) + 0x48);
    uVar8 = __alldiv(*(uint *)(param_1 + 0x2dc8),*(uint *)(param_1 + 0x2dcc),300,0);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x433) = (char)((ulonglong)uVar8 >> 0x18);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x434) = (char)((ulonglong)uVar8 >> 0x10);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x435) = (char)((ulonglong)uVar8 >> 8);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x436) = (char)uVar8;
    uVar8 = __alldiv(*(uint *)(param_1 + 0x2dd8) + *(uint *)(param_1 + 0x2de8),
                     *(int *)(param_1 + 0x2ddc) + *(int *)(param_1 + 0x2dec) +
                     (uint)CARRY4(*(uint *)(param_1 + 0x2dd8),*(uint *)(param_1 + 0x2de8)),300,0);
    local_c = (undefined4)uVar8;
    *(char *)(*(int *)(param_1 + 0x262c) + 0x437) = (char)((ulonglong)uVar8 >> 0x18);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x438) = (char)((ulonglong)uVar8 >> 0x10);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x439) = (char)((ulonglong)uVar8 >> 8);
    *(char *)(*(int *)(param_1 + 0x262c) + 0x43a) = (char)uVar8;
    (**(code **)(*(int *)(param_1 + 0x11f8) + 0x14))
              (*(int *)(param_1 + 0x11f8),0,0xf4000,&local_c,4);
    uStack_8 = *(undefined4 *)(param_1 + 0x2e84);
    uVar7 = *(uint *)(param_1 + 0x2dd8) - *(uint *)(param_1 + 0x2dd0);
    uVar8 = __alldiv(uVar7 + *(uint *)(param_1 + 0x2de8),
                     ((*(int *)(param_1 + 0x2ddc) - *(int *)(param_1 + 0x2dd4)) -
                     (uint)(*(uint *)(param_1 + 0x2dd8) < *(uint *)(param_1 + 0x2dd0))) +
                     *(int *)(param_1 + 0x2dec) + (uint)CARRY4(uVar7,*(uint *)(param_1 + 0x2de8)),
                     300,0);
    uStack_4 = (undefined4)uVar8;
    (**(code **)(*(int *)(param_1 + 0x11f8) + 0x14))
              (*(int *)(param_1 + 0x11f8),0,0xf2000,&uStack_8,8);
    iVar4 = (**(code **)(param_1 + 0x2628))
                      (*(undefined4 *)(param_1 + 0x11f8),*(undefined4 *)(param_1 + 0x262c),
                       *(undefined4 *)(param_1 + 0x2dc4));
    if (iVar4 != *(int *)(param_1 + 0x2dc4)) {
      return 0x10;
    }
  }
  return 0;
}


