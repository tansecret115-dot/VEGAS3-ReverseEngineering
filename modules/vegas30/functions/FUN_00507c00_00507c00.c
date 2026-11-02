/* Module: vegas30.exe
   Function: FUN_00507c00
   Address: 00507c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00507c00(uint param_1)

{
  ushort *puVar1;
  undefined **ppuVar2;
  ushort *puVar3;
  HACCEL pHVar4;
  int iVar5;
  WORD *pWVar6;
  WORD *pWVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int local_4bc;
  uint local_4b8;
  tagACCEL local_4b0 [200];
  
  if (DAT_00647674 == 0) {
    return 0;
  }
  if (DAT_0064e51c != 0) {
    iVar8 = 0;
    ppuVar2 = &PTR_DAT_00643530;
    do {
      puVar11 = (undefined4 *)*ppuVar2;
      ppuVar2 = ppuVar2 + 0x11;
      puVar10 = (undefined4 *)(iVar8 + DAT_0064e51c);
      iVar8 = iVar8 + 4;
      puVar10 = (undefined4 *)*puVar10;
      for (iVar5 = 1000; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
    } while (ppuVar2 < &DAT_006437d8);
  }
  local_4b8 = 0;
  do {
    puVar1 = (ushort *)(&PTR_DAT_00643530)[local_4b8 * 0x11];
    if ((param_1 & 1) != 0) {
      iVar8 = 0;
      puVar3 = puVar1 + 5;
      do {
        if (puVar3[-5] == 0) break;
        iVar8 = iVar8 + 1;
        puVar3[0] = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *puVar3 = puVar3[-1];
        puVar3 = puVar3 + 10;
      } while (iVar8 < 200);
    }
    if ((param_1 & 2) != 0) {
      FUN_00507dd0(local_4b8 + 0x4b0,puVar1);
    }
    if ((param_1 & 4) != 0) {
      iVar8 = 0;
      local_4bc = 0;
      puVar3 = puVar1;
      do {
        if (1999 < local_4bc) break;
        iVar5 = 0;
        if (iVar8 < 200) {
          pWVar6 = &local_4b0[iVar8].key;
          do {
            if ((3 < iVar5) ||
               (iVar9 = local_4bc + iVar5, *(char *)((int)puVar1 + iVar9 * 2 + 0xb) == '\0')) break;
            pWVar7 = pWVar6;
            if (((byte)puVar1[iVar9 + 5] & 0x40) == 0) {
              iVar8 = iVar8 + 1;
              ((tagACCEL *)(pWVar6 + -1))->fVirt = (byte)puVar1[iVar9 + 5] & 0xdf;
              pWVar7 = pWVar6 + 3;
              *pWVar6 = (ushort)*(byte *)((int)puVar1 + iVar9 * 2 + 0xb);
              pWVar6[1] = *puVar3;
            }
            iVar5 = iVar5 + 1;
            pWVar6 = pWVar7;
          } while (iVar8 < 200);
        }
        local_4bc = local_4bc + 10;
        puVar3 = puVar3 + 10;
      } while (iVar8 < 200);
      if (local_4b8 == 0) {
        FUN_00507aa0(DAT_00647674,0xffffffff);
        if (iVar8 != 0) {
          if (DAT_00647644 != (HACCEL)0x0) {
            DestroyAcceleratorTable(DAT_00647644);
          }
          DAT_00647644 = CreateAcceleratorTableA(local_4b0,iVar8);
        }
      }
      else if (iVar8 != 0) {
        if ((&DAT_00647644)[local_4b8] != (HACCEL)0x0) {
          DestroyAcceleratorTable((&DAT_00647644)[local_4b8]);
        }
        pHVar4 = CreateAcceleratorTableA(local_4b0,iVar8);
        (&DAT_00647644)[local_4b8] = pHVar4;
      }
    }
    local_4b8 = local_4b8 + 1;
    if (9 < local_4b8) {
      return 1;
    }
  } while( true );
}


