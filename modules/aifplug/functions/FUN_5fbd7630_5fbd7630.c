/* Module: aifplug.dll
   Function: FUN_5fbd7630
   Address: 5fbd7630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5fbd7630(int param_1)

{
  int iVar1;
  HWND hWnd;
  LPSTR pCVar2;
  WPARAM WVar3;
  uint uVar4;
  undefined4 local_4;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d6);
  SendMessageA(hWnd,0x14b,0,0);
  local_4 = 0;
  pCVar2 = FUN_5fbd9b50(DAT_5fc09910,0x3f0);
  WVar3 = SendMessageA(hWnd,0x143,0,(LPARAM)pCVar2);
  SendMessageA(hWnd,0x151,WVar3,0);
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x424);
  if ((*(int *)(iVar1 + 0x12) == 1) && (*(short *)(iVar1 + 2) == 1)) {
    local_4 = WVar3;
  }
  if (1 < *(ushort *)(*(int *)(param_1 + 0x34) + 2)) {
    pCVar2 = FUN_5fbd9b50(DAT_5fc09910,0x3f1);
    WVar3 = SendMessageA(hWnd,0x143,0,(LPARAM)pCVar2);
    SendMessageA(hWnd,0x151,WVar3,1);
    iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x424);
    uVar4 = *(uint *)(iVar1 + 0x12);
    if ((uVar4 == 1) && (*(short *)(iVar1 + 2) == 2)) {
      local_4 = WVar3;
    }
    if (*(int *)(param_1 + 0x44) == 0) {
      pCVar2 = FUN_5fbd9b50(DAT_5fc09910,0x3f2);
      WVar3 = SendMessageA(hWnd,0x143,0,(LPARAM)pCVar2);
      SendMessageA(hWnd,0x151,WVar3,2);
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x424);
      uVar4 = *(uint *)(iVar1 + 0x12);
      if (uVar4 < 2) goto LAB_5fbd7794;
      if (*(short *)(iVar1 + 2) == 1) {
        local_4 = WVar3;
      }
    }
    if ((1 < uVar4) && (*(int *)(param_1 + 0x44) == 0)) {
      pCVar2 = FUN_5fbd9b50(DAT_5fc09910,0x3f3);
      WVar3 = SendMessageA(hWnd,0x143,0,(LPARAM)pCVar2);
      SendMessageA(hWnd,0x151,WVar3,3);
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x424);
      if ((1 < *(uint *)(iVar1 + 0x12)) && (*(short *)(iVar1 + 2) == 2)) {
        local_4 = WVar3;
      }
    }
  }
LAB_5fbd7794:
  SendMessageA(hWnd,0x14e,local_4,0);
  return;
}


