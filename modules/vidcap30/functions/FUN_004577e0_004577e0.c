/* Module: vidcap30.exe
   Function: FUN_004577e0
   Address: 004577e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004577e0(HWND param_1,int *param_2)

{
  LPSTR lpString2;
  LPCSTR lpString1;
  int iVar1;
  LPCVOID pMem;
  bool bVar2;
  HWND hWnd;
  LRESULT LVar3;
  uchar *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  HGLOBAL pvVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int local_230 [5];
  uchar *local_21c;
  undefined4 local_218;
  int local_210;
  uchar local_208 [260];
  uchar local_104 [260];
  
  hWnd = GetDlgItem(param_1,0x9c80);
  LVar3 = SendMessageA(hWnd,0x1004,0,0);
  if (param_2[3] != 0) {
    piVar11 = local_230;
    for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar11 = 0;
      piVar11 = piVar11 + 1;
    }
    local_21c = local_104;
    local_230[0] = 5;
    local_218 = 0x104;
    local_230[1] = 0;
    if (0 < LVar3) {
      do {
        SendMessageA(hWnd,0x1005,0,(LPARAM)local_230);
        iVar9 = local_210;
        lpString2 = (LPSTR)(local_210 + 0x134);
        _SfGetPathNameFromFilePath_12(lpString2,local_208,0x104);
        _mbscat(local_208,local_21c);
        puVar4 = (uchar *)_SfGetFileNameExtensionPtrA_4(lpString2);
        _mbscat(local_208,puVar4);
        iVar5 = lstrcmpiA((LPCSTR)local_208,lpString2);
        if (iVar5 != 0) {
          iVar5 = FUN_0045b950(lpString2,local_208);
          if (iVar5 == 0) {
            puVar4 = local_21c;
            uVar7 = _SfGetString_8(DAT_005ba2a0,0xc500);
            SfErrorHandler_DetailsAddString(0x8004e020,uVar7,puVar4);
          }
          else {
            bVar2 = false;
            iVar10 = 0;
            iVar5 = *(int *)*param_2;
            if (0 < iVar5) {
              do {
                if (bVar2) break;
                iVar1 = *(int *)(*(int *)(*param_2 + 8) + iVar10 * 4);
                lpString1 = (LPCSTR)(iVar1 + 0x2d8);
                iVar6 = lstrcmpiA(lpString1,lpString2);
                if (iVar6 == 0) {
                  bVar2 = true;
                  lstrcpynA(lpString1,(LPCSTR)local_208,0x104);
                  *(undefined1 *)(iVar1 + 0x3db) = 0;
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < iVar5);
            }
            lstrcpynA(lpString2,(LPCSTR)local_208,0x104);
            *(undefined1 *)(iVar9 + 0x237) = 0;
          }
        }
        local_230[1] = local_230[1] + 1;
      } while (local_230[1] < LVar3);
    }
    iVar9 = *(int *)*param_2;
    while (iVar9 = iVar9 + -1, -1 < iVar9) {
      iVar5 = *(int *)(*(int *)(*param_2 + 8) + iVar9 * 4);
      if (*(int *)(iVar5 + 0x2b8) != 0) {
        FUN_0045b8c0(iVar5 + 0x134);
        pMem = *(LPCVOID *)(iVar5 + 0x2d0);
        if (pMem != (LPCVOID)0x0) {
          pvVar8 = GlobalHandle(pMem);
          GlobalUnlock(pvVar8);
          pvVar8 = GlobalHandle(pMem);
          GlobalFree(pvVar8);
        }
        _SfList_DeleteList_16(*param_2,iVar9,1,0);
      }
    }
  }
  if (param_2[2] == 0) {
    DAT_005bb210 = IsDlgButtonChecked(param_1,0x4e8);
    return;
  }
  DAT_005bb20c = IsDlgButtonChecked(param_1,0x4e8);
  return;
}


