/* Module: vegas30.exe
   Function: FUN_004280f0
   Address: 004280f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004280f0(int param_1)

{
  HWND pHVar1;
  LONG LVar2;
  
  LVar2 = GetWindowLongA(*(HWND *)(param_1 + 0xb8),0);
  pHVar1 = *(HWND *)(LVar2 + 0x20);
  SendMessageA(pHVar1,0x436,0,DAT_0064b330);
  SendMessageA(pHVar1,0x434,0,DAT_0064b32c);
  SendMessageA(pHVar1,0x430,0,DAT_0064b328);
  pHVar1 = *(HWND *)(LVar2 + 0x58);
  SendMessageA(pHVar1,0x436,0,DAT_0064b330);
  SendMessageA(pHVar1,0x434,0,DAT_0064b32c);
  SendMessageA(pHVar1,0x430,0,DAT_0064b328);
  return;
}


