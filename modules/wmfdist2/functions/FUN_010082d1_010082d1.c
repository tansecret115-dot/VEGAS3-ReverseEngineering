/* Module: wmfdist2.exe
   Function: FUN_010082d1
   Address: 010082d1
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010082d1(int *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  ushort *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ushort *puVar16;
  
  piVar7 = param_1;
  pbVar1 = (byte *)(param_1 + 0xbad);
  uVar14 = param_1[0xbac];
  param_1 = (int *)(uint)*pbVar1;
  puVar5 = (ushort *)piVar7[0xac2];
  iVar6 = *piVar7;
  iVar12 = param_3 + param_2;
  puVar16 = (ushort *)piVar7[0xac1];
  bVar2 = *pbVar1;
  do {
    if (iVar12 <= (int)param_2) {
      *(byte *)(piVar7 + 0xbad) = bVar2;
      piVar7[0xbac] = uVar14;
      piVar7[0xac1] = (int)puVar16;
      piVar7[0xbb0] = piVar7[2] & param_2;
      return param_2 - iVar12;
    }
    iVar15 = (int)*(short *)((int)piVar7 + (uVar14 >> 0x16) * 2 + 0x18);
    if (iVar15 < 0) {
      uVar8 = 0x200000;
      do {
        if ((uVar14 & uVar8) == 0) {
          sVar4 = (short)piVar7[0x38f - iVar15];
        }
        else {
          sVar4 = *(short *)((int)piVar7 + iVar15 * -4 + 0xe3e);
        }
        iVar15 = (int)sVar4;
        uVar8 = uVar8 >> 1;
      } while (iVar15 < 0);
    }
    if (puVar5 <= puVar16) {
      return -1;
    }
    bVar3 = *(byte *)(iVar15 + 0xa18 + (int)piVar7);
    bVar2 = (byte)param_1 - bVar3;
    uVar14 = uVar14 << (bVar3 & 0x1f);
    if ((char)bVar2 < '\x01') {
      uVar14 = uVar14 | (uint)*puVar16 << (-bVar2 & 0x1f);
      puVar16 = puVar16 + 1;
      bVar2 = bVar2 + 0x10;
    }
    param_1 = (int *)(uint)bVar2;
    uVar8 = iVar15 - 0x100;
    if ((int)uVar8 < 0) {
      *(char *)(iVar6 + param_2) = (char)uVar8;
      param_2 = param_2 + 1;
    }
    else {
      param_3 = uVar8 & 7;
      if (param_3 == 7) {
        iVar15 = (int)*(short *)((int)piVar7 + (uVar14 >> 0x18) * 2 + 0x818);
        if (iVar15 < 0) {
          uVar9 = 0x800000;
          do {
            if ((uVar14 & uVar9) == 0) {
              sVar4 = (short)piVar7[0x8cf - iVar15];
            }
            else {
              sVar4 = *(short *)((int)piVar7 + iVar15 * -4 + 0x233e);
            }
            iVar15 = (int)sVar4;
            uVar9 = uVar9 >> 1;
          } while (iVar15 < 0);
        }
        bVar3 = *(byte *)(iVar15 + 0xcb8 + (int)piVar7);
        bVar2 = bVar2 - bVar3;
        uVar14 = uVar14 << (bVar3 & 0x1f);
        if ((char)bVar2 < '\x01') {
          uVar14 = uVar14 | (uint)*puVar16 << (-bVar2 & 0x1f);
          puVar16 = puVar16 + 1;
          bVar2 = bVar2 + 0x10;
        }
        param_1 = (int *)(uint)bVar2;
        param_3 = iVar15 + 7;
      }
      cVar11 = (char)((int)uVar8 >> 3);
      if (cVar11 < '\x03') {
        iVar15 = piVar7[cVar11 + 3];
        if (cVar11 != '\0') {
          piVar7[cVar11 + 3] = piVar7[3];
          goto LAB_0100852c;
        }
      }
      else {
        iVar13 = (int)cVar11;
        bVar2 = (&DAT_01001528)[iVar13];
        if (bVar2 < 3) {
          if (bVar2 == 0) {
            iVar15 = *(int *)(&DAT_01001560 + iVar13 * 4);
          }
          else {
            bVar3 = (byte)param_1 - bVar2;
            uVar8 = uVar14 >> (0x20 - bVar2 & 0x1f);
            uVar14 = uVar14 << (bVar2 & 0x1f);
            if ((char)bVar3 < '\x01') {
              uVar14 = uVar14 | (uint)*puVar16 << (-bVar3 & 0x1f);
              puVar16 = puVar16 + 1;
              bVar3 = bVar3 + 0x10;
            }
            param_1 = (int *)(uint)bVar3;
            iVar15 = uVar8 + *(int *)(&DAT_01001560 + iVar13 * 4);
          }
        }
        else {
          if (bVar2 - 3 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = uVar14 >> (0x23 - bVar2 & 0x1f);
            uVar14 = uVar14 << ((byte)(bVar2 - 3) & 0x1f);
            param_1._0_1_ = (byte)param_1 + ('\x03' - bVar2);
            if ((char)(byte)param_1 < '\x01') {
              uVar14 = uVar14 | (uint)*puVar16 << (-(byte)param_1 & 0x1f);
              puVar16 = puVar16 + 1;
              param_1._0_1_ = (byte)param_1 + '\x10';
            }
          }
          iVar15 = (int)*(char *)((uVar14 >> 0x19) + 0xdb4 + (int)piVar7);
          bVar3 = *(byte *)(iVar15 + 0xe34 + (int)piVar7);
          bVar2 = (byte)param_1 - bVar3;
          uVar14 = uVar14 << (bVar3 & 0x1f);
          if ((char)bVar2 < '\x01') {
            uVar14 = uVar14 | (uint)*puVar16 << (-bVar2 & 0x1f);
            puVar16 = puVar16 + 1;
            bVar2 = bVar2 + 0x10;
          }
          param_1 = (int *)(uint)bVar2;
          iVar15 = *(int *)(&DAT_01001560 + iVar13 * 4) + uVar8 * 8 + iVar15;
        }
        piVar7[5] = piVar7[4];
        piVar7[4] = piVar7[3];
LAB_0100852c:
        piVar7[3] = iVar15;
      }
      param_3 = param_3 + 2;
      puVar10 = (undefined1 *)((param_2 - iVar15 & piVar7[2]) + iVar6);
      do {
        uVar8 = param_2 + 1;
        *(undefined1 *)(iVar6 + param_2) = *puVar10;
        puVar10 = puVar10 + 1;
        param_3 = param_3 - 1;
        param_2 = uVar8;
      } while (0 < (int)param_3);
    }
    bVar2 = (byte)param_1;
  } while( true );
}


