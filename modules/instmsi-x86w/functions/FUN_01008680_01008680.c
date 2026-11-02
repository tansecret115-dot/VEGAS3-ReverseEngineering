/* Module: InstMsi-x86w.exe
   Function: FUN_01008680
   Address: 01008680
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_01008680(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  short sVar2;
  ushort *puVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  uint local_20;
  ushort *local_1c;
  int local_14;
  uint local_10;
  
  cVar10 = (char)param_1[0xbad];
  local_20 = param_1[0xbac];
  local_1c = (ushort *)param_1[0xac1];
  puVar3 = (ushort *)param_1[0xac2];
  iVar4 = *param_1;
  iVar6 = param_3 + param_2;
  uVar1 = param_2;
  while( true ) {
    if (iVar6 <= (int)uVar1) {
      *(char *)(param_1 + 0xbad) = cVar10;
      param_1[0xbac] = local_20;
      param_1[0xac1] = (int)local_1c;
      param_1[0xbb0] = uVar1 & param_1[2];
      return uVar1 - iVar6;
    }
    iVar7 = (int)*(short *)(((local_20 & 0xffdfffff) >> 0x15) + 0x18 + (int)param_1);
    if (iVar7 < 0) {
      uVar9 = 0x200000;
      do {
        if ((local_20 & uVar9) == 0) {
          sVar2 = (short)param_1[0x38f - iVar7];
        }
        else {
          sVar2 = *(short *)((int)param_1 + iVar7 * -4 + 0xe3e);
        }
        iVar7 = (int)sVar2;
        uVar9 = uVar9 >> 1;
      } while (iVar7 < 0);
    }
    if (puVar3 <= local_1c) break;
    bVar8 = *(byte *)(iVar7 + 0xa18 + (int)param_1);
    local_20 = local_20 << (bVar8 & 0x1f);
    cVar10 = cVar10 - bVar8;
    if (cVar10 < '\x01') {
      bVar8 = -cVar10;
      cVar10 = cVar10 + '\x10';
      local_20 = local_20 | (uint)*local_1c << (bVar8 & 0x1f);
      local_1c = local_1c + 1;
    }
    uVar9 = iVar7 - 0x100;
    if ((int)uVar9 < 0) {
      *(char *)(iVar4 + uVar1) = (char)uVar9;
      uVar1 = uVar1 + 1;
    }
    else {
      uVar12 = uVar9 & 7;
      if (uVar12 == 7) {
        iVar7 = (int)*(short *)(((local_20 & 0xff7fffff) >> 0x17) + 0x818 + (int)param_1);
        if (iVar7 < 0) {
          uVar12 = 0x800000;
          do {
            if ((local_20 & uVar12) == 0) {
              sVar2 = (short)param_1[0x8cf - iVar7];
            }
            else {
              sVar2 = *(short *)((int)param_1 + iVar7 * -4 + 0x233e);
            }
            iVar7 = (int)sVar2;
            uVar12 = uVar12 >> 1;
          } while (iVar7 < 0);
        }
        bVar8 = *(byte *)(iVar7 + 0xcb8 + (int)param_1);
        local_20 = local_20 << (bVar8 & 0x1f);
        cVar10 = cVar10 - bVar8;
        if (cVar10 < '\x01') {
          uVar5 = *local_1c;
          bVar8 = -cVar10;
          cVar10 = cVar10 + '\x10';
          local_1c = local_1c + 1;
          local_20 = local_20 | (uint)uVar5 << (bVar8 & 0x1f);
        }
        uVar12 = iVar7 + 7;
      }
      cVar11 = (char)((int)uVar9 >> 3);
      if (cVar11 < '\x03') {
        local_14 = param_1[cVar11 + 3];
        if (cVar11 != '\0') {
          param_1[cVar11 + 3] = param_1[3];
          param_1[3] = local_14;
        }
      }
      else {
        iVar7 = (int)cVar11;
        bVar8 = (&DAT_010014c8)[iVar7];
        if (bVar8 < 3) {
          if (bVar8 == 0) {
            local_14 = *(int *)(&DAT_01001500 + iVar7 * 4);
          }
          else {
            cVar10 = cVar10 - bVar8;
            uVar9 = local_20 >> (0x20 - bVar8 & 0x1f);
            local_20 = local_20 << (bVar8 & 0x1f);
            if (cVar10 < '\x01') {
              bVar8 = -cVar10;
              cVar10 = cVar10 + '\x10';
              local_20 = local_20 | (uint)*local_1c << (bVar8 & 0x1f);
              local_1c = local_1c + 1;
            }
            local_14 = uVar9 + *(int *)(&DAT_01001500 + iVar7 * 4);
          }
        }
        else {
          if (bVar8 == 3) {
            local_10 = 0;
          }
          else {
            cVar11 = cVar10 - bVar8;
            local_10 = local_20 >> (0x23 - bVar8 & 0x1f);
            cVar10 = cVar11 + '\x03';
            local_20 = local_20 << (bVar8 - 3 & 0x1f);
            if (cVar10 < '\x01') {
              bVar8 = -cVar10;
              cVar10 = cVar11 + '\x13';
              local_20 = local_20 | (uint)*local_1c << (bVar8 & 0x1f);
              local_1c = local_1c + 1;
            }
          }
          local_14 = (int)*(char *)((local_20 >> 0x19) + 0xdb4 + (int)param_1);
          bVar8 = *(byte *)(local_14 + 0xe34 + (int)param_1);
          local_20 = local_20 << (bVar8 & 0x1f);
          cVar10 = cVar10 - bVar8;
          if (cVar10 < '\x01') {
            bVar8 = -cVar10;
            cVar10 = cVar10 + '\x10';
            local_20 = local_20 | (uint)*local_1c << (bVar8 & 0x1f);
            local_1c = local_1c + 1;
          }
          local_14 = *(int *)(&DAT_01001500 + iVar7 * 4) + local_10 * 8 + local_14;
        }
        param_1[5] = param_1[4];
        param_1[4] = param_1[3];
        param_1[3] = local_14;
      }
      iVar7 = uVar12 + 2;
      uVar9 = uVar1 - local_14 & param_1[2];
      param_2 = uVar1;
      do {
        uVar9 = uVar9 + 1;
        iVar7 = iVar7 + -1;
        uVar1 = param_2 + 1;
        *(undefined1 *)(iVar4 + param_2) = *(undefined1 *)(iVar4 + -1 + uVar9);
        param_2 = uVar1;
      } while (0 < iVar7);
    }
  }
  return -1;
}


