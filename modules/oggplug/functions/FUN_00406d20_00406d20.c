/* Module: oggplug.dll
   Function: FUN_00406d20
   Address: 00406d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00406d20(int param_1)

{
  int iVar1;
  LRESULT *pLVar2;
  HWND hWnd;
  WPARAM wParam;
  LRESULT LVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x424);
  pLVar2 = *(LRESULT **)(iVar1 + 0x3e);
  if ((pLVar2 != (LRESULT *)0x0) && (3 < *(uint *)(iVar1 + 0x3a))) {
    hWnd = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d7);
    wParam = SendMessageA(hWnd,0x147,0,0);
    if (wParam != 0xffffffff) {
      LVar3 = SendMessageA(hWnd,0x150,wParam,0);
      *pLVar2 = LVar3;
      *(undefined4 *)(param_1 + 0x24) = 1;
    }
  }
  return;
}


