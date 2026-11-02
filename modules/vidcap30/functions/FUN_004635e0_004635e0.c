/* Module: vidcap30.exe
   Function: FUN_004635e0
   Address: 004635e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004635e0(HWND param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_8;
  
  local_28 = 4;
  local_24 = param_2;
  SendMessageA(param_1,0x1005,0,(LPARAM)&local_28);
  return local_8;
}


