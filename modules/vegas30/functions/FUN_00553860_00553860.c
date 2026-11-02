/* Module: vegas30.exe
   Function: FUN_00553860
   Address: 00553860
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00553860(HWND param_1)

{
  HWND hWnd;
  WPARAM WVar1;
  int iVar2;
  WPARAM wParam;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined1 *lParam;
  IEnumDriverModel *pIVar3;
  int iVar4;
  int **ppiVar5;
  int *local_114;
  IEnumDriverModel *pIStack_110;
  undefined4 local_10c;
  int *piStack_1c;
  undefined4 uStack_10;
  
  wParam = 0xffffffff;
  local_10c = 0;
  hWnd = GetDlgItem(param_1,0x4b1);
  if (hWnd == (HWND)0x0) {
    return;
  }
  WVar1 = SendMessageA(hWnd,0x146,0,0);
  while ((WVar1 != 0 && (WVar1 != 0xffffffff))) {
    WVar1 = WVar1 - 1;
    local_114 = (int *)SendMessageA(hWnd,0x150,WVar1,0);
    if (local_114 != (int *)0x0) {
      (**(code **)(*local_114 + 8))();
    }
  }
  SendMessageA(hWnd,0x14b,0,0);
  Mixer_EnumDriverModels(&pIStack_110);
  if (pIStack_110 == (IEnumDriverModel *)0x0) {
    return;
  }
  ppiVar5 = &local_114;
  iVar4 = 1;
  iVar2 = (**(code **)(*(int *)pIStack_110 + 0xc))();
  pIVar3 = pIStack_110;
  if (iVar2 == 0) {
    do {
      lParam = &stack0xfffffee8;
      (**(code **)(*unaff_EDI + 0x14))(unaff_EDI);
      (*(code *)(*ppiVar5)[4])(ppiVar5,&stack0xfffffee4,0x104);
      WVar1 = SendMessageA(hWnd,0x143,0,(LPARAM)&stack0xfffffed8);
      SendMessageA(hWnd,0x151,WVar1,(LPARAM)lParam);
      if ((((wParam == 0xffffffff) || (iVar4 == 0)) && (ppiVar5 == *(int ***)(*piStack_1c + 0x2eec))
          ) && (iVar2 = lstrcmpA(&stack0xfffffed8,(LPCSTR)(*piStack_1c + 0x2ef0)), wParam = WVar1,
               iVar2 == 0)) {
        iVar4 = 1;
      }
      iVar2 = (**(code **)(*(int *)pIVar3 + 0xc))(pIVar3,1,&stack0xfffffec8,0);
    } while (iVar2 == 0);
    if (wParam != 0xffffffff) goto LAB_005539ab;
  }
  wParam = 0;
LAB_005539ab:
  SendMessageA(hWnd,0x14e,wParam,0);
  (**(code **)(*unaff_ESI + 8))();
  FUN_00553500(uStack_10,0);
  return;
}


