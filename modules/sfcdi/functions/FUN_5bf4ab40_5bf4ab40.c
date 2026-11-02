/* Module: sfcdi.dll
   Function: FUN_5bf4ab40
   Address: 5bf4ab40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf4ab40(int param_1,undefined4 *param_2,uint *param_3)

{
  LPCVOID pMem;
  uint uVar1;
  int *piVar2;
  short *psVar3;
  undefined1 uVar4;
  uint uVar5;
  HGLOBAL pvVar6;
  LPVOID pvVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  short *psVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  uint uVar16;
  short *psVar17;
  int iVar18;
  UINT uFlags;
  int local_18;
  
  pMem = (LPCVOID)*param_2;
  uVar5 = *param_3;
  iVar15 = 0;
  if (*(uint **)(param_1 + 0x2c) != (uint *)0x0) {
    uVar1 = **(uint **)(param_1 + 0x2c);
    if ((short)uVar1 != 0) {
      *(uint *)((int)pMem + 0xcc) = (uint)((uVar5 & 0x7ff) != 0) + (uVar5 >> 0xb);
      uVar10 = uVar1 & 0xffff;
      if (*(int *)(param_1 + 0xc) != 0) {
        iVar15 = 0x10;
      }
      iVar18 = 0;
      if (*(int **)(param_1 + 8) != (int *)0x0) {
        iVar18 = **(int **)(param_1 + 8);
      }
      uVar16 = iVar15 + iVar18 * 0x10;
      uVar5 = uVar5 + 8 + uVar10 * 8 + (uVar16 & 0xffff) * uVar10;
      uVar12 = ((uint)((uVar5 & 0x7ff) != 0) + (uVar5 >> 0xb)) * 0x800;
      pvVar6 = GlobalHandle(pMem);
      GlobalUnlock(pvVar6);
      uFlags = 0x42;
      uVar5 = uVar12;
      pvVar6 = GlobalHandle(pMem);
      pvVar6 = GlobalReAlloc(pvVar6,uVar5,uFlags);
      pvVar7 = GlobalLock(pvVar6);
      if (pvVar7 == (LPVOID)0x0) {
        return 0x8007000e;
      }
      psVar17 = (short *)(*(int *)((int)pvVar7 + 0xcc) * 0x800 + (int)pvVar7);
      *psVar17 = (short)uVar1;
      uVar4 = 0;
      if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
        uVar4 = (undefined1)**(undefined4 **)(param_1 + 8);
      }
      *(undefined1 *)((int)psVar17 + 3) = uVar4;
      uVar5 = uVar1 * 8 + 8;
      local_18 = 0;
      psVar3 = psVar17;
      if (uVar10 != 0) {
        do {
          psVar11 = psVar3 + 4;
          piVar2 = *(int **)(param_1 + 0x2c);
          if (piVar2 == (int *)0x0) {
            iVar15 = 0;
          }
          else {
            iVar15 = *piVar2;
          }
          if ((local_18 < 0) || (iVar15 + -1 < local_18)) {
            puVar13 = (undefined1 *)0x0;
          }
          else {
            puVar13 = *(undefined1 **)(piVar2[2] + local_18 * 4);
          }
          *(undefined1 *)psVar11 = *puVar13;
          *(undefined1 *)((int)psVar3 + 9) = puVar13[1];
          psVar3[6] = (short)uVar5;
          FUN_5bf4a400((int)psVar11);
          puVar14 = (undefined2 *)((uVar5 & 0xffff) + (int)psVar17);
          iVar15 = 0;
          do {
            iVar18 = 0;
            while( true ) {
              piVar2 = *(int **)(puVar13 + iVar15 * 4 + 4);
              if (piVar2 == (int *)0x0) {
                iVar9 = 0;
              }
              else {
                iVar9 = *piVar2;
              }
              if (iVar9 <= iVar18) break;
              if (piVar2 == (int *)0x0) {
                iVar9 = 0;
              }
              else {
                iVar9 = *piVar2;
              }
              if ((iVar18 < 0) || (iVar9 + -1 < iVar18)) {
                puVar8 = (undefined2 *)0x0;
              }
              else {
                puVar8 = *(undefined2 **)(piVar2[2] + iVar18 * 4);
              }
              *puVar14 = *puVar8;
              FUN_5bf4a3f0((undefined1 *)puVar14);
              iVar18 = iVar18 + 1;
              puVar14 = puVar14 + 1;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < 8);
          uVar5 = uVar5 + uVar16;
          local_18 = local_18 + 1;
          psVar3 = psVar11;
        } while (local_18 < (int)uVar10);
      }
      *(uint *)(psVar17 + 2) = (uVar5 & 0xffff) - 1;
      FUN_5bf4a420((undefined1 *)psVar17);
      *param_2 = pvVar7;
      *param_3 = uVar12;
      return 0;
    }
  }
  *(undefined4 *)((int)pMem + 0xcc) = 0;
  return 0;
}


