/* Module: vegas30.exe
   Function: FUN_00485950
   Address: 00485950
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00485950(int param_1)

{
  HWND pHVar1;
  LPCSTR pCVar2;
  HWND pHVar3;
  int iVar4;
  
  pHVar3 = *(HWND *)(param_1 + 4);
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0xd98);
  pHVar1 = GetDlgItem(pHVar3,0x44c);
  SendMessageA(pHVar1,0xc5,0x104,0);
  iVar4 = iVar4 + 0x1bc;
  pCVar2 = (LPCSTR)_SfSummary_GetItemText_8(iVar4,0x4d414e49);
  SetWindowTextA(pHVar1,pCVar2);
  pHVar1 = GetDlgItem(pHVar3,0x44d);
  SendMessageA(pHVar1,0xc5,0x104,0);
  pCVar2 = (LPCSTR)_SfSummary_GetItemText_8(iVar4,0x54524149);
  SetWindowTextA(pHVar1,pCVar2);
  pHVar1 = GetDlgItem(pHVar3,0x44e);
  SendMessageA(pHVar1,0xc5,0x104,0);
  pCVar2 = (LPCSTR)_SfSummary_GetItemText_8(iVar4,0x474e4549);
  SetWindowTextA(pHVar1,pCVar2);
  pHVar1 = GetDlgItem(pHVar3,0x44f);
  SendMessageA(pHVar1,0xc5,0x104,0);
  pCVar2 = (LPCSTR)_SfSummary_GetItemText_8(iVar4,0x504f4349);
  SetWindowTextA(pHVar1,pCVar2);
  pHVar3 = GetDlgItem(pHVar3,0x450);
  SendMessageA(pHVar3,0xc5,0x400,0);
  pCVar2 = (LPCSTR)_SfSummary_GetItemText_8(iVar4,0x544d4349);
  SetWindowTextA(pHVar3,pCVar2);
  return;
}


