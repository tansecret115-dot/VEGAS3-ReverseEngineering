/* Module: vidpcore.dll
   Function: FUN_5de2ad90
   Address: 5de2ad90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de2ad90(int param_1,int *param_2)

{
  uint uVar1;
  SIZE_T dwBytes;
  HGLOBAL pvVar2;
  int iVar3;
  LPCSTR lpMultiByteStr;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint unaff_ESI;
  int *piVar7;
  CHAR *pCVar8;
  int *piVar9;
  LPCSTR pCVar10;
  bool bVar11;
  LPCRITICAL_SECTION p_Stack_14;
  undefined4 local_10;
  int iStack_c;
  int *piStack_8;
  LPCRITICAL_SECTION local_4;
  
  local_4 = (LPCRITICAL_SECTION)(param_1 + 0x48);
  EnterCriticalSection(local_4);
  FUN_5de295b0();
  if (*(LPCVOID *)(param_1 + 0xe0) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0xe0));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0xe0));
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  local_10 = 0;
  iVar3 = (**(code **)(*param_2 + 0xc))(param_2,param_1 + 0x60,0x7c,&local_10);
  if (unaff_ESI < 0x7c) {
LAB_5de2ae88:
    if (unaff_ESI - 0x6c < 5) {
      *(undefined4 *)(param_1 + 0xcc) = DAT_5df180b0;
      *(undefined4 *)(param_1 + 0xd0) = DAT_5df180b4;
      *(undefined4 *)(param_1 + 0xd4) = DAT_5df180b8;
      *(undefined4 *)(param_1 + 0xd8) = DAT_5df180bc;
    }
    else {
      dwBytes = *(SIZE_T *)(param_1 + 0xcc);
      uVar1 = unaff_ESI - 0x70;
      *(SIZE_T *)(param_1 + 0xdc) = dwBytes;
      if (dwBytes != 0) {
        pvVar2 = GlobalAlloc(0x40,dwBytes);
        lpMultiByteStr = GlobalLock(pvVar2);
        pCVar8 = (CHAR *)(param_1 + 0xd0);
        pCVar10 = lpMultiByteStr;
        for (uVar6 = uVar1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pCVar10 = *(undefined4 *)pCVar8;
          pCVar8 = pCVar8 + 4;
          pCVar10 = pCVar10 + 4;
        }
        for (uVar6 = uVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pCVar10 = *pCVar8;
          pCVar8 = pCVar8 + 1;
          pCVar10 = pCVar10 + 1;
        }
        if (dwBytes - uVar1 != 0) {
          iVar3 = (**(code **)(*piStack_8 + 0xc))
                            (piStack_8,lpMultiByteStr + uVar1,dwBytes - uVar1,0);
        }
        iVar5 = *(int *)(param_1 + 0xdc);
        iVar4 = 0;
        if (0 < iVar5) {
          do {
            if (lpMultiByteStr[iVar4] == '\0') {
              iVar5 = iVar4 + 1;
              break;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar5);
        }
        FUN_5de29540(iVar5);
        MultiByteToWideChar(0,0,lpMultiByteStr,*(int *)(param_1 + 0xdc),*(LPWSTR *)(param_1 + 0xe0),
                            iVar5);
        *(undefined2 *)(*(int *)(param_1 + 0xe0) + -2 + iVar5 * 2) = 0;
        pvVar2 = GlobalHandle(lpMultiByteStr);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(lpMultiByteStr);
        GlobalFree(pvVar2);
      }
      *(undefined4 *)(param_1 + 0xcc) = DAT_5df180b0;
      *(undefined4 *)(param_1 + 0xd0) = DAT_5df180b4;
      *(undefined4 *)(param_1 + 0xd4) = DAT_5df180b8;
      *(undefined4 *)(param_1 + 0xd8) = DAT_5df180bc;
LAB_5de2af7a:
      if (-1 < iVar3) {
        iVar3 = 0;
        goto LAB_5de2af93;
      }
    }
  }
  else {
    iVar5 = 4;
    bVar11 = true;
    piVar7 = &DAT_5df180b0;
    piVar9 = (int *)(param_1 + 0xcc);
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar11 = *piVar7 == *piVar9;
      piVar7 = piVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (bVar11);
    if (!bVar11) goto LAB_5de2ae88;
    if (-1 < iVar3) {
      piVar7 = (int *)(param_1 + 0xdc);
      iVar3 = (**(code **)(*param_2 + 0xc))(param_2,piVar7,4,0);
      if (iVar3 < 0) goto LAB_5de2af86;
      if ((0 < *piVar7) && (FUN_5de29540(*piVar7), *(int *)(param_1 + 0xe0) == 0)) {
        iVar3 = -0x7ff8fff2;
        goto LAB_5de2af86;
      }
      if (0 < *piVar7) {
        iVar3 = (**(code **)(*param_2 + 0xc))(param_2,*(undefined4 *)(param_1 + 0xe0),*piVar7 * 2,0)
        ;
      }
      goto LAB_5de2af7a;
    }
  }
LAB_5de2af86:
  FUN_5de29540(0);
LAB_5de2af93:
  *(undefined4 *)(iStack_c + 0x168) = 1;
  if (-1 < iVar3) {
    if (*(HWND *)(iStack_c + 0x288) != (HWND)0x0) {
      PostMessageA(*(HWND *)(iStack_c + 0x288),0x111,*(WPARAM *)(iStack_c + 0x28c),0);
    }
    piVar7 = *(int **)(iStack_c + 0x284);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))(piVar7);
    }
  }
  LeaveCriticalSection(p_Stack_14);
  return iVar3;
}


