/* Module: rmbe3260.dll
   Function: FUN_660528c0
   Address: 660528c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_660528c0(void *this,LPCSTR param_1,uint param_2)

{
  char cVar1;
  BOOL BVar2;
  LPCSTR pCVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  CHAR *pCVar8;
  uint uVar9;
  CHAR *pCVar10;
  LPCSTR pCVar11;
  _WIN32_FIND_DATAA local_148;
  int *local_8;
  
  uVar9 = 2;
  local_8 = this;
  if ((*(HANDLE *)((int)this + 0x10) != (HANDLE)0xffffffff) &&
     (BVar2 = FindNextFileA(*(HANDLE *)((int)this + 0x10),&local_148), BVar2 != 0)) {
    uVar9 = 0xffffffff;
    pCVar8 = local_148.cFileName;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pCVar8;
      pCVar8 = pCVar8 + 1;
    } while (cVar1 != '\0');
    if (~uVar9 + *(int *)(*(char **)((int)this + 4) + -8) < (param_2 & 0xffff)) {
      uVar9 = 0xffffffff;
      pcVar6 = *(char **)((int)this + 4);
      do {
        pcVar7 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar7 + -uVar9;
      pcVar7 = param_1;
      for (uVar4 = uVar9 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      uVar9 = 0xffffffff;
      pCVar11 = param_1;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pCVar11;
        pCVar11 = pCVar11 + 1;
      } while (cVar1 != '\0');
      pCVar3 = FUN_66052030(param_1,param_1 + (~uVar9 - 1));
      uVar9 = 0xffffffff;
      pCVar11 = param_1;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pCVar11;
        pCVar11 = pCVar11 + 1;
      } while (cVar1 != '\0');
      if ((pCVar3 + 1 < param_1 + (~uVar9 - 1)) || (*pCVar3 != '\\')) {
        uVar9 = 0xffffffff;
        pcVar6 = &DAT_6606c264;
        do {
          pcVar7 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        iVar5 = -1;
        pCVar11 = param_1;
        do {
          pcVar6 = pCVar11;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar6 = pCVar11 + 1;
          cVar1 = *pCVar11;
          pCVar11 = pcVar6;
        } while (cVar1 != '\0');
        pcVar7 = pcVar7 + -uVar9;
        pcVar6 = pcVar6 + -1;
        for (uVar4 = uVar9 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar6 = pcVar6 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar6 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        }
      }
      uVar9 = 0xffffffff;
      pCVar8 = local_148.cFileName;
      do {
        pCVar10 = pCVar8;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pCVar10 = pCVar8 + 1;
        cVar1 = *pCVar8;
        pCVar8 = pCVar10;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      iVar5 = -1;
      pCVar11 = param_1;
      do {
        pcVar6 = pCVar11;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar6 = pCVar11 + 1;
        cVar1 = *pCVar11;
        pCVar11 = pcVar6;
      } while (cVar1 != '\0');
      pCVar8 = pCVar10 + -uVar9;
      pcVar6 = pcVar6 + -1;
      for (uVar4 = uVar9 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pCVar8;
        pCVar8 = pCVar8 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar9 = uVar9 & 3; this = local_8, uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar6 = *pCVar8;
        pCVar8 = pCVar8 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
    uVar9 = (uint)(((byte)local_148.dwFileAttributes & 0x10) == 0x10);
  }
  while ((uVar9 != 2 && (iVar5 = FUN_66052a10(param_1), iVar5 == 0))) {
    uVar9 = (**(code **)(*(int *)this + 0x2c))(param_1,param_2);
  }
  return uVar9;
}


