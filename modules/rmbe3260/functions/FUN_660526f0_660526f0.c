/* Module: rmbe3260.dll
   Function: FUN_660526f0
   Address: 660526f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_660526f0(void *this,char *param_1,LPCSTR param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  LPCSTR pCVar3;
  HANDLE pvVar4;
  LPCSTR pCVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  CHAR *pCVar11;
  CHAR *pCVar12;
  _WIN32_FIND_DATAA local_150;
  LPCSTR local_10 [3];
  
  piVar1 = (int *)((int)this + 4);
  uVar8 = 2;
  FUN_6605b670(local_10,piVar1);
  pCVar3 = (LPCSTR)*piVar1;
  pCVar3 = FUN_66052030(pCVar3,pCVar3 + *(int *)(pCVar3 + -8));
  if ((pCVar3 + 1 != (LPCSTR)(*(int *)(*piVar1 + -8) + *piVar1)) || (*pCVar3 != '\\')) {
    FUN_6605bba0(local_10,&DAT_6606c264);
  }
  FUN_6605bba0(local_10,param_1);
  if (*(HANDLE *)((int)this + 0x10) != (HANDLE)0xffffffff) {
    FindClose(*(HANDLE *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  }
  pvVar4 = FindFirstFileA(local_10[0],&local_150);
  *(HANDLE *)((int)this + 0x10) = pvVar4;
  if (pvVar4 != (HANDLE)0xffffffff) {
    uVar8 = 0xffffffff;
    pCVar11 = local_150.cFileName;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pCVar11;
      pCVar11 = pCVar11 + 1;
    } while (cVar2 != '\0');
    if (~uVar8 + *(int *)((char *)*piVar1 + -8) < (param_3 & 0xffff)) {
      uVar8 = 0xffffffff;
      pcVar9 = (char *)*piVar1;
      do {
        pcVar10 = pcVar9;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar10 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar2 != '\0');
      uVar8 = ~uVar8;
      pcVar9 = pcVar10 + -uVar8;
      pcVar10 = param_2;
      for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      uVar8 = 0xffffffff;
      pCVar3 = param_2;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pCVar3;
        pCVar3 = pCVar3 + 1;
      } while (cVar2 != '\0');
      pCVar5 = FUN_66052030(param_2,param_2 + (~uVar8 - 1));
      uVar8 = 0xffffffff;
      pCVar3 = param_2;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pCVar3;
        pCVar3 = pCVar3 + 1;
      } while (cVar2 != '\0');
      if ((pCVar5 + 1 < param_2 + (~uVar8 - 1)) || (*pCVar5 != '\\')) {
        uVar8 = 0xffffffff;
        pcVar9 = &DAT_6606c264;
        do {
          pcVar10 = pcVar9;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar10 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar2 != '\0');
        uVar8 = ~uVar8;
        iVar7 = -1;
        pCVar3 = param_2;
        do {
          pcVar9 = pCVar3;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar9 = pCVar3 + 1;
          cVar2 = *pCVar3;
          pCVar3 = pcVar9;
        } while (cVar2 != '\0');
        pcVar10 = pcVar10 + -uVar8;
        pcVar9 = pcVar9 + -1;
        for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar9 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      uVar8 = 0xffffffff;
      pCVar11 = local_150.cFileName;
      do {
        pCVar12 = pCVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pCVar12 = pCVar11 + 1;
        cVar2 = *pCVar11;
        pCVar11 = pCVar12;
      } while (cVar2 != '\0');
      uVar8 = ~uVar8;
      iVar7 = -1;
      pCVar3 = param_2;
      do {
        pcVar9 = pCVar3;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pCVar3 + 1;
        cVar2 = *pCVar3;
        pCVar3 = pcVar9;
      } while (cVar2 != '\0');
      pCVar11 = pCVar12 + -uVar8;
      pcVar9 = pcVar9 + -1;
      for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pCVar11;
        pCVar11 = pCVar11 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar9 = *pCVar11;
        pCVar11 = pCVar11 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    uVar8 = (uint)(((byte)local_150.dwFileAttributes & 0x10) == 0x10);
  }
  while ((uVar8 != 2 && (iVar7 = FUN_66052a10(param_2), iVar7 == 0))) {
    uVar8 = (**(code **)(*(int *)this + 0x2c))(param_2,param_3);
  }
  FUN_6605b770((int *)local_10);
  return uVar8;
}


