/* Module: sftrans1.dll
   Function: FUN_00462e50
   Address: 00462e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00462e50(int param_1)

{
  HWND pHVar1;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x443);
  SendMessageA(pHVar1,0x60e,0,0);
  SendMessageA(pHVar1,0x60f,0,0xffff);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x444);
  SendMessageA(pHVar1,0x60e,0,0);
  SendMessageA(pHVar1,0x60f,0,0xffff);
  return;
}


