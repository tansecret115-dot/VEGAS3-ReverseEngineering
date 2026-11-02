/* Module: mp3plug.dll
   Function: FUN_5f689060
   Address: 5f689060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f689060(uint *param_1,uint *param_2,int *param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  uint3 uVar4;
  bool bVar5;
  ushort uVar6;
  uint *puVar7;
  undefined3 extraout_var;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined1 local_14;
  undefined1 uStack_13;
  byte bStack_12;
  byte bStack_11;
  byte local_c;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  undefined2 uStack_8;
  undefined2 uStack_6;
  int local_4;
  
  param_1[2] = 0;
  local_28 = 0;
  uVar12 = *param_2;
  local_14 = (undefined1)uVar12;
  uStack_13 = (undefined1)(uVar12 >> 8);
  bStack_12 = (byte)(uVar12 >> 0x10);
  bStack_11 = (byte)(uVar12 >> 0x18);
  local_18 = (*(byte *)((int)param_2 + 2) & 0xc) >> 2;
  local_1c = (*(byte *)((int)param_2 + 1) & 8) >> 3;
  bVar3 = *(byte *)((int)param_2 + 3) >> 6;
  if (local_1c == 0) {
    if (bVar3 == 3) {
      puVar7 = (uint *)((int)param_2 + 0xd);
      goto LAB_5f6890b8;
    }
  }
  else if (bVar3 != 3) {
    puVar7 = param_2 + 9;
    goto LAB_5f6890b8;
  }
  puVar7 = (uint *)((int)param_2 + 0x15);
LAB_5f6890b8:
  if ((char)*puVar7 != 'X') {
    return 0;
  }
  if (*(char *)((int)puVar7 + 1) != 'i') {
    return 0;
  }
  if (*(char *)((int)puVar7 + 2) != 'n') {
    return 0;
  }
  if (*(char *)((int)puVar7 + 3) == 'g') {
    uVar4 = (uint3)(uVar12 >> 8);
    uVar10 = (uVar4 & 0xff) << 8;
    iVar11 = (uVar12 & 0xff) << 3;
    local_c = (byte)((uVar4 & 0xe0) >> 5) | (byte)iVar11;
    uVar12 = (uVar12 >> 0x10 & 0xff) << 8;
    bStack_b = (byte)(((((uVar10 & 0x600) >> 9 | ((uVar10 & 0x100) >> 8) << 2) << 2 |
                       (uVar10 & 0x1800) >> 0xb) << 0xb) >> 8) | (byte)((uint)iVar11 >> 8);
    local_20 = (uVar12 & 0x200) >> 9;
    local_24 = (uVar12 & 0x100) >> 8;
    local_2c = 0x1c;
    uVar2 = ((byte)(bStack_12 >> 4 ^ bStack_a) & 0xf ^ CONCAT11(bStack_9,bStack_a)) & 0xf00f;
    uVar1 = (ushort)(((((((bStack_11 & 0x30) >> 4) << 2 | (uint)(bStack_11 >> 6)) << 1 | local_24)
                       << 1 | local_20) << 2 | (uVar12 & 0xc00) >> 10) << 4);
    uVar6 = uVar1 | uVar2;
    bStack_a = (byte)uVar6;
    bStack_9 = (byte)(uVar6 >> 8);
    if (bStack_11 >> 6 == 0) {
      uVar2 = uVar1 & 0xfcff | uVar2;
      bStack_a = (byte)uVar2;
      bStack_9 = (byte)(uVar2 >> 8);
    }
    uVar12 = FUN_5f688990((int)&local_14,1,&local_2c);
    uVar2 = CONCAT11(bStack_9,bStack_a) & 0xefff;
    bStack_9 = (byte)(((uVar12 & 1) << 0xc) >> 8) | (byte)(uVar2 >> 8);
    bStack_a = (byte)uVar2;
    uVar12 = FUN_5f688990((int)&local_14,1,&local_2c);
    uVar2 = CONCAT11(bStack_9,bStack_a) & 0xdfff;
    bStack_9 = (byte)(((uVar12 & 1) << 0xd) >> 8) | (byte)(uVar2 >> 8);
    bStack_a = (byte)uVar2;
    uVar12 = FUN_5f688990((int)&local_14,2,&local_2c);
    uVar2 = CONCAT11(bStack_9,bStack_a) & 0x3fff;
    bStack_9 = (byte)(uVar2 >> 8) | (byte)((uVar12 << 0xe) >> 8);
    bStack_a = (byte)uVar2;
    bVar5 = FUN_5f688c00((ushort *)&local_c);
    iVar11 = local_28;
    if (CONCAT31(extraout_var,bVar5) != 0) {
      bVar3 = bStack_b & 0x60;
      if (bVar3 == 0x60) {
        iVar11 = FUN_5f6883f0((ushort *)&local_c);
        iVar8 = FUN_5f688910((ushort *)&local_c);
        iVar9 = FUN_5f688c70((ushort *)&local_c);
        uStack_8 = 0x180;
        uStack_6 = 0;
        local_4 = ((iVar11 * 0xc) / iVar8 + iVar9) * 4;
        iVar11 = local_4;
      }
      else if ((bVar3 == 0x20) || (iVar11 = local_4, bVar3 == 0x40)) {
        iVar11 = FUN_5f6883f0((ushort *)&local_c);
        iVar8 = FUN_5f688910((ushort *)&local_c);
        local_4 = FUN_5f688c70((ushort *)&local_c);
        uVar12 = (iVar11 * 0x90) / iVar8;
        uStack_8 = 0x480;
        if ((bStack_b & 0x18) != 0x18) {
          uStack_8 = 0x240;
          uVar12 = uVar12 >> 1;
        }
        uStack_6 = 0;
        local_4 = uVar12 + local_4;
        iVar11 = local_4;
      }
    }
    local_28 = iVar11;
    *param_1 = local_1c;
    uVar12 = *(uint *)(&DAT_5f73cc3c + local_18 * 4);
    param_1[1] = uVar12;
    if (local_1c == 0) {
      param_1[1] = (int)uVar12 >> 1;
    }
    uVar12 = FUN_5f689470((undefined1 *)(puVar7 + 1));
    puVar13 = puVar7 + 2;
    param_1[2] = uVar12;
    if ((uVar12 & 1) == 0) {
      param_1[3] = 0xffffffff;
    }
    else {
      if (param_4 != 0) {
        uVar10 = FUN_5f689470((undefined1 *)puVar13);
        param_1[3] = uVar10;
      }
      puVar13 = puVar7 + 3;
    }
    if ((uVar12 & 2) == 0) {
      param_1[4] = 0xffffffff;
    }
    else {
      if (param_4 != 0) {
        uVar10 = FUN_5f689470((undefined1 *)puVar13);
        param_1[4] = uVar10;
      }
      puVar13 = puVar13 + 1;
    }
    if ((uVar12 & 4) != 0) {
      if ((param_4 != 0) && (param_1 + 6 != (uint *)0x0)) {
        iVar11 = 0;
        do {
          *(char *)((int)(param_1 + 6) + iVar11) = *(char *)(iVar11 + (int)puVar13);
          iVar11 = iVar11 + 1;
        } while (iVar11 < 100);
      }
      puVar13 = puVar13 + 0x19;
    }
    param_1[5] = 0xffffffff;
    if (((uVar12 & 8) != 0) && (param_4 != 0)) {
      uVar12 = FUN_5f689470((undefined1 *)puVar13);
      param_1[5] = uVar12;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = local_28;
    }
    return 1;
  }
  return 0;
}


