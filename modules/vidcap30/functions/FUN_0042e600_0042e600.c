/* Module: vidcap30.exe
   Function: FUN_0042e600
   Address: 0042e600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042e600(LPCVOID param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  HGLOBAL pvVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_4;
  
  pcVar2 = (char *)FUN_0046ed20();
  FUN_0042f4b0(param_1,1);
  iVar5 = 0;
  if ((*pcVar2 != '\0') && (iVar5 = *(int *)(pcVar2 + 8), (*(byte *)(iVar5 + 0x18) & 2) != 2)) {
    bVar1 = *(byte *)(*(int *)(iVar5 + 0x10) + 0x18);
    iVar6 = *(int *)(iVar5 + 0x10);
    while ((bVar1 & 2) != 2) {
      bVar1 = *(byte *)(*(int *)(iVar6 + 0x10) + 0x18);
      iVar5 = iVar6;
      iVar6 = *(int *)(iVar6 + 0x10);
    }
  }
  do {
    do {
      iVar6 = iVar5;
      if (*pcVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(pcVar2 + 0xc);
      }
      if (iVar6 == iVar5) {
        if (pcVar2 != (char *)0x0) {
          FUN_0046fca0();
        }
        FUN_0042e290(param_1);
        FUN_00443600(param_1);
        _SfList_Destroy_4(*(undefined4 *)((int)param_1 + 0x1cc));
        *(undefined4 *)((int)param_1 + 0x1cc) = 0;
        FUN_0045f100(param_1,*(undefined4 *)((int)param_1 + 0x1d0));
        _SfSummary_Free_4((int)param_1 + 0x1c0);
        FUN_0042f5d0(param_1,1);
        if (*(int *)((int)param_1 + 0x10) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x18));
          puVar7 = (undefined4 *)((int)param_1 + 0xc);
          for (iVar5 = 0x2c; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
        }
        if (param_1 != (LPCVOID)0x0) {
          pvVar4 = GlobalHandle(param_1);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(param_1);
          GlobalFree(pvVar4);
        }
        return 0;
      }
      local_4 = FUN_0046fc90(iVar6);
      iVar5 = iVar6;
      if ((iVar6 != 0) && ((*(byte *)(iVar6 + 0x18) & 2) != 2)) {
        iVar5 = *(int *)(iVar6 + 0x14);
        iVar3 = iVar6;
        if ((*(byte *)(iVar5 + 0x18) & 2) == 2) {
          do {
            iVar5 = *(int *)(iVar3 + 0xc);
            if (*(int *)(iVar5 + 0x10) == iVar3) break;
            iVar3 = iVar5;
          } while ((*(byte *)(iVar5 + 0x18) & 2) != 2);
        }
        else {
          bVar1 = *(byte *)(*(int *)(iVar5 + 0x10) + 0x18);
          iVar3 = *(int *)(iVar5 + 0x10);
          while ((bVar1 & 2) != 2) {
            bVar1 = *(byte *)(*(int *)(iVar3 + 0x10) + 0x18);
            iVar5 = iVar3;
            iVar3 = *(int *)(iVar3 + 0x10);
          }
        }
      }
    } while (local_4 == 0);
    do {
      iVar3 = FUN_0046fbd0(iVar6,0,&local_4);
      if (iVar3 < 0) break;
    } while (local_4 != 0);
  } while( true );
}


