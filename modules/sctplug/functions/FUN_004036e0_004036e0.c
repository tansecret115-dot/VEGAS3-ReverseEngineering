/* Module: sctplug.dll
   Function: FUN_004036e0
   Address: 004036e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004036e0(int param_1)

{
  int iVar1;
  HWND hWnd;
  LPSTR pCVar2;
  WPARAM WVar3;
  undefined4 local_4;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d6);
  SendMessageA(hWnd,0x14b,0,0);
  local_4 = 0;
  pCVar2 = FUN_0040d100(DAT_0043cd30,0x3f0);
  WVar3 = SendMessageA(hWnd,0x143,0,(LPARAM)pCVar2);
  SendMessageA(hWnd,0x151,WVar3,0);
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x424);
  if ((*(int *)(iVar1 + 0x12) == 1) && (*(short *)(iVar1 + 2) == 1)) {
    local_4 = WVar3;
  }
  if (1 < *(ushort *)(*(int *)(param_1 + 0x34) + 2)) {
    pCVar2 = FUN_0040d100(DAT_0043cd30,0x3f1);
    WVar3 = SendMessageA(hWnd,0x143,0,(LPARAM)pCVar2);
    SendMessageA(hWnd,0x151,WVar3,1);
    iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x424);
    if ((*(int *)(iVar1 + 0x12) == 1) && (*(short *)(iVar1 + 2) == 2)) {
      local_4 = WVar3;
    }
  }
  SendMessageA(hWnd,0x14e,local_4,0);
  return;
}


