/* Module: sftrans1.dll
   Function: FUN_00461980
   Address: 00461980
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00461980(int param_1)

{
  HWND pHVar1;
  LPARAM LVar2;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x588);
  SendMessageA(pHVar1,0x80d,2,0);
  SendMessageA(pHVar1,0x80e,2,0);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x595);
  LVar2 = ftol();
  SendMessageA(pHVar1,0x60e,0,LVar2);
  LVar2 = ftol();
  SendMessageA(pHVar1,0x60f,0,LVar2);
  return;
}


