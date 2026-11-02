/* Module: oggplug.dll
   Function: FUN_00406f90
   Address: 00406f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00406f90(WPARAM param_1)

{
  HWND hWnd;
  LPSTR pCVar1;
  WPARAM WVar2;
  undefined4 local_4;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d6);
  SendMessageA(hWnd,0x14b,0,0);
  pCVar1 = FUN_0040ae50(DAT_00510c0c,0x3f0);
  WVar2 = SendMessageA(hWnd,0x143,0,(LPARAM)pCVar1);
  SendMessageA(hWnd,0x151,WVar2,1);
  local_4 = param_1;
  if (*(short *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 2) == 1) {
    local_4 = WVar2;
  }
  pCVar1 = FUN_0040ae50(DAT_00510c0c,0x3f1);
  WVar2 = SendMessageA(hWnd,0x143,0,(LPARAM)pCVar1);
  SendMessageA(hWnd,0x151,WVar2,2);
  if (*(short *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 2) != 2) {
    WVar2 = local_4;
  }
  SendMessageA(hWnd,0x14e,WVar2,0);
  return;
}


