/* Module: vidcap30.exe
   Function: FUN_00462030
   Address: 00462030
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID FUN_00462030(void)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  LPCVOID pvVar4;
  HGLOBAL pvVar5;
  int iVar6;
  ulong local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  iVar6 = 0;
  local_c = 0;
  iVar1 = SfSpike2_GetPreferredParentID(0x19c,&local_c);
  if (iVar1 != 0) {
    iVar1 = 0;
    ppuVar2 = &PTR_DAT_005b6458;
    do {
      if (local_c == *(ulong *)*ppuVar2) {
        pvVar4 = (LPCVOID)FUN_004621b0((&PTR_DAT_005b6458)[iVar1 * 3]);
        if (pvVar4 == (LPCVOID)0x0) {
          return (LPCVOID)0x0;
        }
        if (0 < (int)(&DAT_005b6460)[iVar1 * 3]) {
          do {
            FUN_00570ec0(*(undefined4 *)((&PTR_DAT_005b645c)[iVar1 * 3] + iVar6 * 8),
                         *(undefined4 *)((&PTR_DAT_005b645c)[iVar1 * 3] + iVar6 * 8 + 4));
            iVar3 = FUN_00570cd0(local_4,local_8,1);
            if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
              return pvVar4;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)(&DAT_005b6460)[iVar1 * 3]);
        }
        FUN_0056dee0();
        pvVar5 = GlobalHandle(pvVar4);
        GlobalUnlock(pvVar5);
        pvVar5 = GlobalHandle(pvVar4);
        GlobalFree(pvVar5);
        break;
      }
      ppuVar2 = ppuVar2 + 3;
      iVar1 = iVar1 + 1;
    } while ((int)ppuVar2 < 0x5b6464);
  }
  ppuVar2 = &PTR_DAT_005b6458;
  do {
    local_c = *(ulong *)*ppuVar2;
    pvVar4 = (LPCVOID)FUN_004621b0(*ppuVar2);
    if (pvVar4 == (LPCVOID)0x0) {
      return (LPCVOID)0x0;
    }
    iVar1 = 0;
    if (0 < (int)ppuVar2[2]) {
      do {
        FUN_00570ec0(*(undefined4 *)(ppuVar2[1] + iVar1 * 8),
                     *(undefined4 *)(ppuVar2[1] + iVar1 * 8 + 4));
        iVar6 = FUN_00570cd0(local_4,local_8,1);
        if ((-1 < iVar6) && (iVar6 != 0x4e12f)) {
          SfSpike2_SetPreferredParentID(0x19c,local_c,0);
          return pvVar4;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)ppuVar2[2]);
    }
    FUN_0056dee0();
    pvVar5 = GlobalHandle(pvVar4);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(pvVar4);
    GlobalFree(pvVar5);
    ppuVar2 = ppuVar2 + 3;
    if (0x5b6463 < (int)ppuVar2) {
      return (LPCVOID)0x0;
    }
  } while( true );
}


