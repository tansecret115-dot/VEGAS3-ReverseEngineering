/* Module: vidcap30.exe
   Function: FUN_004f3c60
   Address: 004f3c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f3c60(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = param_4;
  local_c = param_5;
  local_24 = param_2;
  local_28 = 7;
  local_20 = 0;
  local_8 = param_3;
  SendMessageA(param_1,0x1007,0,(LPARAM)&local_28);
  return;
}


