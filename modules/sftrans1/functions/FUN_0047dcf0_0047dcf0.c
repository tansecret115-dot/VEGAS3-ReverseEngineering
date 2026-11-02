/* Module: sftrans1.dll
   Function: FUN_0047dcf0
   Address: 0047dcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0047dcf0(int param_1)

{
  LPCVOID pMem;
  int *piVar1;
  HGLOBAL pvVar2;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  int **lParam;
  int local_14 [2];
  int *local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  pMem = *(LPCVOID *)(*(int *)(param_1 + 0x30) + 0x1cc);
  if (pMem != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(*(int *)(param_1 + 0x30) + 0x1cc));
    GlobalFree(pvVar2);
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1cc) = 0;
  }
  lParam = &local_c;
  local_14[0] = *(int *)(param_1 + 0x30) + 0x1cc;
  wParam = 3;
  Msg = 0x44a;
  local_c = local_14;
  local_14[1] = 0;
  local_8 = 0;
  local_4 = &LAB_0047de60;
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x643);
  SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))(piVar1);
  }
  return;
}


