/* Module: vegas30k.dll
   Function: FUN_01087760
   Address: 01087760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01087760(int param_1,undefined4 *param_2,uint *param_3)

{
  LPCVOID pMem;
  uint uVar1;
  int *piVar2;
  tagPTL_MAI_SRP *ptVar3;
  tagPTL_MAITI tVar4;
  uint uVar5;
  HGLOBAL pvVar6;
  LPVOID pvVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  tagPTL_MAI_SRP *ptVar11;
  uint uVar12;
  tagPTL_MAI_SRP *ptVar13;
  tagPTL_MAITI *ptVar14;
  int iVar15;
  uint uVar16;
  tagPTL_MAITI *ptVar17;
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
      ptVar17 = (tagPTL_MAITI *)(*(int *)((int)pvVar7 + 0xcc) * 0x800 + (int)pvVar7);
      *(short *)ptVar17 = (short)uVar1;
      tVar4 = (tagPTL_MAITI)0x0;
      if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
        tVar4 = SUB41(**(undefined4 **)(param_1 + 8),0);
      }
      ptVar17[3] = tVar4;
      uVar5 = uVar1 * 8 + 8;
      local_18 = 0;
      ptVar3 = (tagPTL_MAI_SRP *)ptVar17;
      if (uVar10 != 0) {
        do {
          ptVar11 = ptVar3 + 8;
          piVar2 = *(int **)(param_1 + 0x2c);
          if (piVar2 == (int *)0x0) {
            iVar15 = 0;
          }
          else {
            iVar15 = *piVar2;
          }
          if ((local_18 < 0) || (iVar15 + -1 < local_18)) {
            ptVar13 = (tagPTL_MAI_SRP *)0x0;
          }
          else {
            ptVar13 = *(tagPTL_MAI_SRP **)(piVar2[2] + local_18 * 4);
          }
          *ptVar11 = *ptVar13;
          ptVar3[9] = ptVar13[1];
          *(short *)(ptVar3 + 0xc) = (short)uVar5;
          SfCdiSwap_PTL_MAI_SRP(ptVar11);
          ptVar14 = ptVar17 + (uVar5 & 0xffff);
          iVar15 = 0;
          do {
            iVar18 = 0;
            while( true ) {
              piVar2 = *(int **)(ptVar13 + iVar15 * 4 + 4);
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
                puVar8 = (ushort *)0x0;
              }
              else {
                puVar8 = *(ushort **)(piVar2[2] + iVar18 * 4);
              }
              *(ushort *)ptVar14 = *puVar8;
              SfCdiSwap_PTL_ID_FLD((ushort *)ptVar14);
              iVar18 = iVar18 + 1;
              ptVar14 = ptVar14 + 2;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < 8);
          uVar5 = uVar5 + uVar16;
          local_18 = local_18 + 1;
          ptVar3 = ptVar11;
        } while (local_18 < (int)uVar10);
      }
      *(uint *)(ptVar17 + 4) = (uVar5 & 0xffff) - 1;
      SfCdiSwap_PTL_MAITI(ptVar17);
      *param_2 = pvVar7;
      *param_3 = uVar12;
      return 0;
    }
  }
  *(undefined4 *)((int)pMem + 0xcc) = 0;
  return 0;
}


