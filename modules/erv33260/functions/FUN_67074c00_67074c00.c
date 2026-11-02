/* Module: erv33260.dll
   Function: FUN_67074c00
   Address: 67074c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_67074c00(void)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  int *piVar11;
  char cVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined *local_24;
  int local_20;
  int local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined *local_10;
  undefined *local_c;
  undefined *local_8;
  
  iVar4 = 0;
  do {
    *(uint *)((int)&DAT_6709e168 + iVar4) =
         *(uint *)((int)&DAT_6709a428 + iVar4) ^ *(uint *)((int)&DAT_6709a408 + iVar4);
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0x20);
  uVar5 = 0;
  do {
    if (uVar5 < 0x200) {
      cVar2 = '\0';
      for (uVar7 = uVar5; uVar7 != 0; uVar7 = (int)uVar7 >> 1) {
        cVar2 = cVar2 + '\x01';
      }
      (&DAT_6709de68)[uVar5] = cVar2;
      (&DAT_6709db68)[uVar5] = (byte)(0xff >> (9U - cVar2 & 0x1f)) & (byte)uVar5;
    }
    else {
      (&DAT_6709de68)[uVar5] = 9;
      (&DAT_6709db68)[uVar5] = 0xff;
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x300);
  iVar4 = -0x300;
  do {
    iVar8 = iVar4;
    if (iVar4 < -0x217) {
      iVar8 = -0x217;
    }
    if (0x216 < iVar8) {
      iVar8 = 0x216;
    }
    if (iVar8 == 0) {
      (&DAT_6709c4d8)[iVar4] = 0;
      (&DAT_6709d0d8)[iVar4] = 0;
      (&DAT_6709d6d8)[iVar4] = 0;
      (&DAT_6709cad8)[iVar4] = 0;
    }
    else if ((iVar8 == 1) || (iVar8 == -1)) {
      (&DAT_6709c4d8)[iVar4] = 0x1b;
      (&DAT_6709d0d8)[iVar4] = 9;
      (&DAT_6709d6d8)[iVar4] = 3;
      (&DAT_6709cad8)[iVar4] = 1;
    }
    else {
      if ((iVar8 == 2) || (iVar8 == -2)) {
        (&DAT_6709c4d8)[iVar4] = 0x36;
      }
      else {
        (&DAT_6709c4d8)[iVar4] = 0x51;
      }
      (&DAT_6709d0d8)[iVar4] = 0x12;
      (&DAT_6709d6d8)[iVar4] = 6;
      (&DAT_6709cad8)[iVar4] = 2;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x300);
  iVar4 = 0;
  do {
    uVar7 = (iVar4 / 3) % 3;
    iVar8 = (iVar4 / 3) / 3;
    cVar12 = (char)uVar7;
    (&DAT_6709e188)[iVar4] = cVar12;
    uVar10 = iVar8 % 3;
    uVar5 = iVar8 / 3;
    local_c._0_1_ = (char)(iVar4 % 3);
    (&DAT_6709e1f8)[iVar4] = (char)local_c;
    cVar9 = (char)uVar10;
    (&DAT_6709e3d8)[iVar4] = cVar9;
    cVar2 = (char)uVar5;
    (&DAT_6709e268)[iVar4] = cVar2;
    if ((((uVar5 < 2) && (uVar10 < 2)) && (uVar7 < 2)) && ((uint)(iVar4 % 3) < 2)) {
      (&DAT_6709d9d8)[iVar4] = (cVar12 + cVar9) * '\x02' + cVar2 * '\x03' + (char)local_c;
      (&DAT_6709da48)[iVar4] = cVar9 + cVar2;
      (&DAT_6709dab8)[iVar4] = cVar2;
    }
    else {
      (&DAT_6709d9d8)[iVar4] = 9;
      (&DAT_6709da48)[iVar4] = 9;
      (&DAT_6709dab8)[iVar4] = 9;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x6c);
  iVar4 = 0;
  do {
    (&DAT_6709e2d8)[iVar4] =
         ((byte)iVar4 & 2 | ((byte)iVar4 & 1) << 2) << 1 | (byte)(iVar4 >> 3) & 2 |
         (byte)(iVar4 >> 5) & 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x40);
  iVar4 = 0;
  do {
    local_24._0_1_ = ((byte)(iVar4 >> 6) & 1) + ((byte)(iVar4 >> 2) & 1);
    local_20._0_1_ = ((byte)(iVar4 >> 7) & 1) + ((byte)(iVar4 >> 3) & 1);
    (&DAT_6709c0d8)[iVar4] =
         (((((byte)iVar4 & 1) + ((byte)(iVar4 >> 4) & 1)) * '\x03' +
          ((byte)(iVar4 >> 5) & 1) + ((byte)(iVar4 >> 1) & 1)) * '\x03' + (char)local_24) * '\x03' +
         (char)local_20;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x100);
  bVar3 = 0;
  bVar1 = 0;
  piVar11 = &DAT_6709db28;
  do {
    uVar5 = (uint)bVar1;
    if ((bVar3 & 2) != 0) {
      uVar5 = uVar5 + 1;
    }
    if ((bVar3 & 4) != 0) {
      uVar5 = uVar5 + 1;
    }
    if ((bVar3 & 8) != 0) {
      uVar5 = uVar5 + 1;
    }
    if (uVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = uVar5 - 1;
    }
    *piVar11 = iVar4;
    piVar11 = piVar11 + 1;
    bVar3 = bVar3 + 1;
    bVar1 = bVar1 ^ 1;
  } while ((int)piVar11 < 0x6709db68);
  local_24 = &DAT_670972f0;
  local_14 = &DAT_670970c0;
  local_10 = &DAT_67096850;
  local_18 = &DAT_670a87e8;
  local_8 = &DAT_67094cd0;
  puVar6 = &DAT_67094b90;
  do {
    local_20 = 2;
    local_c = local_8 + -0x1a90;
    puVar13 = local_18 + -0xa3a0;
    do {
      FUN_67075200(0x510,0,(int)local_c,puVar13,(int *)(puVar13 + 0x510));
      puVar15 = puVar13 + 0x4d90;
      local_1c = 4;
      do {
        FUN_67075200(0x10,1,(int)puVar6,puVar15,(int *)(puVar15 + 0x10));
        puVar15 = puVar15 + 0x110;
        puVar6 = puVar6 + 8;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      local_c = local_c + 0x288;
      puVar13 = puVar13 + 0x51d0;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    iVar4 = 0;
    puVar13 = local_18;
    do {
      FUN_67075200(0x360,(uint)(iVar4 < 2),(int)local_8,puVar13,(int *)(puVar13 + 0x360));
      iVar4 = iVar4 + 1;
      local_8 = local_8 + 0x1b0;
      puVar13 = puVar13 + 0x3e60;
    } while (iVar4 < 3);
    puVar13 = local_18 + 0xbb20;
    local_20 = 2;
    puVar16 = local_14 + -0xaa0;
    do {
      FUN_67075200(0x6c,1,(int)puVar16,puVar13,(int *)(puVar13 + 0x6c));
      puVar16 = puVar16 + 0x38;
      puVar13 = puVar13 + 0x5cc;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    FUN_67075200(0x360,1,(int)local_10,local_18 + 0xc6b8,(int *)(local_18 + 0xca18));
    puVar13 = local_18 + 0x10518;
    local_20 = 2;
    do {
      FUN_67075200(0x6c,1,(int)local_14,puVar13,(int *)(puVar13 + 0x6c));
      local_14 = local_14 + 0x38;
      puVar13 = puVar13 + 0x5cc;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    FUN_67075200(0x20,0,(int)local_24,local_18 + 0x110b0,(int *)(local_18 + 0x110d0));
    local_10 = local_10 + 0x1b0;
    local_18 = local_18 + 0x1b770;
    local_24 = local_24 + 0x10;
  } while ((int)puVar6 < 0x67094cd0);
  local_10 = &DAT_6709a398;
  local_14 = &DAT_6709a088;
  local_c = &DAT_670994b8;
  local_8 = &DAT_670984f8;
  local_18 = &DAT_67097340;
  puVar15 = &DAT_67127978;
  do {
    FUN_67075200(0x510,0,(int)local_18,puVar15,(int *)(puVar15 + 0x510));
    puVar14 = puVar15 + 0x4d90;
    iVar4 = 4;
    do {
      FUN_67075200(0x10,1,(int)local_8,puVar14,(int *)(puVar14 + 0x10));
      puVar14 = puVar14 + 0x110;
      local_8 = local_8 + 8;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    FUN_67075200(0x360,1,(int)(local_c + -0xee0),puVar15 + 0x51d0,(int *)(puVar15 + 0x5530));
    puVar14 = puVar15 + 0x9030;
    local_24 = (undefined *)0x2;
    puVar6 = local_14 + -0xee0;
    do {
      FUN_67075200(0x6c,1,(int)puVar6,puVar14,(int *)(puVar14 + 0x6c));
      puVar6 = puVar6 + 0x38;
      puVar14 = puVar14 + 0x5cc;
      local_24 = (undefined *)((int)local_24 + -1);
    } while (local_24 != (undefined *)0x0);
    FUN_67075200(0x360,1,(int)local_c,puVar15 + 0x9bc8,(int *)(puVar15 + 0x9f28));
    puVar14 = puVar15 + 0xda28;
    local_24 = (undefined *)0x2;
    do {
      FUN_67075200(0x6c,1,(int)local_14,puVar14,(int *)(puVar14 + 0x6c));
      local_14 = local_14 + 0x38;
      puVar14 = puVar14 + 0x5cc;
      local_24 = (undefined *)((int)local_24 + -1);
    } while (local_24 != (undefined *)0x0);
    FUN_67075200(0x20,0,(int)local_10,puVar15 + 0xe5c0,(int *)(puVar15 + 0xe5e0));
    local_18 = local_18 + 0x288;
    local_c = local_c + 0x1b0;
    puVar15 = puVar15 + 0xe8e0;
    local_10 = local_10 + 0x10;
  } while ((int)local_18 < 0x670984f8);
  return;
}


