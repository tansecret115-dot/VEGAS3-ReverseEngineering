/* Module: aviplug.dll
   Function: FUN_5f94c140
   Address: 5f94c140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f94c140(int *param_1,uint param_2,uint param_3,uint param_4,ushort *param_5,undefined4 param_6,
            uint *param_7,int *param_8)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  uint local_30;
  int local_2c;
  ushort *local_28;
  int local_24;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 local_c;
  
  iVar12 = *param_1;
  uVar11 = 0;
  local_c = 0;
  bVar4 = false;
  bVar5 = false;
  uVar6 = iVar12 * 0xd8 - param_3;
  if (uVar6 <= param_4) {
    param_4 = uVar6;
  }
  uVar6 = iVar12 * 9;
  local_28 = param_5;
  local_24 = 0;
  local_2c = 0;
  if (iVar12 == 5) {
    puVar8 = &DAT_5f9d8340;
    local_18 = &DAT_5f9d81b4;
    local_1c = &DAT_5f9d8340;
  }
  else {
    local_1c = &DAT_5f9d83f4;
    local_18 = &DAT_5f9d8268;
    puVar8 = &DAT_5f9d83f4;
  }
  if (param_3 != 0) {
    local_2c = (param_3 / uVar6) * 3;
    uVar11 = param_3 % uVar6;
  }
  uVar13 = param_2 & 0x100;
  local_30 = uVar6;
  if ((uVar13 == 0) || ((param_2 & 0x200) == 0)) {
    if (uVar13 == 0) {
      if ((param_2 & 0x200) == 0) {
        local_c = 0x80070057;
        goto LAB_5f94c579;
      }
      uVar7 = param_4;
      if ((int)param_4 < 1) goto LAB_5f94c579;
      do {
        if ((int)uVar11 < (int)uVar6) {
          piVar14 = puVar8 + uVar11;
          iVar15 = local_30 - uVar11;
          iVar12 = (int)local_18 - (int)puVar8;
          uVar7 = uVar7 - iVar15;
          local_24 = local_24 + iVar15 * 2;
          do {
            iVar9 = param_1[*(int *)((int)piVar14 + iVar12) * 9 + *piVar14 + 1] + 8 + local_2c;
            uVar6 = CONCAT31((int3)((uint)param_1 >> 8),
                             *(undefined1 *)
                              (param_1[*(int *)((int)piVar14 + iVar12) * 9 + *piVar14 + 1] + 10 +
                              local_2c)) & 0xffffff0f;
            uVar6 = CONCAT22((short)(uVar6 >> 0x10),(short)(char)uVar6) |
                    CONCAT22((short)((uint)iVar9 >> 0x10),(short)*(char *)(iVar9 + 1)) << 4;
            uVar11 = CONCAT22((short)((uint)local_2c >> 0x10),(short)uVar6 >> 0xb);
            uVar6 = uVar6 ^ uVar11;
            iVar9 = ((int)uVar6 >> 8 & 0xfU) - 1;
            if (0 < iVar9) {
              uVar6 = uVar6 + iVar9 * -0x100 << ((byte)iVar9 & 0x1f);
              uVar11 = uVar11 << ((byte)iVar9 & 0x1f);
            }
            uVar10 = (ushort)uVar11 ^ (ushort)uVar6;
            if (uVar10 == 0x8000) {
              bVar4 = true;
            }
            piVar14 = piVar14 + 1;
            *local_28 = uVar10;
            local_28 = local_28 + 1;
            iVar15 = iVar15 + -1;
            puVar8 = local_1c;
            uVar6 = local_30;
          } while (iVar15 != 0);
        }
        uVar11 = 0;
        local_2c = local_2c + 3;
        if ((int)uVar7 < (int)uVar6) {
          uVar6 = uVar7;
          local_30 = uVar7;
        }
      } while (0 < (int)uVar7);
    }
    else {
      uVar7 = param_4;
      if ((int)param_4 < 1) goto LAB_5f94c579;
      do {
        if ((int)uVar11 < (int)uVar6) {
          piVar14 = puVar8 + uVar11;
          iVar15 = local_30 - uVar11;
          iVar12 = (int)local_18 - (int)puVar8;
          uVar7 = uVar7 - iVar15;
          local_24 = local_24 + iVar15 * 2;
          do {
            iVar9 = param_1[*(int *)((int)piVar14 + iVar12) * 9 + *piVar14 + 1];
            pcVar1 = (char *)(iVar9 + 8 + local_2c);
            uVar11 = CONCAT31((int3)((uint)iVar9 >> 8),*(char *)(iVar9 + 10 + local_2c) >> 4) &
                     0xffffff0f;
            uVar6 = CONCAT22((short)((uint)local_2c >> 0x10),(short)(char)uVar11) |
                    CONCAT22((short)((uint)pcVar1 >> 0x10),(short)*pcVar1) << 4;
            uVar11 = CONCAT22((short)(uVar11 >> 0x10),(short)uVar6 >> 0xb);
            uVar6 = uVar6 ^ uVar11;
            iVar9 = ((int)uVar6 >> 8 & 0xfU) - 1;
            if (0 < iVar9) {
              uVar6 = uVar6 + iVar9 * -0x100 << ((byte)iVar9 & 0x1f);
              uVar11 = uVar11 << ((byte)iVar9 & 0x1f);
            }
            uVar10 = (ushort)uVar11 ^ (ushort)uVar6;
            if (uVar10 == 0x8000) {
              bVar4 = true;
            }
            piVar14 = piVar14 + 1;
            *local_28 = uVar10;
            local_28 = local_28 + 1;
            iVar15 = iVar15 + -1;
            puVar8 = local_1c;
            uVar6 = local_30;
          } while (iVar15 != 0);
        }
        uVar11 = 0;
        local_2c = local_2c + 3;
        if ((int)uVar7 < (int)uVar6) {
          uVar6 = uVar7;
          local_30 = uVar7;
        }
      } while (0 < (int)uVar7);
    }
  }
  else {
    uVar7 = param_4;
    if ((int)param_4 < 1) goto LAB_5f94c579;
    do {
      if ((int)uVar11 < (int)uVar6) {
        piVar14 = puVar8 + uVar11;
        iVar12 = (int)local_18 - (int)puVar8;
        iVar15 = uVar6 - uVar11;
        uVar7 = uVar7 - iVar15;
        local_24 = local_24 + iVar15 * 4;
        do {
          iVar9 = param_1[*(int *)((int)piVar14 + iVar12) * 9 + *piVar14 + 1];
          bVar2 = *(byte *)(iVar9 + 10 + local_2c);
          pcVar1 = (char *)(iVar9 + 8 + local_2c);
          cVar3 = pcVar1[1];
          uVar6 = CONCAT31((int3)((uint)local_2c >> 8),(char)bVar2 >> 4) & 0xffffff0f;
          uVar6 = CONCAT22((short)(uVar6 >> 0x10),(short)(char)uVar6) |
                  CONCAT22((short)((uint)pcVar1 >> 0x10),(short)*pcVar1) << 4;
          uVar11 = CONCAT22((short)((uint)iVar9 >> 0x10),(short)uVar6 >> 0xb);
          uVar6 = uVar6 ^ uVar11;
          iVar9 = ((int)uVar6 >> 8 & 0xfU) - 1;
          if (0 < iVar9) {
            uVar6 = uVar6 + iVar9 * -0x100 << ((byte)iVar9 & 0x1f);
            uVar11 = uVar11 << ((byte)iVar9 & 0x1f);
          }
          uVar10 = (ushort)(uVar11 ^ uVar6);
          if (uVar10 == 0x8000) {
            bVar4 = true;
          }
          *local_28 = uVar10;
          uVar11 = CONCAT22((short)((uVar11 ^ uVar6) >> 0x10),(short)cVar3) << 4;
          uVar6 = CONCAT22((short)((uint)(local_28 + 1) >> 0x10),(short)(char)(bVar2 & 0xf)) |
                  uVar11;
          uVar11 = CONCAT22((short)(uVar11 >> 0x10),(short)uVar6 >> 0xb);
          uVar6 = uVar6 ^ uVar11;
          iVar9 = ((int)uVar6 >> 8 & 0xfU) - 1;
          if (0 < iVar9) {
            uVar6 = uVar6 + iVar9 * -0x100 << ((byte)iVar9 & 0x1f);
            uVar11 = uVar11 << ((byte)iVar9 & 0x1f);
          }
          uVar10 = (ushort)uVar11 ^ (ushort)uVar6;
          if (uVar10 == 0x8000) {
            bVar5 = true;
          }
          piVar14 = piVar14 + 1;
          local_28[1] = uVar10;
          local_28 = local_28 + 2;
          iVar15 = iVar15 + -1;
          puVar8 = local_1c;
          uVar6 = local_30;
        } while (iVar15 != 0);
      }
      uVar11 = 0;
      local_2c = local_2c + 3;
      if ((int)uVar7 < (int)uVar6) {
        uVar6 = uVar7;
        local_30 = uVar7;
      }
    } while (0 < (int)uVar7);
  }
  if ((bVar4) || (bVar5)) {
    iVar12 = (param_2 >> 9 & 1) + (param_2 >> 8 & 1);
    if (bVar4) {
      FUN_5f94bed0((short *)param_5,iVar12,param_4);
    }
    if (bVar5) {
      FUN_5f94bed0((short *)(param_5 + 1),iVar12,param_4);
    }
  }
LAB_5f94c579:
  if (param_7 != (uint *)0x0) {
    *param_7 = param_4;
  }
  if (param_8 != (int *)0x0) {
    if (uVar13 != 0) {
      local_24 = local_24 + -2;
    }
    if ((param_2 & 0x200) != 0) {
      local_24 = local_24 + -2;
    }
    *param_8 = local_24;
  }
  return local_c;
}


