/* Module: ednt3260.dll
   Function: FUN_630f2dc0
   Address: 630f2dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f2dc0(int *param_1)

{
  undefined4 uVar1;
  short sVar2;
  undefined4 *puVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined2 *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  if (*(short *)((int)param_1 + 0x5e) == 0) {
    *(undefined2 *)(param_1 + 0x6e3a) = 2;
    *(undefined2 *)((int)param_1 + 0x1b8e6) = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0x3fce0000;
    puVar3 = (undefined4 *)((int)param_1 + 0x3af6);
    iVar7 = 6;
    do {
      iVar6 = 0x80;
      do {
        puVar3[-0x600] = 0;
        puVar3[-0x5ff] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    piVar8 = param_1 + 0x21b;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
    piVar8 = param_1 + 0x273;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
    piVar8 = param_1 + 0x4ef;
    for (iVar7 = 0x78; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
    piVar8 = param_1 + 0x27f;
    for (iVar7 = 0x20; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
    local_10 = param_1 + 0x625;
    local_c = param_1 + 0x571;
    local_8 = param_1 + 0x49f;
    local_14 = (undefined2 *)0x5;
    piVar8 = param_1 + 0x567;
    do {
      piVar9 = local_8;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar9 = 0;
        piVar9 = piVar9 + 1;
      }
      piVar9 = local_c;
      for (iVar7 = 0x24; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar9 = 0;
        piVar9 = piVar9 + 1;
      }
      *piVar8 = 0;
      piVar8[1] = 0;
      *(undefined2 *)local_10 = 0;
      local_10 = (int *)((int)local_10 + 2);
      local_8 = local_8 + 0x10;
      local_c = local_c + 0x24;
      local_14 = (undefined2 *)((int)local_14 + -1);
      piVar8 = piVar8 + 2;
    } while (local_14 != (undefined2 *)0x0);
    *(undefined4 *)((int)param_1 + 0x1ab6) = 0;
    *(undefined4 *)((int)param_1 + 0x1aba) = 0;
    *(undefined4 *)((int)param_1 + 0x1abe) = 0;
    *(undefined4 *)((int)param_1 + 0x1ac2) = 0;
    *(undefined4 *)((int)param_1 + 0x19fa) = 0;
    *(undefined4 *)((int)param_1 + 0x19fe) = 0;
    param_1[0x683] = 0;
    param_1[0x684] = 0;
    *(undefined4 *)((int)param_1 + 0x1a02) = 0;
    *(undefined4 *)((int)param_1 + 0x1a06) = 0x3ff00000;
    param_1[0x685] = 0;
    param_1[0x686] = 0x3ff00000;
    *(undefined2 *)((int)param_1 + 0x1a0a) = 0;
    *(undefined2 *)(param_1 + 0x687) = 0;
    *(undefined4 *)((int)param_1 + 0x1a1e) = 0;
    *(undefined4 *)((int)param_1 + 0x1a22) = 0;
    *(undefined4 *)((int)param_1 + 0x1a26) = 0;
    *(undefined4 *)((int)param_1 + 0x1a2a) = 0;
    *(undefined4 *)((int)param_1 + 0x1a2e) = 0;
    *(undefined4 *)((int)param_1 + 0x1a32) = 0;
    param_1[0x68e] = 0;
    param_1[0x68f] = 0;
    *(undefined4 *)((int)param_1 + 0x1a42) = 0;
    *(undefined4 *)((int)param_1 + 0x1a46) = 0;
    param_1[0x693] = 0;
    param_1[0x694] = 0;
    *(undefined2 *)((int)param_1 + 0x1a36) = 0;
    *(undefined2 *)(param_1 + 0x690) = 0;
    *(undefined2 *)((int)param_1 + 0x1a4a) = 0;
    *(undefined2 *)(param_1 + 0x695) = 0;
    puVar3 = (undefined4 *)((int)param_1 + 0x9f5e);
    for (iVar7 = 0x24; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar3 = 0x60006;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)(param_1 + 0x5052) = 0xf;
    *(undefined2 *)((int)param_1 + 0x3fc02) = 1;
    *(undefined2 *)((int)param_1 + 0x5e) = 1;
  }
  iVar6 = 0;
  local_c = (int *)((int)param_1 + 0x2e);
  iVar7 = 0;
  local_14 = (undefined2 *)((int)param_1 + 0x52);
  do {
    iVar7 = iVar7 + 4;
    iVar6 = iVar6 + 2;
    *local_c = *(undefined4 *)(*(int *)(*param_1 + 2) + -4 + iVar7);
    local_14[-6] = *(undefined2 *)(*(int *)(*param_1 + 6) + -2 + iVar6);
    *local_14 = *(undefined2 *)(*(int *)(*param_1 + 10) + -2 + iVar6);
    local_c = local_c + 1;
    local_14 = local_14 + 1;
  } while (iVar7 < 0x18);
  uVar1 = *(undefined4 *)(*param_1 + 0x10);
  *(undefined4 *)((int)param_1 + 0x2a) = uVar1;
  *(undefined4 *)((int)param_1 + 0x62fa) = uVar1;
  *(undefined2 *)((int)param_1 + 0x62fe) = 0;
  *(undefined2 *)(param_1 + 0x18c0) = 0;
  *(ushort *)((int)param_1 + 0x630a) = *(byte *)(*param_1 + 0xe) & 7;
  *(ushort *)((int)param_1 + 0x6312) = (byte)(*(char *)(*param_1 + 0xe) >> 3) & 1;
  *(ushort *)((int)param_1 + 0x1e) =
       (ushort)(CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + 0x1a)) >> 0xb) &
       1;
  *(ushort *)(param_1 + 8) =
       (ushort)(CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + 0x1a)) >> 10) &
       1;
  *(ushort *)((int)param_1 + 0x22) =
       (ushort)(CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + 0x1a)) >> 9) & 1
  ;
  *(ushort *)(param_1 + 9) = *(ushort *)(*param_1 + 0x1a) >> 8 & 1;
  *(ushort *)((int)param_1 + 0x26) = (byte)(*(char *)(*param_1 + 0x1a) >> 4) & 0xf;
  *(ushort *)(param_1 + 10) = (*(byte *)(*param_1 + 0x1a) & 0xf) + 3;
  *(ushort *)((int)param_1 + 0x6302) = *(ushort *)(*param_1 + 0x18) >> 8 & 0x3f;
  *(ushort *)(param_1 + 0x18c1) =
       (ushort)(CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + 0xe)) >> 0xc) &
       3;
  *(ushort *)(param_1 + 0xff01) = (byte)(*(char *)(*param_1 + 0xe) >> 4) & 3;
  *(ushort *)(param_1 + 0x18c2) = **(ushort **)(*param_1 + 0x1c) >> 8 & 7;
  *(ushort *)(param_1 + 0x18c3) = (byte)(**(char **)(*param_1 + 0x1c) >> 6) & 3;
  *(ushort *)((int)param_1 + 0x630e) = (byte)(**(char **)(*param_1 + 0x1c) >> 4) & 3;
  *(ushort *)(param_1 + 0x18c4) = (byte)(**(char **)(*param_1 + 0x1c) >> 2) & 3;
  *(ushort *)(param_1 + 0x18cd) = (byte)(**(char **)(*param_1 + 0x1c) >> 1) & 1;
  *(ushort *)((int)param_1 + 0x6336) = **(byte **)(*param_1 + 0x1c) & 1;
  iVar7 = *param_1;
  *(ushort *)(param_1 + 0x18c5) = *(byte *)(*(int *)(iVar7 + 0x1c) + 2) & 0x1f;
  *(ushort *)(param_1 + 0x18c9) = *(ushort *)(*(int *)(iVar7 + 0x1c) + 2) >> 8 & 0x1f;
  uVar4 = *(ushort *)(*(int *)(iVar7 + 0x1c) + 4) & 0xff;
  *(ushort *)(param_1 + 0x18c7) = uVar4;
  *(ushort *)((int)param_1 + 0x631a) = (ushort)(uVar4 != 0);
  uVar4 = *(ushort *)(*(int *)(iVar7 + 0x1c) + 4);
  *(ushort *)(param_1 + 0x18cb) = uVar4 >> 8;
  *(ushort *)((int)param_1 + 0x632a) = (ushort)((uVar4 & 0xff00) != 0);
  *(ushort *)((int)param_1 + 0x631e) = (byte)(*(char *)(*(int *)(iVar7 + 0x1c) + 6) >> 7) & 1;
  *(ushort *)((int)param_1 + 0x6322) = (byte)(*(char *)(*(int *)(iVar7 + 0x1c) + 6) >> 5) & 3;
  *(ushort *)(param_1 + 0x18c8) = *(byte *)(*(int *)(iVar7 + 0x1c) + 6) & 0x1f;
  *(short *)((int)param_1 + 0x632e) =
       (short)((int)(uint)*(ushort *)(*(int *)(iVar7 + 0x1c) + 6) >> 0xf);
  *(ushort *)((int)param_1 + 0x6332) =
       (ushort)((int)(uint)*(ushort *)(*(int *)(iVar7 + 0x1c) + 6) >> 0xd) & 3;
  *(ushort *)(param_1 + 0x18cc) = *(ushort *)(*(int *)(iVar7 + 0x1c) + 6) >> 8 & 0x1f;
  *(ushort *)(param_1 + 0x18ce) =
       (ushort)((int)(uint)*(ushort *)(*(int *)(iVar7 + 0x1c) + 8) >> 0xe) & 1;
  *(ushort *)((int)param_1 + 0x633a) = *(ushort *)(*(int *)(iVar7 + 0x1c) + 8) & 0x3fff;
  *(ushort *)(param_1 + 0x18cf) =
       (ushort)((int)(uint)*(ushort *)(*(int *)(iVar7 + 0x1c) + 10) >> 0xe) & 1;
  *(ushort *)((int)param_1 + 0x633e) = *(ushort *)(*(int *)(iVar7 + 0x1c) + 10) & 0x3fff;
  sVar2 = *(short *)(iVar7 + 0x24);
  *(short *)((int)param_1 + 0x3fbfe) = sVar2;
  *(ushort *)(param_1 + 0xfeff) = (ushort)(sVar2 != 0);
  *(undefined4 *)((int)param_1 + 0x16) = *(undefined4 *)(iVar7 + 0x20);
  sVar2 = (short)param_1[0xff01];
  if ((sVar2 < 0) || (2 < sVar2)) {
    FUN_630f92d0();
  }
  else {
    *(short *)((int)param_1 + 0x6306) = sVar2 + 8;
  }
  *(undefined2 *)(param_1 + 0x18d0) = 0;
  *(undefined2 *)((int)param_1 + 0x6342) = 0;
  *(undefined2 *)(param_1 + 0xff00) = 0;
  if ((short)param_1[10] <= *(short *)((int)param_1 + 0x26)) {
    *(undefined2 *)(param_1 + 9) = 0;
  }
  sVar2 = *(short *)(&DAT_630ff898 + *(short *)((int)param_1 + 0x630a) * 2);
  *(short *)(param_1 + 0x18d1) = sVar2;
  if (*(short *)((int)param_1 + 0x6312) != 0) {
    sVar2 = sVar2 + 1;
  }
  *(short *)((int)param_1 + 0x6346) = sVar2;
  sVar2 = *(short *)(&DAT_63101d70 +
                    ((short)param_1[0x18c1] * 0x40 + (int)*(short *)((int)param_1 + 0x6302)) * 2);
  *(short *)(param_1 + 0xfeeb) = sVar2;
  sVar2 = (sVar2 >> 3) + (sVar2 >> 1);
  sVar5 = (short)param_1[0xfeeb] - sVar2;
  *(short *)(param_1 + 0xfeec) = sVar2;
  *(short *)(param_1 + 0xfeed) = sVar5;
  *(short *)((int)param_1 + 0x3fbae) = (short)param_1[0xfeeb] << 4;
  *(short *)((int)param_1 + 0x3fbb2) = sVar2 * 0x10;
  *(short *)((int)param_1 + 0x3fbb6) = sVar5 * 0x10;
  return;
}


