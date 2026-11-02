/* Module: sftrans1.dll
   Function: FUN_0052d240
   Address: 0052d240
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0052d240(int param_1,WPARAM param_2,int param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  byte local_10;
  
  local_10 = -(param_3 != 0) & 4;
  local_20 = 0x20;
  local_1c = 4;
  SendMessageA(*(HWND *)(param_1 + 0x10),0x442,param_2,(LPARAM)&local_20);
  return;
}


