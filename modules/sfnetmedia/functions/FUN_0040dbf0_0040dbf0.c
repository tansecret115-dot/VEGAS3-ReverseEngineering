/* Module: sfnetmedia.dll
   Function: FUN_0040dbf0
   Address: 0040dbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040dbf0(undefined4 param_1,undefined4 param_2,HWND param_3)

{
  WPARAM wParam;
  undefined1 local_104 [260];
  
  wParam = SendMessageA(param_3,0x147,0,0);
  local_104[0] = 0;
  SendMessageA(param_3,0x148,wParam,(LPARAM)local_104);
  SendMessageA(param_3,0x144,wParam,0);
  SendMessageA(param_3,0x14a,0,(LPARAM)local_104);
  SendMessageA(param_3,0x14e,0,0);
  return 0;
}


