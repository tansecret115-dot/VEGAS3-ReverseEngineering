/* Module: vegas30.exe
   Function: FUN_00417720
   Address: 00417720
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00417720(int param_1,int param_2)

{
  HWND hWnd;
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  undefined4 *puVar4;
  WPARAM wParam;
  undefined4 uVar5;
  LPCSTR pCVar6;
  size_t unaff_EBP;
  code *pcVar7;
  undefined4 unaff_ESI;
  int iVar8;
  int *piVar9;
  CHAR *unaff_retaddr;
  undefined4 *local_424;
  int iStack_420;
  int *piStack_41c;
  int iStack_418;
  int *local_414;
  uint local_410;
  undefined1 auStack_31c [7];
  undefined1 uStack_315;
  WCHAR aWStack_314 [260];
  CHAR aCStack_10c [259];
  undefined1 uStack_9;
  int iStack_4;
  
  pcVar7 = SendMessageA_exref;
  hWnd = *(HWND *)(param_1 + 0x254);
  piVar9 = *(int **)(param_1 + 0x1c0);
  local_410 = (uint)(param_2 != 0);
  local_414 = piVar9;
  SendMessageA(hWnd,0x14b,0,0);
  if (piVar9 == (int *)0x0) {
    EnableWindow(hWnd,0);
    FUN_00418000(param_1,0);
    return;
  }
  iVar1 = (**(code **)(*piVar9 + 0x34))(piVar9,&local_424);
  if (iVar1 == 0) {
    iVar8 = 0;
    iStack_420 = 0;
    iVar1 = -1;
    if (unaff_retaddr == (LPCSTR)0x0) {
      (**(code **)(*piVar9 + 0x40))(piVar9,&stack0xfffffbd8);
      iVar2 = (**(code **)(*piVar9 + 0x38))(piVar9,unaff_ESI,auStack_31c,0x104);
      if (iVar2 == 0) {
        if ((&stack0x00000000 == (undefined1 *)0x314) || (aWStack_314[0] != L'\0')) {
          WideCharToMultiByte(0,0,aWStack_314,-1,aCStack_10c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x10c) {
          aCStack_10c[0] = '\0';
        }
        unaff_retaddr = aCStack_10c;
        uStack_9 = 0;
      }
    }
    pvVar3 = GlobalAlloc(0x42,unaff_EBP * 0x108);
    puVar4 = GlobalLock(pvVar3);
    local_424 = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      if (0 < (int)unaff_EBP) {
        do {
          (**(code **)(*piVar9 + 0x38))(piVar9,iVar8,aWStack_314,0x100);
          if ((&stack0x00000000 == (undefined1 *)0x314) || (aWStack_314[0] != L'\0')) {
            WideCharToMultiByte(0,0,aWStack_314,-1,(LPSTR)&local_414,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0x414) {
            local_414 = (int *)((uint)local_414 & 0xffffff00);
          }
          uStack_315 = 0;
          if ((unaff_retaddr != (LPCSTR)0x0) &&
             (iVar2 = lstrcmpA((LPCSTR)&local_414,unaff_retaddr), iVar2 == 0)) {
            iVar1 = iVar8;
            iStack_420 = iVar8;
          }
          wParam = SendMessageA(hWnd,0x143,0,(LPARAM)&local_414);
          SendMessageA(hWnd,0x151,wParam,iVar8);
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)unaff_EBP);
      }
    }
    else {
      iVar8 = 0;
      pCVar6 = (LPCSTR)(puVar4 + unaff_EBP * 2);
      if (0 < (int)unaff_EBP) {
        do {
          (**(code **)(*piStack_41c + 0x38))(piStack_41c,iVar8,aWStack_314,0x100);
          *puVar4 = pCVar6;
          puVar4[1] = iVar8;
          if ((&stack0x00000000 == (undefined1 *)0x314) || (aWStack_314[0] != L'\0')) {
            WideCharToMultiByte(0,0,aWStack_314,-1,pCVar6,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (pCVar6 != (LPCSTR)0x0) {
            *pCVar6 = '\0';
          }
          pCVar6[0xff] = '\0';
          iVar2 = lstrlenA(pCVar6);
          pCVar6 = pCVar6 + iVar2 + 1;
          iVar8 = iVar8 + 1;
          puVar4 = puVar4 + 2;
          pcVar7 = SendMessageA_exref;
        } while (iVar8 < (int)unaff_EBP);
      }
      qsort(local_424,unaff_EBP,8,FUN_004176e0);
      iVar8 = 0;
      puVar4 = local_424;
      if (0 < (int)unaff_EBP) {
        do {
          if ((unaff_retaddr != (LPCSTR)0x0) &&
             (iVar2 = lstrcmpA((LPCSTR)*puVar4,unaff_retaddr), iVar2 == 0)) {
            iVar1 = puVar4[1];
            iStack_420 = iVar8;
          }
          uVar5 = (*pcVar7)(hWnd,0x143,0,*puVar4);
          (*pcVar7)(hWnd,0x151,uVar5,puVar4[1]);
          iVar8 = iVar8 + 1;
          puVar4 = puVar4 + 2;
        } while (iVar8 < (int)unaff_EBP);
      }
      puVar4 = local_424;
      pvVar3 = GlobalHandle(local_424);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(puVar4);
      GlobalFree(pvVar3);
      piVar9 = piStack_41c;
    }
    (*pcVar7)(hWnd,0x14e,iStack_420,0);
    param_1 = iStack_4;
    if ((iStack_418 != 0) && (-1 < iVar1)) {
      (**(code **)(*piVar9 + 0x3c))(piVar9,iVar1);
      param_1 = iStack_4;
    }
  }
  else {
    pCVar6 = (LPCSTR)_SfGetString_8(DAT_00647204,0x87);
    SetWindowTextA(*(HWND *)(param_1 + 0x254),pCVar6);
    EnableWindow(*(HWND *)(param_1 + 0x254),1);
  }
  EnableWindow(hWnd,1);
  FUN_00418000(param_1,1);
  return;
}


