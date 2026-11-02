/* Module: erv23260.dll
   Function: FUN_63802340
   Address: 63802340
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * __cdecl
FUN_63802340(uint *param_1,uint *param_2,uint param_3,undefined4 *param_4,uint *param_5,int param_6,
            char param_7,int param_8,int param_9)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  undefined2 uVar10;
  byte bVar11;
  undefined2 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  uint *local_14;
  
  if (0 < param_6) {
    uVar15 = 8;
    bVar9 = (byte)*param_5 | 0x80;
    uVar16 = *param_1 >> 1;
    local_14 = param_1;
    pbVar17 = (byte *)*param_4;
    goto LAB_638023a9;
  }
  pbVar17 = (byte *)*param_4;
  local_14 = param_1;
  uVar16 = *param_1 >> 1;
  uVar15 = (param_3 & 0xf) << 8;
  bVar9 = (byte)*param_5;
  if ((param_3 & 0xf) == 0) {
    local_14 = param_2;
    param_8 = param_9;
    uVar16 = (*param_2 >> 1) + 0x80000000;
    uVar15 = (param_3 & 0x30) << 8;
    if ((param_3 & 0x30) == 0) {
      return param_2;
    }
  }
LAB_638023d3:
  do {
    bVar3 = *(byte *)(uVar16 * 2 + 2);
    uVar7 = (uint)*(byte *)(uVar16 * 2 + 3);
    bVar4 = *(byte *)(uVar16 * 2 + 1);
    uVar16 = uVar16 + 2;
    bVar5 = *pbVar17;
    if ((byte)(&DAT_6382fb55)[uVar7 * 2] < bVar3) {
      uVar7 = (uint)*(byte *)(uVar16 * 2 + -1);
      bVar11 = (char)bVar4 >> 7;
      if ((char)(bVar3 + 0x81) < '\0') {
        uVar7 = uVar7 * 2;
        if (param_7 != '\0') {
          uVar13 = *(uint *)(uVar16 * 2 + -4);
          uVar14 = (int)((uint)bVar4 << 0x18) >> 0x1f;
          uVar7 = uVar7 | 0x602;
          uVar8 = uVar7 >> (bVar9 & 0x1f) | uVar7 << 0x20 - (bVar9 & 0x1f);
          pbVar17[1] = (byte)uVar8;
          uVar14 = ((uVar13 & 0x7fff) * param_8 >> 0x15 ^ uVar14) - uVar14;
          *pbVar17 = bVar5 | (byte)(uVar8 >> 8);
          pbVar17[2] = (byte)(uVar8 >> 0x18);
          uVar7 = *(uint *)(uVar16 * 2 + -4);
          uVar13 = CONCAT11((char)(uVar8 >> 0x10),bVar9 + 0x16) & 0xffffff87;
          pbVar17 = pbVar17 + ((bVar9 + 0x16 & 0x18) >> 3);
          bVar9 = (byte)uVar13;
          uVar8 = ((uVar14 & 0x7e0) << 0x10 | uVar14 * 0x8000000) >> (bVar9 & 0x1f);
          pbVar17[2] = (byte)(uVar8 >> 8);
          bVar9 = bVar9 + 0xb;
          uVar10 = (undefined2)CONCAT31((int3)(uVar13 >> 8),bVar9);
          uVar13 = (uint)(bVar9 & 0x18);
          uVar12 = (undefined2)(uVar8 >> 0x10);
          uVar7 = uVar7 >> 0x19 ^ 0x40;
          goto LAB_6380242a;
        }
        uVar13 = bVar11 ^ 0x7f | 1;
        uVar7 = (int)uVar7 >> 2 | 0x180;
      }
      else {
        uVar7 = (uVar7 | 0x300) >> 1;
        uVar13 = (uint)(byte)((bVar3 + 0x81 ^ bVar11) - bVar11);
      }
      uVar13 = ((uVar13 | uVar7 << 8) << 10) >> (bVar9 & 0x1f);
      pbVar17[3] = (byte)uVar13;
      uVar7 = uVar7 ^ 0x1c0;
      pbVar17[2] = (byte)(uVar13 >> 8);
      uVar12 = (undefined2)(uVar13 >> 0x10);
      uVar10 = CONCAT11(bVar5,bVar9 + 0x16);
      uVar13 = (uint)(bVar9 + 0x16 & 0x18);
    }
    else {
      uVar7 = *(uint *)(&DAT_6382fd50 + (uint)(byte)((&DAT_6382fb50)[uVar7 * 2] + bVar3) * 4);
      uVar13 = ((bVar4 | 0xffffff7f) + uVar7 & uVar7) >> (bVar9 & 0x1f);
      pbVar17[2] = (byte)(uVar13 >> 8);
      bVar9 = bVar9 + (char)uVar7;
      uVar10 = CONCAT11(bVar5,bVar9);
      uVar12 = (undefined2)(uVar13 >> 0x10);
      uVar13 = (uint)(bVar9 & 0x18);
    }
LAB_6380242a:
    pbVar17[1] = (byte)uVar12;
    *pbVar17 = (byte)((ushort)uVar10 >> 8) | (byte)((ushort)uVar12 >> 8);
    bVar9 = (byte)uVar10 & 0x87;
    if ((char)bVar9 < '\0') {
      pbVar17 = pbVar17 + (uVar13 >> 3);
      uVar13 = uVar15;
      if ((uVar7 & 0x40) == 0) {
        do {
          uVar15 = uVar13 - 2;
          if (uVar15 == 0 || (int)uVar13 < 2) {
            param_8 = param_9;
            uVar7 = uVar16 * 2;
            if (uVar15 != 0) goto LAB_63802474;
            *local_14 = uVar7;
            uVar16 = *param_2 >> 1;
            uVar15 = uVar13 + 1;
            local_14 = param_2;
          }
LAB_638023a9:
          cVar2 = *(char *)(uVar16 * 2 + 3);
          pbVar1 = (byte *)(uVar16 * 2);
          iVar6 = (uint)*pbVar1 << 0x20 - (bVar9 & 0x1f);
          uVar16 = uVar16 + 2;
          *pbVar17 = *pbVar17 | *pbVar1 >> (bVar9 & 0x1f) | (byte)iVar6;
          pbVar17[1] = (byte)((uint)iVar6 >> 0x18);
          pbVar17 = pbVar17 + 1;
          uVar13 = uVar15;
        } while (cVar2 < '\0');
      }
      goto LAB_638023d3;
    }
    pbVar17 = pbVar17 + (uVar13 >> 3);
    uVar15 = uVar15 & (uVar15 - 0x40) + uVar7;
    if (uVar15 == 0) {
      param_8 = param_9;
      uVar7 = uVar16 * 2;
      if (CARRY4(uVar16,uVar16)) goto LAB_63802474;
      *local_14 = uVar7;
      uVar16 = (*param_2 >> 1) + 0x80000000;
      uVar15 = (param_3 & 0x30) << 8;
      local_14 = param_2;
      if ((param_3 & 0x30) == 0) {
        uVar7 = (*param_2 >> 1) * 2;
LAB_63802474:
        *param_2 = uVar7;
        *param_4 = pbVar17;
        *(byte *)param_5 = bVar9 & 7;
        return param_5;
      }
    }
  } while( true );
}


