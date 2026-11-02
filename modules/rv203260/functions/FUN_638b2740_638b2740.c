/* Module: rv203260.dll
   Function: FUN_638b2740
   Address: 638b2740
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_638b2740(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  int local_8;
  
  iVar3 = (param_2 / 2 + param_6 * 0x10000) / param_2;
  iVar10 = param_6 * 0x10000 + -0x10000;
  iVar9 = param_7 * 0x10000 + -0x10000;
  iVar4 = (param_3 / 2 + param_7 * 0x10000) / param_3;
  local_8 = 0;
  if (0 < iVar9) {
    do {
      uVar5 = local_8 >> 0xd & 7;
      iVar6 = (local_8 >> 0x10) * param_8 + param_5;
      iVar13 = 0;
      iVar12 = iVar6 + param_8;
      puVar15 = param_1;
      do {
        iVar11 = iVar13 >> 0x10;
        iVar7 = (uint)*(byte *)(iVar11 + iVar12) * 0x10000 + (uint)*(byte *)(iVar11 + iVar6);
        iVar14 = iVar13 + iVar3;
        uVar8 = (((uint)*(byte *)(iVar11 + 1 + iVar6) +
                 (uint)*(byte *)(iVar11 + 1 + iVar12) * 0x10000) - iVar7) * (iVar13 >> 0xd & 7U) +
                iVar7 * 8;
        iVar13 = iVar14 >> 0x10;
        iVar7 = (uint)*(byte *)(iVar13 + iVar12) * 0x10000 + (uint)*(byte *)(iVar13 + iVar6);
        uVar1 = (((uint)*(byte *)(iVar13 + 1 + iVar6) +
                 (uint)*(byte *)(iVar13 + 1 + iVar12) * 0x10000) - iVar7) * (iVar14 >> 0xd & 7U) +
                iVar7 * 8;
        iVar13 = (uVar8 & 0xffff) + uVar1 * 0x10000;
        uVar8 = (((uVar1 & 0xffff0000) + (uVar8 >> 0x10)) - iVar13) * uVar5 + iVar13 * 8;
        *puVar15 = (char)(uVar8 >> 6);
        puVar15[1] = (char)(uVar8 >> 0x16);
        iVar13 = iVar14 + iVar3;
        puVar15 = puVar15 + 2;
      } while (iVar13 < iVar10);
      uVar8 = (uint)*(byte *)(iVar6 + -1 + param_6);
      bVar2 = *(byte *)(iVar12 + -1 + param_6);
      for (; iVar13 < iVar3 * param_2; iVar13 = iVar13 + iVar3) {
        *puVar15 = (char)((bVar2 - uVar8) * uVar5 + uVar8 * 8 >> 3);
        puVar15 = puVar15 + 1;
      }
      param_1 = param_1 + param_4;
      local_8 = local_8 + iVar4;
    } while (local_8 < iVar9);
  }
  if (local_8 < iVar4 * param_3) {
    iVar9 = (param_7 + -1) * param_8 + param_5;
    do {
      iVar12 = 0;
      puVar15 = param_1;
      if (0 < iVar10) {
        do {
          uVar5 = (uint)*(byte *)((iVar12 >> 0x10) + iVar9);
          *puVar15 = (char)((*(byte *)((iVar12 >> 0x10) + 1 + iVar9) - uVar5) * (iVar12 >> 0xd & 7U)
                            + uVar5 * 8 >> 3);
          iVar12 = iVar12 + iVar3;
          puVar15 = puVar15 + 1;
        } while (iVar12 < iVar10);
      }
      for (; iVar12 < iVar3 * param_2; iVar12 = iVar12 + iVar3) {
        *puVar15 = *(undefined1 *)(iVar9 + -1 + param_6);
        puVar15 = puVar15 + 1;
      }
      param_1 = param_1 + param_4;
      local_8 = local_8 + iVar4;
    } while (local_8 < iVar4 * param_3);
  }
  return;
}


