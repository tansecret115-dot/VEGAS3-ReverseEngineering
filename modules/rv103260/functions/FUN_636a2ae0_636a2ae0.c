/* Module: rv103260.dll
   Function: FUN_636a2ae0
   Address: 636a2ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_636a2ae0(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  
  iVar8 = param_6 * 0x10000 + -0x10000;
  iVar3 = (param_2 / 2 + param_6 * 0x10000) / param_2;
  iVar16 = param_7 * 0x10000 + -0x10000;
  iVar4 = (param_3 / 2 + param_7 * 0x10000) / param_3;
  iVar5 = iVar3 * param_2;
  param_2 = 0;
  if (0 < iVar16) {
    do {
      uVar6 = param_2 >> 0xd & 7;
      iVar15 = (param_2 >> 0x10) * param_8 + param_5;
      iVar11 = 0;
      iVar10 = iVar15 + param_8;
      puVar14 = param_1;
      do {
        iVar9 = iVar11 >> 0x10;
        iVar7 = (uint)*(byte *)(iVar9 + iVar10) * 0x10000 + (uint)*(byte *)(iVar9 + iVar15);
        iVar12 = iVar11 + iVar3;
        uVar13 = (((uint)*(byte *)(iVar9 + 1 + iVar10) * 0x10000 +
                  (uint)*(byte *)(iVar9 + 1 + iVar15)) - iVar7) * (iVar11 >> 0xd & 7U) + iVar7 * 8;
        iVar7 = iVar12 >> 0x10;
        iVar11 = (uint)*(byte *)(iVar7 + iVar10) * 0x10000 + (uint)*(byte *)(iVar7 + iVar15);
        uVar1 = (((uint)*(byte *)(iVar7 + 1 + iVar10) * 0x10000 +
                 (uint)*(byte *)(iVar7 + 1 + iVar15)) - iVar11) * (iVar12 >> 0xd & 7U) + iVar11 * 8;
        iVar7 = (uVar13 & 0xffff) + uVar1 * 0x10000;
        iVar11 = iVar12 + iVar3;
        uVar13 = (((uVar1 & 0xffff0000) + (uVar13 >> 0x10)) - iVar7) * uVar6 + iVar7 * 8;
        *puVar14 = (char)(uVar13 >> 6);
        puVar14[1] = (char)(uVar13 >> 0x16);
        puVar14 = puVar14 + 2;
      } while (iVar11 < iVar8);
      uVar13 = (uint)*(byte *)(iVar15 + -1 + param_6);
      bVar2 = *(byte *)(iVar10 + -1 + param_6);
      for (; iVar11 < iVar5; iVar11 = iVar11 + iVar3) {
        *puVar14 = (char)((bVar2 - uVar13) * uVar6 + uVar13 * 8 >> 3);
        puVar14 = puVar14 + 1;
      }
      param_1 = param_1 + param_4;
      param_2 = param_2 + iVar4;
    } while (param_2 < iVar16);
  }
  if (param_2 < iVar4 * param_3) {
    iVar16 = (param_7 + -1) * param_8 + param_5;
    do {
      iVar10 = 0;
      puVar14 = param_1;
      if (0 < iVar8) {
        do {
          iVar11 = iVar10 >> 0x10;
          uVar6 = (uint)*(byte *)(iVar11 + iVar16);
          uVar13 = iVar10 >> 0xd;
          iVar10 = iVar10 + iVar3;
          *puVar14 = (char)((*(byte *)(iVar11 + 1 + iVar16) - uVar6) * (uVar13 & 7) + uVar6 * 8 >> 3
                           );
          puVar14 = puVar14 + 1;
        } while (iVar10 < iVar8);
      }
      for (; iVar10 < iVar5; iVar10 = iVar10 + iVar3) {
        *puVar14 = *(undefined1 *)(iVar16 + -1 + param_6);
        puVar14 = puVar14 + 1;
      }
      param_1 = param_1 + param_4;
      param_2 = param_2 + iVar4;
    } while (param_2 < iVar4 * param_3);
  }
  return;
}


