/* Module: vegas30k.dll
   Function: FUN_01022730
   Address: 01022730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01022730(int *param_1)

{
  HGLOBAL pvVar1;
  char *pMem;
  int iVar2;
  DWORD DVar3;
  HWND hWnd;
  uint uVar4;
  int iVar5;
  uint uVar6;
  LPCSTR pCVar7;
  LPCSTR lpString;
  CHAR *pCVar8;
  char *pcVar9;
  _SHFILEOPSTRUCTA *p_Var10;
  int local_138;
  int local_134;
  undefined4 local_12c;
  _SHFILEOPSTRUCTA local_124;
  CHAR local_104 [260];
  
  local_12c = 0;
  iVar5 = *(int *)param_1[2];
  pvVar1 = GlobalAlloc(0x42,iVar5 * 0x105 + 1);
  pMem = GlobalLock(pvVar1);
  if (pMem != (char *)0x0) {
    local_138 = 0;
    local_134 = 0;
    if (0 < iVar5) {
      do {
        lpString = *(LPCSTR *)(*(int *)(param_1[2] + 8) + local_134 * 4);
        iVar2 = lstrlenA(lpString);
        uVar6 = iVar2 + 1;
        pCVar7 = lpString;
        pCVar8 = local_104;
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pCVar8 = *(undefined4 *)pCVar7;
          pCVar7 = pCVar7 + 4;
          pCVar8 = pCVar8 + 4;
        }
        for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pCVar8 = *pCVar7;
          pCVar7 = pCVar7 + 1;
          pCVar8 = pCVar8 + 1;
        }
        DVar3 = GetFileAttributesA(local_104);
        if (DVar3 != 0x10) {
          iVar2 = _SfGetFileNamePtrA_4(local_104);
          *(undefined1 *)(iVar2 + -1) = 0;
        }
        if ((*param_1 == 0xb) || (iVar2 = lstrcmpiA(local_104,(LPCSTR)param_1[6]), iVar2 != 0)) {
          pcVar9 = pMem + local_138;
          for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)lpString;
            lpString = lpString + 4;
            pcVar9 = pcVar9 + 4;
          }
          local_138 = local_138 + uVar6;
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar9 = *lpString;
            lpString = lpString + 1;
            pcVar9 = pcVar9 + 1;
          }
        }
        local_134 = local_134 + 1;
      } while (local_134 < iVar5);
    }
    if (*pMem != '\0') {
      p_Var10 = &local_124;
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        p_Var10->hwnd = (HWND)0x0;
        p_Var10 = (_SHFILEOPSTRUCTA *)&p_Var10->wFunc;
      }
      *(undefined2 *)&p_Var10->hwnd = 0;
      local_124.hwnd = (HWND)param_1[1];
      local_124.fFlags = 8;
      if (*param_1 == 0xb) {
        local_124.wFunc = 2;
        local_124.fFlags = 0x108;
      }
      else {
        local_124.wFunc = 1;
      }
      local_124.pTo = (LPCSTR)param_1[6];
      local_124.pFrom = pMem;
      hWnd = GetFocus();
      iVar5 = SHFileOperationA(&local_124);
      if (iVar5 != 0) {
        local_12c = 0x80004005;
      }
      SetFocus(hWnd);
    }
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    return local_12c;
  }
  return 0x8007000e;
}


