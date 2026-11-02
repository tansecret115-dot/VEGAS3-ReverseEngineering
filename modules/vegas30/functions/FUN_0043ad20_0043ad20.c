/* Module: vegas30.exe
   Function: FUN_0043ad20
   Address: 0043ad20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043ad20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = param_4;
  local_18 = param_2;
  local_14 = param_3;
  local_1c = *(undefined4 *)(param_1 + 8);
  SendMessageA(*(HWND *)(param_1 + 0x84),0x407,0,(LPARAM)&local_1c);
  return 0;
}


