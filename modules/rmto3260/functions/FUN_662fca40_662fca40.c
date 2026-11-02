/* Module: rmto3260.dll
   Function: FUN_662fca40
   Address: 662fca40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662fca40(void *this,short *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint3 uVar19;
  uint3 uVar20;
  undefined1 uVar21;
  short sVar22;
  uint uVar23;
  undefined1 *puVar24;
  int iVar25;
  uint uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 *puVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  undefined1 local_4e;
  undefined1 uStack_4d;
  undefined1 local_4c;
  undefined1 uStack_4b;
  undefined1 local_4a;
  undefined1 uStack_49;
  undefined1 local_48;
  undefined1 local_44;
  undefined1 local_40;
  undefined1 local_3c;
  undefined1 local_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 local_32;
  undefined1 uStack_31;
  undefined1 local_2e;
  undefined1 local_26;
  undefined1 uStack_25;
  undefined1 local_24;
  undefined1 uStack_23;
  undefined1 *local_16;
  undefined1 local_12;
  
  uVar23 = (**(code **)(*(int *)this + 0x10c))();
  puVar24 = operator_new(uVar23 & 0xffff);
  if (puVar24 != (undefined1 *)0x0) {
    uVar5 = *(ushort *)((int)this + 0x50);
    bVar1 = *(byte *)((int)this + 0x54);
    uVar11 = *(undefined4 *)((int)this + 8);
    uStack_36 = (undefined1)uVar5;
    uStack_35 = (undefined1)(uVar5 >> 8);
    uVar6 = *(undefined2 *)((int)this + 0x3a);
    uVar12 = *(undefined4 *)((int)this + 0xc);
    uVar13 = *(undefined4 *)((int)this + 0x40);
    uVar7 = *(undefined2 *)((int)this + 0x4e);
    uVar20 = *(uint3 *)((int)this + 0x4e);
    local_38 = (undefined1)uVar7;
    uStack_37 = (undefined1)((ushort)uVar7 >> 8);
    uVar7 = *(undefined2 *)((int)this + 0x52);
    uVar19 = *(uint3 *)((int)this + 0x50);
    uStack_34 = (undefined1)uVar7;
    uStack_33 = (undefined1)((ushort)uVar7 >> 8);
    uVar14 = *(undefined4 *)((int)this + 0x61);
    local_32 = (undefined1)uVar14;
    uStack_31 = (undefined1)((uint)uVar14 >> 8);
    uVar15 = *(undefined4 *)((int)this + 0x2c);
    uVar8 = *(undefined2 *)((int)this + 0x34);
    sVar22 = (short)((ulonglong)uVar5 /
                    (ulonglong)(longlong)(int)(uint)*(ushort *)((int)this + 0x52)) * (ushort)bVar1 *
             *(short *)((int)this + 0x4e) * 2 + 0x3e + *(short *)((int)this + 0x59);
    uVar9 = *(undefined2 *)((int)this + 0x36);
    uVar16 = *(undefined4 *)((int)this + 0x49);
    uVar17 = *(undefined4 *)((int)this + 0x44);
    uVar2 = *(undefined1 *)((int)this + 0x65);
    *(short *)((int)this + 0x3c) = sVar22;
    uVar10 = *(undefined2 *)((int)this + 0x3e);
    uVar3 = *(undefined1 *)((int)this + 0x77);
    uVar18 = *(undefined4 *)((int)this + 0x10);
    uVar4 = *(undefined1 *)((int)this + 0x66);
    if (bVar1 != 0) {
      local_16 = *(undefined1 **)((int)this + 0x55);
    }
    uVar23 = *(uint *)((int)this + 0x59);
    puVar30 = *(undefined4 **)((int)this + 0x5d);
    *puVar24 = 0;
    uStack_4d = (undefined1)((ushort)uVar6 >> 8);
    puVar24[1] = 5;
    puVar24[2] = uStack_4d;
    local_4e = (undefined1)uVar6;
    puVar24[3] = local_4e;
    uStack_4b = (undefined1)((ushort)sVar22 >> 8);
    puVar24[4] = uStack_4b;
    local_4c = (undefined1)sVar22;
    puVar24[5] = local_4c;
    uStack_49 = (undefined1)((ushort)uVar10 >> 8);
    puVar24[6] = uStack_49;
    local_4a = (undefined1)uVar10;
    puVar24[7] = local_4a;
    puVar24[8] = (char)((uint)uVar11 >> 0x18);
    puVar24[9] = (char)((uint)uVar11 >> 0x10);
    puVar24[10] = (char)((uint)uVar11 >> 8);
    local_48 = (undefined1)uVar11;
    puVar24[0xb] = local_48;
    puVar24[0xc] = (char)((uint)uVar18 >> 0x18);
    puVar24[0xd] = (char)((uint)uVar18 >> 0x10);
    puVar24[0xe] = (char)((uint)uVar18 >> 8);
    local_44 = (undefined1)uVar18;
    puVar24[0xf] = local_44;
    puVar24[0x10] = (char)((uint)uVar12 >> 0x18);
    puVar24[0x11] = (char)((uint)uVar12 >> 0x10);
    local_40 = (undefined1)uVar12;
    puVar24[0x12] = (char)((uint)uVar12 >> 8);
    puVar24[0x13] = local_40;
    puVar24[0x14] = (char)((uint)uVar13 >> 0x18);
    puVar24[0x15] = (char)((uint)uVar13 >> 0x10);
    local_3c = (undefined1)uVar13;
    puVar24[0x16] = (char)((uint)uVar13 >> 8);
    puVar24[0x17] = local_3c;
    puVar24[0x18] = uStack_37;
    puVar24[0x19] = local_38;
    puVar24[0x1a] = uStack_35;
    puVar24[0x1b] = uStack_36;
    puVar24[0x1c] = uStack_33;
    puVar24[0x1d] = uStack_34;
    puVar24[0x1e] = (char)((uint)uVar14 >> 0x18);
    puVar24[0x1f] = (char)((uint)uVar14 >> 0x10);
    puVar24[0x20] = uStack_31;
    puVar24[0x21] = local_32;
    uVar27 = (undefined1)((uint)uVar15 >> 0x18);
    puVar24[0x22] = uVar27;
    uVar21 = (undefined1)((uint)uVar15 >> 0x10);
    puVar24[0x23] = uVar21;
    local_2e = (undefined1)uVar15;
    uVar28 = (undefined1)((uint)uVar15 >> 8);
    puVar24[0x24] = uVar28;
    puVar24[0x25] = local_2e;
    puVar24[0x26] = uVar27;
    puVar24[0x27] = uVar21;
    puVar24[0x28] = uVar28;
    puVar24[0x29] = local_2e;
    uStack_25 = (undefined1)((ushort)uVar8 >> 8);
    puVar24[0x2a] = uStack_25;
    local_26 = (undefined1)uVar8;
    uStack_23 = (undefined1)((ushort)uVar9 >> 8);
    puVar24[0x2b] = local_26;
    local_24 = (undefined1)uVar9;
    puVar24[0x2c] = uStack_23;
    puVar24[0x2d] = local_24;
    *(undefined4 *)(puVar24 + 0x2e) = uVar16;
    *(undefined4 *)(puVar24 + 0x32) = uVar17;
    puVar24[0x36] = uVar2;
    puVar24[0x37] = uVar3;
    puVar24[0x38] = uVar4;
    puVar24[0x39] = bVar1;
    puVar29 = puVar24 + 0x3a;
    if ((bVar1 != 0) &&
       (iVar25 = (int)((ulonglong)(uVar19 & 0xffff) /
                      (ulonglong)(longlong)(int)(CONCAT12(local_32,uVar7) & 0xffff)) *
                 (uVar20 & 0xffff), 0 < iVar25)) {
      do {
        *puVar29 = local_16[1];
        puVar29[1] = *local_16;
        puVar29 = puVar29 + 2;
        iVar25 = iVar25 + -1;
        local_16 = local_16 + 2;
      } while (iVar25 != 0);
    }
    *puVar29 = (char)(uVar23 >> 0x18);
    puVar29[1] = (char)(uVar23 >> 0x10);
    local_12 = (undefined1)uVar23;
    puVar29[2] = (char)(uVar23 >> 8);
    puVar29[3] = local_12;
    puVar31 = (undefined4 *)(puVar29 + 4);
    for (uVar26 = uVar23 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
      *puVar31 = *puVar30;
      puVar30 = puVar30 + 1;
      puVar31 = puVar31 + 1;
    }
    for (uVar26 = uVar23 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
      *(undefined1 *)puVar31 = *(undefined1 *)puVar30;
      puVar30 = (undefined4 *)((int)puVar30 + 1);
      puVar31 = (undefined4 *)((int)puVar31 + 1);
    }
    *param_1 = ((short)(puVar29 + 4) + (short)uVar23) - (short)puVar24;
    return;
  }
  *param_1 = 0;
  return;
}


