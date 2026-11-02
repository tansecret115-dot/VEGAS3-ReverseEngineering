/* Module: vegas30.exe
   Function: FUN_00503ab0
   Address: 00503ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00503ab0(HWND param_1)

{
  HWND hWnd;
  undefined4 *puVar1;
  int iVar2;
  WPARAM wParam;
  int *unaff_EBP;
  int *unaff_ESI;
  int *piVar3;
  int *wParam_00;
  int local_44;
  undefined1 auStack_24 [4];
  int *piStack_20;
  int *piStack_14;
  int *piStack_10;
  undefined1 auStack_4 [4];
  
  hWnd = GetDlgItem(param_1,0x4b0);
  SendMessageA(hWnd,0x14b,0,0);
  puVar1 = (undefined4 *)FUN_005030c0();
  FUN_00503080();
  if (local_44 == 0) {
    EnableWindow(hWnd,0);
  }
  else {
    wParam_00 = (int *)*puVar1;
    (**(code **)(*wParam_00 + 0x4c))();
    if (unaff_ESI != (int *)0x0) {
      piVar3 = (int *)0x0;
      iVar2 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,1,auStack_4);
      while (iVar2 == 0) {
        (**(code **)(*piStack_14 + 0x1c))(piStack_14,&stack0xffffffa8,0x40);
        wParam = SendMessageA(hWnd,0x143,0,(LPARAM)&stack0xffffff9c);
        SendMessageA(hWnd,0x151,wParam,wParam);
        lstrcmpA(&stack0xffffff9c,(LPCSTR)(*piStack_10 + 0x11a8));
        (**(code **)(*piStack_20 + 8))(piStack_20);
        iVar2 = (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,1,auStack_24,0);
      }
      EnableWindow(hWnd,1);
      SendMessageA(hWnd,0x14e,(WPARAM)wParam_00,0);
      (**(code **)(*piVar3 + 8))(piVar3);
      return;
    }
  }
  return;
}


