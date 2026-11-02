/* Module: hhupd.exe
   Function: FUN_01008950
   Address: 01008950
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_01008950(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  short sVar2;
  ushort *puVar3;
  int iVar4;
  ushort uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  ushort *puVar12;
  uint uVar13;
  uint local_1c;
  uint local_18;
  int local_14;
  
  cVar10 = (char)param_1[0xbad];
  local_18 = param_1[0xbac];
  puVar12 = (ushort *)param_1[0xac1];
  puVar3 = (ushort *)param_1[0xac2];
  iVar4 = *param_1;
  iVar7 = param_3 + param_2;
  while( true ) {
    if (iVar7 <= param_2) {
      *(char *)(param_1 + 0xbad) = cVar10;
      param_1[0xbac] = local_18;
      param_1[0xac1] = (int)puVar12;
      return param_2;
    }
    iVar11 = (int)*(short *)(((local_18 & 0xffdfffff) >> 0x15) + 0x18 + (int)param_1);
    if (iVar11 < 0) {
      uVar8 = 0x200000;
      do {
        if ((local_18 & uVar8) == 0) {
          sVar2 = (short)param_1[0x38f - iVar11];
        }
        else {
          sVar2 = *(short *)((int)param_1 + iVar11 * -4 + 0xe3e);
        }
        iVar11 = (int)sVar2;
        uVar8 = uVar8 >> 1;
      } while (iVar11 < 0);
    }
    if (puVar3 <= puVar12) break;
    bVar6 = *(byte *)(iVar11 + 0xa18 + (int)param_1);
    local_18 = local_18 << (bVar6 & 0x1f);
    cVar9 = cVar10 - bVar6;
    cVar10 = cVar9;
    if (cVar9 < '\x01') {
      uVar5 = *puVar12;
      puVar12 = puVar12 + 1;
      cVar10 = cVar9 + '\x10';
      local_18 = local_18 | (uint)uVar5 << (-cVar9 & 0x1fU);
    }
    uVar8 = iVar11 - 0x100;
    if ((int)uVar8 < 0) {
      *(char *)(iVar4 + param_2) = (char)uVar8;
      iVar11 = param_1[1] + param_2;
      param_2 = param_2 + 1;
      *(char *)(iVar11 + iVar4) = (char)uVar8;
    }
    else {
      uVar13 = uVar8 & 7;
      if (uVar13 == 7) {
        iVar11 = (int)*(short *)(((local_18 & 0xff7fffff) >> 0x17) + 0x818 + (int)param_1);
        if (iVar11 < 0) {
          uVar13 = 0x800000;
          do {
            if ((local_18 & uVar13) == 0) {
              sVar2 = (short)param_1[0x8cf - iVar11];
            }
            else {
              sVar2 = *(short *)((int)param_1 + iVar11 * -4 + 0x233e);
            }
            iVar11 = (int)sVar2;
            uVar13 = uVar13 >> 1;
          } while (iVar11 < 0);
        }
        bVar6 = *(byte *)(iVar11 + 0xcb8 + (int)param_1);
        local_18 = local_18 << (bVar6 & 0x1f);
        cVar9 = cVar10 - bVar6;
        cVar10 = cVar9;
        if (cVar9 < '\x01') {
          uVar5 = *puVar12;
          puVar12 = puVar12 + 1;
          cVar10 = cVar9 + '\x10';
          local_18 = local_18 | (uint)uVar5 << (-cVar9 & 0x1fU);
        }
        uVar13 = iVar11 + 7;
      }
      cVar9 = (char)((int)uVar8 >> 3);
      iVar11 = (int)cVar9;
      if (cVar9 < '\x03') {
        local_14 = param_1[iVar11 + 3];
        if (cVar9 != '\0') {
          param_1[iVar11 + 3] = param_1[3];
          param_1[3] = local_14;
        }
      }
      else {
        bVar6 = (&DAT_010014c8)[iVar11];
        if (bVar6 < 3) {
          if (bVar6 == 0) {
            local_14 = 1;
          }
          else {
            cVar10 = cVar10 - bVar6;
            uVar8 = local_18 >> (0x20 - bVar6 & 0x1f);
            local_18 = local_18 << (bVar6 & 0x1f);
            if (cVar10 < '\x01') {
              uVar5 = *puVar12;
              puVar12 = puVar12 + 1;
              bVar6 = -cVar10;
              cVar10 = cVar10 + '\x10';
              local_18 = local_18 | (uint)uVar5 << (bVar6 & 0x1f);
            }
            local_14 = uVar8 + *(int *)(&DAT_01001500 + iVar11 * 4);
          }
        }
        else {
          if (bVar6 == 3) {
            local_1c = 0;
          }
          else {
            cVar9 = cVar10 - bVar6;
            local_1c = local_18 >> (0x23 - bVar6 & 0x1f);
            cVar10 = cVar9 + '\x03';
            local_18 = local_18 << (bVar6 - 3 & 0x1f);
            if (cVar10 < '\x01') {
              uVar5 = *puVar12;
              puVar12 = puVar12 + 1;
              bVar6 = -cVar10;
              cVar10 = cVar9 + '\x13';
              local_18 = local_18 | (uint)uVar5 << (bVar6 & 0x1f);
            }
          }
          local_14 = (int)*(char *)((local_18 >> 0x19) + 0xdb4 + (int)param_1);
          bVar6 = *(byte *)(local_14 + 0xe34 + (int)param_1);
          local_18 = local_18 << (bVar6 & 0x1f);
          cVar10 = cVar10 - bVar6;
          if (cVar10 < '\x01') {
            uVar5 = *puVar12;
            puVar12 = puVar12 + 1;
            bVar6 = -cVar10;
            cVar10 = cVar10 + '\x10';
            local_18 = local_18 | (uint)uVar5 << (bVar6 & 0x1f);
          }
          local_14 = *(int *)(&DAT_01001500 + iVar11 * 4) + local_1c * 8 + local_14;
        }
        param_1[5] = param_1[4];
        param_1[4] = param_1[3];
        param_1[3] = local_14;
      }
      iVar11 = uVar13 + 2;
      do {
        uVar1 = *(undefined1 *)((param_2 - local_14 & param_1[2]) + iVar4);
        *(undefined1 *)(iVar4 + param_2) = uVar1;
        if (param_2 < 0x101) {
          *(undefined1 *)(param_1[1] + iVar4 + param_2) = uVar1;
        }
        param_2 = param_2 + 1;
        iVar11 = iVar11 + -1;
      } while (0 < iVar11);
    }
  }
  return -1;
}


