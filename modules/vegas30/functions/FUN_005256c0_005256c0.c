/* Module: vegas30.exe
   Function: FUN_005256c0
   Address: 005256c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005256c0(int param_1)

{
  undefined4 local_4;
  
  local_4 = 0;
  SendMessageA(*(HWND *)(param_1 + 0xb0),0x60e,(WPARAM)&local_4,0);
  return local_4;
}


