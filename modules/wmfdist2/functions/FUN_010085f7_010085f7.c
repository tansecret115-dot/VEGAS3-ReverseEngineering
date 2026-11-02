/* Module: wmfdist2.exe
   Function: FUN_010085f7
   Address: 010085f7
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010085f7(int *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  short sVar6;
  ushort *puVar7;
  int iVar8;
  int *piVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ushort *puVar16;
  uint local_8;
  
  piVar9 = param_1;
  pbVar1 = (byte *)(param_1 + 0xbad);
  puVar2 = (uint *)(param_1 + 0xbac);
  param_1 = (int *)(uint)*pbVar1;
  puVar7 = (ushort *)piVar9[0xac2];
  iVar8 = *piVar9;
  iVar11 = param_3 + param_2;
  puVar16 = (ushort *)piVar9[0xac1];
  bVar3 = *pbVar1;
  param_3 = *puVar2;
  do {
    if (iVar11 <= param_2) {
      piVar9[0xbac] = param_3;
      *(byte *)(piVar9 + 0xbad) = bVar3;
      piVar9[0xac1] = (int)puVar16;
      return param_2;
    }
    iVar12 = (int)*(short *)((int)piVar9 + (param_3 >> 0x16) * 2 + 0x18);
    if (iVar12 < 0) {
      uVar14 = 0x200000;
      do {
        if ((param_3 & uVar14) == 0) {
          sVar6 = (short)piVar9[0x38f - iVar12];
        }
        else {
          sVar6 = *(short *)((int)piVar9 + iVar12 * -4 + 0xe3e);
        }
        iVar12 = (int)sVar6;
        uVar14 = uVar14 >> 1;
      } while (iVar12 < 0);
    }
    if (puVar7 <= puVar16) {
      return -1;
    }
    bVar4 = *(byte *)(iVar12 + 0xa18 + (int)piVar9);
    bVar3 = (byte)param_1 - bVar4;
    param_3 = param_3 << (bVar4 & 0x1f);
    if ((char)bVar3 < '\x01') {
      param_3 = param_3 | (uint)*puVar16 << (-bVar3 & 0x1f);
      puVar16 = puVar16 + 1;
      bVar3 = bVar3 + 0x10;
    }
    param_1 = (int *)(uint)bVar3;
    uVar14 = iVar12 - 0x100;
    if ((int)uVar14 < 0) {
      *(char *)(iVar8 + param_2) = (char)uVar14;
      *(char *)(piVar9[1] + iVar8 + param_2) = (char)uVar14;
      param_2 = param_2 + 1;
    }
    else {
      local_8 = uVar14 & 7;
      if (local_8 == 7) {
        iVar12 = (int)*(short *)((int)piVar9 + (param_3 >> 0x18) * 2 + 0x818);
        if (iVar12 < 0) {
          uVar15 = 0x800000;
          do {
            if ((param_3 & uVar15) == 0) {
              sVar6 = (short)piVar9[0x8cf - iVar12];
            }
            else {
              sVar6 = *(short *)((int)piVar9 + iVar12 * -4 + 0x233e);
            }
            iVar12 = (int)sVar6;
            uVar15 = uVar15 >> 1;
          } while (iVar12 < 0);
        }
        bVar4 = *(byte *)(iVar12 + 0xcb8 + (int)piVar9);
        bVar3 = bVar3 - bVar4;
        param_3 = param_3 << (bVar4 & 0x1f);
        if ((char)bVar3 < '\x01') {
          param_3 = param_3 | (uint)*puVar16 << (-bVar3 & 0x1f);
          puVar16 = puVar16 + 1;
          bVar3 = bVar3 + 0x10;
        }
        param_1 = (int *)(uint)bVar3;
        local_8 = iVar12 + 7;
      }
      cVar10 = (char)((int)uVar14 >> 3);
      if (cVar10 < '\x03') {
        iVar12 = piVar9[cVar10 + 3];
        if (cVar10 != '\0') {
          piVar9[cVar10 + 3] = piVar9[3];
          goto LAB_0100884a;
        }
      }
      else {
        iVar13 = (int)cVar10;
        bVar3 = (&DAT_01001528)[iVar13];
        if (bVar3 < 3) {
          if (bVar3 == 0) {
            iVar12 = 1;
          }
          else {
            bVar4 = (byte)param_1 - bVar3;
            uVar14 = param_3 >> (0x20 - bVar3 & 0x1f);
            param_3 = param_3 << (bVar3 & 0x1f);
            if ((char)bVar4 < '\x01') {
              param_3 = param_3 | (uint)*puVar16 << (-bVar4 & 0x1f);
              puVar16 = puVar16 + 1;
              bVar4 = bVar4 + 0x10;
            }
            param_1 = (int *)(uint)bVar4;
            iVar12 = uVar14 + *(int *)(&DAT_01001560 + iVar13 * 4);
          }
        }
        else {
          if (bVar3 - 3 == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = param_3 >> (0x23 - bVar3 & 0x1f);
            param_3 = param_3 << ((byte)(bVar3 - 3) & 0x1f);
            param_1._0_1_ = (byte)param_1 + ('\x03' - bVar3);
            if ((char)(byte)param_1 < '\x01') {
              param_3 = param_3 | (uint)*puVar16 << (-(byte)param_1 & 0x1f);
              puVar16 = puVar16 + 1;
              param_1._0_1_ = (byte)param_1 + '\x10';
            }
          }
          iVar12 = (int)*(char *)((param_3 >> 0x19) + 0xdb4 + (int)piVar9);
          bVar4 = *(byte *)(iVar12 + 0xe34 + (int)piVar9);
          bVar3 = (byte)param_1 - bVar4;
          param_3 = param_3 << (bVar4 & 0x1f);
          if ((char)bVar3 < '\x01') {
            param_3 = param_3 | (uint)*puVar16 << (-bVar3 & 0x1f);
            puVar16 = puVar16 + 1;
            bVar3 = bVar3 + 0x10;
          }
          param_1 = (int *)(uint)bVar3;
          iVar12 = *(int *)(&DAT_01001560 + iVar13 * 4) + uVar14 * 8 + iVar12;
        }
        piVar9[5] = piVar9[4];
        piVar9[4] = piVar9[3];
LAB_0100884a:
        piVar9[3] = iVar12;
      }
      local_8 = local_8 + 2;
      do {
        uVar5 = *(undefined1 *)((param_2 - iVar12 & piVar9[2]) + iVar8);
        *(undefined1 *)(iVar8 + param_2) = uVar5;
        if (param_2 < 0x101) {
          *(undefined1 *)(piVar9[1] + iVar8 + param_2) = uVar5;
        }
        param_2 = param_2 + 1;
        local_8 = local_8 + -1;
      } while (0 < (int)local_8);
    }
    bVar3 = (byte)param_1;
  } while( true );
}


