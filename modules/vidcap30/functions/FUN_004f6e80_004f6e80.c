/* Module: vidcap30.exe
   Function: FUN_004f6e80
   Address: 004f6e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f6e80(HWND param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  
  local_24 = param_2;
  local_28 = 1;
  local_18 = param_3;
  SendMessageA(param_1,0x110d,0,(LPARAM)&local_28);
  return;
}


