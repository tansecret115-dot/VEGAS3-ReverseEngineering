/* Module: 50comupd.exe
   Function: FUN_01007a42
   Address: 01007a42
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01007a42(int *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  ushort *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  ushort *puVar14;
  ushort *puVar15;
  
  piVar7 = param_1;
  pbVar1 = (byte *)(param_1 + 0xbad);
  puVar2 = (uint *)(param_1 + 0xbac);
  param_1 = (int *)(uint)*pbVar1;
  puVar6 = (ushort *)piVar7[0xac2];
  iVar11 = param_3 + param_2;
  puVar15 = (ushort *)piVar7[0xac1];
  bVar3 = *pbVar1;
  param_3 = *puVar2;
  do {
    if (iVar11 <= (int)param_2) {
      *(byte *)(piVar7 + 0xbad) = bVar3;
      piVar7[0xbac] = param_3;
      piVar7[0xac1] = (int)puVar15;
      piVar7[0xbb0] = piVar7[2] & param_2;
      return param_2 - iVar11;
    }
    iVar13 = (int)*(short *)((int)piVar7 + (param_3 >> 0x16) * 2 + 0x18);
    if (iVar13 < 0) {
      uVar8 = 0x200000;
      do {
        if ((param_3 & uVar8) == 0) {
          sVar5 = (short)piVar7[0x38f - iVar13];
        }
        else {
          sVar5 = *(short *)((int)piVar7 + iVar13 * -4 + 0xe3e);
        }
        iVar13 = (int)sVar5;
        uVar8 = uVar8 >> 1;
      } while (iVar13 < 0);
    }
    if (puVar6 <= puVar15) {
      return -1;
    }
    bVar4 = *(byte *)(iVar13 + 0xa18 + (int)piVar7);
    bVar3 = (byte)param_1 - bVar4;
    param_3 = param_3 << (bVar4 & 0x1f);
    if ((char)bVar3 < '\x01') {
      param_3 = param_3 | (uint)*puVar15 << (-bVar3 & 0x1f);
      puVar15 = puVar15 + 1;
      bVar3 = bVar3 + 0x10;
    }
    param_1 = (int *)(uint)bVar3;
    uVar8 = iVar13 - 0x100;
    if ((int)uVar8 < 0) {
      *(char *)(param_2 + *piVar7) = (char)uVar8;
      param_2 = param_2 + 1;
    }
    else {
      uVar9 = uVar8 & 7;
      if (uVar9 == 7) {
        iVar13 = (int)*(short *)((int)piVar7 + (param_3 >> 0x18) * 2 + 0x818);
        if (iVar13 < 0) {
          uVar9 = 0x800000;
          do {
            if ((param_3 & uVar9) == 0) {
              sVar5 = (short)piVar7[0x8cf - iVar13];
            }
            else {
              sVar5 = *(short *)((int)piVar7 + iVar13 * -4 + 0x233e);
            }
            iVar13 = (int)sVar5;
            uVar9 = uVar9 >> 1;
          } while (iVar13 < 0);
        }
        bVar4 = *(byte *)(iVar13 + 0xcb8 + (int)piVar7);
        bVar3 = bVar3 - bVar4;
        param_3 = param_3 << (bVar4 & 0x1f);
        if ((char)bVar3 < '\x01') {
          param_3 = param_3 | (uint)*puVar15 << (-bVar3 & 0x1f);
          puVar15 = puVar15 + 1;
          bVar3 = bVar3 + 0x10;
        }
        param_1 = (int *)(uint)bVar3;
        uVar9 = iVar13 + 7;
      }
      cVar12 = (char)((int)uVar8 >> 3);
      if (cVar12 < '\x03') {
        iVar13 = piVar7[cVar12 + 3];
        if (cVar12 != '\0') {
          piVar7[cVar12 + 3] = piVar7[3];
          goto LAB_01007c19;
        }
      }
      else {
        iVar13 = DAT_010014fc;
        if ('\x03' < cVar12) {
          iVar13 = (int)cVar12;
          uVar8 = param_3 >> (0x20 - (&DAT_010014b8)[iVar13] & 0x1f);
          param_3 = param_3 << ((&DAT_010014b8)[iVar13] & 0x1f);
          bVar3 = (byte)param_1 - (&DAT_010014b8)[iVar13];
          param_1 = (int *)(uint)bVar3;
          puVar14 = puVar15;
          if ((char)bVar3 < '\x01') {
            bVar4 = bVar3 + 0x10;
            param_1 = (int *)(uint)bVar4;
            param_3 = param_3 | (uint)*puVar15 << (-bVar3 & 0x1f);
            puVar14 = puVar15 + 1;
            if ((char)bVar4 < '\x01') {
              param_3 = param_3 | (uint)*puVar14 << (-bVar4 & 0x1f);
              puVar14 = puVar15 + 2;
              param_1 = (int *)(uint)(byte)(bVar3 + 0x20);
            }
          }
          iVar13 = uVar8 + *(int *)(&DAT_010014f0 + iVar13 * 4);
          puVar15 = puVar14;
        }
        piVar7[5] = piVar7[4];
        piVar7[4] = piVar7[3];
LAB_01007c19:
        piVar7[3] = iVar13;
      }
      iVar10 = uVar9 + 2;
      uVar8 = param_2 - iVar13 & piVar7[2];
      do {
        uVar9 = param_2 + 1;
        *(undefined1 *)(param_2 + *piVar7) = *(undefined1 *)(uVar8 + *piVar7);
        uVar8 = uVar8 + 1;
        iVar10 = iVar10 + -1;
        param_2 = uVar9;
      } while (0 < iVar10);
    }
    bVar3 = (byte)param_1;
  } while( true );
}


