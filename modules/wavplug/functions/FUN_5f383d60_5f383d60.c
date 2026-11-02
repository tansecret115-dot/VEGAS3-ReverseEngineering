/* Module: wavplug.dll
   Function: FUN_5f383d60
   Address: 5f383d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f383d60(int param_1)

{
  int iVar1;
  HWND hWnd;
  LPSTR pCVar2;
  WPARAM WVar3;
  undefined4 local_4;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d6);
  SendMessageA(hWnd,0x14b,0,0);
  local_4 = 0;
  pCVar2 = FUN_5f397740(DAT_5f3db380,0x3f0);
  WVar3 = SendMessageA(hWnd,0x143,0,(LPARAM)pCVar2);
  SendMessageA(hWnd,0x151,WVar3,0);
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x424);
  if ((*(int *)(iVar1 + 0x12) == 1) && (*(short *)(iVar1 + 2) == 1)) {
    local_4 = WVar3;
  }
  pCVar2 = FUN_5f397740(DAT_5f3db380,0x3f1);
  WVar3 = SendMessageA(hWnd,0x143,0,(LPARAM)pCVar2);
  SendMessageA(hWnd,0x151,WVar3,1);
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x424);
  if ((*(int *)(iVar1 + 0x12) == 1) && (*(short *)(iVar1 + 2) == 2)) {
    local_4 = WVar3;
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    pCVar2 = FUN_5f397740(DAT_5f3db380,0x3f2);
    WVar3 = SendMessageA(hWnd,0x143,0,(LPARAM)pCVar2);
    SendMessageA(hWnd,0x151,WVar3,2);
    iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x424);
    if ((1 < *(uint *)(iVar1 + 0x12)) && (*(short *)(iVar1 + 2) == 1)) {
      local_4 = WVar3;
    }
    pCVar2 = FUN_5f397740(DAT_5f3db380,0x3f3);
    WVar3 = SendMessageA(hWnd,0x143,0,(LPARAM)pCVar2);
    SendMessageA(hWnd,0x151,WVar3,3);
    iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x424);
    if ((1 < *(uint *)(iVar1 + 0x12)) && (*(short *)(iVar1 + 2) == 2)) {
      local_4 = WVar3;
    }
  }
  SendMessageA(hWnd,0x14e,local_4,0);
  return;
}


