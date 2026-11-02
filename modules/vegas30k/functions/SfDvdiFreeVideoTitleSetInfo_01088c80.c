/* Module: vegas30k.dll
   Function: SfDvdiFreeVideoTitleSetInfo
   Address: 01088c80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDvdiFreeVideoTitleSetInfo(struct tagSFVTS_INFO *) */

long SfDvdiFreeVideoTitleSetInfo(tagSFVTS_INFO *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  HGLOBAL pvVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
                    /* 0x88c80  368  ?SfDvdiFreeVideoTitleSetInfo@@YGJPAUtagSFVTS_INFO@@@Z */
  if (param_1 != (tagSFVTS_INFO *)0x0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0x14));
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0x28));
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0x2c));
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0x58));
    }
    if (*(int *)(param_1 + 0x5c) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0x5c));
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar7 = 0;
      while( true ) {
        piVar1 = *(int **)(param_1 + 0x30);
        if (piVar1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        uVar2 = uVar7 & 0xffff;
        if (iVar5 <= (int)uVar2) break;
        if (piVar1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        if (iVar5 + -1 < (int)uVar2) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(piVar1[2] + uVar2 * 4);
        }
        if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) != 0)) {
          _SfList_Destroy_4(*(int *)(iVar5 + 0x1c));
        }
        uVar7 = uVar7 + 1;
      }
      _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x30));
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0x38));
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0x48));
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0x34));
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      uVar7 = 0;
      while( true ) {
        piVar1 = *(int **)(param_1 + 0x4c);
        if (piVar1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        uVar2 = uVar7 & 0xffff;
        if (iVar5 <= (int)uVar2) break;
        if (piVar1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        if (iVar5 + -1 < (int)uVar2) {
          SfCdiFreeProgramChainInfo(ptRam00000000);
          uVar7 = uVar7 + 1;
        }
        else {
          SfCdiFreeProgramChainInfo((tagSFIFO_PGCI *)**(undefined4 **)(piVar1[2] + uVar2 * 4));
          uVar7 = uVar7 + 1;
        }
      }
      _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x4c));
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      uVar7 = 0;
      while( true ) {
        piVar1 = *(int **)(param_1 + 0x18);
        if (piVar1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        uVar2 = uVar7 & 0xffff;
        if (iVar5 <= (int)uVar2) break;
        if (piVar1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        if (iVar5 + -1 < (int)uVar2) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(piVar1[2] + uVar2 * 4);
        }
        _SfList_Destroy_4(*(undefined4 *)(iVar5 + 4));
        uVar2 = 0;
        while( true ) {
          piVar1 = *(int **)(iVar5 + 8);
          if (piVar1 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar1;
          }
          uVar3 = uVar2 & 0xffff;
          if (iVar6 <= (int)uVar3) break;
          if (piVar1 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar1;
          }
          if (iVar6 + -1 < (int)uVar3) {
            SfCdiFreeProgramChainInfo(ptRam00000000);
            uVar2 = uVar2 + 1;
          }
          else {
            SfCdiFreeProgramChainInfo((tagSFIFO_PGCI *)**(undefined4 **)(piVar1[2] + uVar3 * 4));
            uVar2 = uVar2 + 1;
          }
        }
        _SfList_Destroy_4(*(undefined4 *)(iVar5 + 8));
        uVar7 = uVar7 + 1;
      }
      _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x18));
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      uVar7 = 0;
      while( true ) {
        piVar1 = *(int **)(param_1 + 0x50);
        if (piVar1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        uVar2 = uVar7 & 0xffff;
        if (iVar5 <= (int)uVar2) break;
        if (piVar1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        if (iVar5 + -1 < (int)uVar2) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(piVar1[2] + uVar2 * 4);
        }
        if (*(LPCVOID *)(iVar5 + 8) != (LPCVOID)0x0) {
          pvVar4 = GlobalHandle(*(LPCVOID *)(iVar5 + 8));
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(*(LPCVOID *)(iVar5 + 8));
          GlobalFree(pvVar4);
        }
        uVar7 = uVar7 + 1;
      }
      _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x50));
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0x20));
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0x44));
    }
    if (*(LPCVOID *)(param_1 + 8) != (LPCVOID)0x0) {
      pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 8));
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(*(LPCVOID *)(param_1 + 8));
      GlobalFree(pvVar4);
    }
    pvVar4 = GlobalHandle(param_1);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(param_1);
    GlobalFree(pvVar4);
    return 0;
  }
  return 0;
}


