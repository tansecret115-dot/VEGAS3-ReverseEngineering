/* Module: 50comupd.exe
   Function: FUN_01007cd3
   Address: 01007cd3
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01007cd3(int *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  ushort *puVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  ushort *puVar13;
  uint local_8;
  
  piVar6 = param_1;
  pbVar1 = (byte *)(param_1 + 0xbad);
  puVar13 = (ushort *)param_1[0xac1];
  param_1 = (int *)(uint)*pbVar1;
  puVar5 = (ushort *)piVar6[0xac2];
  iVar8 = param_3 + param_2;
  param_3 = piVar6[0xbac];
  bVar2 = *pbVar1;
  do {
    if (iVar8 <= param_2) {
      piVar6[0xbac] = param_3;
      *(byte *)(piVar6 + 0xbad) = bVar2;
      piVar6[0xac1] = (int)puVar13;
      return param_2;
    }
    iVar9 = (int)*(short *)((int)piVar6 + (param_3 >> 0x16) * 2 + 0x18);
    if (iVar9 < 0) {
      uVar10 = 0x200000;
      do {
        if ((param_3 & uVar10) == 0) {
          sVar4 = (short)piVar6[0x38f - iVar9];
        }
        else {
          sVar4 = *(short *)((int)piVar6 + iVar9 * -4 + 0xe3e);
        }
        iVar9 = (int)sVar4;
        uVar10 = uVar10 >> 1;
      } while (iVar9 < 0);
    }
    if (puVar5 <= puVar13) {
      return -1;
    }
    bVar3 = *(byte *)(iVar9 + 0xa18 + (int)piVar6);
    bVar2 = (byte)param_1 - bVar3;
    param_3 = param_3 << (bVar3 & 0x1f);
    if ((char)bVar2 < '\x01') {
      param_3 = param_3 | (uint)*puVar13 << (-bVar2 & 0x1f);
      puVar13 = puVar13 + 1;
      bVar2 = bVar2 + 0x10;
    }
    param_1 = (int *)(uint)bVar2;
    uVar10 = iVar9 - 0x100;
    if ((int)uVar10 < 0) {
      *(char *)(param_2 + *piVar6) = (char)uVar10;
      iVar9 = piVar6[1] + param_2;
      param_2 = param_2 + 1;
      *(char *)(iVar9 + *piVar6) = (char)uVar10;
    }
    else {
      local_8 = uVar10 & 7;
      if (local_8 == 7) {
        iVar9 = (int)*(short *)((int)piVar6 + (param_3 >> 0x18) * 2 + 0x818);
        if (iVar9 < 0) {
          uVar11 = 0x800000;
          do {
            if ((param_3 & uVar11) == 0) {
              sVar4 = (short)piVar6[0x8cf - iVar9];
            }
            else {
              sVar4 = *(short *)((int)piVar6 + iVar9 * -4 + 0x233e);
            }
            iVar9 = (int)sVar4;
            uVar11 = uVar11 >> 1;
          } while (iVar9 < 0);
        }
        bVar3 = *(byte *)(iVar9 + 0xcb8 + (int)piVar6);
        bVar2 = bVar2 - bVar3;
        param_3 = param_3 << (bVar3 & 0x1f);
        if ((char)bVar2 < '\x01') {
          param_3 = param_3 | (uint)*puVar13 << (-bVar2 & 0x1f);
          puVar13 = puVar13 + 1;
          bVar2 = bVar2 + 0x10;
        }
        param_1 = (int *)(uint)bVar2;
        local_8 = iVar9 + 7;
      }
      cVar7 = (char)((int)uVar10 >> 3);
      if (cVar7 < '\x03') {
        iVar9 = piVar6[cVar7 + 3];
        if (cVar7 != '\0') {
          piVar6[cVar7 + 3] = piVar6[3];
          goto LAB_01007ea3;
        }
      }
      else {
        if (cVar7 < '\x04') {
          iVar9 = 1;
        }
        else {
          iVar9 = (int)cVar7;
          uVar10 = param_3 >> (0x20 - (&DAT_010014b8)[iVar9] & 0x1f);
          param_3 = param_3 << ((&DAT_010014b8)[iVar9] & 0x1f);
          bVar2 = (byte)param_1 - (&DAT_010014b8)[iVar9];
          param_1 = (int *)(uint)bVar2;
          puVar12 = puVar13;
          if ((char)bVar2 < '\x01') {
            bVar3 = bVar2 + 0x10;
            param_1 = (int *)(uint)bVar3;
            param_3 = param_3 | (uint)*puVar13 << (-bVar2 & 0x1f);
            puVar12 = puVar13 + 1;
            if ((char)bVar3 < '\x01') {
              param_3 = param_3 | (uint)*puVar12 << (-bVar3 & 0x1f);
              puVar12 = puVar13 + 2;
              param_1 = (int *)(uint)(byte)(bVar2 + 0x20);
            }
          }
          iVar9 = uVar10 + *(int *)(&DAT_010014f0 + iVar9 * 4);
          puVar13 = puVar12;
        }
        piVar6[5] = piVar6[4];
        piVar6[4] = piVar6[3];
LAB_01007ea3:
        piVar6[3] = iVar9;
      }
      local_8 = local_8 + 2;
      do {
        *(undefined1 *)(*piVar6 + param_2) =
             *(undefined1 *)((param_2 - iVar9 & piVar6[2]) + *piVar6);
        if (param_2 < 0x101) {
          *(undefined1 *)(piVar6[1] + *piVar6 + param_2) = *(undefined1 *)(*piVar6 + param_2);
        }
        param_2 = param_2 + 1;
        local_8 = local_8 + -1;
      } while (0 < (int)local_8);
    }
    bVar2 = (byte)param_1;
  } while( true );
}


