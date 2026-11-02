/* Module: vidcap30.exe
   Function: FUN_004fa160
   Address: 004fa160
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fa160(int param_1,LRESULT param_2)

{
  char cVar1;
  HWND hWnd;
  HWND hWnd_00;
  LRESULT LVar2;
  int iVar3;
  char *lpsz;
  LPCSTR pCVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  CHAR *pCVar10;
  bool bVar11;
  int local_570;
  int local_56c;
  int local_558 [5];
  char *local_544;
  CHAR *local_540;
  int local_538 [7];
  int local_51c;
  LPCSTR local_518;
  CHAR local_514 [252];
  CHAR aCStack_418 [528];
  char local_208 [520];
  
  FUN_004f9e10(param_1);
  hWnd = *(HWND *)(param_1 + 0x14);
  hWnd_00 = *(HWND *)(param_1 + 0x18);
  lpsz = local_208;
  _SfGetString2_8(DAT_005c16d8,0x1089);
  FUN_004f8340(hWnd_00,param_2,local_208);
  piVar8 = local_558;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  local_544 = local_208;
  local_540 = local_514;
  local_558[0] = 0x406;
  LVar2 = SendMessageA(hWnd,0x146,0,0);
  piVar8 = local_538;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  local_538[0] = 0x30;
  param_2 = SendMessageA(hWnd_00,0x110a,0,0);
  local_56c = 0;
  local_570 = 0;
  if (LVar2 < 0) {
    return;
  }
  do {
    if (local_570 < LVar2) {
      local_538[1] = local_570;
      SendMessageA(hWnd,0x404,0,(LPARAM)local_538);
      local_570 = local_570 + 1;
    }
    pCVar4 = local_518;
    if (local_51c != local_56c) {
      LVar2 = SendMessageA(hWnd_00,0x110a,3,param_2);
      while( true ) {
        cVar1 = *lpsz;
        if (cVar1 == '*') {
          pCVar4 = CharNextA(lpsz);
          cVar1 = *pCVar4;
          while ((cVar1 != '\0' && (cVar1 != '*'))) {
            pCVar4 = CharNextA(pCVar4);
            cVar1 = *pCVar4;
          }
          if (*pCVar4 == '*') {
            pCVar4 = CharNextA(pCVar4);
          }
        }
        else {
          pCVar4 = lpsz;
          if (cVar1 == '\\') {
            pCVar4 = CharNextA(lpsz);
          }
          else {
            while ((cVar1 != '\0' && (cVar1 != '\\'))) {
              pCVar4 = CharNextA(pCVar4);
              cVar1 = *pCVar4;
            }
          }
        }
        uVar5 = (int)pCVar4 - (int)lpsz;
        pCVar10 = local_514;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pCVar10 = *(undefined4 *)lpsz;
          lpsz = lpsz + 4;
          pCVar10 = pCVar10 + 4;
        }
        for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pCVar10 = *lpsz;
          lpsz = lpsz + 1;
          pCVar10 = pCVar10 + 1;
        }
        local_514[uVar5] = '\0';
        LVar2 = FUN_004f7f00(hWnd_00,LVar2,local_514);
        local_558[3] = FUN_004f79a0(hWnd_00,LVar2,local_558 + 2);
        FUN_004f9d30(hWnd,local_570 + -1,local_56c,
                     *(undefined4 *)(*(int *)(local_558[2] + 8) + local_558[3] * 4));
        if (*pCVar4 == '\0') break;
        local_570 = local_570 + 1;
        lpsz = CharNextA(pCVar4);
        local_56c = local_56c + 1;
      }
      (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_558);
      wsprintfA(aCStack_418,"%s%s",hWnd,&local_51c);
      FUN_004fa520(param_1,aCStack_418);
      PostMessageA(*(HWND *)(param_1 + 4),0x600,local_570 - 1,0);
      return;
    }
    iVar3 = lstrlenA(local_518);
    bVar11 = true;
    iVar6 = iVar3;
    pcVar9 = lpsz;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar11 = *pCVar4 == *pcVar9;
      pCVar4 = pCVar4 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar11);
    iVar6 = local_570;
    if (bVar11) {
      cVar1 = lpsz[iVar3];
      if (((cVar1 != '\0') && (cVar1 != '\\')) && (cVar1 != ':')) goto LAB_004fa2ce;
      if (lpsz[iVar3] == '\0') {
        FUN_004fa070(param_1,local_570 + -1);
        SendMessageA(hWnd,0x14e,local_570 - 1,0);
        local_558[3] = FUN_004f79a0(hWnd_00,param_2,local_558 + 2);
        (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_558);
        wsprintfA(aCStack_418,"%s%s",hWnd,&local_51c);
        FUN_004fa520(param_1,aCStack_418);
        return;
      }
      param_2 = SendMessageA(hWnd_00,0x110a,4,param_2);
      lpsz = CharNextA(lpsz + iVar3);
      local_56c = local_56c + 1;
    }
    else {
LAB_004fa2ce:
      do {
        local_570 = iVar6;
        local_538[1] = local_570;
        SendMessageA(hWnd,0x404,0,(LPARAM)local_538);
        iVar6 = local_570 + 1;
      } while (local_51c != local_56c);
      param_2 = SendMessageA(hWnd_00,0x110a,1,param_2);
    }
    if (LVar2 < local_570) {
      return;
    }
  } while( true );
}


