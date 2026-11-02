/* Module: sfppack1.dll
   Function: FUN_5cdc4a60
   Address: 5cdc4a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc4a60(int param_1)

{
  uint uVar1;
  
  if (*(HWND *)(param_1 + 0x14) != (HWND)0x0) {
    uVar1 = GetWindowLongA(*(HWND *)(param_1 + 0x14),-0x14);
    SetWindowLongA(*(HWND *)(param_1 + 0x14),-0x14,uVar1 & 0xfffeffff);
  }
  return 0;
}


