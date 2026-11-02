/* Module: sftrans1.dll
   Function: FUN_00547580
   Address: 00547580
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00547580(int param_1)

{
  if (*(HWND *)(param_1 + 8) != (HWND)0x0) {
    SendMessageA(*(HWND *)(param_1 + 8),0x436,0,0);
    SendMessageA(*(HWND *)(param_1 + 8),0x434,0,0);
    SendMessageA(*(HWND *)(param_1 + 8),0x430,0,0);
    DestroyWindow(*(HWND *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


