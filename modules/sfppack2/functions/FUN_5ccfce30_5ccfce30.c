/* Module: sfppack2.dll
   Function: FUN_5ccfce30
   Address: 5ccfce30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccfce30(int param_1)

{
  uint uVar1;
  
  if (*(HWND *)(param_1 + 0x14) != (HWND)0x0) {
    uVar1 = GetWindowLongA(*(HWND *)(param_1 + 0x14),-0x14);
    SetWindowLongA(*(HWND *)(param_1 + 0x14),-0x14,uVar1 | 0x10000);
  }
  return 0;
}


