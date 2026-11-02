/* Module: vegas30.exe
   Function: FUN_0055e630
   Address: 0055e630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0055e630(HWND param_1)

{
  HWND hWnd;
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  SHFILEINFOA *pSVar5;
  CHAR *pCVar6;
  CHAR local_43c [4];
  int local_438 [51];
  uint local_36c;
  uchar local_368 [260];
  uchar local_264 [2];
  undefined1 local_262;
  SHFILEINFOA local_160;
  
  hWnd = GetDlgItem(param_1,0x54f);
  pSVar5 = &local_160;
  for (iVar2 = 0x58; iVar2 != 0; iVar2 = iVar2 + -1) {
    pSVar5->hIcon = (HICON)0x0;
    pSVar5 = (SHFILEINFOA *)&pSVar5->iIcon;
  }
  FUN_0055de40(local_43c);
  _mbscpy(local_368,(uchar *)"Local Hard Drives (");
  uVar4 = 0;
  uVar1 = local_36c;
  if (local_36c != 0) {
    piVar3 = local_438;
    do {
      if (*piVar3 == 3) {
        DAT_00659528 = SHGetFileInfoA(local_43c + uVar4 * 8,0,&local_160,0x160,0x4001);
        lstrcpynA((LPSTR)local_264,local_43c + uVar4 * 8,3);
        local_262 = 0;
        _mbscat(local_368,local_264);
        uVar4 = uVar4 + 1;
        uVar1 = local_36c;
        if (uVar4 < local_36c) {
          pCVar6 = local_43c + uVar4 * 8;
          do {
            if (*(int *)(pCVar6 + 4) == 3) {
              lstrcpynA((LPSTR)local_264,pCVar6,3);
              local_262 = 0;
              _mbscat(local_368,",");
              _mbscat(local_368,local_264);
              uVar1 = local_36c;
            }
            uVar4 = uVar4 + 1;
            pCVar6 = pCVar6 + 8;
          } while (uVar4 < uVar1);
        }
        break;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar4 < local_36c);
  }
  if (&stack0x00000000 != (undefined1 *)0x368) {
    _mbscat(local_368,")");
    FUN_0055e600(hWnd,local_368,local_160.iIcon);
    uVar1 = local_36c;
  }
  uVar4 = 0;
  if (uVar1 != 0) {
    pCVar6 = local_43c;
    do {
      SHGetFileInfoA(pCVar6,0,&local_160,0x160,0x4201);
      FUN_0055e600(hWnd,local_160.szDisplayName,local_160.iIcon);
      uVar4 = uVar4 + 1;
      pCVar6 = pCVar6 + 8;
    } while (uVar4 < local_36c);
  }
  SetFocus(hWnd);
  SendMessageA(hWnd,0x14e,0,0);
  return 1;
}


