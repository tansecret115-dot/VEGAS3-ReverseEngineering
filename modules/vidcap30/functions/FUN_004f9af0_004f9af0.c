/* Module: vidcap30.exe
   Function: FUN_004f9af0
   Address: 004f9af0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f9af0(int param_1,LRESULT param_2)

{
  char cVar1;
  HWND hWnd;
  HWND hWnd_00;
  LRESULT LVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  WPARAM wParam;
  LPCSTR pCVar9;
  WPARAM *pWVar10;
  code *pcVar11;
  code *pcVar12;
  char *pcVar13;
  bool bVar14;
  int local_35c;
  WPARAM local_350 [8];
  LPCSTR local_330;
  int local_324;
  int local_320;
  char local_30c [260];
  char local_208 [520];
  
  pcVar6 = local_208;
  FUN_004f9e10(param_1);
  pcVar11 = SendMessageA_exref;
  hWnd = *(HWND *)(param_1 + 0x14);
  hWnd_00 = *(HWND *)(param_1 + 0x18);
  pWVar10 = local_350;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pWVar10 = 0;
    pWVar10 = pWVar10 + 1;
  }
  local_350[0] = 0x20;
  LVar2 = SendMessageA(hWnd,0x146,0,0);
  FUN_004f8340(hWnd_00,param_2,local_208);
  param_2 = SendMessageA(hWnd_00,0x110a,0,0);
  wParam = 0;
  pcVar12 = CharNextA_exref;
  if (0 < LVar2) {
    do {
      local_350[1] = wParam;
      (*pcVar11)(hWnd,0x404,0,local_350);
      pCVar9 = local_330;
      iVar3 = lstrlenA(local_330);
      pcVar12 = CharNextA_exref;
      bVar14 = true;
      iVar7 = iVar3;
      pcVar4 = local_208;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar14 = *pCVar9 == *pcVar4;
        pCVar9 = pCVar9 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar14);
      if (bVar14) {
        if (local_208[iVar3] == '\0') {
          SendMessageA(hWnd,0x14e,wParam,0);
          return;
        }
        pcVar6 = CharNextA(local_208 + iVar3);
        break;
      }
      param_2 = SendMessageA(hWnd_00,0x110a,1,param_2);
      wParam = wParam + 1;
      pcVar12 = CharNextA_exref;
      pcVar11 = SendMessageA_exref;
    } while ((int)wParam < LVar2);
  }
  local_35c = 1;
  while( true ) {
    cVar1 = *pcVar6;
    if (cVar1 == '*') {
      pcVar4 = (char *)(*pcVar12)(pcVar6);
      cVar1 = *pcVar4;
      while ((cVar1 != '\0' && (cVar1 != '*'))) {
        pcVar4 = (char *)(*pcVar12)(pcVar4);
        cVar1 = *pcVar4;
      }
      if (*pcVar4 == '*') {
        pcVar4 = (char *)(*pcVar12)(pcVar4);
      }
    }
    else {
      pcVar4 = pcVar6;
      if (cVar1 == '\\') {
        pcVar4 = (char *)(*pcVar12)(pcVar6);
      }
      else {
        while ((cVar1 != '\0' && (cVar1 != '\\'))) {
          pcVar4 = (char *)(*pcVar12)(pcVar4);
          cVar1 = *pcVar4;
        }
      }
    }
    uVar5 = (int)pcVar4 - (int)pcVar6;
    pcVar13 = local_30c;
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar13 = pcVar13 + 1;
    }
    local_30c[uVar5] = '\0';
    param_2 = FUN_004f7f00(hWnd_00,param_2,local_30c);
    local_320 = FUN_004f79a0(hWnd_00,param_2,&local_324);
    wParam = wParam + 1;
    FUN_004f9d30(hWnd,wParam,local_35c,*(undefined4 *)(*(int *)(local_324 + 8) + local_320 * 4));
    if (*pcVar4 == '\0') break;
    pcVar6 = CharNextA(pcVar4);
    pcVar12 = CharNextA_exref;
    local_35c = local_35c + 1;
  }
  PostMessageA(*(HWND *)(param_1 + 4),0x600,wParam,0);
  return;
}


