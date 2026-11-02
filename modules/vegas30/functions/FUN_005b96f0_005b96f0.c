/* Module: vegas30.exe
   Function: FUN_005b96f0
   Address: 005b96f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b96f0(LPCVOID param_1)

{
  byte bVar1;
  LPCVOID pMem;
  int iVar2;
  int iVar3;
  HGLOBAL pvVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pMem = param_1;
  FUN_005b83b0(param_1,1);
  if (DAT_00647630 != 0) {
    FUN_00469460(DAT_00647630);
  }
  FUN_004e4d30(pMem,0);
  FUN_005b95b0(pMem);
  if (*(int *)((int)pMem + 0xc40) != 0) {
    _SfVideoPlugin_DestroyCacheList_4(*(int *)((int)pMem + 0xc40));
    *(undefined4 *)((int)pMem + 0xc40) = 0;
  }
  FUN_005b9150(pMem);
  iVar3 = 0;
  if ((*(char *)((int)pMem + 0x1e4) != '\0') &&
     (iVar3 = *(int *)((int)pMem + 0x1ec), (*(byte *)(iVar3 + 0x18) & 2) != 2)) {
    bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
    iVar5 = *(int *)(iVar3 + 0x10);
    while ((bVar1 & 2) != 2) {
      bVar1 = *(byte *)(*(int *)(iVar5 + 0x10) + 0x18);
      iVar3 = iVar5;
      iVar5 = *(int *)(iVar5 + 0x10);
    }
  }
  do {
    do {
      iVar5 = iVar3;
      if (*(char *)((int)pMem + 0x1e4) == '\0') {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)pMem + 0x1f0);
      }
      if (iVar5 == iVar3) {
        iVar3 = FUN_005ec620();
        if (iVar3 != 0) {
          FUN_005ed570();
        }
        _SfSummary_Free_4((int)pMem + 0x1bc);
        FUN_005b3cc0(pMem);
        FUN_005b84d0(pMem,1);
        if (*(int *)((int)pMem + 0xc) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)((int)pMem + 0x14));
          puVar6 = (undefined4 *)((int)pMem + 8);
          for (iVar3 = 0x2c; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
        }
        FUN_005b82d0(pMem);
        if (pMem != (LPCVOID)0x0) {
          *(undefined ***)((int)pMem + 0x698) = &PTR_FUN_0061b9cc;
          FUN_005b7c80();
          FUN_005eba10();
          pvVar4 = GlobalHandle(pMem);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(pMem);
          GlobalFree(pvVar4);
        }
        return 0;
      }
      param_1 = (LPCVOID)FUN_005ed560(iVar5);
      iVar3 = iVar5;
      if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x18) & 2) != 2)) {
        iVar3 = *(int *)(iVar5 + 0x14);
        iVar2 = iVar5;
        if ((*(byte *)(iVar3 + 0x18) & 2) == 2) {
          do {
            iVar3 = *(int *)(iVar2 + 0xc);
            if (*(int *)(iVar3 + 0x10) == iVar2) break;
            iVar2 = iVar3;
          } while ((*(byte *)(iVar3 + 0x18) & 2) != 2);
        }
        else {
          bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
          iVar2 = *(int *)(iVar3 + 0x10);
          while ((bVar1 & 2) != 2) {
            bVar1 = *(byte *)(*(int *)(iVar2 + 0x10) + 0x18);
            iVar3 = iVar2;
            iVar2 = *(int *)(iVar2 + 0x10);
          }
        }
      }
    } while (param_1 == (LPCVOID)0x0);
    do {
      iVar2 = FUN_005ed4a0(iVar5,0,&param_1);
      if (iVar2 < 0) break;
    } while (param_1 != (LPCVOID)0x0);
  } while( true );
}


