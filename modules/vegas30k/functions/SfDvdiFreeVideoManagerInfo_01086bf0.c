/* Module: vegas30k.dll
   Function: SfDvdiFreeVideoManagerInfo
   Address: 01086bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDvdiFreeVideoManagerInfo(struct tagSFVMG_INFO *) */

long SfDvdiFreeVideoManagerInfo(tagSFVMG_INFO *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
                    /* 0x86bf0  367  ?SfDvdiFreeVideoManagerInfo@@YGJPAUtagSFVMG_INFO@@@Z */
  if (*(int *)(param_1 + 0x40) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x40));
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x44));
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar6 = 0;
    while( true ) {
      piVar1 = *(int **)(param_1 + 8);
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if (iVar4 <= iVar6) break;
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if ((iVar6 < 0) || (iVar4 + -1 < iVar6)) {
        iVar6 = iVar6 + 1;
        *(undefined4 *)(ptRam00000000 + 4) = 0;
      }
      else {
        iVar6 = iVar6 + 1;
        *(undefined4 *)(**(int **)(piVar1[2] + -4 + iVar6 * 4) + 4) = 0;
      }
    }
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x24));
  }
  SfCdiFreeProgramChainInfo(*(tagSFIFO_PGCI **)(param_1 + 0x20));
  if (*(LPCVOID *)(param_1 + 0x14) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x14));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x14));
    GlobalFree(pvVar2);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar6 = 0;
    while( true ) {
      piVar1 = *(int **)(param_1 + 0x28);
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if (iVar4 <= iVar6) break;
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if ((iVar6 < 0) || (iVar4 + -1 < iVar6)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(piVar1[2] + iVar6 * 4);
      }
      _SfList_Destroy_4(*(undefined4 *)(iVar4 + 4));
      iVar7 = 0;
      while( true ) {
        piVar1 = *(int **)(iVar4 + 8);
        if (piVar1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        if (iVar5 <= iVar7) break;
        if (piVar1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        if ((iVar7 < 0) || (iVar5 + -1 < iVar7)) {
          SfCdiFreeProgramChainInfo(ptRam00000000);
          iVar7 = iVar7 + 1;
        }
        else {
          SfCdiFreeProgramChainInfo((tagSFIFO_PGCI *)**(undefined4 **)(piVar1[2] + iVar7 * 4));
          iVar7 = iVar7 + 1;
        }
      }
      _SfList_Destroy_4(*(undefined4 *)(iVar4 + 8));
      iVar6 = iVar6 + 1;
    }
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x28));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar6 = 0;
    while( true ) {
      piVar1 = *(int **)(param_1 + 0x2c);
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if (iVar4 <= iVar6) break;
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if ((iVar6 < 0) || (iVar4 + -1 < iVar6)) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = *(undefined4 **)(piVar1[2] + iVar6 * 4);
      }
      iVar4 = 8;
      do {
        puVar3 = puVar3 + 1;
        _SfList_Destroy_4(*puVar3);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar6 = iVar6 + 1;
    }
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x38));
  }
  for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)param_1 = 0;
    param_1 = param_1 + 4;
  }
  return 0;
}


