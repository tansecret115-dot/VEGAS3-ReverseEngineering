/* Module: hhupd.exe
   Function: FUN_010082e0
   Address: 010082e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_010082e0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  short sVar2;
  ushort *puVar3;
  ushort uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint uVar12;
  int iVar13;
  char local_11;
  uint local_10;
  
  local_11 = (char)param_1[0xbad];
  local_10 = param_1[0xbac];
  puVar11 = (ushort *)param_1[0xac1];
  puVar3 = (ushort *)param_1[0xac2];
  iVar6 = param_3 + param_2;
  do {
    while( true ) {
      if (iVar6 <= param_2) {
        *(char *)(param_1 + 0xbad) = local_11;
        param_1[0xbac] = local_10;
        param_1[0xac1] = (int)puVar11;
        return param_2;
      }
      iVar9 = (int)*(short *)(((local_10 & 0xffdfffff) >> 0x15) + 0x18 + (int)param_1);
      if (iVar9 < 0) {
        uVar7 = 0x200000;
        do {
          if ((local_10 & uVar7) == 0) {
            sVar2 = (short)param_1[0x38f - iVar9];
          }
          else {
            sVar2 = *(short *)((int)param_1 + iVar9 * -4 + 0xe3e);
          }
          iVar9 = (int)sVar2;
          uVar7 = uVar7 >> 1;
        } while (iVar9 < 0);
      }
      if (puVar3 <= puVar11) {
        return -1;
      }
      bVar5 = *(byte *)(iVar9 + 0xa18 + (int)param_1);
      local_10 = local_10 << (bVar5 & 0x1f);
      local_11 = local_11 - bVar5;
      if (local_11 < '\x01') {
        uVar4 = *puVar11;
        puVar11 = puVar11 + 1;
        bVar5 = -local_11;
        local_11 = local_11 + '\x10';
        local_10 = local_10 | (uint)uVar4 << (bVar5 & 0x1f);
      }
      uVar7 = iVar9 - 0x100;
      if (-1 < (int)uVar7) break;
      param_2 = param_2 + 1;
      *(char *)(*param_1 + -1 + param_2) = (char)uVar7;
      *(char *)(param_1[1] + *param_1 + -1 + param_2) = (char)uVar7;
    }
    uVar12 = uVar7 & 7;
    if (uVar12 == 7) {
      iVar9 = (int)*(short *)(((local_10 & 0xff7fffff) >> 0x17) + 0x818 + (int)param_1);
      if (iVar9 < 0) {
        uVar12 = 0x800000;
        do {
          if ((local_10 & uVar12) == 0) {
            sVar2 = (short)param_1[0x8cf - iVar9];
          }
          else {
            sVar2 = *(short *)((int)param_1 + iVar9 * -4 + 0x233e);
          }
          iVar9 = (int)sVar2;
          uVar12 = uVar12 >> 1;
        } while (iVar9 < 0);
      }
      bVar5 = *(byte *)(iVar9 + 0xcb8 + (int)param_1);
      local_10 = local_10 << (bVar5 & 0x1f);
      local_11 = local_11 - bVar5;
      if (local_11 < '\x01') {
        uVar4 = *puVar11;
        puVar11 = puVar11 + 1;
        bVar5 = -local_11;
        local_11 = local_11 + '\x10';
        local_10 = local_10 | (uint)uVar4 << (bVar5 & 0x1f);
      }
      uVar12 = iVar9 + 7;
    }
    cVar8 = (char)((int)uVar7 >> 3);
    if (cVar8 < '\x03') {
      iVar9 = param_1[cVar8 + 3];
      if (cVar8 != '\0') {
        param_1[cVar8 + 3] = param_1[3];
        goto LAB_01008502;
      }
    }
    else {
      if (cVar8 < '\x04') {
        iVar9 = 1;
      }
      else {
        bVar5 = (&DAT_010014c8)[cVar8];
        cVar1 = local_11 - bVar5;
        uVar7 = local_10 >> (0x20 - bVar5 & 0x1f);
        local_10 = local_10 << (bVar5 & 0x1f);
        puVar10 = puVar11;
        local_11 = cVar1;
        if (cVar1 < '\x01') {
          puVar10 = puVar11 + 1;
          local_11 = cVar1 + '\x10';
          local_10 = local_10 | (uint)*puVar11 << (-cVar1 & 0x1fU);
          if (local_11 < '\x01') {
            uVar4 = *puVar10;
            puVar10 = puVar11 + 2;
            bVar5 = -local_11;
            local_11 = cVar1 + ' ';
            local_10 = local_10 | (uint)uVar4 << (bVar5 & 0x1f);
          }
        }
        iVar9 = uVar7 + *(int *)(&DAT_01001500 + cVar8 * 4);
        puVar11 = puVar10;
      }
      param_1[5] = param_1[4];
      param_1[4] = param_1[3];
LAB_01008502:
      param_1[3] = iVar9;
    }
    iVar13 = uVar12 + 2;
    do {
      *(undefined1 *)(*param_1 + param_2) =
           *(undefined1 *)((param_2 - iVar9 & param_1[2]) + *param_1);
      if (param_2 < 0x101) {
        *(undefined1 *)(param_1[1] + *param_1 + param_2) = *(undefined1 *)(*param_1 + param_2);
      }
      param_2 = param_2 + 1;
      iVar13 = iVar13 + -1;
    } while (0 < iVar13);
  } while( true );
}


