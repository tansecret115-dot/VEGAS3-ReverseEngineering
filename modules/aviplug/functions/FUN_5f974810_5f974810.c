/* Module: aviplug.dll
   Function: FUN_5f974810
   Address: 5f974810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f974810(int *param_1,int *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  short sVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  int local_30;
  int *local_2c;
  uint *local_24;
  int *local_1c;
  int *local_18;
  undefined4 *local_14;
  undefined8 local_10;
  undefined8 local_8;
  
  iVar12 = *param_1;
  puVar14 = (uint *)(param_1 + 1);
  local_1c = (int *)param_2[8];
  *param_2 = iVar12 >> 0x1c;
  param_2[1] = iVar12 >> 0x18 & 0xf;
  local_14 = (undefined4 *)param_2[0x10];
  local_18 = (int *)0x0;
  *local_14 = 0;
  param_1 = (int *)0x2;
  local_14[1] = 0;
  piVar9 = param_2 + 2;
  do {
    puVar15 = puVar14;
    piVar8 = piVar9;
    uVar10 = *puVar15;
    uVar7 = puVar15[1];
    uVar13 = puVar15[3];
    local_10 = CONCAT44((uVar10 & 0xff0000 | uVar10 >> 0x10) >> 8 |
                        (uVar10 << 0x10 | uVar10 & 0xff00) << 8,
                        (uVar7 & 0xff0000 | uVar7 >> 0x10) >> 8 |
                        (uVar7 << 0x10 | uVar7 & 0xff00) << 8);
    uVar10 = puVar15[2];
    local_8._0_4_ = (uVar13 << 0x10 | uVar13 & 0xff00) << 8;
    uVar13 = (uVar13 & 0xff0000 | uVar13 >> 0x10) >> 8 | (uint)local_8;
    local_8._4_4_ =
         (uVar10 & 0xff0000 | uVar10 >> 0x10) >> 8 | (uVar10 << 0x10 | uVar10 & 0xff00) << 8;
    FUN_5f974620((uint *)&local_10,100,(uint *)*piVar8,&local_1c);
    uVar10 = puVar15[5];
    local_10 = CONCAT44(uVar13,(uint)local_10);
    uVar7 = puVar15[6];
    local_8 = CONCAT44(local_8._4_4_,
                       (uVar7 & 0xff0000 | uVar7 >> 0x10) >> 8 |
                       (uVar7 << 0x10 | uVar7 & 0xff00) << 8);
    lVar16 = __allshl(0x10,uVar13);
    local_10 = CONCAT44((int)((ulonglong)lVar16 >> 0x20),
                        (uint)lVar16 | (uVar10 << 0x10 & 0xffffff | uVar10 & 0xff00) >> 8);
    local_8 = __allshl(0x10,(uVar10 & 0xff0000 | uVar10 >> 0x10) >> 8 |
                            (uVar10 << 0x10 | uVar10 & 0xff00) << 8);
    FUN_5f974620((uint *)&local_10,100,(uint *)piVar8[1],&local_1c);
    param_1 = (int *)((int)param_1 + -1);
    piVar9 = piVar8 + 2;
    puVar14 = puVar15 + 7;
  } while (param_1 != (int *)0x0);
  uVar10 = puVar15[7];
  uVar7 = puVar15[8];
  local_10 = CONCAT44((uVar10 & 0xff0000 | uVar10 >> 0x10) >> 8 |
                      (uVar10 << 0x10 | uVar10 & 0xff00) << 8,
                      (uVar7 & 0xff0000 | uVar7 >> 0x10) >> 8 |
                      (uVar7 << 0x10 | uVar7 & 0xff00) << 8);
  uVar10 = puVar15[9];
  uVar7 = (uVar10 << 0x10 | uVar10 & 0xff00) << 8;
  uVar13 = (uVar10 & 0xff0000 | uVar10 >> 0x10) >> 8 | uVar7;
  local_8 = (ulonglong)uVar7 << 0x20;
  FUN_5f974620((uint *)&local_10,0x44,(uint *)piVar8[2],&local_1c);
  uVar10 = puVar15[0xb];
  local_10 = CONCAT44(uVar13,(uint)local_10);
  lVar16 = __allshl(0x10,uVar13);
  local_10 = CONCAT44((int)((ulonglong)lVar16 >> 0x20),
                      (uint)lVar16 | (uVar10 << 0x10 & 0xffffff | uVar10 & 0xff00) >> 8);
  local_8 = __allshl(0x10,(uVar10 & 0xff0000 | uVar10 >> 0x10) >> 8 |
                          (uVar10 << 0x10 | uVar10 & 0xff00) << 8);
  FUN_5f974620((uint *)&local_10,0x44,(uint *)piVar8[3],&local_1c);
  *local_1c = 0;
  param_1 = local_18;
  piVar9 = (int *)0x40;
  if ((int)local_18 < 0x41) {
    piVar9 = local_18;
  }
  local_2c = (int *)param_2[8];
  plVar3 = (longlong *)param_2[0x10];
  if (local_18 == (int *)0x0) {
LAB_5f974fde:
    iVar12 = *local_2c;
    if (iVar12 != 0) {
      do {
        piVar9 = (int *)*param_3;
        local_2c = local_2c + 1;
        *piVar9 = iVar12;
        iVar12 = *local_2c;
        *param_3 = piVar9 + 1;
      } while (iVar12 != 0);
      return 0;
    }
  }
  else {
    local_24 = (uint *)(plVar3 + 1);
    uVar10 = *(uint *)((int)plVar3 + 4);
    local_10 = *plVar3;
    if ((local_1c != local_2c) && (puVar14 = (uint *)*local_2c, puVar14 != (uint *)0x0)) {
      do {
        uVar7 = puVar14[1] & 0xffff;
        local_30 = (int)puVar14[1] >> 0x10;
        local_8 = (ulonglong)*puVar14 << 0x20;
        uVar17 = __aullshr((byte)uVar7,uVar10);
        uVar10 = local_8._4_4_ | (uint)(uVar17 >> 0x20);
        param_1 = (int *)((int)param_1 + uVar7);
        piVar9 = (int *)((int)piVar9 + uVar7);
        local_8._0_4_ = (uint)local_8 | (uint)uVar17;
        iVar12 = 0;
        local_8 = CONCAT44(uVar10,(uint)local_8);
        if ((int)piVar9 < 0x41) {
          local_10 = CONCAT44(uVar10,(uint)local_8);
          goto LAB_5f974cd2;
        }
        iVar11 = (uVar10 >> 0x18) * 8;
        uVar17 = __aullshr((byte)*(undefined2 *)(&DAT_5f9e0190 + iVar11),uVar10);
        iVar12 = (int)uVar17 + *(int *)(&DAT_5f9e0192 + iVar11);
        uVar10 = *(uint *)(&DAT_5f9e1190 + iVar12 * 8);
        puVar14[1] = *(uint *)(&DAT_5f9e1194 + iVar12 * 8);
        uVar1 = *(undefined2 *)(&DAT_5f9e0196 + iVar11);
        *puVar14 = uVar10;
        local_30 = local_30 + 1;
        local_10 = __allshl((char)uVar1 - (byte)uVar7,local_10._4_4_);
        uVar10 = (uint)((ulonglong)local_10 >> 0x20);
        sVar2 = *(short *)(&DAT_5f9e0196 + iVar11);
LAB_5f974cab:
        puVar14 = puVar14 + 2;
        piVar9 = (int *)((int)piVar9 - (int)sVar2);
        param_1 = (int *)((int)param_1 - (int)sVar2);
        if (iVar12 != 4) {
LAB_5f974cd2:
          do {
            if (0x3e < local_30) {
              *puVar14 = 0x1556;
              puVar14[1] = 0;
              return 0xffffffff;
            }
            iVar11 = (uVar10 >> 0x18) * 8;
            if ((int)piVar9 < (int)*(short *)(&DAT_5f9e0196 + (uVar10 >> 0x18) * 8)) {
              local_8 = *(longlong *)local_24;
              bVar6 = (byte)piVar9;
              uVar17 = __aullshr(bVar6,local_24[1]);
              piVar9 = piVar9 + 0x10;
              uVar10 = uVar10 | (uint)(uVar17 >> 0x20);
              local_10 = CONCAT44(uVar10,(uint)local_10 | (uint)uVar17);
              if ((int)param_1 <= (int)piVar9) {
                piVar9 = param_1;
              }
              iVar11 = (uVar10 >> 0x18) * 8;
              if (0x40 < (int)piVar9) goto code_r0x5f974d52;
              local_24 = local_24 + 2;
              if ((int)param_1 < (int)*(short *)(&DAT_5f9e0196 + iVar11)) {
                uVar17 = __aullshr((byte)param_1,0xffffffff);
                puVar14[1] = local_30 << 0x10 | (uint)param_1;
                *puVar14 = uVar10 & ~(uint)(uVar17 >> 0x20);
                puVar4 = (undefined4 *)*param_3;
                *puVar4 = puVar14;
                *param_3 = puVar4 + 1;
                local_2c = local_2c + 1;
                goto LAB_5f974fde;
              }
            }
            else {
              uVar17 = __aullshr((byte)*(undefined2 *)(&DAT_5f9e0190 + iVar11),uVar10);
              iVar12 = (int)uVar17 + *(int *)(&DAT_5f9e0192 + iVar11);
              local_30 = local_30 + 1;
              uVar10 = *(uint *)(&DAT_5f9e1194 + iVar12 * 8);
              *puVar14 = *(uint *)(&DAT_5f9e1190 + iVar12 * 8);
              puVar14[1] = uVar10;
              local_10 = __allshl((byte)*(undefined2 *)(&DAT_5f9e0196 + iVar11),local_10._4_4_);
              uVar10 = (uint)((ulonglong)local_10 >> 0x20);
              piVar9 = (int *)((int)piVar9 - (int)*(short *)(&DAT_5f9e0196 + iVar11));
              param_1 = (int *)((int)param_1 - (int)*(short *)(&DAT_5f9e0196 + iVar11));
              puVar14 = puVar14 + 2;
            }
            if (iVar12 == 4) break;
          } while( true );
        }
        local_2c = local_2c + 1;
        puVar14 = (uint *)*local_2c;
        if (puVar14 == (uint *)0x0) break;
      } while( true );
    }
    uVar10 = param_3[1];
    bVar6 = (byte)(uVar10 & 0x3f);
    puVar14 = (uint *)(param_3[2] + ((int)uVar10 >> 6) * 8);
    param_3[1] = uVar10 + (int)param_1;
    if ((local_24 + -2 != puVar14) || ((int)piVar9 < 0x40)) {
      uVar17 = __aullshr(bVar6,0xffffffff);
      *puVar14 = *puVar14 & ~(uint)uVar17;
      puVar14[1] = puVar14[1] & ~(uint)(uVar17 >> 0x20);
      uVar17 = __aullshr(bVar6,local_10._4_4_);
      *puVar14 = *puVar14 | (uint)uVar17;
      puVar14[1] = puVar14[1] | (uint)(uVar17 >> 0x20);
      lVar16 = __allshl(0x40 - bVar6,local_10._4_4_);
      iVar11 = (uVar10 & 0x3f) + (int)piVar9;
      cVar5 = (char)iVar11;
      param_3._0_1_ = -cVar5 + 0x40;
      iVar12 = (int)param_1 - (int)piVar9;
      puVar15 = puVar14;
      if (0x3f < iVar11) {
        puVar15 = puVar14 + 2;
        iVar11 = iVar11 + -0x40;
        param_3._0_1_ = -cVar5 + 0x80;
        piVar9 = (int *)0x40;
        *puVar15 = (uint)lVar16;
        local_10._4_4_ = (uint)((ulonglong)lVar16 >> 0x20);
        puVar14[3] = local_10._4_4_;
      }
      while (0 < iVar12) {
        local_10._0_4_ = *local_24;
        local_10._4_4_ = local_24[1];
        local_24 = local_24 + 2;
        uVar17 = __aullshr((byte)iVar11,local_10._4_4_);
        *puVar15 = *puVar15 | (uint)uVar17;
        puVar15[1] = puVar15[1] | (uint)(uVar17 >> 0x20);
        lVar16 = __allshl((byte)param_3,local_10._4_4_);
        *(longlong *)(puVar15 + 2) = lVar16;
        iVar12 = iVar12 - (int)piVar9;
        piVar9 = (int *)0x40;
        puVar15 = puVar15 + 2;
      }
    }
  }
  return 0;
code_r0x5f974d52:
  uVar17 = __aullshr((byte)*(undefined2 *)(&DAT_5f9e0190 + iVar11),uVar10);
  iVar12 = (int)uVar17 + *(int *)(&DAT_5f9e0192 + iVar11);
  uVar10 = *(uint *)(&DAT_5f9e1194 + iVar12 * 8);
  *puVar14 = *(uint *)(&DAT_5f9e1190 + iVar12 * 8);
  puVar14[1] = uVar10;
  local_10 = __allshl((char)*(undefined2 *)(&DAT_5f9e0196 + iVar11) - bVar6,local_8._4_4_);
  uVar10 = (uint)((ulonglong)local_10 >> 0x20);
  sVar2 = *(short *)(&DAT_5f9e0196 + iVar11);
  local_24 = local_24 + 2;
  goto LAB_5f974cab;
}


