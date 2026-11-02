/* Module: vidcap30.exe
   Function: FUN_004f6ec0
   Address: 004f6ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004f6ec0(HWND param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_4;
  
  local_28 = 4;
  local_24 = param_2;
  SendMessageA(param_1,0x110c,0,(LPARAM)&local_28);
  return local_4;
}


