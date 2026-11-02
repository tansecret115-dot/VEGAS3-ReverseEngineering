/* Module: sftrans1.dll
   Function: FUN_00491da0
   Address: 00491da0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00491da0(int param_1)

{
  int iVar1;
  HWND hWnd;
  int *piVar2;
  UINT Msg;
  WPARAM wParam;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x30) + 0x54;
  wParam = 0;
  Msg = 0xa05;
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x6ac);
  SendMessageA(hWnd,Msg,wParam,iVar1);
  iVar1 = 0;
  if (0 < **(int **)(param_1 + 0x28)) {
    do {
      piVar2 = (int *)FUN_00485e60(iVar1);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < **(int **)(param_1 + 0x28));
  }
  return 1;
}


