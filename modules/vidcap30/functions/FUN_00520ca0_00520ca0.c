/* Module: vidcap30.exe
   Function: FUN_00520ca0
   Address: 00520ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00520ca0(int param_1)

{
  tagRECT local_10;
  
  SetRectEmpty(&local_10);
  (**(code **)(*(int *)(param_1 + 0xc) + 0x1c))(param_1 + 0xc,&local_10);
  InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,1);
  return;
}


